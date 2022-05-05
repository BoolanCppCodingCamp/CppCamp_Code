
class MainForm : public Form {
private:
	Point p1;
	Point p2;

	std::vector<Line> lines;
	std::vector<Rect> rects;

	//change
	std::vector<Circle> circles;
	
public:
	MainForm(){
		//...
	}
protected:


	void MainForm::OnMouseDown(const MouseEventArgs& e) override {
		p1.x = e.X;
		p1.y = e.Y;

		//...
		Form::OnMouseDown(e);
	}

	void MainForm::OnMouseUp(const MouseEventArgs& e) override {
		p2.x = e.X;
		p2.y = e.Y;

		if (rdoLine.Checked){
			Line line(p1, p2);
			lines.push_back(line);
		}
		else if (rdoRect.Checked){
			int width = abs(p2.x - p1.x);
			int height = abs(p2.y - p1.y);
			Rect rect(p1, width, height);
			rects.push_back(rect);
		}
		else if(....)//change
		{
			circles.push_back(..);
		}


		//...
		this->Refresh();

		Form::OnMouseUp(e);
	}

	void MainForm::OnPaint(const PaintEventArgs& e) override {

		for (auto& line : lines){
			e.Graphics.DrawLine(Pens.Red,
				line._start.x, 
				line._start.y,
				line._end.x,
				line._end.y);
		}

		for (auto& rect : rects){
			e.Graphics.DrawRectangle(Pens.Red,
				rect._leftUp,
				rect._width,
				rect._height);
		}
		
		//change...
		for (auto& circle : circles){
			e.Graphics.DrawCircle(...);
		}
		
		//...
		Form::OnPaint(e);
	}

};
