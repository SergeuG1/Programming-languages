using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void pictureBox1_LoadCompleted(object sender, AsyncCompletedEventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            int[] temperatures = { 5, 11, 12, 18, 2, -6, -8, 5, 8, 16, 21, 17, 0, -1, 4, -6, 3, 3, 3, 0, -2, -8, 0, 17, 7, 9, 16, 10, 16, 19, 12 };
            int startX = 0;
            int startY = pictureBox1.Size.Height / 2;
            int endX = pictureBox1.Size.Width;
            int endY = pictureBox1.Size.Height / 2;
            int max = -1;
            for (int i = 0; i < temperatures.Length; i++)
            {
                if (temperatures[i] > max)
                {
                    max = temperatures[i];
                }
            }
            int numberPointY = pictureBox1.Size.Height / (2 * max);
            int numberPointX = temperatures.Length + 10;
            int x = numberPointX;
            int y = pictureBox1.Size.Height / 2;


            Graphics graphick = pictureBox1.CreateGraphics();
            Pen pen = new Pen(Color.DarkGreen);
            Font font = new Font("Time New Roman", 13);
            StringFormat sf = new StringFormat();
            sf.Alignment = StringAlignment.Center;
            sf.LineAlignment = StringAlignment.Center;

           
            graphick.DrawLine(pen, startX, startY, endX, endY);
            startX = 0;
            startY = 0;
            endX = 0;
            endY = pictureBox1.Size.Height;
            graphick.DrawLine(pen, startX, startY, endX, endY);

        
            for (int i = 0; i <= max; i++)
            {
                graphick.DrawString(Convert.ToString(i), font, Brushes.DarkRed, 13, y, sf);
                graphick.DrawLine(pen, 0, y, pictureBox1.Size.Width, y);
                y = y - numberPointY;
            }
            y = pictureBox1.Size.Height / 2;
            for (int i = 0; i <= max; i++)
            {
                graphick.DrawString(Convert.ToString(i), font, Brushes.DarkBlue, 13, y, sf);
                graphick.DrawLine(pen, 0, y, pictureBox1.Size.Width, y);
                y = y + numberPointY;
            }
            for (int i = 1; i <= 31; i++)
            {
                graphick.DrawString(Convert.ToString(i), font, Brushes.Red, x,
                pictureBox1.Size.Height / 2 - 22, sf);
                graphick.DrawLine(pen, x, pictureBox1.Size.Height / 2 - 5, x,
                pictureBox1.Size.Height / 2 + 5);
                x = x + numberPointX;
            }
            pen.Dispose();
          
            x = numberPointX;
            graphick.DrawEllipse(Pens.DarkBlue, x - 5, pictureBox1.Size.Height / 2 - temperatures[0] * numberPointY - 3, 12, 9);
            
            int normSize = 4;
            int bigSize = 6;



            for (int i = 1; i <= temperatures.Length - 1; i++)
            {
                if (temperatures[i] >= 0 && temperatures[i] <= 15)
                {
                    //комб линии
                    pen = new Pen(Color.Red, normSize);
                    pen.DashStyle = System.Drawing.Drawing2D.DashStyle.Custom;
                    pen.DashPattern = new float[] { 1f, 3f, 5f, 7f, 9f };
                }
                else if (temperatures[i] > 15)
                {
                    //сплошная толстая
                    pen = new Pen(Color.Blue, bigSize);
                    pen.DashStyle = System.Drawing.Drawing2D.DashStyle.Solid;
                }
                else if (temperatures[i] <= 0 && temperatures[i] > -5)
                {
                    //сплошная норм
                    pen = new Pen(Color.Green, normSize);
                    pen.DashStyle = System.Drawing.Drawing2D.DashStyle.Solid;
                } 
                else if (temperatures[i] <= -5)
                {
                    //пунктир широк
                    pen = new Pen(Color.Purple, bigSize);
                    pen.DashStyle = System.Drawing.Drawing2D.DashStyle.Dash;
                }
              
                graphick.DrawLine(pen, x, pictureBox1.Size.Height / 2 - temperatures[i - 1] * numberPointY, x + numberPointX, pictureBox1.Size.Height / 2 - temperatures[i] * numberPointY);
                graphick.DrawEllipse(Pens.DarkBlue, x + numberPointX - 3, pictureBox1.Size.Height / 2 - temperatures[i] * numberPointY - 3, 12, 6);
                x = x + numberPointX;
            }
            pen.Dispose();
        }
    }
}
