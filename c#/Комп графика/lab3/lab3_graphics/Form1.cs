using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.IO;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab3_graphics
{
    public partial class Form1 : Form
    {
        Graphics g;
        string filename = @"Strings.txt";
        string[] texts = new string[15];
        public Form1()
        {
            InitializeComponent();
            g = pictureBox1.CreateGraphics();
            for (int i = 0; i < texts.Length; i++)
            {
                texts[i] = $"text{i}";
            }
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
        }

        private void button1_Click(object sender, EventArgs e)
        {
            using (StreamWriter f = new StreamWriter(new FileStream(filename, FileMode.Create, FileAccess.Write)))
            {
                foreach (string s in texts) { f.WriteLine(s); }
                f.Close();
                MessageBox.Show("15 строк записано в файл !");
            }

           
        }
 
        private void button2_Click(object sender, EventArgs e)
        {
            pictureBox1.Refresh();
            for (int i = 0; i < texts.Length; i++)
            {
                if (i < 6)
                {
                    var font = new Font("Arial", 24, FontStyle.Underline);
                    var format = new StringFormat(StringFormat.GenericTypographic)
                    {
                        Alignment = StringAlignment.Center,
                        LineAlignment = StringAlignment.Near

                    };
                    var location = new PointF(0, i * font.Size * 1.5f + 10);
                    g.DrawString(texts[i], font, Brushes.Blue, new RectangleF(location, new Size(pictureBox1.Size.Width - 20, pictureBox1.Size.Height - 20)), format);
                    font.Dispose();
                }
                else if (i < 13)
                {
                    var font = new Font("Times New Roman", 18, FontStyle.Strikeout);
                    var format = new StringFormat(StringFormat.GenericTypographic)
                    {
                        Alignment = StringAlignment.Center,
                        LineAlignment = StringAlignment.Far
                    };
                    var location = new PointF(0, (7 - i) * font.Size * 1.5f - 10);
                    g.DrawString(texts[i], font, Brushes.Black, new RectangleF(location, new Size(pictureBox1.Size.Width - 20, pictureBox1.Size.Height - 20)), format);
                    font.Dispose();
                }
                else
                {
                    var font = new Font("Broadway", 1.5f, FontStyle.Regular, GraphicsUnit.Inch);
                    var format = new StringFormat(StringFormat.GenericTypographic)
                    {
                        Alignment = StringAlignment.Center,
                        LineAlignment = StringAlignment.Near,
                        FormatFlags = StringFormatFlags.DirectionVertical
                    };
                    var location = new PointF(font.Size * 1.5f - 10, 10);
                    g.DrawString(texts[i], font, Brushes.Green, new RectangleF(location, new Size(pictureBox1.Size.Width - 20, pictureBox1.Size.Height - 20)), format);
                    font.Dispose();
                }
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            g.Clear(Color.FromArgb(255, 255, 255));
            File.Delete(filename);
        }
    }
}
