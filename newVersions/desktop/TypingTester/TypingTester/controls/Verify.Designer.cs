﻿namespace TypingTester.controls
{
    partial class Verify
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Verify));
            this.lblSessionProgress = new System.Windows.Forms.Label();
            this.lblEntityProgress = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.tbEntry = new TypingTester.CueTextBox();
            this.btnNext = new System.Windows.Forms.Button();
            this.btnBack = new System.Windows.Forms.Button();
            this.lblIncorrect = new System.Windows.Forms.Label();
            this.imgIncorrect = new System.Windows.Forms.PictureBox();
            this.btnQuit = new System.Windows.Forms.Button();
            this.imageList1 = new System.Windows.Forms.ImageList(this.components);
            this.btnSkip = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.imgIncorrect)).BeginInit();
            this.SuspendLayout();
            // 
            // lblSessionProgress
            // 
            this.lblSessionProgress.AutoSize = true;
            this.lblSessionProgress.Location = new System.Drawing.Point(20, 15);
            this.lblSessionProgress.Name = "lblSessionProgress";
            this.lblSessionProgress.Size = new System.Drawing.Size(85, 13);
            this.lblSessionProgress.TabIndex = 0;
            this.lblSessionProgress.Text = "Password # of #";
            // 
            // lblEntityProgress
            // 
            this.lblEntityProgress.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.lblEntityProgress.AutoSize = true;
            this.lblEntityProgress.Location = new System.Drawing.Point(695, 15);
            this.lblEntityProgress.Name = "lblEntityProgress";
            this.lblEntityProgress.Size = new System.Drawing.Size(71, 13);
            this.lblEntityProgress.TabIndex = 1;
            this.lblEntityProgress.Text = "Round # of #";
            // 
            // label3
            // 
            this.label3.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(366, 25);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(49, 20);
            this.label3.TabIndex = 4;
            this.label3.Text = "Verify";
            // 
            // tbEntry
            // 
            this.tbEntry.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.tbEntry.Cue = "Enter string here";
            this.tbEntry.Id = null;
            this.tbEntry.Location = new System.Drawing.Point(23, 118);
            this.tbEntry.Name = "tbEntry";
            this.tbEntry.Size = new System.Drawing.Size(735, 20);
            this.tbEntry.TabIndex = 5;
            this.tbEntry.TargetString = "";
            this.tbEntry.UseSystemPasswordChar = true;
            this.tbEntry.TextChanged += new System.EventHandler(this.tbEntry_TextChanged);
            // 
            // btnNext
            // 
            this.btnNext.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.btnNext.Enabled = false;
            this.btnNext.Location = new System.Drawing.Point(393, 144);
            this.btnNext.Name = "btnNext";
            this.btnNext.Size = new System.Drawing.Size(75, 23);
            this.btnNext.TabIndex = 6;
            this.btnNext.Text = "Next";
            this.btnNext.UseVisualStyleBackColor = true;
            this.btnNext.Click += new System.EventHandler(this.btnNext_Click);
            // 
            // btnBack
            // 
            this.btnBack.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.btnBack.Location = new System.Drawing.Point(312, 144);
            this.btnBack.Name = "btnBack";
            this.btnBack.Size = new System.Drawing.Size(75, 23);
            this.btnBack.TabIndex = 7;
            this.btnBack.Text = "Back";
            this.btnBack.UseVisualStyleBackColor = true;
            this.btnBack.Click += new System.EventHandler(this.btnBack_Click);
            // 
            // lblIncorrect
            // 
            this.lblIncorrect.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.lblIncorrect.AutoSize = true;
            this.lblIncorrect.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblIncorrect.ForeColor = System.Drawing.Color.Red;
            this.lblIncorrect.Location = new System.Drawing.Point(380, 199);
            this.lblIncorrect.Name = "lblIncorrect";
            this.lblIncorrect.Size = new System.Drawing.Size(81, 20);
            this.lblIncorrect.TabIndex = 11;
            this.lblIncorrect.Text = "Incorrect";
            this.lblIncorrect.Visible = false;
            // 
            // imgIncorrect
            // 
            this.imgIncorrect.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.imgIncorrect.Image = ((System.Drawing.Image)(resources.GetObject("imgIncorrect.Image")));
            this.imgIncorrect.Location = new System.Drawing.Point(338, 183);
            this.imgIncorrect.Name = "imgIncorrect";
            this.imgIncorrect.Size = new System.Drawing.Size(36, 36);
            this.imgIncorrect.SizeMode = System.Windows.Forms.PictureBoxSizeMode.AutoSize;
            this.imgIncorrect.TabIndex = 10;
            this.imgIncorrect.TabStop = false;
            this.imgIncorrect.Visible = false;
            // 
            // btnQuit
            // 
            this.btnQuit.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnQuit.AutoSize = true;
            this.btnQuit.ImageIndex = 0;
            this.btnQuit.ImageList = this.imageList1;
            this.btnQuit.Location = new System.Drawing.Point(23, 470);
            this.btnQuit.Name = "btnQuit";
            this.btnQuit.Size = new System.Drawing.Size(75, 34);
            this.btnQuit.TabIndex = 12;
            this.btnQuit.Text = "Quit";
            this.btnQuit.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.btnQuit.UseVisualStyleBackColor = true;
            this.btnQuit.Visible = false;
            this.btnQuit.Click += new System.EventHandler(this.btnQuit_Click);
            // 
            // imageList1
            // 
            this.imageList1.ImageStream = ((System.Windows.Forms.ImageListStreamer)(resources.GetObject("imageList1.ImageStream")));
            this.imageList1.TransparentColor = System.Drawing.Color.Transparent;
            this.imageList1.Images.SetKeyName(0, "717-flag.png");
            this.imageList1.Images.SetKeyName(1, "759-refresh-2.png");
            // 
            // btnSkip
            // 
            this.btnSkip.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.btnSkip.AutoSize = true;
            this.btnSkip.ImageIndex = 1;
            this.btnSkip.ImageList = this.imageList1;
            this.btnSkip.Location = new System.Drawing.Point(104, 470);
            this.btnSkip.Name = "btnSkip";
            this.btnSkip.Size = new System.Drawing.Size(75, 34);
            this.btnSkip.TabIndex = 13;
            this.btnSkip.Text = "Skip";
            this.btnSkip.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.btnSkip.UseVisualStyleBackColor = true;
            this.btnSkip.Visible = false;
            this.btnSkip.Click += new System.EventHandler(this.btnSkip_Click);
            // 
            // Verify
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.Controls.Add(this.btnSkip);
            this.Controls.Add(this.btnQuit);
            this.Controls.Add(this.lblIncorrect);
            this.Controls.Add(this.imgIncorrect);
            this.Controls.Add(this.btnBack);
            this.Controls.Add(this.btnNext);
            this.Controls.Add(this.tbEntry);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.lblEntityProgress);
            this.Controls.Add(this.lblSessionProgress);
            this.Name = "Verify";
            this.Load += new System.EventHandler(this.Verify_Load);
            ((System.ComponentModel.ISupportInitialize)(this.imgIncorrect)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblSessionProgress;
        private System.Windows.Forms.Label lblEntityProgress;
        private System.Windows.Forms.Label label3;
        private CueTextBox tbEntry;
        private System.Windows.Forms.Button btnNext;
        private System.Windows.Forms.Button btnBack;
        private System.Windows.Forms.Label lblIncorrect;
        private System.Windows.Forms.PictureBox imgIncorrect;
        private System.Windows.Forms.Button btnQuit;
        private System.Windows.Forms.ImageList imageList1;
        private System.Windows.Forms.Button btnSkip;
    }
}
