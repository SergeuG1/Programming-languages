using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab2
{
  public partial class Form1 : Form
  {

    private int sizeX = 1000;
    private int sizeY = 500;
    Graphics g;


    public Form1()
    {
      InitializeComponent();

      pictureBox1.Size = new Size(sizeX, sizeY);
      pictureBox1.BackColor = Color.FromKnownColor(KnownColor.ControlLightLight);
      g = pictureBox1.CreateGraphics();

    }

    private void Draw(Graphics g, Pen pen)
    {
      int DrawWeidth = pictureBox1.Size.Width - 1;
      int DrawHeight = pictureBox1.Size.Height - 1;

      g.Clear(Color.FromKnownColor(KnownColor.ControlLightLight));

      g = pictureBox1.CreateGraphics();
      g.DrawRectangle(pen, 0, 0, DrawWeidth, DrawHeight);
      g.DrawLine(pen, 0, (DrawHeight) / 2, DrawWeidth, (DrawHeight) / 2);
      g.DrawLine(pen, (DrawWeidth) / 2, DrawHeight, (DrawWeidth) / 2, -DrawHeight);

    }




    private void button1_Click(object sender, EventArgs e)
    {

      g.Clear(Color.FromKnownColor(KnownColor.ControlLightLight));
      g.PageUnit = GraphicsUnit.Pixel;
      Pen pen = new Pen(Color.Purple, 4f);
      Pen penForGraf = new Pen(Color.Green, 3f);
      Draw(g, pen);

      //

      int ex = 0, ey = 0, old_ex = 0, old_ey = 0;
      double x = 0, y = 0;

      x = -Math.PI * 2;
      for (ex = 0; ex <= 1000; ex++)
      {
        y = 4 * Math.Pow(x, 2) + 3 * x;
        ey = (pictureBox1.Size.Height - 1) - (Convert.ToInt32(y * 200) + 250);
        if (ex != 0) { g.DrawLine(penForGraf, old_ex, old_ey, ex, ey); }
        old_ex = ex; old_ey = ey;
        x = x + (Math.PI * 4) / (pictureBox1.Size.Width - 1);
      }


      //



      pen.Dispose();
      penForGraf.Dispose();
    }

    private void button2_Click(object sender, EventArgs e)
    {
      g.Clear(Color.FromKnownColor(KnownColor.ControlLightLight));
      g.PageUnit = GraphicsUnit.Millimeter;
      Pen pen = new Pen(Color.Green, 4f);
      Pen penForGraf = new Pen(Color.Purple, 1f);

      Draw(g, pen);


      //

      int ex = 0, ey = 0, old_ex = 0, old_ey = 0;
      double x = 0, y = 0;

      int WidthInMM = Convert.ToInt32((pictureBox1.Size.Width - 1) /
  g.DpiX * 25.4);
      int HeightInMM = Convert.ToInt32((pictureBox1.Size.Height - 1) /
      g.DpiY * 25.4);

      x = -Math.PI * 2;
      for (ex = 0; ex <= WidthInMM; ex++)
      {
        y = 4 * Math.Pow(x, 2) + 3 * x;
        ey = HeightInMM - (Convert.ToInt16(y *

        Convert.ToSingle(200 / g.DpiX * 25.4)) +
        Convert.ToInt16(250 / g.DpiX * 25.4));
        if (ex != 0) { g.DrawLine(penForGraf, old_ex, old_ey, ex, ey); }
        old_ex = ex; old_ey = ey;
        x = x + (Math.PI * 4) / WidthInMM;

      }
      //

      pen.Dispose();
    }

    private void button3_Click(object sender, EventArgs e)
    {
      g.Clear(Color.FromKnownColor(KnownColor.ControlLightLight));
      float ex = 0, old_ex = 0, ey = 0, old_ey = 0;
      float x = 0, y = 0;
      float shag = 0;
      // Стандарт страничного пространства Inch
      g.PageUnit = GraphicsUnit.Inch;
      Pen axesPen = new Pen(Color.Orange, 0.01f);
      Pen graphicsPen = new Pen(Color.FromArgb(255, 0, 0), 0.01f);
      // Устанавливаем фон pictureBox1 в именованный цвет
      pictureBox1.BackColor = Color.FromName("LightCyan");
      pictureBox1.Refresh();
      // Получаем ширину и высоту прямоугольника в дюймах
      float WidthInInches = (pictureBox1.Size.Width - 1) / g.DpiX;
      float HeightInInches = (pictureBox1.Size.Height - 1) / g.DpiY;
      // Рисуем прямоугольник:
      g.DrawRectangle(axesPen, 0, 0, WidthInInches, HeightInInches);
      // Рисуем оси
      g.DrawLine(axesPen, 0, HeightInInches / 2, WidthInInches,
      HeightInInches / 2);

      g.DrawLine(axesPen, WidthInInches / 2, 0, WidthInInches / 2,
      HeightInInches);

      // Рисуем график функции y=Sin(
      x = -Convert.ToSingle(Math.PI * 700);
      ex = 0;
      shag = Convert.ToSingle(WidthInInches / 25.4);
      while (ex <= WidthInInches + shag)
      {
        y = Convert.ToSingle(4 * Math.Pow(x, 2) + 3 * x) / 500000;
        ey = Convert.ToSingle(-y + 1) + HeightInInches / 2;
        if (ex != 0) 
        {
          g.DrawLine(graphicsPen, old_ex, old_ey, ex, ey); 
        }

        old_ex = ex; 
        old_ey = ey;
        ex += shag;
        x += Convert.ToSingle((Math.PI * 30) / shag);
      }
    }
    //


    private void button4_Click(object sender, EventArgs e)
    {
      g.Clear(Color.FromKnownColor(KnownColor.ControlLightLight));
    }
  }

}