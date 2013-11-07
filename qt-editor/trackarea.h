#ifndef TRACKAREA_H
#define TRACKAREA_H

#include <QScrollArea>

class TrackGroupView;
class RowNumberView;

class TrackArea : public QScrollArea {
	Q_OBJECT

public:
	TrackArea(QWidget *parent = 0);

	void setRow(int row);
	void setCol(int col);
	int getRowCount() const;
	void setRowCount(int rows);
protected:
	void scrollContentsBy(int dx, int dy);
	void updateHScrollbar();
	void updateVScrollbar();
	void keyPressEvent(QKeyEvent *event);
	void resizeEvent(QResizeEvent *event);
	TrackGroupView *trackGroupView;
	RowNumberView *rowNumberView;
};

#endif // TRACKAREA_H
