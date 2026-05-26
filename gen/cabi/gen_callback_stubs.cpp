// Stub implementations for Go-side virtual method callbacks.
// These are provided by the Go runtime in normal builds.
// For standalone DLL compilation, these stubs allow linking to succeed.
// Auto-generated from gen_*.cpp callback declarations.

#include "gen_QtCore.h"
#include "gen_QtGui.h"
#include "gen_QtWidgets.h"
#include "libmiqt.h"

extern "C" {

bool miqt_exec_callback_QFileSystemModel_event(QFileSystemModel* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QAbstractItemDelegate_eventFilter(QAbstractItemDelegate* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QAbstractItemDelegate*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSpacerItem* miqt_exec_callback_QLayout_spacerItem(QLayout* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QScrollArea_setupViewport(QScrollArea* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QScrollArea*, QWidget*))_slot)(_p0, _p2); }
void miqt_exec_callback_QAbstractProxyModel_sort(QAbstractProxyModel* _p0, intptr_t _slot, int _p2, int _p3) { if (_slot) ((void (__stdcall *)(QAbstractProxyModel*, int, int))_slot)(_p0, _p2, _p3); }
QResizeEvent* miqt_exec_callback_QResizeEvent_clone(const QResizeEvent* _p0, intptr_t _slot) { if (_slot) return ((QResizeEvent* (__stdcall *)(const QResizeEvent*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QWindow_surfaceType(const QWindow* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QWindow*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QAbstractSpinBox_minimumSizeHint(const QAbstractSpinBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QAbstractSpinBox*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QDateTimeEdit_setVisible(QDateTimeEdit* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDateTimeEdit*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QSplitterHandle_setVisible(QSplitterHandle* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QSplitterHandle*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QGraphicsRotation_angleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QPaintEngine* miqt_exec_callback_QLineEdit_paintEngine(const QLineEdit* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QLineEdit*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QMenuBar_paintEngine(const QMenuBar* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QMenuBar*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWizard_accept(QWizard* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QWizard*))_slot)(_p0); }
QModelIndex* miqt_exec_callback_QAbstractProxyModel_mapToSource(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QModelIndex* (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QTextDocument_eventFilter(QTextDocument* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTextDocument*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QSwipeGesture_event(QSwipeGesture* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QSwipeGesture*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QSwipeGesture_eventFilter(QSwipeGesture* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QSwipeGesture*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QVariant* miqt_exec_callback_QAbstractItemModel_data(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3) { if (_slot) return ((QVariant* (__stdcall *)(const QAbstractItemModel*, QModelIndex*, int))_slot)(_p0, _p2, _p3); return nullptr; }
void miqt_exec_callback_QAbstractSlider_sliderReleased(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QFileDialog_done(QFileDialog* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QFileDialog*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QGraphicsScene_sceneRectChanged(intptr_t _slot, QRectF* _p1) { if (_slot) ((void (__stdcall *)(QRectF*))_slot)(_p1); }
QSize* miqt_exec_callback_QWidget_sizeHint(const QWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWidget*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QComboBox_hasHeightForWidth(const QComboBox* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QComboBox*))_slot)(_p0); return false; }
void miqt_exec_callback_QLabel_linkActivated(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
void miqt_exec_callback_QTextEdit_selectionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QItemSelectionModel_modelChanged(intptr_t _slot, QAbstractItemModel* _p1) { if (_slot) ((void (__stdcall *)(QAbstractItemModel*))_slot)(_p1); }
void miqt_exec_callback_QComboBox_highlighted(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QCommonStyle_event(QCommonStyle* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QCommonStyle*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QAbstractGraphicsShapeItem_contains(const QAbstractGraphicsShapeItem* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QAbstractGraphicsShapeItem*, QPointF*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QColorDialog_hasHeightForWidth(const QColorDialog* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QColorDialog*))_slot)(_p0); return false; }
bool miqt_exec_callback_QTapGesture_eventFilter(QTapGesture* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTapGesture*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QGraphicsObject_type(const QGraphicsObject* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsObject*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QDoubleSpinBox_sizeHint(const QDoubleSpinBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDoubleSpinBox*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGuiApplication_screenAdded(intptr_t _slot, QScreen* _p1) { if (_slot) ((void (__stdcall *)(QScreen*))_slot)(_p1); }
int miqt_exec_callback_QBoxLayout_controlTypes(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QBoxLayout*))_slot)(_p0); return 0; }
void miqt_exec_callback_QHeaderView_sortIndicatorClearableChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
QSize* miqt_exec_callback_QSizeGrip_sizeHint(const QSizeGrip* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSizeGrip*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QSpinBox_sizeHint(const QSpinBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSpinBox*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFileSystemModel_multiData(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2, QModelRoleDataSpan* _p3) { if (_slot) ((void (__stdcall *)(const QFileSystemModel*, QModelIndex*, QModelRoleDataSpan*))_slot)(_p0, _p2, _p3); }
QIconEngine* miqt_exec_callback_QIconEngine_clone(const QIconEngine* _p0, intptr_t _slot) { if (_slot) return ((QIconEngine* (__stdcall *)(const QIconEngine*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QShortcut_eventFilter(QShortcut* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QShortcut*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGraphicsView_setVisible(QGraphicsView* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGraphicsView*, bool))_slot)(_p0, _p2); }
int miqt_exec_callback_QMdiArea_devType(const QMdiArea* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QMdiArea*))_slot)(_p0); return 0; }
void miqt_exec_callback_QAbstractSpinBox_clear(QAbstractSpinBox* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QAbstractSpinBox*))_slot)(_p0); }
void miqt_exec_callback_QDialog_setVisible(QDialog* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDialog*, bool))_slot)(_p0, _p2); }
QVariant* miqt_exec_callback_QComboBox_inputMethodQuery(const QComboBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QComboBox*, int))_slot)(_p0, _p2); return nullptr; }
QSize* miqt_exec_callback_QRhiWidget_minimumSizeHint(const QRhiWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QRhiWidget*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTabWidget_tabBarClicked(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QComboBox_setModel(QComboBox* _p0, intptr_t _slot, QAbstractItemModel* _p2) { if (_slot) ((void (__stdcall *)(QComboBox*, QAbstractItemModel*))_slot)(_p0, _p2); }
void miqt_exec_callback_QFileDialog_setVisible(QFileDialog* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QFileDialog*, bool))_slot)(_p0, _p2); }
QEvent* miqt_exec_callback_QGraphicsSceneMoveEvent_clone(const QGraphicsSceneMoveEvent* _p0, intptr_t _slot) { if (_slot) return ((QEvent* (__stdcall *)(const QGraphicsSceneMoveEvent*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QMenuBar_eventFilter(QMenuBar* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QMenuBar*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QFrame_event(QFrame* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QFrame*, QEvent*))_slot)(_p0, _p2); return false; }
QLayoutItem* miqt_exec_callback_QStackedLayout_replaceWidget(QStackedLayout* _p0, intptr_t _slot, QWidget* _p2, QWidget* _p3, int _p4) { if (_slot) return ((QLayoutItem* (__stdcall *)(QStackedLayout*, QWidget*, QWidget*, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
QSpacerItem* miqt_exec_callback_QVBoxLayout_spacerItem(QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QVBoxLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFontDialog_open(QFontDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QFontDialog*))_slot)(_p0); }
void miqt_exec_callback_QActionGroup_triggered(intptr_t _slot, QAction* _p1) { if (_slot) ((void (__stdcall *)(QAction*))_slot)(_p1); }
QSize* miqt_exec_callback_QTimeEdit_minimumSizeHint(const QTimeEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QTimeEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QMessageBox_reject(QMessageBox* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QMessageBox*))_slot)(_p0); }
void miqt_exec_callback_QToolBar_visibilityChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
bool miqt_exec_callback_QMenuBar_event(QMenuBar* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QMenuBar*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QAbstractItemModel_submit(QAbstractItemModel* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*))_slot)(_p0); return false; }
QAccessibleInterface* miqt_exec_callback_QWindow_accessibleRoot(const QWindow* _p0, intptr_t _slot) { if (_slot) return ((QAccessibleInterface* (__stdcall *)(const QWindow*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAbstractItemDelegate_sizeHintChanged(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
void miqt_exec_callback_QAbstractItemView_doubleClicked(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
QSize* miqt_exec_callback_QCalendarWidget_sizeHint(const QCalendarWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QCalendarWidget*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsTextItem_paint(QGraphicsTextItem* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsTextItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
void miqt_exec_callback_QPlainTextEdit_redoAvailable(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QGraphicsColorizeEffect_strengthChanged(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsView_hasHeightForWidth(const QGraphicsView* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QGraphicsView*))_slot)(_p0); return false; }
int miqt_exec_callback_QMdiSubWindow_devType(const QMdiSubWindow* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QMdiSubWindow*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QMenuBar_minimumSizeHint(const QMenuBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMenuBar*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWizardPage_cleanupPage(QWizardPage* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QWizardPage*))_slot)(_p0); }
bool miqt_exec_callback_QAbstractProxyModel_clearItemData(QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QWheelEvent_isBeginEvent(const QWheelEvent* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWheelEvent*))_slot)(_p0); return false; }
QVariant* miqt_exec_callback_QWidget_inputMethodQuery(const QWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QWidget*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QSlider_setVisible(QSlider* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QSlider*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QFormLayout_setSpacing(QFormLayout* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QFormLayout*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QInputDialog_open(QInputDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QInputDialog*))_slot)(_p0); }
void miqt_exec_callback_QKeySequenceEdit_editingFinished(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QWizard_eventFilter(QWizard* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QWizard*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QLayout_maximumSize(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGridLayout_setGeometry(QGridLayout* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QGridLayout*, QRect*))_slot)(_p0, _p2); }
void miqt_exec_callback_QErrorMessage_setVisible(QErrorMessage* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QErrorMessage*, bool))_slot)(_p0, _p2); }
QEvent* miqt_exec_callback_QGraphicsSceneWheelEvent_clone(const QGraphicsSceneWheelEvent* _p0, intptr_t _slot) { if (_slot) return ((QEvent* (__stdcall *)(const QGraphicsSceneWheelEvent*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QInputDialog_event(QInputDialog* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QInputDialog*, QEvent*))_slot)(_p0, _p2); return false; }
QVariant* miqt_exec_callback_QLabel_inputMethodQuery(const QLabel* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QLabel*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QSpinBox_hasHeightForWidth(const QSpinBox* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QSpinBox*))_slot)(_p0); return false; }
bool miqt_exec_callback_QStackedLayout_event(QStackedLayout* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QStackedLayout*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QGraphicsEllipseItem_type(const QGraphicsEllipseItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsEllipseItem*))_slot)(_p0); return 0; }
void miqt_exec_callback_QTableWidget_itemActivated(intptr_t _slot, QTableWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QTableWidgetItem*))_slot)(_p1); }
void miqt_exec_callback_QWizard_customButtonClicked(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QFileSystemModel_sort(QFileSystemModel* _p0, intptr_t _slot, int _p2, int _p3) { if (_slot) ((void (__stdcall *)(QFileSystemModel*, int, int))_slot)(_p0, _p2, _p3); }
struct miqt_string miqt_exec_callback_QIconEngine_iconName(QIconEngine* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_string (__stdcall *)(QIconEngine*))_slot)(_p0); return {}; }
QSize* miqt_exec_callback_QTabBar_sizeHint(const QTabBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QTabBar*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QInputDialog_paintEngine(const QInputDialog* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QInputDialog*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTextEdit_currentCharFormatChanged(intptr_t _slot, QTextCharFormat* _p1) { if (_slot) ((void (__stdcall *)(QTextCharFormat*))_slot)(_p1); }
void miqt_exec_callback_QAbstractSpinBox_editingFinished(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QRubberBand_heightForWidth(const QRubberBand* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QRubberBand*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QCalendarWidget_setVisible(QCalendarWidget* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QCalendarWidget*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QMdiArea_hasHeightForWidth(const QMdiArea* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QMdiArea*))_slot)(_p0); return false; }
void miqt_exec_callback_QAbstractProxyModel_revert(QAbstractProxyModel* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QAbstractProxyModel*))_slot)(_p0); }
QDropEvent* miqt_exec_callback_QDropEvent_clone(const QDropEvent* _p0, intptr_t _slot) { if (_slot) return ((QDropEvent* (__stdcall *)(const QDropEvent*))_slot)(_p0); return nullptr; }
QRect* miqt_exec_callback_QFormLayout_geometry(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QFormLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGroupBox_eventFilter(QGroupBox* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGroupBox*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QInputDialog_hasHeightForWidth(const QInputDialog* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QInputDialog*))_slot)(_p0); return false; }
QSize* miqt_exec_callback_QMdiSubWindow_sizeHint(const QMdiSubWindow* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMdiSubWindow*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QPlainTextEdit_copyAvailable(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QTableWidget_currentItemChanged(intptr_t _slot, QTableWidgetItem* _p1, QTableWidgetItem* _p2) { if (_slot) ((void (__stdcall *)(QTableWidgetItem*, QTableWidgetItem*))_slot)(_p1, _p2); }
QSize* miqt_exec_callback_QTabWidget_minimumSizeHint(const QTabWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QTabWidget*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QButtonGroup_buttonClicked(intptr_t _slot, QAbstractButton* _p1) { if (_slot) ((void (__stdcall *)(QAbstractButton*))_slot)(_p1); }
void miqt_exec_callback_QGroupBox_clickedWithChecked(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QInputDialog_setVisible(QInputDialog* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QInputDialog*, bool))_slot)(_p0, _p2); }
QSize* miqt_exec_callback_QMainWindow_minimumSizeHint(const QMainWindow* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMainWindow*))_slot)(_p0); return nullptr; }
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QMimeData_formats(const QMimeData* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_array /* of struct miqt_string */  (__stdcall *)(const QMimeData*))_slot)(_p0); return {}; }
int miqt_exec_callback_QPicture_devType(const QPicture* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QPicture*))_slot)(_p0); return 0; }
void miqt_exec_callback_QAbstractItemModel_revert(QAbstractItemModel* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QAbstractItemModel*))_slot)(_p0); }
void miqt_exec_callback_QIODevice_bytesWritten(intptr_t _slot, long long _p1) { if (_slot) ((void (__stdcall *)(long long))_slot)(_p1); }
void miqt_exec_callback_QItemSelectionModel_setCurrentIndex(QItemSelectionModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3) { if (_slot) ((void (__stdcall *)(QItemSelectionModel*, QModelIndex*, int))_slot)(_p0, _p2, _p3); }
void miqt_exec_callback_QProgressBar_valueChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QGuiApplication_notify(QGuiApplication* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGuiApplication*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QWidget_windowIconChanged(intptr_t _slot, QIcon* _p1) { if (_slot) ((void (__stdcall *)(QIcon*))_slot)(_p1); }
bool miqt_exec_callback_QItemDelegate_editorEvent(QItemDelegate* _p0, intptr_t _slot, QEvent* _p2, QAbstractItemModel* _p3, QStyleOptionViewItem* _p4, QModelIndex* _p5) { if (_slot) return ((bool (__stdcall *)(QItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5); return false; }
QVariant* miqt_exec_callback_QDoubleSpinBox_inputMethodQuery(const QDoubleSpinBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QDoubleSpinBox*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QTableWidget_itemDoubleClicked(intptr_t _slot, QTableWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QTableWidgetItem*))_slot)(_p1); }
bool miqt_exec_callback_QObject_event(QObject* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QObject*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QBitmap_devType(const QBitmap* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QBitmap*))_slot)(_p0); return 0; }
void miqt_exec_callback_QMovie_resized(intptr_t _slot, QSize* _p1) { if (_slot) ((void (__stdcall *)(QSize*))_slot)(_p1); }
bool miqt_exec_callback_QErrorMessage_event(QErrorMessage* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QErrorMessage*, QEvent*))_slot)(_p0, _p2); return false; }
QLayoutItem* miqt_exec_callback_QFormLayout_replaceWidget(QFormLayout* _p0, intptr_t _slot, QWidget* _p2, QWidget* _p3, int _p4) { if (_slot) return ((QLayoutItem* (__stdcall *)(QFormLayout*, QWidget*, QWidget*, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
void miqt_exec_callback_QHeaderView_sectionResized(intptr_t _slot, int _p1, int _p2, int _p3) { if (_slot) ((void (__stdcall *)(int, int, int))_slot)(_p1, _p2, _p3); }
void miqt_exec_callback_QRhiWidget_colorBufferFormatChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSize* miqt_exec_callback_QToolBar_sizeHint(const QToolBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QToolBar*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QFileSystemModel_insertColumns(QFileSystemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
void miqt_exec_callback_QTabWidget_tabBarDoubleClicked(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QCalendarWidget_activated(intptr_t _slot, QDate* _p1) { if (_slot) ((void (__stdcall *)(QDate*))_slot)(_p1); }
void miqt_exec_callback_QFontDialog_accept(QFontDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QFontDialog*))_slot)(_p0); }
bool miqt_exec_callback_QItemSelectionModel_eventFilter(QItemSelectionModel* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QItemSelectionModel*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QVariant* miqt_exec_callback_QDateEdit_inputMethodQuery(const QDateEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QDateEdit*, int))_slot)(_p0, _p2); return nullptr; }
int miqt_exec_callback_QFileDialog_devType(const QFileDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFileDialog*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QAbstractProxyModel_span(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QSize* (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QFileDialog_urlSelected(intptr_t _slot, QUrl* _p1) { if (_slot) ((void (__stdcall *)(QUrl*))_slot)(_p1); }
void miqt_exec_callback_QFileDialog_filterSelected(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
QSize* miqt_exec_callback_QFontDialog_sizeHint(const QFontDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFontDialog*))_slot)(_p0); return nullptr; }
QPainterPath* miqt_exec_callback_QAbstractGraphicsShapeItem_opaqueArea(const QAbstractGraphicsShapeItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QAbstractGraphicsShapeItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGroupBox_setVisible(QGroupBox* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGroupBox*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QProxyStyle_polish(QProxyStyle* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QProxyStyle*, QWidget*))_slot)(_p0, _p2); }
int miqt_exec_callback_QGridLayout_spacing(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGridLayout*))_slot)(_p0); return 0; }
void miqt_exec_callback_QGraphicsPixmapItem_advance(QGraphicsPixmapItem* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsPixmapItem*, int))_slot)(_p0, _p2); }
int miqt_exec_callback_QTextEdit_heightForWidth(const QTextEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QTextEdit*, int))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QFrame_devType(const QFrame* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFrame*))_slot)(_p0); return 0; }
void miqt_exec_callback_QComboBox_currentTextChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QThread_eventFilter(QThread* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QThread*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QFileSystemModel_removeRows(QFileSystemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
QPaintEngine* miqt_exec_callback_QDateEdit_paintEngine(const QDateEdit* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QDateEdit*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QDial_inputMethodQuery(const QDial* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QDial*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QSpacerItem_isEmpty(const QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QSpacerItem*))_slot)(_p0); return false; }
void miqt_exec_callback_QGraphicsPolygonItem_paint(QGraphicsPolygonItem* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsPolygonItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
QSize* miqt_exec_callback_QInputDialog_minimumSizeHint(const QInputDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QInputDialog*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QProgressDialog_devType(const QProgressDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QProgressDialog*))_slot)(_p0); return 0; }
void miqt_exec_callback_QWizard_open(QWizard* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QWizard*))_slot)(_p0); }
void miqt_exec_callback_QGuiApplication_layoutDirectionChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QExposeEvent* miqt_exec_callback_QExposeEvent_clone(const QExposeEvent* _p0, intptr_t _slot) { if (_slot) return ((QExposeEvent* (__stdcall *)(const QExposeEvent*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTabWidget_tabCloseRequested(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QFormLayout_addItem(QFormLayout* _p0, intptr_t _slot, QLayoutItem* _p2) { if (_slot) ((void (__stdcall *)(QFormLayout*, QLayoutItem*))_slot)(_p0, _p2); }
void miqt_exec_callback_QGraphicsItemGroup_paint(QGraphicsItemGroup* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsItemGroup*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
QVariant* miqt_exec_callback_QGroupBox_inputMethodQuery(const QGroupBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QGroupBox*, int))_slot)(_p0, _p2); return nullptr; }
QSize* miqt_exec_callback_QStackedWidget_minimumSizeHint(const QStackedWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QStackedWidget*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsScale_applyTo(const QGraphicsScale* _p0, intptr_t _slot, QMatrix4x4* _p2) { if (_slot) ((void (__stdcall *)(const QGraphicsScale*, QMatrix4x4*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QAbstractSlider_event(QAbstractSlider* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QAbstractSlider*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QVBoxLayout_minimumHeightForWidth(const QVBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QVBoxLayout*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QInputDialog_textValueChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
QSize* miqt_exec_callback_QMessageBox_minimumSizeHint(const QMessageBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMessageBox*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QPlainTextEdit_loadResource(QPlainTextEdit* _p0, intptr_t _slot, int _p2, QUrl* _p3) { if (_slot) return ((QVariant* (__stdcall *)(QPlainTextEdit*, int, QUrl*))_slot)(_p0, _p2, _p3); return nullptr; }
QVariant* miqt_exec_callback_QAbstractProxyModel_data(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3) { if (_slot) return ((QVariant* (__stdcall *)(const QAbstractProxyModel*, QModelIndex*, int))_slot)(_p0, _p2, _p3); return nullptr; }
void miqt_exec_callback_QGuiApplication_paletteChanged(intptr_t _slot, QPalette* _p1) { if (_slot) ((void (__stdcall *)(QPalette*))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsPathItem_isObscuredBy(const QGraphicsPathItem* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPathItem*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QGraphicsRectItem_type(const QGraphicsRectItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsRectItem*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QScrollBar_event(QScrollBar* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QScrollBar*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QStackedLayout_isEmpty(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QStackedLayout*))_slot)(_p0); return false; }
bool miqt_exec_callback_QTranslator_isEmpty(const QTranslator* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QTranslator*))_slot)(_p0); return false; }
QSize* miqt_exec_callback_QDialog_minimumSizeHint(const QDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDialog*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QTimeEdit_paintEngine(const QTimeEdit* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QTimeEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QActionGroup_hovered(intptr_t _slot, QAction* _p1) { if (_slot) ((void (__stdcall *)(QAction*))_slot)(_p1); }
int miqt_exec_callback_QTabBar_heightForWidth(const QTabBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QTabBar*, int))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QFileIconProvider_options(const QFileIconProvider* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFileIconProvider*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QGraphicsObject_eventFilter(QGraphicsObject* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGraphicsObject*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QItemDelegate_setModelData(const QItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QAbstractItemModel* _p3, QModelIndex* _p4) { if (_slot) ((void (__stdcall *)(const QItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); }
QSize* miqt_exec_callback_QLayout_minimumSize(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLayout*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QCommonStyle_layoutSpacing(const QCommonStyle* _p0, intptr_t _slot, int _p2, int _p3, int _p4, QStyleOption* _p5, QWidget* _p6) { if (_slot) return ((int (__stdcall *)(const QCommonStyle*, int, int, int, QStyleOption*, QWidget*))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return 0; }
bool miqt_exec_callback_QGraphicsItemGroup_isObscuredBy(const QGraphicsItemGroup* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsItemGroup*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QGesture_event(QGesture* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGesture*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QIconEngine_write(const QIconEngine* _p0, intptr_t _slot, QDataStream* _p2) { if (_slot) return ((bool (__stdcall *)(const QIconEngine*, QDataStream*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QRubberBand_hasHeightForWidth(const QRubberBand* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QRubberBand*))_slot)(_p0); return false; }
QVariant* miqt_exec_callback_QStatusBar_inputMethodQuery(const QStatusBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QStatusBar*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QLayout_event(QLayout* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QLayout*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QCompleter_activated(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
QSize* miqt_exec_callback_QSplitterHandle_sizeHint(const QSplitterHandle* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSplitterHandle*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QInputMethod_inputDirectionChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSize* miqt_exec_callback_QAbstractSlider_sizeHint(const QAbstractSlider* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QAbstractSlider*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFontComboBox_hidePopup(QFontComboBox* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QFontComboBox*))_slot)(_p0); }
void miqt_exec_callback_QGraphicsObject_childrenChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QPainterPath* miqt_exec_callback_QGraphicsItemGroup_opaqueArea(const QGraphicsItemGroup* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsItemGroup*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QLabel_setVisible(QLabel* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QLabel*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QListWidget_currentTextChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractItemModel_match(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3, QVariant* _p4, int _p5, int _p6) { if (_slot) return ((struct miqt_array /* of QModelIndex* */  (__stdcall *)(const QAbstractItemModel*, QModelIndex*, int, QVariant*, int, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return {}; }
void miqt_exec_callback_QWindow_windowStateChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QPainterPath* miqt_exec_callback_QGraphicsEllipseItem_opaqueArea(const QGraphicsEllipseItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsEllipseItem*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QKeySequenceEdit_devType(const QKeySequenceEdit* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QKeySequenceEdit*))_slot)(_p0); return 0; }
int miqt_exec_callback_QLCDNumber_heightForWidth(const QLCDNumber* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QLCDNumber*, int))_slot)(_p0, _p2); return 0; }
QVariant* miqt_exec_callback_QMessageBox_inputMethodQuery(const QMessageBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QMessageBox*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QGridLayout_event(QGridLayout* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGridLayout*, QEvent*))_slot)(_p0, _p2); return false; }
QLayoutItem* miqt_exec_callback_QBoxLayout_replaceWidget(QBoxLayout* _p0, intptr_t _slot, QWidget* _p2, QWidget* _p3, int _p4) { if (_slot) return ((QLayoutItem* (__stdcall *)(QBoxLayout*, QWidget*, QWidget*, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
bool miqt_exec_callback_QAbstractItemModel_removeRows(QAbstractItemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
void miqt_exec_callback_QAbstractSlider_setVisible(QAbstractSlider* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QAbstractSlider*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QButtonGroup_eventFilter(QButtonGroup* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QButtonGroup*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QFocusFrame_eventFilter(QFocusFrame* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QFocusFrame*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QGraphicsRectItem_collidesWithItem(const QGraphicsRectItem* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsRectItem*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QSplitter_heightForWidth(const QSplitter* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QSplitter*, int))_slot)(_p0, _p2); return 0; }
QDragMoveEvent* miqt_exec_callback_QDragMoveEvent_clone(const QDragMoveEvent* _p0, intptr_t _slot) { if (_slot) return ((QDragMoveEvent* (__stdcall *)(const QDragMoveEvent*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWindow_minimumHeightChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSize* miqt_exec_callback_QDockWidget_minimumSizeHint(const QDockWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDockWidget*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QInputDialog_heightForWidth(const QInputDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QInputDialog*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QAction_enabledChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
QSize* miqt_exec_callback_QVBoxLayout_sizeHint(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QDateTimeEdit_paintEngine(const QDateTimeEdit* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QDateTimeEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsObject_widthChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QGraphicsPixmapItem_collidesWithItem(const QGraphicsPixmapItem* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPixmapItem*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
QPainterPath* miqt_exec_callback_QGraphicsTextItem_shape(const QGraphicsTextItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsTextItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QItemSelectionModel_selectionChanged(intptr_t _slot, QItemSelection* _p1, QItemSelection* _p2) { if (_slot) ((void (__stdcall *)(QItemSelection*, QItemSelection*))_slot)(_p1, _p2); }
QLayoutItem* miqt_exec_callback_QHBoxLayout_replaceWidget(QHBoxLayout* _p0, intptr_t _slot, QWidget* _p2, QWidget* _p3, int _p4) { if (_slot) return ((QLayoutItem* (__stdcall *)(QHBoxLayout*, QWidget*, QWidget*, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
QPainterPath* miqt_exec_callback_QGraphicsEllipseItem_shape(const QGraphicsEllipseItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsEllipseItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QFileDialog_event(QFileDialog* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QFileDialog*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QLabel_hasHeightForWidth(const QLabel* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QLabel*))_slot)(_p0); return false; }
QPaintEngine* miqt_exec_callback_QSplitter_paintEngine(const QSplitter* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QSplitter*))_slot)(_p0); return nullptr; }
QLayout* miqt_exec_callback_QStackedLayout_layout(QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QStackedLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QApplication_eventFilter(QApplication* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QApplication*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QVBoxLayout_invalidate(QVBoxLayout* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QVBoxLayout*))_slot)(_p0); }
int miqt_exec_callback_QGraphicsLineItem_type(const QGraphicsLineItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsLineItem*))_slot)(_p0); return 0; }
void miqt_exec_callback_QItemDelegate_paint(const QItemDelegate* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionViewItem* _p3, QModelIndex* _p4) { if (_slot) ((void (__stdcall *)(const QItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); }
void miqt_exec_callback_QSpinBox_textChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
QVariant* miqt_exec_callback_QTextBrowser_loadResource(QTextBrowser* _p0, intptr_t _slot, int _p2, QUrl* _p3) { if (_slot) return ((QVariant* (__stdcall *)(QTextBrowser*, int, QUrl*))_slot)(_p0, _p2, _p3); return nullptr; }
void miqt_exec_callback_QBoxLayout_invalidate(QBoxLayout* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QBoxLayout*))_slot)(_p0); }
int miqt_exec_callback_QSplitterHandle_devType(const QSplitterHandle* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QSplitterHandle*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QMimeData_event(QMimeData* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QMimeData*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QCalendarWidget_hasHeightForWidth(const QCalendarWidget* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QCalendarWidget*))_slot)(_p0); return false; }
bool miqt_exec_callback_QGraphicsItemGroup_contains(const QGraphicsItemGroup* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsItemGroup*, QPointF*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QGraphicsView_rubberBandChanged(intptr_t _slot, QRect* _p1, QPointF* _p2, QPointF* _p3) { if (_slot) ((void (__stdcall *)(QRect*, QPointF*, QPointF*))_slot)(_p1, _p2, _p3); }
void miqt_exec_callback_QFileSystemModel_rootPathChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QWidgetItemV2_hasHeightForWidth(const QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWidgetItemV2*))_slot)(_p0); return false; }
QPaintEngine* miqt_exec_callback_QDialogButtonBox_paintEngine(const QDialogButtonBox* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QDialogButtonBox*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QSplitterHandle_heightForWidth(const QSplitterHandle* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QSplitterHandle*, int))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QStackedLayout_indexOf(const QStackedLayout* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) return ((int (__stdcall *)(const QStackedLayout*, QWidget*))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QGridLayout_eventFilter(QGridLayout* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGridLayout*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QVariant* miqt_exec_callback_QRhiWidget_inputMethodQuery(const QRhiWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QRhiWidget*, int))_slot)(_p0, _p2); return nullptr; }
QVariant* miqt_exec_callback_QProgressDialog_inputMethodQuery(const QProgressDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QProgressDialog*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QEventLoop_event(QEventLoop* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QEventLoop*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QTextDocument_contentsChange(intptr_t _slot, int _p1, int _p2, int _p3) { if (_slot) ((void (__stdcall *)(int, int, int))_slot)(_p1, _p2, _p3); }
void miqt_exec_callback_QVBoxLayout_setGeometry(QVBoxLayout* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QVBoxLayout*, QRect*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QAbstractGraphicsShapeItem_isObscuredBy(const QAbstractGraphicsShapeItem* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QAbstractGraphicsShapeItem*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QWidget_devType(const QWidget* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QWidget*))_slot)(_p0); return 0; }
QVariant* miqt_exec_callback_QAbstractSpinBox_inputMethodQuery(const QAbstractSpinBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QAbstractSpinBox*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QFormLayout_isEmpty(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QFormLayout*))_slot)(_p0); return false; }
void miqt_exec_callback_QGraphicsObject_paint(QGraphicsObject* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsObject*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
bool miqt_exec_callback_QProgressBar_hasHeightForWidth(const QProgressBar* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QProgressBar*))_slot)(_p0); return false; }
bool miqt_exec_callback_QStatusBar_hasHeightForWidth(const QStatusBar* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QStatusBar*))_slot)(_p0); return false; }
void miqt_exec_callback_QToolBar_toolButtonStyleChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QAbstractSpinBox_fixup(const QAbstractSpinBox* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) ((void (__stdcall *)(const QAbstractSpinBox*, struct miqt_string))_slot)(_p0, _p2); }
QVariant* miqt_exec_callback_QGraphicsScene_inputMethodQuery(const QGraphicsScene* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QGraphicsScene*, int))_slot)(_p0, _p2); return nullptr; }
QPaintEngine* miqt_exec_callback_QDial_paintEngine(const QDial* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QDial*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QSpacerItem_minimumSize(const QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSpacerItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QBoxLayout_addItem(QBoxLayout* _p0, intptr_t _slot, QLayoutItem* _p2) { if (_slot) ((void (__stdcall *)(QBoxLayout*, QLayoutItem*))_slot)(_p0, _p2); }
QPainterPath* miqt_exec_callback_QGraphicsItemGroup_shape(const QGraphicsItemGroup* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsItemGroup*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QSizeGrip_hasHeightForWidth(const QSizeGrip* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QSizeGrip*))_slot)(_p0); return false; }
void miqt_exec_callback_QWindow_maximumHeightChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QAbstractSpinBox_event(QAbstractSpinBox* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QAbstractSpinBox*, QEvent*))_slot)(_p0, _p2); return false; }
QVariant* miqt_exec_callback_QLCDNumber_inputMethodQuery(const QLCDNumber* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QLCDNumber*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QMdiSubWindow_setVisible(QMdiSubWindow* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QMdiSubWindow*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QGraphicsItem_type(const QGraphicsItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsItem*))_slot)(_p0); return 0; }
int miqt_exec_callback_QSpinBox_heightForWidth(const QSpinBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QSpinBox*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QTextBrowser_setVisible(QTextBrowser* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QTextBrowser*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QTreeWidget_itemSelectionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QVariant* miqt_exec_callback_QAbstractProxyModel_headerData(const QAbstractProxyModel* _p0, intptr_t _slot, int _p2, int _p3, int _p4) { if (_slot) return ((QVariant* (__stdcall *)(const QAbstractProxyModel*, int, int, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
bool miqt_exec_callback_QWindow_event(QWindow* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QWindow*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QFormLayout_minimumSize(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFormLayout*))_slot)(_p0); return nullptr; }
QRectF* miqt_exec_callback_QGraphicsEllipseItem_boundingRect(const QGraphicsEllipseItem* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsEllipseItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsScene_event(QGraphicsScene* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGraphicsScene*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QLineEdit_minimumSizeHint(const QLineEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLineEdit*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QMenu_heightForWidth(const QMenu* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QMenu*, int))_slot)(_p0, _p2); return 0; }
QSize* miqt_exec_callback_QToolBox_minimumSizeHint(const QToolBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QToolBox*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QFileSystemModel_canDropMimeData(const QFileSystemModel* _p0, intptr_t _slot, QMimeData* _p2, int _p3, int _p4, int _p5, QModelIndex* _p6) { if (_slot) return ((bool (__stdcall *)(const QFileSystemModel*, QMimeData*, int, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
void miqt_exec_callback_QCompleter_activatedWithIndex(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
QLayoutItem* miqt_exec_callback_QStackedLayout_itemAt(const QStackedLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(const QStackedLayout*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QGuiApplication_lastWindowClosed(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QAbstractSpinBox_heightForWidth(const QAbstractSpinBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QAbstractSpinBox*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QStyle_drawItemPixmap(const QStyle* _p0, intptr_t _slot, QPainter* _p2, QRect* _p3, int _p4, QPixmap* _p5) { if (_slot) ((void (__stdcall *)(const QStyle*, QPainter*, QRect*, int, QPixmap*))_slot)(_p0, _p2, _p3, _p4, _p5); }
QPaintEngine* miqt_exec_callback_QFontComboBox_paintEngine(const QFontComboBox* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QFontComboBox*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWindow_screenChanged(intptr_t _slot, QScreen* _p1) { if (_slot) ((void (__stdcall *)(QScreen*))_slot)(_p1); }
void miqt_exec_callback_QAbstractSpinBox_stepBy(QAbstractSpinBox* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QAbstractSpinBox*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QCalendarWidget_selectionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QStylePlugin_event(QStylePlugin* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QStylePlugin*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QScreen_logicalDotsPerInchChanged(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
void miqt_exec_callback_QStyle_drawItemText(const QStyle* _p0, intptr_t _slot, QPainter* _p2, QRect* _p3, int _p4, QPalette* _p5, bool _p6, struct miqt_string _p7, int _p8) { if (_slot) ((void (__stdcall *)(const QStyle*, QPainter*, QRect*, int, QPalette*, bool, struct miqt_string, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6, _p7, _p8); }
QLayout* miqt_exec_callback_QVBoxLayout_layout(QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QVBoxLayout*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QDateTimeEdit_devType(const QDateTimeEdit* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QDateTimeEdit*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QStackedLayout_maximumSize(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QStackedLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QStatusBar_messageChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsObject_isObscuredBy(const QGraphicsObject* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsObject*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QSpinBox_devType(const QSpinBox* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QSpinBox*))_slot)(_p0); return 0; }
QMoveEvent* miqt_exec_callback_QMoveEvent_clone(const QMoveEvent* _p0, intptr_t _slot) { if (_slot) return ((QMoveEvent* (__stdcall *)(const QMoveEvent*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsTextItem_eventFilter(QGraphicsTextItem* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGraphicsTextItem*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QProgressDialog_done(QProgressDialog* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QProgressDialog*, int))_slot)(_p0, _p2); }
bool miqt_exec_callback_QWindow_eventFilter(QWindow* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QWindow*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QDataWidgetMapper_setCurrentIndex(QDataWidgetMapper* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QDataWidgetMapper*, int))_slot)(_p0, _p2); }
bool miqt_exec_callback_QAbstractProxyModel_event(QAbstractProxyModel* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QExposeEvent_setAccepted(QExposeEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QExposeEvent*, bool))_slot)(_p0, _p2); }
QVariant* miqt_exec_callback_QFileSystemModel_headerData(const QFileSystemModel* _p0, intptr_t _slot, int _p2, int _p3, int _p4) { if (_slot) return ((QVariant* (__stdcall *)(const QFileSystemModel*, int, int, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
void miqt_exec_callback_QFontDialog_setVisible(QFontDialog* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QFontDialog*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QInputDialog_doubleValueChanged(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
void miqt_exec_callback_QRhiWidget_setVisible(QRhiWidget* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QRhiWidget*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QAbstractItemModel_moveColumns(QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3, int _p4, QModelIndex* _p5, int _p6) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
void miqt_exec_callback_QFormLayout_setGeometry(QFormLayout* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QFormLayout*, QRect*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QGraphicsItemAnimation_event(QGraphicsItemAnimation* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGraphicsItemAnimation*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QKeySequenceEdit_sizeHint(const QKeySequenceEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QKeySequenceEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTableWidget_itemSelectionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QStyle_event(QStyle* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QStyle*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QGridLayout_minimumSize(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QGridLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QDataWidgetMapper_eventFilter(QDataWidgetMapper* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QDataWidgetMapper*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QProxyStyle_unpolish(QProxyStyle* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QProxyStyle*, QWidget*))_slot)(_p0, _p2); }
void miqt_exec_callback_QScreen_physicalSizeChanged(intptr_t _slot, QSizeF* _p1) { if (_slot) ((void (__stdcall *)(QSizeF*))_slot)(_p1); }
void miqt_exec_callback_QWidget_windowIconTextChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
void miqt_exec_callback_QFontComboBox_currentFontChanged(intptr_t _slot, QFont* _p1) { if (_slot) ((void (__stdcall *)(QFont*))_slot)(_p1); }
void miqt_exec_callback_QLCDNumber_setVisible(QLCDNumber* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QLCDNumber*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QPlainTextEdit_hasHeightForWidth(const QPlainTextEdit* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QPlainTextEdit*))_slot)(_p0); return false; }
void miqt_exec_callback_QValidator_changed(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QRectF* miqt_exec_callback_QAbstractGraphicsShapeItem_boundingRect(const QAbstractGraphicsShapeItem* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QAbstractGraphicsShapeItem*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QSpinBox_inputMethodQuery(const QSpinBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QSpinBox*, int))_slot)(_p0, _p2); return nullptr; }
struct miqt_string miqt_exec_callback_QStyledItemDelegate_displayText(const QStyledItemDelegate* _p0, intptr_t _slot, QVariant* _p2, QLocale* _p3) { if (_slot) return ((struct miqt_string (__stdcall *)(const QStyledItemDelegate*, QVariant*, QLocale*))_slot)(_p0, _p2, _p3); return {}; }
void miqt_exec_callback_QWindow_minimumWidthChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSurfaceFormat* miqt_exec_callback_QWindow_format(const QWindow* _p0, intptr_t _slot) { if (_slot) return ((QSurfaceFormat* (__stdcall *)(const QWindow*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsScale_xScaleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QToolBar_heightForWidth(const QToolBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QToolBar*, int))_slot)(_p0, _p2); return 0; }
QSize* miqt_exec_callback_QAbstractSlider_minimumSizeHint(const QAbstractSlider* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QAbstractSlider*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAbstractItemDelegate_updateEditorGeometry(const QAbstractItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QStyleOptionViewItem* _p3, QModelIndex* _p4) { if (_slot) ((void (__stdcall *)(const QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); }
QLayoutItem* miqt_exec_callback_QLayout_replaceWidget(QLayout* _p0, intptr_t _slot, QWidget* _p2, QWidget* _p3, int _p4) { if (_slot) return ((QLayoutItem* (__stdcall *)(QLayout*, QWidget*, QWidget*, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
int miqt_exec_callback_QGridLayout_indexOf(const QGridLayout* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) return ((int (__stdcall *)(const QGridLayout*, QWidget*))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QGraphicsView_devType(const QGraphicsView* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsView*))_slot)(_p0); return 0; }
void miqt_exec_callback_QComboBox_textHighlighted(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QScrollBar_eventFilter(QScrollBar* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QScrollBar*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QAbstractItemView_clicked(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
void miqt_exec_callback_QCommonStyle_unpolish(QCommonStyle* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QCommonStyle*, QWidget*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QTextDocument_event(QTextDocument* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTextDocument*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QTabWidget_eventFilter(QTabWidget* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTabWidget*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QGraphicsLineItem_collidesWithItem(const QGraphicsLineItem* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsLineItem*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
QPaintEngine* miqt_exec_callback_QMdiArea_paintEngine(const QMdiArea* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QMdiArea*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QStyle_unpolishWithApplication(QStyle* _p0, intptr_t _slot, QApplication* _p2) { if (_slot) ((void (__stdcall *)(QStyle*, QApplication*))_slot)(_p0, _p2); }
QSize* miqt_exec_callback_QComboBox_sizeHint(const QComboBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QComboBox*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAbstractGraphicsShapeItem_paint(QAbstractGraphicsShapeItem* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QAbstractGraphicsShapeItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
void miqt_exec_callback_QGraphicsView_setupViewport(QGraphicsView* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QGraphicsView*, QWidget*))_slot)(_p0, _p2); }
int miqt_exec_callback_QTextBrowser_devType(const QTextBrowser* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QTextBrowser*))_slot)(_p0); return 0; }
QPaintEngine* miqt_exec_callback_QTextBrowser_paintEngine(const QTextBrowser* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QTextBrowser*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAbstractItemDelegate_commitData(intptr_t _slot, QWidget* _p1) { if (_slot) ((void (__stdcall *)(QWidget*))_slot)(_p1); }
QSize* miqt_exec_callback_QTextBrowser_minimumSizeHint(const QTextBrowser* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QTextBrowser*))_slot)(_p0); return nullptr; }
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractProxyModel_mimeTypes(const QAbstractProxyModel* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_array /* of struct miqt_string */  (__stdcall *)(const QAbstractProxyModel*))_slot)(_p0); return {}; }
QSize* miqt_exec_callback_QSpacerItem_maximumSize(const QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSpacerItem*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QInputDialog_sizeHint(const QInputDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QInputDialog*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QAbstractSpinBox_paintEngine(const QAbstractSpinBox* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QAbstractSpinBox*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QLayout_setGeometry(QLayout* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QLayout*, QRect*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QFocusFrame_hasHeightForWidth(const QFocusFrame* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QFocusFrame*))_slot)(_p0); return false; }
void miqt_exec_callback_QHeaderView_geometriesChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QWizard_heightForWidth(const QWizard* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QWizard*, int))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QColorDialog_devType(const QColorDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QColorDialog*))_slot)(_p0); return 0; }
int miqt_exec_callback_QTextEdit_devType(const QTextEdit* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QTextEdit*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QGroupBox_hasHeightForWidth(const QGroupBox* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QGroupBox*))_slot)(_p0); return false; }
int miqt_exec_callback_QLabel_heightForWidth(const QLabel* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QLabel*, int))_slot)(_p0, _p2); return 0; }
QPaintEngine* miqt_exec_callback_QLCDNumber_paintEngine(const QLCDNumber* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QLCDNumber*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAction_toggled(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QAbstractSpinBox_returnPressed(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QGridLayout_expandingDirections(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGridLayout*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QBoxLayout_isEmpty(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QBoxLayout*))_slot)(_p0); return false; }
int miqt_exec_callback_QFocusFrame_devType(const QFocusFrame* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFocusFrame*))_slot)(_p0); return 0; }
void miqt_exec_callback_QTableWidget_itemPressed(intptr_t _slot, QTableWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QTableWidgetItem*))_slot)(_p1); }
void miqt_exec_callback_QGridLayout_addItem(QGridLayout* _p0, intptr_t _slot, QLayoutItem* _p2) { if (_slot) ((void (__stdcall *)(QGridLayout*, QLayoutItem*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QGraphicsItem_isObscuredBy(const QGraphicsItem* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsItem*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
QPainterPath* miqt_exec_callback_QGraphicsPathItem_shape(const QGraphicsPathItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsPathItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QMimeData_hasFormat(const QMimeData* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) return ((bool (__stdcall *)(const QMimeData*, struct miqt_string))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QVBoxLayout_setSpacing(QVBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QVBoxLayout*, int))_slot)(_p0, _p2); }
bool miqt_exec_callback_QKeySequenceEdit_eventFilter(QKeySequenceEdit* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QKeySequenceEdit*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QToolBox_heightForWidth(const QToolBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QToolBox*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QWizardPage_setVisible(QWizardPage* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QWizardPage*, bool))_slot)(_p0, _p2); }
int miqt_exec_callback_QAbstractSlider_devType(const QAbstractSlider* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QAbstractSlider*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QSplitterHandle_minimumSizeHint(const QSplitterHandle* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSplitterHandle*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWidgetItem_setGeometry(QWidgetItem* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QWidgetItem*, QRect*))_slot)(_p0, _p2); }
QWidget* miqt_exec_callback_QWidgetItemV2_widget(const QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QWidgetItemV2*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QFontComboBox_inputMethodQuery(const QFontComboBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QFontComboBox*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QRubberBand_event(QRubberBand* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QRubberBand*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QBoxLayout_eventFilter(QBoxLayout* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QBoxLayout*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QLayout* miqt_exec_callback_QHBoxLayout_layout(QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QHBoxLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFontComboBox_setVisible(QFontComboBox* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QFontComboBox*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QGraphicsLineItem_paint(QGraphicsLineItem* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsLineItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
void miqt_exec_callback_QGraphicsSimpleTextItem_paint(QGraphicsSimpleTextItem* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsSimpleTextItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
void miqt_exec_callback_QGraphicsPolygonItem_advance(QGraphicsPolygonItem* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsPolygonItem*, int))_slot)(_p0, _p2); }
int miqt_exec_callback_QScrollArea_heightForWidth(const QScrollArea* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QScrollArea*, int))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QGroupBox_devType(const QGroupBox* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGroupBox*))_slot)(_p0); return 0; }
void miqt_exec_callback_QPlainTextEdit_updateRequest(intptr_t _slot, QRect* _p1, int _p2) { if (_slot) ((void (__stdcall *)(QRect*, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QFileSystemModel_fetchMore(QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) ((void (__stdcall *)(QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); }
void miqt_exec_callback_QVBoxLayout_addItem(QVBoxLayout* _p0, intptr_t _slot, QLayoutItem* _p2) { if (_slot) ((void (__stdcall *)(QVBoxLayout*, QLayoutItem*))_slot)(_p0, _p2); }
void miqt_exec_callback_QGraphicsItem_paint(QGraphicsItem* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
void miqt_exec_callback_QToolBar_setVisible(QToolBar* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QToolBar*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QDialog_accept(QDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QDialog*))_slot)(_p0); }
bool miqt_exec_callback_QFormLayout_event(QFormLayout* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QFormLayout*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QMenu_hovered(intptr_t _slot, QAction* _p1) { if (_slot) ((void (__stdcall *)(QAction*))_slot)(_p1); }
QSize* miqt_exec_callback_QToolBar_minimumSizeHint(const QToolBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QToolBar*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAbstractTextDocumentLayout_updateBlock(intptr_t _slot, QTextBlock* _p1) { if (_slot) ((void (__stdcall *)(QTextBlock*))_slot)(_p1); }
QSize* miqt_exec_callback_QLayoutItem_maximumSize(const QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLayoutItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QErrorMessage_done(QErrorMessage* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QErrorMessage*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QGraphicsTextItem_linkActivated(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
int miqt_exec_callback_QStackedLayout_minimumHeightForWidth(const QStackedLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QStackedLayout*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QTreeView_expanded(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
QMimeData* miqt_exec_callback_QAbstractItemModel_mimeData(const QAbstractItemModel* _p0, intptr_t _slot, struct miqt_array /* of QModelIndex* */ _p2) { if (_slot) return ((QMimeData* (__stdcall *)(const QAbstractItemModel*, struct miqt_array /* of QModelIndex* */))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QLineEdit_hasHeightForWidth(const QLineEdit* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QLineEdit*))_slot)(_p0); return false; }
bool miqt_exec_callback_QAbstractItemModel_insertRows(QAbstractItemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
int miqt_exec_callback_QUndoCommand_id(const QUndoCommand* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QUndoCommand*))_slot)(_p0); return 0; }
QRect* miqt_exec_callback_QCommonStyle_itemTextRect(const QCommonStyle* _p0, intptr_t _slot, QFontMetrics* _p2, QRect* _p3, int _p4, bool _p5, struct miqt_string _p6) { if (_slot) return ((QRect* (__stdcall *)(const QCommonStyle*, QFontMetrics*, QRect*, int, bool, struct miqt_string))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return nullptr; }
int miqt_exec_callback_QGraphicsPixmapItem_type(const QGraphicsPixmapItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsPixmapItem*))_slot)(_p0); return 0; }
int miqt_exec_callback_QToolBox_devType(const QToolBox* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QToolBox*))_slot)(_p0); return 0; }
QPaintEngine* miqt_exec_callback_QWizard_paintEngine(const QWizard* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QWizard*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QInputMethod_keyboardRectangleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QModelIndex* miqt_exec_callback_QFileSystemModel_index(const QFileSystemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((QModelIndex* (__stdcall *)(const QFileSystemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
int miqt_exec_callback_QKeySequenceEdit_heightForWidth(const QKeySequenceEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QKeySequenceEdit*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QToolBox_setVisible(QToolBox* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QToolBox*, bool))_slot)(_p0, _p2); }
int miqt_exec_callback_QAbstractItemModel_flags(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((int (__stdcall *)(const QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QWindow_xChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QMenu_hasHeightForWidth(const QMenu* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QMenu*))_slot)(_p0); return false; }
void miqt_exec_callback_QDoubleSpinBox_stepBy(QDoubleSpinBox* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QDoubleSpinBox*, int))_slot)(_p0, _p2); }
struct miqt_string miqt_exec_callback_QIconEngine_key(const QIconEngine* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_string (__stdcall *)(const QIconEngine*))_slot)(_p0); return {}; }
void miqt_exec_callback_QAbstractSlider_valueChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QFontDialog_fontSelected(intptr_t _slot, QFont* _p1) { if (_slot) ((void (__stdcall *)(QFont*))_slot)(_p1); }
QSpacerItem* miqt_exec_callback_QFormLayout_spacerItem(QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QFormLayout*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QMdiSubWindow_inputMethodQuery(const QMdiSubWindow* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QMdiSubWindow*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QStyledItemDelegate_destroyEditor(const QStyledItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QModelIndex* _p3) { if (_slot) ((void (__stdcall *)(const QStyledItemDelegate*, QWidget*, QModelIndex*))_slot)(_p0, _p2, _p3); }
bool miqt_exec_callback_QMovie_event(QMovie* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QMovie*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QDockWidget_topLevelChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QGraphicsSceneWheelEvent_setAccepted(QGraphicsSceneWheelEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGraphicsSceneWheelEvent*, bool))_slot)(_p0, _p2); }
QEvent* miqt_exec_callback_QGraphicsSceneContextMenuEvent_clone(const QGraphicsSceneContextMenuEvent* _p0, intptr_t _slot) { if (_slot) return ((QEvent* (__stdcall *)(const QGraphicsSceneContextMenuEvent*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QLineEdit_setVisible(QLineEdit* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QLineEdit*, bool))_slot)(_p0, _p2); }
int miqt_exec_callback_QStatusBar_devType(const QStatusBar* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QStatusBar*))_slot)(_p0); return 0; }
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractProxyModel_roleNames(const QAbstractProxyModel* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_map /* of int to struct miqt_string */  (__stdcall *)(const QAbstractProxyModel*))_slot)(_p0); return {}; }
void miqt_exec_callback_QGraphicsDropShadowEffect_offsetChanged(intptr_t _slot, QPointF* _p1) { if (_slot) ((void (__stdcall *)(QPointF*))_slot)(_p1); }
void miqt_exec_callback_QProgressDialog_open(QProgressDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QProgressDialog*))_slot)(_p0); }
bool miqt_exec_callback_QTextBrowser_event(QTextBrowser* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTextBrowser*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QLayout_setSpacing(QLayout* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QLayout*, int))_slot)(_p0, _p2); }
QSize* miqt_exec_callback_QDialogButtonBox_minimumSizeHint(const QDialogButtonBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDialogButtonBox*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QKeySequenceEdit_minimumSizeHint(const QKeySequenceEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QKeySequenceEdit*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QMdiSubWindow_hasHeightForWidth(const QMdiSubWindow* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QMdiSubWindow*))_slot)(_p0); return false; }
QRect* miqt_exec_callback_QProxyStyle_itemTextRect(const QProxyStyle* _p0, intptr_t _slot, QFontMetrics* _p2, QRect* _p3, int _p4, bool _p5, struct miqt_string _p6) { if (_slot) return ((QRect* (__stdcall *)(const QProxyStyle*, QFontMetrics*, QRect*, int, bool, struct miqt_string))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return nullptr; }
void miqt_exec_callback_QAbstractItemModel_layoutChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QAbstractProxyModel_removeColumns(QAbstractProxyModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
QSize* miqt_exec_callback_QLayoutItem_minimumSize(const QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLayoutItem*))_slot)(_p0); return nullptr; }
QRect* miqt_exec_callback_QHBoxLayout_geometry(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QDateTimeEdit_dateTimeChanged(intptr_t _slot, QDateTime* _p1) { if (_slot) ((void (__stdcall *)(QDateTime*))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsPolygonItem_isObscuredBy(const QGraphicsPolygonItem* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPolygonItem*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QGraphicsSimpleTextItem_contains(const QGraphicsSimpleTextItem* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsSimpleTextItem*, QPointF*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QMainWindow_iconSizeChanged(intptr_t _slot, QSize* _p1) { if (_slot) ((void (__stdcall *)(QSize*))_slot)(_p1); }
QWidget* miqt_exec_callback_QVBoxLayout_widget(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QInputDialog_done(QInputDialog* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QInputDialog*, int))_slot)(_p0, _p2); }
int miqt_exec_callback_QStackedLayout_heightForWidth(const QStackedLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QStackedLayout*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QGraphicsTextItem_contains(const QGraphicsTextItem* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsTextItem*, QPointF*))_slot)(_p0, _p2); return false; }
QVariant* miqt_exec_callback_QMdiArea_inputMethodQuery(const QMdiArea* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QMdiArea*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QBoxLayout_setSpacing(QBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QBoxLayout*, int))_slot)(_p0, _p2); }
int miqt_exec_callback_QStackedLayout_controlTypes(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QStackedLayout*))_slot)(_p0); return 0; }
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractItemModel_mimeTypes(const QAbstractItemModel* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_array /* of struct miqt_string */  (__stdcall *)(const QAbstractItemModel*))_slot)(_p0); return {}; }
void miqt_exec_callback_QInputMethod_localeChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QCloseEvent_setAccepted(QCloseEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QCloseEvent*, bool))_slot)(_p0, _p2); }
int miqt_exec_callback_QGridLayout_count(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGridLayout*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QDialogButtonBox_sizeHint(const QDialogButtonBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDialogButtonBox*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QSlider_inputMethodQuery(const QSlider* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QSlider*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QApplication_focusChanged(intptr_t _slot, QWidget* _p1, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QWidget*, QWidget*))_slot)(_p1, _p2); }
bool miqt_exec_callback_QMainWindow_hasHeightForWidth(const QMainWindow* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QMainWindow*))_slot)(_p0); return false; }
void miqt_exec_callback_QMessageBox_open(QMessageBox* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QMessageBox*))_slot)(_p0); }
int miqt_exec_callback_QProxyStyle_layoutSpacing(const QProxyStyle* _p0, intptr_t _slot, int _p2, int _p3, int _p4, QStyleOption* _p5, QWidget* _p6) { if (_slot) return ((int (__stdcall *)(const QProxyStyle*, int, int, int, QStyleOption*, QWidget*))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return 0; }
void miqt_exec_callback_QDrag_targetChanged(intptr_t _slot, QObject* _p1) { if (_slot) ((void (__stdcall *)(QObject*))_slot)(_p1); }
QVariant* miqt_exec_callback_QFileSystemModel_data(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3) { if (_slot) return ((QVariant* (__stdcall *)(const QFileSystemModel*, QModelIndex*, int))_slot)(_p0, _p2, _p3); return nullptr; }
void miqt_exec_callback_QListWidget_itemClicked(intptr_t _slot, QListWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QListWidgetItem*))_slot)(_p1); }
QModelIndex* miqt_exec_callback_QFileSystemModel_parent(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QModelIndex* (__stdcall *)(const QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QUndoCommand_undo(QUndoCommand* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QUndoCommand*))_slot)(_p0); }
void miqt_exec_callback_QAbstractItemDelegate_setEditorData(const QAbstractItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QModelIndex* _p3) { if (_slot) ((void (__stdcall *)(const QAbstractItemDelegate*, QWidget*, QModelIndex*))_slot)(_p0, _p2, _p3); }
int miqt_exec_callback_QHBoxLayout_spacing(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return 0; }
void miqt_exec_callback_QGraphicsDropShadowEffect_blurRadiusChanged(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
QRect* miqt_exec_callback_QStyle_itemPixmapRect(const QStyle* _p0, intptr_t _slot, QRect* _p2, int _p3, QPixmap* _p4) { if (_slot) return ((QRect* (__stdcall *)(const QStyle*, QRect*, int, QPixmap*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
QVariant* miqt_exec_callback_QStackedWidget_inputMethodQuery(const QStackedWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QStackedWidget*, int))_slot)(_p0, _p2); return nullptr; }
QWidget* miqt_exec_callback_QFormLayout_widget(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QFormLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QMdiSubWindow_aboutToActivate(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QObject* miqt_exec_callback_QWindow_focusObject(const QWindow* _p0, intptr_t _slot) { if (_slot) return ((QObject* (__stdcall *)(const QWindow*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QTextFrame_eventFilter(QTextFrame* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTextFrame*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QPaintEngine* miqt_exec_callback_QDialog_paintEngine(const QDialog* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QDialog*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsScene_changed(intptr_t _slot, struct miqt_array /* of QRectF* */ _p1) { if (_slot) ((void (__stdcall *)(struct miqt_array /* of QRectF* */))_slot)(_p1); }
QSize* miqt_exec_callback_QGraphicsView_minimumSizeHint(const QGraphicsView* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QGraphicsView*))_slot)(_p0); return nullptr; }
QLayoutItem* miqt_exec_callback_QBoxLayout_itemAt(const QBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(const QBoxLayout*, int))_slot)(_p0, _p2); return nullptr; }
int miqt_exec_callback_QAbstractScrollArea_devType(const QAbstractScrollArea* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QAbstractScrollArea*))_slot)(_p0); return 0; }
void miqt_exec_callback_QSystemTrayIcon_messageClicked(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QModelIndex* miqt_exec_callback_QAbstractProxyModel_parent(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QModelIndex* (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QPaintEvent_setAccepted(QPaintEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QPaintEvent*, bool))_slot)(_p0, _p2); }
QPaintEngine* miqt_exec_callback_QMessageBox_paintEngine(const QMessageBox* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QMessageBox*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QPlainTextEdit_paintEngine(const QPlainTextEdit* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QPlainTextEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QDockWidget_visibilityChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QTreeView_collapsed(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
QLayout* miqt_exec_callback_QFormLayout_layout(QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QFormLayout*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QGraphicsView_sizeHint(const QGraphicsView* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QGraphicsView*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QLayoutItem_hasHeightForWidth(const QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QLayoutItem*))_slot)(_p0); return false; }
int miqt_exec_callback_QColorDialog_exec(QColorDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(QColorDialog*))_slot)(_p0); return 0; }
QIcon* miqt_exec_callback_QFileIconProvider_iconWithInfo(const QFileIconProvider* _p0, intptr_t _slot, QFileInfo* _p2) { if (_slot) return ((QIcon* (__stdcall *)(const QFileIconProvider*, QFileInfo*))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QGraphicsItem_contains(const QGraphicsItem* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsItem*, QPointF*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QObject_eventFilter(QObject* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QObject*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QWidgetItemV2_minimumSize(const QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWidgetItemV2*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsTextItem_collidesWithPath(const QGraphicsTextItem* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsTextItem*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QFrame_setVisible(QFrame* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QFrame*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QButtonGroup_idClicked(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QGestureEvent_setAccepted(QGestureEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGestureEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QGraphicsDropShadowEffect_colorChanged(intptr_t _slot, QColor* _p1) { if (_slot) ((void (__stdcall *)(QColor*))_slot)(_p1); }
int miqt_exec_callback_QStackedWidget_heightForWidth(const QStackedWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QStackedWidget*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QTableWidget_currentCellChanged(intptr_t _slot, int _p1, int _p2, int _p3, int _p4) { if (_slot) ((void (__stdcall *)(int, int, int, int))_slot)(_p1, _p2, _p3, _p4); }
void miqt_exec_callback_QMenuBar_setVisible(QMenuBar* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QMenuBar*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QAbstractItemModel_insertColumns(QAbstractItemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
int miqt_exec_callback_QVBoxLayout_spacing(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QDataWidgetMapper_event(QDataWidgetMapper* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QDataWidgetMapper*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QStyledItemDelegate_updateEditorGeometry(const QStyledItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QStyleOptionViewItem* _p3, QModelIndex* _p4) { if (_slot) ((void (__stdcall *)(const QStyledItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); }
void miqt_exec_callback_QTableWidget_cellClicked(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QAbstractItemModel_multiData(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2, QModelRoleDataSpan* _p3) { if (_slot) ((void (__stdcall *)(const QAbstractItemModel*, QModelIndex*, QModelRoleDataSpan*))_slot)(_p0, _p2, _p3); }
QSpacerItem* miqt_exec_callback_QBoxLayout_spacerItem(QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QBoxLayout*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QDateTimeEdit_inputMethodQuery(const QDateTimeEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QDateTimeEdit*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QPinchGesture_eventFilter(QPinchGesture* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QPinchGesture*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QVariant* miqt_exec_callback_QLineEdit_inputMethodQuery(const QLineEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QLineEdit*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QLCDNumber_eventFilter(QLCDNumber* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QLCDNumber*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QProgressDialog_eventFilter(QProgressDialog* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QProgressDialog*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QAbstractProxyModel_canDropMimeData(const QAbstractProxyModel* _p0, intptr_t _slot, QMimeData* _p2, int _p3, int _p4, int _p5, QModelIndex* _p6) { if (_slot) return ((bool (__stdcall *)(const QAbstractProxyModel*, QMimeData*, int, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
bool miqt_exec_callback_QFileDialog_eventFilter(QFileDialog* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QFileDialog*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QScrollArea_event(QScrollArea* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QScrollArea*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QSizeGrip_heightForWidth(const QSizeGrip* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QSizeGrip*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QThread_event(QThread* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QThread*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QTranslator_eventFilter(QTranslator* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTranslator*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QActionEvent* miqt_exec_callback_QActionEvent_clone(const QActionEvent* _p0, intptr_t _slot) { if (_slot) return ((QActionEvent* (__stdcall *)(const QActionEvent*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QStyleHints_keyboardInputIntervalChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QDateEdit_event(QDateEdit* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QDateEdit*, QEvent*))_slot)(_p0, _p2); return false; }
QPaintEngine* miqt_exec_callback_QTabBar_paintEngine(const QTabBar* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QTabBar*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QBoxLayout_minimumSize(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QBoxLayout*))_slot)(_p0); return nullptr; }
QLayoutItem* miqt_exec_callback_QHBoxLayout_itemAt(const QHBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(const QHBoxLayout*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QGraphicsTransform_applyTo(const QGraphicsTransform* _p0, intptr_t _slot, QMatrix4x4* _p2) { if (_slot) ((void (__stdcall *)(const QGraphicsTransform*, QMatrix4x4*))_slot)(_p0, _p2); }
QItemSelection* miqt_exec_callback_QAbstractProxyModel_mapSelectionToSource(const QAbstractProxyModel* _p0, intptr_t _slot, QItemSelection* _p2) { if (_slot) return ((QItemSelection* (__stdcall *)(const QAbstractProxyModel*, QItemSelection*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QMovie_updated(intptr_t _slot, QRect* _p1) { if (_slot) ((void (__stdcall *)(QRect*))_slot)(_p1); }
bool miqt_exec_callback_QDialogButtonBox_event(QDialogButtonBox* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QDialogButtonBox*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QGuiApplication_eventFilter(QGuiApplication* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGuiApplication*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QWindow_windowTitleChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
void miqt_exec_callback_QGraphicsObject_rotationChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QStatusBar_heightForWidth(const QStatusBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QStatusBar*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QAbstractSpinBox_eventFilter(QAbstractSpinBox* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QAbstractSpinBox*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QVBoxLayout_minimumSize(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QMessageBox_event(QMessageBox* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QMessageBox*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QRhiWidget_sampleCountChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QGraphicsEffect_enabledChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
bool miqt_exec_callback_QMessageBox_hasHeightForWidth(const QMessageBox* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QMessageBox*))_slot)(_p0); return false; }
QVariant* miqt_exec_callback_QPlainTextEdit_inputMethodQuery(const QPlainTextEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QPlainTextEdit*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QSplitterHandle_eventFilter(QSplitterHandle* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QSplitterHandle*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QRect* miqt_exec_callback_QStyle_itemTextRect(const QStyle* _p0, intptr_t _slot, QFontMetrics* _p2, QRect* _p3, int _p4, bool _p5, struct miqt_string _p6) { if (_slot) return ((QRect* (__stdcall *)(const QStyle*, QFontMetrics*, QRect*, int, bool, struct miqt_string))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return nullptr; }
bool miqt_exec_callback_QAbstractProxyModel_insertColumns(QAbstractProxyModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
int miqt_exec_callback_QGraphicsSimpleTextItem_type(const QGraphicsSimpleTextItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsSimpleTextItem*))_slot)(_p0); return 0; }
void miqt_exec_callback_QHeaderView_sectionPressed(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QMdiArea_setupViewport(QMdiArea* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QMdiArea*, QWidget*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QAbstractProxyModel_setHeaderData(QAbstractProxyModel* _p0, intptr_t _slot, int _p2, int _p3, QVariant* _p4, int _p5) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, int, int, QVariant*, int))_slot)(_p0, _p2, _p3, _p4, _p5); return false; }
void miqt_exec_callback_QClipboard_dataChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QLabel_devType(const QLabel* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QLabel*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QAction_eventFilter(QAction* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QAction*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QMenuBar_devType(const QMenuBar* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QMenuBar*))_slot)(_p0); return 0; }
QPaintEngine* miqt_exec_callback_QSplitterHandle_paintEngine(const QSplitterHandle* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QSplitterHandle*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QAbstractProxyModel_flags(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((int (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return 0; }
QSize* miqt_exec_callback_QDateTimeEdit_sizeHint(const QDateTimeEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDateTimeEdit*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QDialog_heightForWidth(const QDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QDialog*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QDoubleSpinBox_event(QDoubleSpinBox* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QDoubleSpinBox*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QAbstractItemModel_setData(QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2, QVariant* _p3, int _p4) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, QModelIndex*, QVariant*, int))_slot)(_p0, _p2, _p3, _p4); return false; }
bool miqt_exec_callback_QAbstractProxyModel_dropMimeData(QAbstractProxyModel* _p0, intptr_t _slot, QMimeData* _p2, int _p3, int _p4, int _p5, QModelIndex* _p6) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, QMimeData*, int, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
void miqt_exec_callback_QIconEngine_addPixmap(QIconEngine* _p0, intptr_t _slot, QPixmap* _p2, int _p3, int _p4) { if (_slot) ((void (__stdcall *)(QIconEngine*, QPixmap*, int, int))_slot)(_p0, _p2, _p3, _p4); }
QSize* miqt_exec_callback_QLabel_minimumSizeHint(const QLabel* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLabel*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QListWidget_currentRowChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QMdiSubWindow_eventFilter(QMdiSubWindow* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QMdiSubWindow*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QScrollBar_devType(const QScrollBar* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QScrollBar*))_slot)(_p0); return 0; }
void miqt_exec_callback_QItemSelectionModel_clearCurrentIndex(QItemSelectionModel* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QItemSelectionModel*))_slot)(_p0); }
void miqt_exec_callback_QMoveEvent_setAccepted(QMoveEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QMoveEvent*, bool))_slot)(_p0, _p2); }
struct miqt_array /* of int */  miqt_exec_callback_QAbstractItemDelegate_paintingRoles(const QAbstractItemDelegate* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_array /* of int */  (__stdcall *)(const QAbstractItemDelegate*))_slot)(_p0); return {}; }
QSize* miqt_exec_callback_QHBoxLayout_maximumSize(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return nullptr; }
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QCompleter_splitPath(const QCompleter* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) return ((struct miqt_array /* of struct miqt_string */  (__stdcall *)(const QCompleter*, struct miqt_string))_slot)(_p0, _p2); return {}; }
bool miqt_exec_callback_QWizardPage_hasHeightForWidth(const QWizardPage* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWizardPage*))_slot)(_p0); return false; }
void miqt_exec_callback_QComboBox_setVisible(QComboBox* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QComboBox*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QErrorMessage_accept(QErrorMessage* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QErrorMessage*))_slot)(_p0); }
void miqt_exec_callback_QGraphicsEllipseItem_advance(QGraphicsEllipseItem* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsEllipseItem*, int))_slot)(_p0, _p2); }
QVariant* miqt_exec_callback_QSizeGrip_inputMethodQuery(const QSizeGrip* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QSizeGrip*, int))_slot)(_p0, _p2); return nullptr; }
QInputMethodEvent* miqt_exec_callback_QInputMethodEvent_clone(const QInputMethodEvent* _p0, intptr_t _slot) { if (_slot) return ((QInputMethodEvent* (__stdcall *)(const QInputMethodEvent*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QErrorMessage_minimumSizeHint(const QErrorMessage* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QErrorMessage*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsItem_collidesWithPath(const QGraphicsItem* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsItem*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QGroupBox_minimumSizeHint(const QGroupBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QGroupBox*))_slot)(_p0); return nullptr; }
QLayout* miqt_exec_callback_QGridLayout_layout(QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QGridLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QInputDialog_doubleValueSelected(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
struct miqt_string miqt_exec_callback_QDoubleSpinBox_textFromValue(const QDoubleSpinBox* _p0, intptr_t _slot, double _p2) { if (_slot) return ((struct miqt_string (__stdcall *)(const QDoubleSpinBox*, double))_slot)(_p0, _p2); return {}; }
void miqt_exec_callback_QStackedLayout_invalidate(QStackedLayout* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QStackedLayout*))_slot)(_p0); }
QSize* miqt_exec_callback_QHBoxLayout_sizeHint(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return nullptr; }
QLayoutItem* miqt_exec_callback_QHBoxLayout_takeAt(QHBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(QHBoxLayout*, int))_slot)(_p0, _p2); return nullptr; }
int miqt_exec_callback_QCalendarWidget_heightForWidth(const QCalendarWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QCalendarWidget*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QFontDialog_event(QFontDialog* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QFontDialog*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QProgressBar_setVisible(QProgressBar* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QProgressBar*, bool))_slot)(_p0, _p2); }
QSize* miqt_exec_callback_QCalendarWidget_minimumSizeHint(const QCalendarWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QCalendarWidget*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QErrorMessage_eventFilter(QErrorMessage* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QErrorMessage*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QLineEdit_devType(const QLineEdit* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QLineEdit*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QMdiArea_minimumSizeHint(const QMdiArea* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMdiArea*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QWizardPage_isComplete(const QWizardPage* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWizardPage*))_slot)(_p0); return false; }
bool miqt_exec_callback_QTimeEdit_hasHeightForWidth(const QTimeEdit* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QTimeEdit*))_slot)(_p0); return false; }
struct miqt_array /* of int */  miqt_exec_callback_QStyledItemDelegate_paintingRoles(const QStyledItemDelegate* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_array /* of int */  (__stdcall *)(const QStyledItemDelegate*))_slot)(_p0); return {}; }
bool miqt_exec_callback_QLayout_isEmpty(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QLayout*))_slot)(_p0); return false; }
void miqt_exec_callback_QDateEdit_fixup(const QDateEdit* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) ((void (__stdcall *)(const QDateEdit*, struct miqt_string))_slot)(_p0, _p2); }
void miqt_exec_callback_QGraphicsColorizeEffect_colorChanged(intptr_t _slot, QColor* _p1) { if (_slot) ((void (__stdcall *)(QColor*))_slot)(_p1); }
int miqt_exec_callback_QDoubleSpinBox_heightForWidth(const QDoubleSpinBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QDoubleSpinBox*, int))_slot)(_p0, _p2); return 0; }
QLayoutItem* miqt_exec_callback_QStackedLayout_takeAt(QStackedLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(QStackedLayout*, int))_slot)(_p0, _p2); return nullptr; }
QSize* miqt_exec_callback_QWizard_minimumSizeHint(const QWizard* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWizard*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QComboBox_heightForWidth(const QComboBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QComboBox*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QGraphicsItemGroup_advance(QGraphicsItemGroup* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsItemGroup*, int))_slot)(_p0, _p2); }
int miqt_exec_callback_QMainWindow_devType(const QMainWindow* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QMainWindow*))_slot)(_p0); return 0; }
int miqt_exec_callback_QWidgetItemV2_minimumHeightForWidth(const QWidgetItemV2* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QWidgetItemV2*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QGraphicsObject_heightChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QDialog_open(QDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QDialog*))_slot)(_p0); }
void miqt_exec_callback_QTimeEdit_stepBy(QTimeEdit* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QTimeEdit*, int))_slot)(_p0, _p2); }
int miqt_exec_callback_QWidgetItem_minimumHeightForWidth(const QWidgetItem* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QWidgetItem*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QGraphicsScale_event(QGraphicsScale* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGraphicsScale*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QMdiSubWindow_minimumSizeHint(const QMdiSubWindow* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMdiSubWindow*))_slot)(_p0); return nullptr; }
QRect* miqt_exec_callback_QCommonStyle_itemPixmapRect(const QCommonStyle* _p0, intptr_t _slot, QRect* _p2, int _p3, QPixmap* _p4) { if (_slot) return ((QRect* (__stdcall *)(const QCommonStyle*, QRect*, int, QPixmap*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
bool miqt_exec_callback_QTapGesture_event(QTapGesture* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTapGesture*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QGraphicsTextItem_linkHovered(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QFileSystemModel_moveRows(QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3, int _p4, QModelIndex* _p5, int _p6) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
bool miqt_exec_callback_QVBoxLayout_hasHeightForWidth(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return false; }
void miqt_exec_callback_QAbstractItemView_entered(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
void miqt_exec_callback_QColorDialog_reject(QColorDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QColorDialog*))_slot)(_p0); }
int miqt_exec_callback_QFormLayout_count(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFormLayout*))_slot)(_p0); return 0; }
int miqt_exec_callback_QMessageBox_heightForWidth(const QMessageBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QMessageBox*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QTextEdit_event(QTextEdit* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTextEdit*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QProgressDialog_hasHeightForWidth(const QProgressDialog* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QProgressDialog*))_slot)(_p0); return false; }
bool miqt_exec_callback_QSizeGrip_eventFilter(QSizeGrip* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QSizeGrip*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QAbstractItemModel_setHeaderData(QAbstractItemModel* _p0, intptr_t _slot, int _p2, int _p3, QVariant* _p4, int _p5) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, int, int, QVariant*, int))_slot)(_p0, _p2, _p3, _p4, _p5); return false; }
bool miqt_exec_callback_QAbstractProxyModel_submit(QAbstractProxyModel* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*))_slot)(_p0); return false; }
int miqt_exec_callback_QGraphicsTextItem_type(const QGraphicsTextItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsTextItem*))_slot)(_p0); return 0; }
int miqt_exec_callback_QGraphicsItemGroup_type(const QGraphicsItemGroup* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsItemGroup*))_slot)(_p0); return 0; }
int miqt_exec_callback_QStackedLayout_expandingDirections(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QStackedLayout*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QWidgetItem_isEmpty(const QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWidgetItem*))_slot)(_p0); return false; }
void miqt_exec_callback_QDockWidget_allowedAreasChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QRhiWidget_frameSubmitted(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QRhiWidget_heightForWidth(const QRhiWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QRhiWidget*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QTreeWidget_itemClicked(intptr_t _slot, QTreeWidgetItem* _p1, int _p2) { if (_slot) ((void (__stdcall *)(QTreeWidgetItem*, int))_slot)(_p1, _p2); }
int miqt_exec_callback_QWizardPage_heightForWidth(const QWizardPage* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QWizardPage*, int))_slot)(_p0, _p2); return 0; }
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QFileSystemModel_itemData(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((struct miqt_map /* of int to QVariant* */  (__stdcall *)(const QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); return {}; }
struct miqt_array /* of QSize* */  miqt_exec_callback_QIconEngine_availableSizes(QIconEngine* _p0, intptr_t _slot, int _p2, int _p3) { if (_slot) return ((struct miqt_array /* of QSize* */  (__stdcall *)(QIconEngine*, int, int))_slot)(_p0, _p2, _p3); return {}; }
int miqt_exec_callback_QLayout_spacing(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QLayout*))_slot)(_p0); return 0; }
QWidget* miqt_exec_callback_QHBoxLayout_widget(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QButtonGroup_buttonPressed(intptr_t _slot, QAbstractButton* _p1) { if (_slot) ((void (__stdcall *)(QAbstractButton*))_slot)(_p1); }
void miqt_exec_callback_QButtonGroup_buttonToggled(intptr_t _slot, QAbstractButton* _p1, bool _p2) { if (_slot) ((void (__stdcall *)(QAbstractButton*, bool))_slot)(_p1, _p2); }
QSize* miqt_exec_callback_QTimeEdit_sizeHint(const QTimeEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QTimeEdit*))_slot)(_p0); return nullptr; }
QIcon* miqt_exec_callback_QFileIconProvider_icon(const QFileIconProvider* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QIcon* (__stdcall *)(const QFileIconProvider*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QWidget_customContextMenuRequested(intptr_t _slot, QPoint* _p1) { if (_slot) ((void (__stdcall *)(QPoint*))_slot)(_p1); }
QPaintEngine* miqt_exec_callback_QFileDialog_paintEngine(const QFileDialog* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QFileDialog*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QLineEdit_selectionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QSizeGrip_devType(const QSizeGrip* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QSizeGrip*))_slot)(_p0); return 0; }
void miqt_exec_callback_QTableWidget_itemChanged(intptr_t _slot, QTableWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QTableWidgetItem*))_slot)(_p1); }
QSize* miqt_exec_callback_QFontComboBox_minimumSizeHint(const QFontComboBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFontComboBox*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QTextFrame_event(QTextFrame* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTextFrame*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QDateTimeEdit_timeChanged(intptr_t _slot, QTime* _p1) { if (_slot) ((void (__stdcall *)(QTime*))_slot)(_p1); }
int miqt_exec_callback_QGraphicsPolygonItem_type(const QGraphicsPolygonItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsPolygonItem*))_slot)(_p0); return 0; }
void miqt_exec_callback_QHeaderView_sectionCountChanged(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QTextDocument_documentLayoutChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QRectF* miqt_exec_callback_QGraphicsPathItem_boundingRect(const QGraphicsPathItem* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsPathItem*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QPlainTextEdit_heightForWidth(const QPlainTextEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QPlainTextEdit*, int))_slot)(_p0, _p2); return 0; }
QVariant* miqt_exec_callback_QSplitter_inputMethodQuery(const QSplitter* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QSplitter*, int))_slot)(_p0, _p2); return nullptr; }
QSize* miqt_exec_callback_QStackedLayout_minimumSize(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QStackedLayout*))_slot)(_p0); return nullptr; }
struct miqt_string miqt_exec_callback_QTranslator_translate(const QTranslator* _p0, intptr_t _slot, const char* _p2, const char* _p3, const char* _p4, int _p5) { if (_slot) return ((struct miqt_string (__stdcall *)(const QTranslator*, const char*, const char*, const char*, int))_slot)(_p0, _p2, _p3, _p4, _p5); return {}; }
bool miqt_exec_callback_QAbstractScrollArea_eventFilter(QAbstractScrollArea* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QAbstractScrollArea*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QDockWidget_hasHeightForWidth(const QDockWidget* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QDockWidget*))_slot)(_p0); return false; }
void miqt_exec_callback_QListWidget_itemPressed(intptr_t _slot, QListWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QListWidgetItem*))_slot)(_p1); }
QVariant* miqt_exec_callback_QTextEdit_loadResource(QTextEdit* _p0, intptr_t _slot, int _p2, QUrl* _p3) { if (_slot) return ((QVariant* (__stdcall *)(QTextEdit*, int, QUrl*))_slot)(_p0, _p2, _p3); return nullptr; }
void miqt_exec_callback_QAbstractItemModel_dataChanged(intptr_t _slot, QModelIndex* _p1, QModelIndex* _p2) { if (_slot) ((void (__stdcall *)(QModelIndex*, QModelIndex*))_slot)(_p1, _p2); }
QVariant* miqt_exec_callback_QAbstractItemModel_headerData(const QAbstractItemModel* _p0, intptr_t _slot, int _p2, int _p3, int _p4) { if (_slot) return ((QVariant* (__stdcall *)(const QAbstractItemModel*, int, int, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
void miqt_exec_callback_QDragMoveEvent_setAccepted(QDragMoveEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDragMoveEvent*, bool))_slot)(_p0, _p2); }
int miqt_exec_callback_QDial_devType(const QDial* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QDial*))_slot)(_p0); return 0; }
QVariant* miqt_exec_callback_QDockWidget_inputMethodQuery(const QDockWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QDockWidget*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QAbstractGraphicsShapeItem_collidesWithPath(const QAbstractGraphicsShapeItem* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QAbstractGraphicsShapeItem*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
QPaintEngine* miqt_exec_callback_QToolBar_paintEngine(const QToolBar* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QToolBar*))_slot)(_p0); return nullptr; }
QItemSelection* miqt_exec_callback_QAbstractProxyModel_mapSelectionFromSource(const QAbstractProxyModel* _p0, intptr_t _slot, QItemSelection* _p2) { if (_slot) return ((QItemSelection* (__stdcall *)(const QAbstractProxyModel*, QItemSelection*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QFileDialog_reject(QFileDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QFileDialog*))_slot)(_p0); }
QPaintEngine* miqt_exec_callback_QGraphicsView_paintEngine(const QGraphicsView* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QGraphicsView*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QToolBox_sizeHint(const QToolBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QToolBox*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QGridLayout_controlTypes(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGridLayout*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QCompleter_event(QCompleter* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QCompleter*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QScrollBar_sizeHint(const QScrollBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QScrollBar*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QDragEnterEvent_setAccepted(QDragEnterEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDragEnterEvent*, bool))_slot)(_p0, _p2); }
QPalette* miqt_exec_callback_QCommonStyle_standardPalette(const QCommonStyle* _p0, intptr_t _slot) { if (_slot) return ((QPalette* (__stdcall *)(const QCommonStyle*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFontComboBox_showPopup(QFontComboBox* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QFontComboBox*))_slot)(_p0); }
int miqt_exec_callback_QMdiArea_heightForWidth(const QMdiArea* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QMdiArea*, int))_slot)(_p0, _p2); return 0; }
QSize* miqt_exec_callback_QStackedWidget_sizeHint(const QStackedWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QStackedWidget*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTextBrowser_reload(QTextBrowser* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QTextBrowser*))_slot)(_p0); }
int miqt_exec_callback_QWidgetItem_controlTypes(const QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QWidgetItem*))_slot)(_p0); return 0; }
int miqt_exec_callback_QSplitter_devType(const QSplitter* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QSplitter*))_slot)(_p0); return 0; }
void miqt_exec_callback_QActionEvent_setAccepted(QActionEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QActionEvent*, bool))_slot)(_p0, _p2); }
QPixmap* miqt_exec_callback_QIconEngine_scaledPixmap(QIconEngine* _p0, intptr_t _slot, QSize* _p2, int _p3, int _p4, double _p5) { if (_slot) return ((QPixmap* (__stdcall *)(QIconEngine*, QSize*, int, int, double))_slot)(_p0, _p2, _p3, _p4, _p5); return nullptr; }
int miqt_exec_callback_QVBoxLayout_controlTypes(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return 0; }
int miqt_exec_callback_QCalendarWidget_devType(const QCalendarWidget* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QCalendarWidget*))_slot)(_p0); return 0; }
void miqt_exec_callback_QColorDialog_setVisible(QColorDialog* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QColorDialog*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QGroupBox_clicked(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QItemDelegate_helpEvent(QItemDelegate* _p0, intptr_t _slot, QHelpEvent* _p2, QAbstractItemView* _p3, QStyleOptionViewItem* _p4, QModelIndex* _p5) { if (_slot) return ((bool (__stdcall *)(QItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5); return false; }
struct miqt_string miqt_exec_callback_QAbstractFileIconProvider_type(const QAbstractFileIconProvider* _p0, intptr_t _slot, QFileInfo* _p2) { if (_slot) return ((struct miqt_string (__stdcall *)(const QAbstractFileIconProvider*, QFileInfo*))_slot)(_p0, _p2); return {}; }
void miqt_exec_callback_QStyle_unpolish(QStyle* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QStyle*, QWidget*))_slot)(_p0, _p2); }
QSize* miqt_exec_callback_QColorDialog_sizeHint(const QColorDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QColorDialog*))_slot)(_p0); return nullptr; }
QPainterPath* miqt_exec_callback_QGraphicsObject_opaqueArea(const QGraphicsObject* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsObject*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QToolBar_event(QToolBar* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QToolBar*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QAbstractTextDocumentLayout_documentSizeChanged(intptr_t _slot, QSizeF* _p1) { if (_slot) ((void (__stdcall *)(QSizeF*))_slot)(_p1); }
QLayout* miqt_exec_callback_QWidgetItemV2_layout(QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QWidgetItemV2*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsRectItem_advance(QGraphicsRectItem* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsRectItem*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QMainWindow_tabifiedDockWidgetActivated(intptr_t _slot, QDockWidget* _p1) { if (_slot) ((void (__stdcall *)(QDockWidget*))_slot)(_p1); }
void miqt_exec_callback_QSpinBox_valueChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
int miqt_exec_callback_QScrollArea_devType(const QScrollArea* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QScrollArea*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QGraphicsView_eventFilter(QGraphicsView* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGraphicsView*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QGroupBox_sizeHint(const QGroupBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QGroupBox*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTableWidget_cellEntered(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
int miqt_exec_callback_QHBoxLayout_count(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return 0; }
int miqt_exec_callback_QFormLayout_indexOf(const QFormLayout* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) return ((int (__stdcall *)(const QFormLayout*, QWidget*))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QGraphicsPathItem_collidesWithItem(const QGraphicsPathItem* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPathItem*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
QVariant* miqt_exec_callback_QMainWindow_inputMethodQuery(const QMainWindow* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QMainWindow*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QPlainTextEdit_setVisible(QPlainTextEdit* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QPlainTextEdit*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QGuiApplication_fontChanged(intptr_t _slot, QFont* _p1) { if (_slot) ((void (__stdcall *)(QFont*))_slot)(_p1); }
void miqt_exec_callback_QTabBar_setVisible(QTabBar* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QTabBar*, bool))_slot)(_p0, _p2); }
int miqt_exec_callback_QComboBox_devType(const QComboBox* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QComboBox*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QTapAndHoldGesture_eventFilter(QTapAndHoldGesture* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTapAndHoldGesture*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGestureRecognizer_reset(QGestureRecognizer* _p0, intptr_t _slot, QGesture* _p2) { if (_slot) ((void (__stdcall *)(QGestureRecognizer*, QGesture*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QAbstractItemModel_clearItemData(QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QGridLayout_invalidate(QGridLayout* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QGridLayout*))_slot)(_p0); }
void miqt_exec_callback_QInputDialog_intValueSelected(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QVariant* miqt_exec_callback_QCalendarWidget_inputMethodQuery(const QCalendarWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QCalendarWidget*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QDoubleSpinBox_textChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
void miqt_exec_callback_QStyledItemDelegate_setModelData(const QStyledItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QAbstractItemModel* _p3, QModelIndex* _p4) { if (_slot) ((void (__stdcall *)(const QStyledItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); }
bool miqt_exec_callback_QAction_event(QAction* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QAction*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QGraphicsItem_advance(QGraphicsItem* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsItem*, int))_slot)(_p0, _p2); }
QSize* miqt_exec_callback_QLayoutItem_sizeHint(const QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLayoutItem*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QColorDialog_heightForWidth(const QColorDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QColorDialog*, int))_slot)(_p0, _p2); return 0; }
QVariant* miqt_exec_callback_QToolBox_inputMethodQuery(const QToolBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QToolBox*, int))_slot)(_p0, _p2); return nullptr; }
QEnterEvent* miqt_exec_callback_QEnterEvent_clone(const QEnterEvent* _p0, intptr_t _slot) { if (_slot) return ((QEnterEvent* (__stdcall *)(const QEnterEvent*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFileSystemModel_fileRenamed(intptr_t _slot, struct miqt_string _p1, struct miqt_string _p2, struct miqt_string _p3) { if (_slot) ((void (__stdcall *)(struct miqt_string, struct miqt_string, struct miqt_string))_slot)(_p1, _p2, _p3); }
void miqt_exec_callback_QErrorMessage_reject(QErrorMessage* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QErrorMessage*))_slot)(_p0); }
bool miqt_exec_callback_QGraphicsObject_event(QGraphicsObject* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGraphicsObject*, QEvent*))_slot)(_p0, _p2); return false; }
QMenu* miqt_exec_callback_QMainWindow_createPopupMenu(QMainWindow* _p0, intptr_t _slot) { if (_slot) return ((QMenu* (__stdcall *)(QMainWindow*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QClipboard_findBufferChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QSize* miqt_exec_callback_QColorDialog_minimumSizeHint(const QColorDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QColorDialog*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QCommonStyle_drawItemText(const QCommonStyle* _p0, intptr_t _slot, QPainter* _p2, QRect* _p3, int _p4, QPalette* _p5, bool _p6, struct miqt_string _p7, int _p8) { if (_slot) ((void (__stdcall *)(const QCommonStyle*, QPainter*, QRect*, int, QPalette*, bool, struct miqt_string, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6, _p7, _p8); }
bool miqt_exec_callback_QDial_event(QDial* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QDial*, QEvent*))_slot)(_p0, _p2); return false; }
QRectF* miqt_exec_callback_QGraphicsItem_boundingRect(const QGraphicsItem* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QClipboard_changed(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QAbstractScrollArea_setVisible(QAbstractScrollArea* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QAbstractScrollArea*, bool))_slot)(_p0, _p2); }
struct miqt_string miqt_exec_callback_QCompleter_pathFromIndex(const QCompleter* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((struct miqt_string (__stdcall *)(const QCompleter*, QModelIndex*))_slot)(_p0, _p2); return {}; }
void miqt_exec_callback_QInputDialog_textValueSelected(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QSplitter_eventFilter(QSplitter* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QSplitter*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QSizeGrip_event(QSizeGrip* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QSizeGrip*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QStackedLayout_hasHeightForWidth(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QStackedLayout*))_slot)(_p0); return false; }
QVariant* miqt_exec_callback_QTextBrowser_inputMethodQuery(const QTextBrowser* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QTextBrowser*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QGuiApplication_applicationDisplayNameChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QCalendarWidget_clicked(intptr_t _slot, QDate* _p1) { if (_slot) ((void (__stdcall *)(QDate*))_slot)(_p1); }
bool miqt_exec_callback_QCompleter_eventFilter(QCompleter* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QCompleter*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QPainterPath* miqt_exec_callback_QGraphicsRectItem_opaqueArea(const QGraphicsRectItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsRectItem*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QMdiSubWindow_paintEngine(const QMdiSubWindow* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QMdiSubWindow*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QVBoxLayout_event(QVBoxLayout* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QVBoxLayout*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QButtonGroup_idToggled(intptr_t _slot, int _p1, bool _p2) { if (_slot) ((void (__stdcall *)(int, bool))_slot)(_p1, _p2); }
QVariant* miqt_exec_callback_QMenu_inputMethodQuery(const QMenu* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QMenu*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QShortcut_activatedAmbiguously(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QFontComboBox_heightForWidth(const QFontComboBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QFontComboBox*, int))_slot)(_p0, _p2); return 0; }
QSize* miqt_exec_callback_QWidget_minimumSizeHint(const QWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWidget*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAbstractButton_toggled(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
bool miqt_exec_callback_QCoreApplication_event(QCoreApplication* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QCoreApplication*, QEvent*))_slot)(_p0, _p2); return false; }
QPaintEngine* miqt_exec_callback_QStatusBar_paintEngine(const QStatusBar* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QStatusBar*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QStylePlugin_eventFilter(QStylePlugin* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QStylePlugin*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QApplication_notify(QApplication* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QApplication*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSpacerItem* miqt_exec_callback_QLayoutItem_spacerItem(QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QLayoutItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWidgetItemV2_invalidate(QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QWidgetItemV2*))_slot)(_p0); }
QPainterPath* miqt_exec_callback_QGraphicsItem_shape(const QGraphicsItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsRotation_eventFilter(QGraphicsRotation* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGraphicsRotation*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QTableWidget_itemClicked(intptr_t _slot, QTableWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QTableWidgetItem*))_slot)(_p1); }
bool miqt_exec_callback_QDialog_eventFilter(QDialog* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QDialog*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QLCDNumber_sizeHint(const QLCDNumber* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLCDNumber*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTimerEvent_setAccepted(QTimerEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QTimerEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QDialog_done(QDialog* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QDialog*, int))_slot)(_p0, _p2); }
int miqt_exec_callback_QDateEdit_heightForWidth(const QDateEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QDateEdit*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QProgressBar_eventFilter(QProgressBar* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QProgressBar*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QTextBrowser_highlighted(intptr_t _slot, QUrl* _p1) { if (_slot) ((void (__stdcall *)(QUrl*))_slot)(_p1); }
int miqt_exec_callback_QDialog_devType(const QDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QDialog*))_slot)(_p0); return 0; }
void miqt_exec_callback_QMainWindow_setVisible(QMainWindow* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QMainWindow*, bool))_slot)(_p0, _p2); }
int miqt_exec_callback_QDoubleSpinBox_devType(const QDoubleSpinBox* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QDoubleSpinBox*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QSplashScreen_minimumSizeHint(const QSplashScreen* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSplashScreen*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QAbstractSlider_hasHeightForWidth(const QAbstractSlider* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QAbstractSlider*))_slot)(_p0); return false; }
QSize* miqt_exec_callback_QAbstractItemDelegate_sizeHint(const QAbstractItemDelegate* _p0, intptr_t _slot, QStyleOptionViewItem* _p2, QModelIndex* _p3) { if (_slot) return ((QSize* (__stdcall *)(const QAbstractItemDelegate*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3); return nullptr; }
QSize* miqt_exec_callback_QFileDialog_sizeHint(const QFileDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFileDialog*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QItemSelectionModel_currentColumnChanged(intptr_t _slot, QModelIndex* _p1, QModelIndex* _p2) { if (_slot) ((void (__stdcall *)(QModelIndex*, QModelIndex*))_slot)(_p1, _p2); }
bool miqt_exec_callback_QFileSystemModel_eventFilter(QFileSystemModel* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QGraphicsScale_eventFilter(QGraphicsScale* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGraphicsScale*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QProgressDialog_minimumSizeHint(const QProgressDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QProgressDialog*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTreeWidget_itemCollapsed(intptr_t _slot, QTreeWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QTreeWidgetItem*))_slot)(_p1); }
void miqt_exec_callback_QStyleHints_startDragDistanceChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QCommonStyle_polishWithApp(QCommonStyle* _p0, intptr_t _slot, QApplication* _p2) { if (_slot) ((void (__stdcall *)(QCommonStyle*, QApplication*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QTimer_event(QTimer* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTimer*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QItemSelectionModel_currentRowChanged(intptr_t _slot, QModelIndex* _p1, QModelIndex* _p2) { if (_slot) ((void (__stdcall *)(QModelIndex*, QModelIndex*))_slot)(_p1, _p2); }
int miqt_exec_callback_QWidget_heightForWidth(const QWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QWidget*, int))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QDateEdit_devType(const QDateEdit* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QDateEdit*))_slot)(_p0); return 0; }
void miqt_exec_callback_QFileDialog_currentUrlChanged(intptr_t _slot, QUrl* _p1) { if (_slot) ((void (__stdcall *)(QUrl*))_slot)(_p1); }
QVariant* miqt_exec_callback_QFileDialog_inputMethodQuery(const QFileDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QFileDialog*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QProgressDialog_event(QProgressDialog* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QProgressDialog*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QWidgetItemV2_setGeometry(QWidgetItemV2* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QWidgetItemV2*, QRect*))_slot)(_p0, _p2); }
void miqt_exec_callback_QStackedLayout_widgetAdded(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QContextMenuEvent* miqt_exec_callback_QContextMenuEvent_clone(const QContextMenuEvent* _p0, intptr_t _slot) { if (_slot) return ((QContextMenuEvent* (__stdcall *)(const QContextMenuEvent*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QRubberBand_eventFilter(QRubberBand* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QRubberBand*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QWidgetItemV2_expandingDirections(const QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QWidgetItemV2*))_slot)(_p0); return 0; }
QWidget* miqt_exec_callback_QItemEditorFactory_createEditor(const QItemEditorFactory* _p0, intptr_t _slot, int _p2, QWidget* _p3) { if (_slot) return ((QWidget* (__stdcall *)(const QItemEditorFactory*, int, QWidget*))_slot)(_p0, _p2, _p3); return nullptr; }
void miqt_exec_callback_QPlainTextEdit_undoAvailable(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QTableWidget_cellChanged(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
int miqt_exec_callback_QWizard_nextId(const QWizard* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QWizard*))_slot)(_p0); return 0; }
int miqt_exec_callback_QTabWidget_devType(const QTabWidget* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QTabWidget*))_slot)(_p0); return 0; }
QLayout* miqt_exec_callback_QWidgetItem_layout(QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QWidgetItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsWidget_geometryChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QSize* miqt_exec_callback_QDateEdit_minimumSizeHint(const QDateEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDateEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFontDialog_reject(QFontDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QFontDialog*))_slot)(_p0); }
bool miqt_exec_callback_QRhiWidget_hasHeightForWidth(const QRhiWidget* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QRhiWidget*))_slot)(_p0); return false; }
bool miqt_exec_callback_QItemSelectionModel_event(QItemSelectionModel* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QItemSelectionModel*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QBoxLayout_indexOf(const QBoxLayout* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) return ((int (__stdcall *)(const QBoxLayout*, QWidget*))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QTextEdit_eventFilter(QTextEdit* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTextEdit*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QInputMethod_animatingChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QWheelEvent_isUpdateEvent(const QWheelEvent* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWheelEvent*))_slot)(_p0); return false; }
void miqt_exec_callback_QTabBar_currentChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QProxyStyle_drawItemText(const QProxyStyle* _p0, intptr_t _slot, QPainter* _p2, QRect* _p3, int _p4, QPalette* _p5, bool _p6, struct miqt_string _p7, int _p8) { if (_slot) ((void (__stdcall *)(const QProxyStyle*, QPainter*, QRect*, int, QPalette*, bool, struct miqt_string, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6, _p7, _p8); }
bool miqt_exec_callback_QTextBrowser_hasHeightForWidth(const QTextBrowser* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QTextBrowser*))_slot)(_p0); return false; }
QSize* miqt_exec_callback_QWidgetItemV2_sizeHint(const QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWidgetItemV2*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFileDialog_open(QFileDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QFileDialog*))_slot)(_p0); }
int miqt_exec_callback_QFormLayout_heightForWidth(const QFormLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QFormLayout*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QTreeWidget_itemActivated(intptr_t _slot, QTreeWidgetItem* _p1, int _p2) { if (_slot) ((void (__stdcall *)(QTreeWidgetItem*, int))_slot)(_p1, _p2); }
QRect* miqt_exec_callback_QSpacerItem_geometry(const QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QSpacerItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsSceneMoveEvent_setAccepted(QGraphicsSceneMoveEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGraphicsSceneMoveEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QHeaderView_sectionMoved(intptr_t _slot, int _p1, int _p2, int _p3) { if (_slot) ((void (__stdcall *)(int, int, int))_slot)(_p1, _p2, _p3); }
bool miqt_exec_callback_QStackedWidget_eventFilter(QStackedWidget* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QStackedWidget*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGraphicsScene_focusItemChanged(intptr_t _slot, QGraphicsItem* _p1, QGraphicsItem* _p2, int _p3) { if (_slot) ((void (__stdcall *)(QGraphicsItem*, QGraphicsItem*, int))_slot)(_p1, _p2, _p3); }
void miqt_exec_callback_QTextBrowser_backwardAvailable(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
int miqt_exec_callback_QWidgetItemV2_heightForWidth(const QWidgetItemV2* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QWidgetItemV2*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QUndoGroup_cleanChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
bool miqt_exec_callback_QTabBar_eventFilter(QTabBar* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTabBar*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QPainterPath* miqt_exec_callback_QGraphicsLineItem_shape(const QGraphicsLineItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsLineItem*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QMessageBox_exec(QMessageBox* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(QMessageBox*))_slot)(_p0); return 0; }
void miqt_exec_callback_QDoubleSpinBox_valueChanged(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
void miqt_exec_callback_QTextDocument_undoCommandAdded(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QGraphicsObject_zChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QVariant* miqt_exec_callback_QMenuBar_inputMethodQuery(const QMenuBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QMenuBar*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QTextEdit_copyAvailable(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
int miqt_exec_callback_QStackedWidget_devType(const QStackedWidget* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QStackedWidget*))_slot)(_p0); return 0; }
QPaintEngine* miqt_exec_callback_QPixmap_paintEngine(const QPixmap* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QPixmap*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QStyleHints_colorSchemeChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QAbstractScrollArea_hasHeightForWidth(const QAbstractScrollArea* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QAbstractScrollArea*))_slot)(_p0); return false; }
void miqt_exec_callback_QMessageBox_done(QMessageBox* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QMessageBox*, int))_slot)(_p0, _p2); }
QVariant* miqt_exec_callback_QSplitterHandle_inputMethodQuery(const QSplitterHandle* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QSplitterHandle*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QTextBrowser_anchorClicked(intptr_t _slot, QUrl* _p1) { if (_slot) ((void (__stdcall *)(QUrl*))_slot)(_p1); }
void miqt_exec_callback_QToolBar_actionTriggered(intptr_t _slot, QAction* _p1) { if (_slot) ((void (__stdcall *)(QAction*))_slot)(_p1); }
bool miqt_exec_callback_QProxyStyle_event(QProxyStyle* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QProxyStyle*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QTreeWidget_itemExpanded(intptr_t _slot, QTreeWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QTreeWidgetItem*))_slot)(_p1); }
int miqt_exec_callback_QAbstractItemModel_supportedDropActions(const QAbstractItemModel* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QAbstractItemModel*))_slot)(_p0); return 0; }
void miqt_exec_callback_QUndoStack_indexChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QWidgetItem_hasHeightForWidth(const QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWidgetItem*))_slot)(_p0); return false; }
QPaintEngine* miqt_exec_callback_QColorDialog_paintEngine(const QColorDialog* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QColorDialog*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QDateEdit_setVisible(QDateEdit* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDateEdit*, bool))_slot)(_p0, _p2); }
QEvent* miqt_exec_callback_QGraphicsSceneResizeEvent_clone(const QGraphicsSceneResizeEvent* _p0, intptr_t _slot) { if (_slot) return ((QEvent* (__stdcall *)(const QGraphicsSceneResizeEvent*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QPlainTextEdit_sizeHint(const QPlainTextEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QPlainTextEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTreeWidget_itemPressed(intptr_t _slot, QTreeWidgetItem* _p1, int _p2) { if (_slot) ((void (__stdcall *)(QTreeWidgetItem*, int))_slot)(_p1, _p2); }
bool miqt_exec_callback_QCoreApplication_notify(QCoreApplication* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QCoreApplication*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QPaintEngine* miqt_exec_callback_QAbstractScrollArea_paintEngine(const QAbstractScrollArea* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QAbstractScrollArea*))_slot)(_p0); return nullptr; }
QModelIndex* miqt_exec_callback_QAbstractProxyModel_sibling(const QAbstractProxyModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((QModelIndex* (__stdcall *)(const QAbstractProxyModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
void miqt_exec_callback_QAbstractFileIconProvider_setOptions(QAbstractFileIconProvider* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QAbstractFileIconProvider*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QStyleHints_tabFocusBehaviorChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QDialog_reject(QDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QDialog*))_slot)(_p0); }
bool miqt_exec_callback_QGraphicsItem_collidesWithItem(const QGraphicsItem* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsItem*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QTextEdit_setVisible(QTextEdit* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QTextEdit*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QResizeEvent_setAccepted(QResizeEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QResizeEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QTabBar_tabBarClicked(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSize* miqt_exec_callback_QDateEdit_sizeHint(const QDateEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDateEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsObject_enabledChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QLineEdit_returnPressed(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QSize* miqt_exec_callback_QMainWindow_sizeHint(const QMainWindow* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMainWindow*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWidget_windowTitleChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QAbstractItemDelegate_helpEvent(QAbstractItemDelegate* _p0, intptr_t _slot, QHelpEvent* _p2, QAbstractItemView* _p3, QStyleOptionViewItem* _p4, QModelIndex* _p5) { if (_slot) return ((bool (__stdcall *)(QAbstractItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5); return false; }
QVariant* miqt_exec_callback_QFontDialog_inputMethodQuery(const QFontDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QFontDialog*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QFormLayout_eventFilter(QFormLayout* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QFormLayout*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QPlainTextEdit_blockCountChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QPaintEngine* miqt_exec_callback_QWizardPage_paintEngine(const QWizardPage* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QWizardPage*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QRubberBand_inputMethodQuery(const QRubberBand* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QRubberBand*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QWidgetItem_invalidate(QWidgetItem* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QWidgetItem*))_slot)(_p0); }
void miqt_exec_callback_QScrollBar_setVisible(QScrollBar* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QScrollBar*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QDragLeaveEvent_setAccepted(QDragLeaveEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDragLeaveEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QAction_hovered(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QTabWidget_hasHeightForWidth(const QTabWidget* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QTabWidget*))_slot)(_p0); return false; }
void miqt_exec_callback_QMenuBar_hovered(intptr_t _slot, QAction* _p1) { if (_slot) ((void (__stdcall *)(QAction*))_slot)(_p1); }
QVariant* miqt_exec_callback_QSplashScreen_inputMethodQuery(const QSplashScreen* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QSplashScreen*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QScreen_refreshRateChanged(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
bool miqt_exec_callback_QLayout_eventFilter(QLayout* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QLayout*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QDialog_rejected(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QStatusBar_eventFilter(QStatusBar* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QStatusBar*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QTextBrowser_heightForWidth(const QTextBrowser* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QTextBrowser*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QDialogButtonBox_eventFilter(QDialogButtonBox* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QDialogButtonBox*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QModelIndex* miqt_exec_callback_QAbstractProxyModel_mapFromSource(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QModelIndex* (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
QPainterPath* miqt_exec_callback_QGraphicsPolygonItem_opaqueArea(const QGraphicsPolygonItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsPolygonItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QUndoStack_canUndoChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
QSize* miqt_exec_callback_QLCDNumber_minimumSizeHint(const QLCDNumber* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLCDNumber*))_slot)(_p0); return nullptr; }
QPainterPath* miqt_exec_callback_QGraphicsItem_opaqueArea(const QGraphicsItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsSceneResizeEvent_setAccepted(QGraphicsSceneResizeEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGraphicsSceneResizeEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QToolBox_currentChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QAbstractItemModel_layoutChanged2(intptr_t _slot, struct miqt_array /* of QPersistentModelIndex* */ _p1, int _p2) { if (_slot) ((void (__stdcall *)(struct miqt_array /* of QPersistentModelIndex* */, int))_slot)(_p1, _p2); }
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractItemModel_roleNames(const QAbstractItemModel* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_map /* of int to struct miqt_string */  (__stdcall *)(const QAbstractItemModel*))_slot)(_p0); return {}; }
int miqt_exec_callback_QVBoxLayout_heightForWidth(const QVBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QVBoxLayout*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QCalendarWidget_eventFilter(QCalendarWidget* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QCalendarWidget*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QDial_hasHeightForWidth(const QDial* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QDial*))_slot)(_p0); return false; }
QPaintEngine* miqt_exec_callback_QGroupBox_paintEngine(const QGroupBox* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QGroupBox*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QScroller_stateChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QTextBrowser_setupViewport(QTextBrowser* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QTextBrowser*, QWidget*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QFontDialog_hasHeightForWidth(const QFontDialog* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QFontDialog*))_slot)(_p0); return false; }
bool miqt_exec_callback_QScrollBar_hasHeightForWidth(const QScrollBar* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QScrollBar*))_slot)(_p0); return false; }
bool miqt_exec_callback_QDoubleSpinBox_hasHeightForWidth(const QDoubleSpinBox* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QDoubleSpinBox*))_slot)(_p0); return false; }
QPaintEngine* miqt_exec_callback_QRubberBand_paintEngine(const QRubberBand* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QRubberBand*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QRhiWidget_eventFilter(QRhiWidget* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QRhiWidget*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSpacerItem* miqt_exec_callback_QStackedLayout_spacerItem(QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QStackedLayout*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QLineEdit_sizeHint(const QLineEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLineEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsBlurEffect_blurHintsChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QTextEdit_setupViewport(QTextEdit* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QTextEdit*, QWidget*))_slot)(_p0, _p2); }
QSize* miqt_exec_callback_QWizardPage_sizeHint(const QWizardPage* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWizardPage*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTextDocument_modificationChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
bool miqt_exec_callback_QBoxLayout_hasHeightForWidth(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QBoxLayout*))_slot)(_p0); return false; }
bool miqt_exec_callback_QDialog_event(QDialog* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QDialog*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QFontDialog_minimumSizeHint(const QFontDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFontDialog*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QRhiWidget_renderFailed(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QSpinBox_clear(QSpinBox* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QSpinBox*))_slot)(_p0); }
bool miqt_exec_callback_QTabBar_hasHeightForWidth(const QTabBar* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QTabBar*))_slot)(_p0); return false; }
bool miqt_exec_callback_QSpacerItem_hasHeightForWidth(const QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QSpacerItem*))_slot)(_p0); return false; }
bool miqt_exec_callback_QDateTimeEdit_hasHeightForWidth(const QDateTimeEdit* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QDateTimeEdit*))_slot)(_p0); return false; }
bool miqt_exec_callback_QGraphicsEllipseItem_contains(const QGraphicsEllipseItem* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsEllipseItem*, QPointF*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QLCDNumber_hasHeightForWidth(const QLCDNumber* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QLCDNumber*))_slot)(_p0); return false; }
void miqt_exec_callback_QProxyStyle_unpolishWithApp(QProxyStyle* _p0, intptr_t _slot, QApplication* _p2) { if (_slot) ((void (__stdcall *)(QProxyStyle*, QApplication*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QMovie_eventFilter(QMovie* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QMovie*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QWidgetItemV2_isEmpty(const QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWidgetItemV2*))_slot)(_p0); return false; }
void miqt_exec_callback_QGraphicsScale_originChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QDoubleSpinBox_eventFilter(QDoubleSpinBox* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QDoubleSpinBox*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QAbstractSpinBox_hasHeightForWidth(const QAbstractSpinBox* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QAbstractSpinBox*))_slot)(_p0); return false; }
bool miqt_exec_callback_QGraphicsPixmapItem_collidesWithPath(const QGraphicsPixmapItem* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPixmapItem*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QItemDelegate_event(QItemDelegate* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QItemDelegate*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QLCDNumber_overflow(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QLineEdit_heightForWidth(const QLineEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QLineEdit*, int))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QTimeEdit_devType(const QTimeEdit* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QTimeEdit*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QFileSystemModel_setHeaderData(QFileSystemModel* _p0, intptr_t _slot, int _p2, int _p3, QVariant* _p4, int _p5) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, int, int, QVariant*, int))_slot)(_p0, _p2, _p3, _p4, _p5); return false; }
bool miqt_exec_callback_QGraphicsPolygonItem_collidesWithPath(const QGraphicsPolygonItem* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPolygonItem*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QTextEdit_redoAvailable(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
bool miqt_exec_callback_QSplitter_hasHeightForWidth(const QSplitter* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QSplitter*))_slot)(_p0); return false; }
void miqt_exec_callback_QStyledItemDelegate_paint(const QStyledItemDelegate* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionViewItem* _p3, QModelIndex* _p4) { if (_slot) ((void (__stdcall *)(const QStyledItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); }
QSize* miqt_exec_callback_QItemDelegate_sizeHint(const QItemDelegate* _p0, intptr_t _slot, QStyleOptionViewItem* _p2, QModelIndex* _p3) { if (_slot) return ((QSize* (__stdcall *)(const QItemDelegate*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3); return nullptr; }
bool miqt_exec_callback_QIconEngine_read(QIconEngine* _p0, intptr_t _slot, QDataStream* _p2) { if (_slot) return ((bool (__stdcall *)(QIconEngine*, QDataStream*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QFrame_eventFilter(QFrame* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QFrame*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QRect* miqt_exec_callback_QVBoxLayout_geometry(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsItemGroup_collidesWithPath(const QGraphicsItemGroup* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsItemGroup*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QColorDialog_accept(QColorDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QColorDialog*))_slot)(_p0); }
void miqt_exec_callback_QStyleHints_startDragTimeChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
int miqt_exec_callback_QBoxLayout_spacing(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QBoxLayout*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QStatusBar_sizeHint(const QStatusBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QStatusBar*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWindow_focusObjectChanged(intptr_t _slot, QObject* _p1) { if (_slot) ((void (__stdcall *)(QObject*))_slot)(_p1); }
void miqt_exec_callback_QTabWidget_currentChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSize* miqt_exec_callback_QWidgetItem_minimumSize(const QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWidgetItem*))_slot)(_p0); return nullptr; }
QLayoutItem* miqt_exec_callback_QLayout_itemAt(const QLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(const QLayout*, int))_slot)(_p0, _p2); return nullptr; }
QPaintEngine* miqt_exec_callback_QScrollBar_paintEngine(const QScrollBar* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QScrollBar*))_slot)(_p0); return nullptr; }
QModelIndex* miqt_exec_callback_QAbstractItemModel_sibling(const QAbstractItemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((QModelIndex* (__stdcall *)(const QAbstractItemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
void miqt_exec_callback_QItemDelegate_updateEditorGeometry(const QItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QStyleOptionViewItem* _p3, QModelIndex* _p4) { if (_slot) ((void (__stdcall *)(const QItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); }
struct miqt_array /* of int */  miqt_exec_callback_QItemDelegate_paintingRoles(const QItemDelegate* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_array /* of int */  (__stdcall *)(const QItemDelegate*))_slot)(_p0); return {}; }
bool miqt_exec_callback_QAbstractProxyModel_hasChildren(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((bool (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QFileSystemModel_setData(QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2, QVariant* _p3, int _p4) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, QModelIndex*, QVariant*, int))_slot)(_p0, _p2, _p3, _p4); return false; }
QSize* miqt_exec_callback_QAbstractScrollArea_minimumSizeHint(const QAbstractScrollArea* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QAbstractScrollArea*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QComboBox_editTextChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
void miqt_exec_callback_QDateTimeEdit_fixup(const QDateTimeEdit* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) ((void (__stdcall *)(const QDateTimeEdit*, struct miqt_string))_slot)(_p0, _p2); }
int miqt_exec_callback_QMessageBox_devType(const QMessageBox* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QMessageBox*))_slot)(_p0); return 0; }
void miqt_exec_callback_QAbstractItemDelegate_closeEditor2(intptr_t _slot, QWidget* _p1, int _p2) { if (_slot) ((void (__stdcall *)(QWidget*, int))_slot)(_p1, _p2); }
QWidget* miqt_exec_callback_QAbstractItemDelegate_createEditor(const QAbstractItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QStyleOptionViewItem* _p3, QModelIndex* _p4) { if (_slot) return ((QWidget* (__stdcall *)(const QAbstractItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
void miqt_exec_callback_QColorDialog_colorSelected(intptr_t _slot, QColor* _p1) { if (_slot) ((void (__stdcall *)(QColor*))_slot)(_p1); }
bool miqt_exec_callback_QTimeEdit_eventFilter(QTimeEdit* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTimeEdit*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QFileDialog_directoryUrlEntered(intptr_t _slot, QUrl* _p1) { if (_slot) ((void (__stdcall *)(QUrl*))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsPolygonItem_contains(const QGraphicsPolygonItem* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPolygonItem*, QPointF*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QTextBrowser_eventFilter(QTextBrowser* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTextBrowser*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QTabWidget_heightForWidth(const QTabWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QTabWidget*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QProgressDialog_reject(QProgressDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QProgressDialog*))_slot)(_p0); }
void miqt_exec_callback_QWindow_activeChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QSize* miqt_exec_callback_QGridLayout_maximumSize(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QGridLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsSceneHoverEvent_setAccepted(QGraphicsSceneHoverEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGraphicsSceneHoverEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QInputMethod_inputItemClipRectangleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QPainterPath* miqt_exec_callback_QGraphicsPolygonItem_shape(const QGraphicsPolygonItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsPolygonItem*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QProgressDialog_heightForWidth(const QProgressDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QProgressDialog*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QTabBar_tabCloseRequested(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSize* miqt_exec_callback_QTextBrowser_sizeHint(const QTextBrowser* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QTextBrowser*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGuiApplication_event(QGuiApplication* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGuiApplication*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QIconEngine_paint(QIconEngine* _p0, intptr_t _slot, QPainter* _p2, QRect* _p3, int _p4, int _p5) { if (_slot) ((void (__stdcall *)(QIconEngine*, QPainter*, QRect*, int, int))_slot)(_p0, _p2, _p3, _p4, _p5); }
int miqt_exec_callback_QBoxLayout_expandingDirections(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QBoxLayout*))_slot)(_p0); return 0; }
QWidget* miqt_exec_callback_QItemDelegate_createEditor(const QItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QStyleOptionViewItem* _p3, QModelIndex* _p4) { if (_slot) return ((QWidget* (__stdcall *)(const QItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
int miqt_exec_callback_QAbstractFileIconProvider_options(const QAbstractFileIconProvider* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QAbstractFileIconProvider*))_slot)(_p0); return 0; }
void miqt_exec_callback_QLayoutItem_setGeometry(QLayoutItem* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QLayoutItem*, QRect*))_slot)(_p0, _p2); }
void miqt_exec_callback_QTextDocument_redoAvailable(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QFileSystemModel_match(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3, QVariant* _p4, int _p5, int _p6) { if (_slot) return ((struct miqt_array /* of QModelIndex* */  (__stdcall *)(const QFileSystemModel*, QModelIndex*, int, QVariant*, int, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return {}; }
void miqt_exec_callback_QGroupBox_toggled(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QAbstractProxyModel_multiData(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2, QModelRoleDataSpan* _p3) { if (_slot) ((void (__stdcall *)(const QAbstractProxyModel*, QModelIndex*, QModelRoleDataSpan*))_slot)(_p0, _p2, _p3); }
void miqt_exec_callback_QWindow_flagsChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QWindow_opacityChanged(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
void miqt_exec_callback_QFileSystemModel_revert(QFileSystemModel* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QFileSystemModel*))_slot)(_p0); }
bool miqt_exec_callback_QDockWidget_eventFilter(QDockWidget* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QDockWidget*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QGraphicsSimpleTextItem_collidesWithPath(const QGraphicsSimpleTextItem* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsSimpleTextItem*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QLineEdit_timerEvent(QLineEdit* _p0, intptr_t _slot, QTimerEvent* _p2) { if (_slot) ((void (__stdcall *)(QLineEdit*, QTimerEvent*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QWizard_validateCurrentPage(QWizard* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(QWizard*))_slot)(_p0); return false; }
bool miqt_exec_callback_QAbstractProxyModel_moveColumns(QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3, int _p4, QModelIndex* _p5, int _p6) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
int miqt_exec_callback_QFontDialog_exec(QFontDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(QFontDialog*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QKeySequenceEdit_hasHeightForWidth(const QKeySequenceEdit* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QKeySequenceEdit*))_slot)(_p0); return false; }
int miqt_exec_callback_QProgressDialog_exec(QProgressDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(QProgressDialog*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QStatusBar_minimumSizeHint(const QStatusBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QStatusBar*))_slot)(_p0); return nullptr; }
QPixmap* miqt_exec_callback_QIconEngine_pixmap(QIconEngine* _p0, intptr_t _slot, QSize* _p2, int _p3, int _p4) { if (_slot) return ((QPixmap* (__stdcall *)(QIconEngine*, QSize*, int, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
void miqt_exec_callback_QAbstractItemView_activated(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
bool miqt_exec_callback_QTabBar_event(QTabBar* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTabBar*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QDateTimeEdit_event(QDateTimeEdit* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QDateTimeEdit*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QFormLayout_maximumSize(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFormLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsSimpleTextItem_advance(QGraphicsSimpleTextItem* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsSimpleTextItem*, int))_slot)(_p0, _p2); }
bool miqt_exec_callback_QStackedLayout_eventFilter(QStackedLayout* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QStackedLayout*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QAbstractItemModel_setItemData(QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2, struct miqt_map /* of int to QVariant* */ _p3) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, QModelIndex*, struct miqt_map /* of int to QVariant* */))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QHideEvent_setAccepted(QHideEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QHideEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QCalendarWidget_currentPageChanged(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QGuiApplication_saveStateRequest(intptr_t _slot, QSessionManager* _p1) { if (_slot) ((void (__stdcall *)(QSessionManager*))_slot)(_p1); }
void miqt_exec_callback_QTimeEdit_clear(QTimeEdit* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QTimeEdit*))_slot)(_p0); }
void miqt_exec_callback_QDockWidget_featuresChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QPanGesture_event(QPanGesture* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QPanGesture*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QMovie_frameChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QUndoStack_cleanChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QStackedWidget_widgetRemoved(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QDragEnterEvent* miqt_exec_callback_QDragEnterEvent_clone(const QDragEnterEvent* _p0, intptr_t _slot) { if (_slot) return ((QDragEnterEvent* (__stdcall *)(const QDragEnterEvent*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QWidgetItem_sizeHint(const QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWidgetItem*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QDockWidget_paintEngine(const QDockWidget* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QDockWidget*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QLayout_hasHeightForWidth(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QLayout*))_slot)(_p0); return false; }
int miqt_exec_callback_QErrorMessage_exec(QErrorMessage* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(QErrorMessage*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QSplashScreen_event(QSplashScreen* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QSplashScreen*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QAbstractItemModel_hasChildren(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((bool (__stdcall *)(const QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QWidget_event(QWidget* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QWidget*, QEvent*))_slot)(_p0, _p2); return false; }
QModelIndex* miqt_exec_callback_QAbstractProxyModel_index(const QAbstractProxyModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((QModelIndex* (__stdcall *)(const QAbstractProxyModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
QVariant* miqt_exec_callback_QAbstractScrollArea_inputMethodQuery(const QAbstractScrollArea* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QAbstractScrollArea*, int))_slot)(_p0, _p2); return nullptr; }
QRectF* miqt_exec_callback_QGraphicsPixmapItem_boundingRect(const QGraphicsPixmapItem* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsPixmapItem*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QStyledItemDelegate_sizeHint(const QStyledItemDelegate* _p0, intptr_t _slot, QStyleOptionViewItem* _p2, QModelIndex* _p3) { if (_slot) return ((QSize* (__stdcall *)(const QStyledItemDelegate*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3); return nullptr; }
void miqt_exec_callback_QSpinBox_fixup(const QSpinBox* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) ((void (__stdcall *)(const QSpinBox*, struct miqt_string))_slot)(_p0, _p2); }
void miqt_exec_callback_QScreen_primaryOrientationChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QHideEvent* miqt_exec_callback_QHideEvent_clone(const QHideEvent* _p0, intptr_t _slot) { if (_slot) return ((QHideEvent* (__stdcall *)(const QHideEvent*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QLayout_controlTypes(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QLayout*))_slot)(_p0); return 0; }
QRectF* miqt_exec_callback_QGraphicsPolygonItem_boundingRect(const QGraphicsPolygonItem* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsPolygonItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsObject_visibleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QSize* miqt_exec_callback_QMenuBar_sizeHint(const QMenuBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMenuBar*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTableWidget_cellActivated(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QTextBrowser_backward(QTextBrowser* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QTextBrowser*))_slot)(_p0); }
bool miqt_exec_callback_QAbstractItemDelegate_editorEvent(QAbstractItemDelegate* _p0, intptr_t _slot, QEvent* _p2, QAbstractItemModel* _p3, QStyleOptionViewItem* _p4, QModelIndex* _p5) { if (_slot) return ((bool (__stdcall *)(QAbstractItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5); return false; }
void miqt_exec_callback_QCheckBox_checkStateChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QDialogButtonBox_hasHeightForWidth(const QDialogButtonBox* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QDialogButtonBox*))_slot)(_p0); return false; }
QPainterPath* miqt_exec_callback_QGraphicsSimpleTextItem_shape(const QGraphicsSimpleTextItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsSimpleTextItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAction_visibleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QUndoCommand_redo(QUndoCommand* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QUndoCommand*))_slot)(_p0); }
void miqt_exec_callback_QAbstractItemDelegate_closeEditor(intptr_t _slot, QWidget* _p1) { if (_slot) ((void (__stdcall *)(QWidget*))_slot)(_p1); }
QRect* miqt_exec_callback_QWidgetItemV2_geometry(const QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QWidgetItemV2*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QListView_indexesMoved(intptr_t _slot, struct miqt_array /* of QModelIndex* */ _p1) { if (_slot) ((void (__stdcall *)(struct miqt_array /* of QModelIndex* */))_slot)(_p1); }
bool miqt_exec_callback_QMdiArea_event(QMdiArea* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QMdiArea*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QPixmap_devType(const QPixmap* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QPixmap*))_slot)(_p0); return 0; }
int miqt_exec_callback_QDockWidget_heightForWidth(const QDockWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QDockWidget*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QStackedLayout_addItem(QStackedLayout* _p0, intptr_t _slot, QLayoutItem* _p2) { if (_slot) ((void (__stdcall *)(QStackedLayout*, QLayoutItem*))_slot)(_p0, _p2); }
void miqt_exec_callback_QCoreApplication_applicationVersionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QWidget* miqt_exec_callback_QBoxLayout_widget(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QBoxLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QShortcut_activated(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QAbstractButton_released(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QLayout_expandingDirections(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QLayout*))_slot)(_p0); return 0; }
int miqt_exec_callback_QFormLayout_controlTypes(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFormLayout*))_slot)(_p0); return 0; }
int miqt_exec_callback_QVBoxLayout_indexOf(const QVBoxLayout* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) return ((int (__stdcall *)(const QVBoxLayout*, QWidget*))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QDialogButtonBox_rejected(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QSize* miqt_exec_callback_QFileSystemModel_span(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QSize* (__stdcall *)(const QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QSlider_event(QSlider* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QSlider*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QAbstractItemModel_removeColumns(QAbstractItemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
QVariant* miqt_exec_callback_QTabBar_inputMethodQuery(const QTabBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QTabBar*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QCommonStyle_unpolishWithApplication(QCommonStyle* _p0, intptr_t _slot, QApplication* _p2) { if (_slot) ((void (__stdcall *)(QCommonStyle*, QApplication*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QBoxLayout_event(QBoxLayout* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QBoxLayout*, QEvent*))_slot)(_p0, _p2); return false; }
QRectF* miqt_exec_callback_QGraphicsObject_boundingRect(const QGraphicsObject* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsObject*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsRectItem_collidesWithPath(const QGraphicsRectItem* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsRectItem*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QStyleHints_cursorFlashTimeChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QUndoStack_redoTextChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
QPaintEngine* miqt_exec_callback_QSlider_paintEngine(const QSlider* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QSlider*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsLineItem_contains(const QGraphicsLineItem* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsLineItem*, QPointF*))_slot)(_p0, _p2); return false; }
QRect* miqt_exec_callback_QLayoutItem_geometry(const QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QLayoutItem*))_slot)(_p0); return nullptr; }
QWidget* miqt_exec_callback_QWidgetItem_widget(const QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QWidgetItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFileDialog_currentChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
void miqt_exec_callback_QDateTimeEdit_dateChanged(intptr_t _slot, QDate* _p1) { if (_slot) ((void (__stdcall *)(QDate*))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsPathItem_contains(const QGraphicsPathItem* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPathItem*, QPointF*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QTextBrowser_sourceChanged(intptr_t _slot, QUrl* _p1) { if (_slot) ((void (__stdcall *)(QUrl*))_slot)(_p1); }
int miqt_exec_callback_QSlider_devType(const QSlider* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QSlider*))_slot)(_p0); return 0; }
void miqt_exec_callback_QCompleter_highlighted(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
QSize* miqt_exec_callback_QFontComboBox_sizeHint(const QFontComboBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFontComboBox*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsTextItem_isObscuredBy(const QGraphicsTextItem* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsTextItem*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QMenuBar_triggered(intptr_t _slot, QAction* _p1) { if (_slot) ((void (__stdcall *)(QAction*))_slot)(_p1); }
QPaintEngine* miqt_exec_callback_QStackedWidget_paintEngine(const QStackedWidget* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QStackedWidget*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QActionGroup_event(QActionGroup* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QActionGroup*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QAbstractButton_clicked(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QSpacerItem* miqt_exec_callback_QGridLayout_spacerItem(QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QGridLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsEllipseItem_collidesWithPath(const QGraphicsEllipseItem* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsEllipseItem*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGraphicsObject_opacityChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QAbstractGraphicsShapeItem_type(const QAbstractGraphicsShapeItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QAbstractGraphicsShapeItem*))_slot)(_p0); return 0; }
void miqt_exec_callback_QGraphicsSceneDragDropEvent_setAccepted(QGraphicsSceneDragDropEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGraphicsSceneDragDropEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QAbstractItemModel_layoutChangedWithParents(intptr_t _slot, struct miqt_array /* of QPersistentModelIndex* */ _p1) { if (_slot) ((void (__stdcall *)(struct miqt_array /* of QPersistentModelIndex* */))_slot)(_p1); }
bool miqt_exec_callback_QDial_eventFilter(QDial* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QDial*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QWizardPage_completeChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QTextDocument_cursorPositionChanged(intptr_t _slot, QTextCursor* _p1) { if (_slot) ((void (__stdcall *)(QTextCursor*))_slot)(_p1); }
void miqt_exec_callback_QAbstractTextDocumentLayout_updateWithQRectF(intptr_t _slot, QRectF* _p1) { if (_slot) ((void (__stdcall *)(QRectF*))_slot)(_p1); }
QPaintEngine* miqt_exec_callback_QAbstractSlider_paintEngine(const QAbstractSlider* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QAbstractSlider*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QCompleter_highlightedWithIndex(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
int miqt_exec_callback_QErrorMessage_devType(const QErrorMessage* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QErrorMessage*))_slot)(_p0); return 0; }
struct miqt_string miqt_exec_callback_QProgressBar_text(const QProgressBar* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_string (__stdcall *)(const QProgressBar*))_slot)(_p0); return {}; }
int miqt_exec_callback_QLayoutItem_controlTypes(const QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QLayoutItem*))_slot)(_p0); return 0; }
void miqt_exec_callback_QListWidget_itemSelectionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QValidator_event(QValidator* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QValidator*, QEvent*))_slot)(_p0, _p2); return false; }
QSpacerItem* miqt_exec_callback_QHBoxLayout_spacerItem(QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QHBoxLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QDialog_hasHeightForWidth(const QDialog* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QDialog*))_slot)(_p0); return false; }
int miqt_exec_callback_QFontDialog_heightForWidth(const QFontDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QFontDialog*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QProgressDialog_accept(QProgressDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QProgressDialog*))_slot)(_p0); }
void miqt_exec_callback_QDropEvent_setAccepted(QDropEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDropEvent*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QIconEngine_isNull(QIconEngine* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(QIconEngine*))_slot)(_p0); return false; }
bool miqt_exec_callback_QWidget_hasHeightForWidth(const QWidget* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWidget*))_slot)(_p0); return false; }
void miqt_exec_callback_QCoreApplication_organizationDomainChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QGraphicsObject_advance(QGraphicsObject* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsObject*, int))_slot)(_p0, _p2); }
bool miqt_exec_callback_QPlainTextEdit_eventFilter(QPlainTextEdit* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QPlainTextEdit*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QPaintEngine* miqt_exec_callback_QSizeGrip_paintEngine(const QSizeGrip* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QSizeGrip*))_slot)(_p0); return nullptr; }
QModelIndex* miqt_exec_callback_QAbstractItemModel_index(const QAbstractItemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((QModelIndex* (__stdcall *)(const QAbstractItemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
QIcon* miqt_exec_callback_QAbstractFileIconProvider_icon(const QAbstractFileIconProvider* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QIcon* (__stdcall *)(const QAbstractFileIconProvider*, int))_slot)(_p0, _p2); return nullptr; }
QEvent* miqt_exec_callback_QGestureEvent_clone(const QGestureEvent* _p0, intptr_t _slot) { if (_slot) return ((QEvent* (__stdcall *)(const QGestureEvent*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsEllipseItem_isObscuredBy(const QGraphicsEllipseItem* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsEllipseItem*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QStackedWidget_event(QStackedWidget* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QStackedWidget*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QWizard_devType(const QWizard* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QWizard*))_slot)(_p0); return 0; }
void miqt_exec_callback_QTextDocument_undoAvailable(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
QSpacerItem* miqt_exec_callback_QWidgetItemV2_spacerItem(QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QWidgetItemV2*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFileDialog_fileSelected(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
void miqt_exec_callback_QGraphicsObject_scaleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QInputDialog_devType(const QInputDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QInputDialog*))_slot)(_p0); return 0; }
QPixmap* miqt_exec_callback_QProxyStyle_generatedIconPixmap(const QProxyStyle* _p0, intptr_t _slot, int _p2, QPixmap* _p3, QStyleOption* _p4) { if (_slot) return ((QPixmap* (__stdcall *)(const QProxyStyle*, int, QPixmap*, QStyleOption*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
QPaintEngine* miqt_exec_callback_QFrame_paintEngine(const QFrame* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QFrame*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QSpacerItem_sizeHint(const QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSpacerItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QMdiArea_eventFilter(QMdiArea* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QMdiArea*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QSizeGrip_minimumSizeHint(const QSizeGrip* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSizeGrip*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTreeWidget_itemEntered(intptr_t _slot, QTreeWidgetItem* _p1, int _p2) { if (_slot) ((void (__stdcall *)(QTreeWidgetItem*, int))_slot)(_p1, _p2); }
QLayoutItem* miqt_exec_callback_QFormLayout_itemAtWithIndex(const QFormLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(const QFormLayout*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QGraphicsTransform_event(QGraphicsTransform* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGraphicsTransform*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QInputDialog_intValueChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QMessageBox_setVisible(QMessageBox* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QMessageBox*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QTextDocument_baseUrlChanged(intptr_t _slot, QUrl* _p1) { if (_slot) ((void (__stdcall *)(QUrl*))_slot)(_p1); }
void miqt_exec_callback_QHBoxLayout_addItem(QHBoxLayout* _p0, intptr_t _slot, QLayoutItem* _p2) { if (_slot) ((void (__stdcall *)(QHBoxLayout*, QLayoutItem*))_slot)(_p0, _p2); }
void miqt_exec_callback_QFormLayout_invalidate(QFormLayout* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QFormLayout*))_slot)(_p0); }
bool miqt_exec_callback_QGraphicsView_event(QGraphicsView* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGraphicsView*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QProgressBar_heightForWidth(const QProgressBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QProgressBar*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QStackedLayout_widgetRemoved(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QModelIndex* miqt_exec_callback_QAbstractItemModel_parent(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QModelIndex* (__stdcall *)(const QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QStyleHints_useHoverEffectsChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
QSize* miqt_exec_callback_QTabWidget_sizeHint(const QTabWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QTabWidget*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QLayout_count(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QLayout*))_slot)(_p0); return 0; }
void miqt_exec_callback_QComboBox_activated(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QHeaderView_sectionClicked(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QToolButton_triggered(intptr_t _slot, QAction* _p1) { if (_slot) ((void (__stdcall *)(QAction*))_slot)(_p1); }
void miqt_exec_callback_QAbstractItemDelegate_paint(const QAbstractItemDelegate* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionViewItem* _p3, QModelIndex* _p4) { if (_slot) ((void (__stdcall *)(const QAbstractItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); }
bool miqt_exec_callback_QComboBox_eventFilter(QComboBox* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QComboBox*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QFontComboBox_eventFilter(QFontComboBox* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QFontComboBox*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QObject_destroyedWithQObject(intptr_t _slot, QObject* _p1) { if (_slot) ((void (__stdcall *)(QObject*))_slot)(_p1); }
QPaintEngine* miqt_exec_callback_QFontDialog_paintEngine(const QFontDialog* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QFontDialog*))_slot)(_p0); return nullptr; }
QPainterPath* miqt_exec_callback_QGraphicsPixmapItem_opaqueArea(const QGraphicsPixmapItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsPixmapItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QMainWindow_eventFilter(QMainWindow* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QMainWindow*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QStyle* miqt_exec_callback_QStylePlugin_create(QStylePlugin* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) return ((QStyle* (__stdcall *)(QStylePlugin*, struct miqt_string))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QUndoGroup_activeStackChanged(intptr_t _slot, QUndoStack* _p1) { if (_slot) ((void (__stdcall *)(QUndoStack*))_slot)(_p1); }
bool miqt_exec_callback_QColorDialog_eventFilter(QColorDialog* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QColorDialog*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QGraphicsRectItem_isObscuredBy(const QGraphicsRectItem* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsRectItem*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QLabel_eventFilter(QLabel* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QLabel*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QCoreApplication_applicationNameChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QModelIndex* miqt_exec_callback_QFileSystemModel_sibling(const QFileSystemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((QModelIndex* (__stdcall *)(const QFileSystemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
QVariant* miqt_exec_callback_QTimeEdit_inputMethodQuery(const QTimeEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QTimeEdit*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QListWidget_itemChanged(intptr_t _slot, QListWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QListWidgetItem*))_slot)(_p1); }
QPainterPath* miqt_exec_callback_QGraphicsObject_shape(const QGraphicsObject* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsObject*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QItemDelegate_eventFilter(QItemDelegate* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QItemDelegate*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QTableWidget_itemEntered(intptr_t _slot, QTableWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QTableWidgetItem*))_slot)(_p1); }
QPaintEngine* miqt_exec_callback_QKeySequenceEdit_paintEngine(const QKeySequenceEdit* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QKeySequenceEdit*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QStyledItemDelegate_eventFilter(QStyledItemDelegate* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QStyledItemDelegate*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QMimeData* miqt_exec_callback_QAbstractProxyModel_mimeData(const QAbstractProxyModel* _p0, intptr_t _slot, struct miqt_array /* of QModelIndex* */ _p2) { if (_slot) return ((QMimeData* (__stdcall *)(const QAbstractProxyModel*, struct miqt_array /* of QModelIndex* */))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QIODevice_aboutToClose(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QItemSelectionModel_select2(QItemSelectionModel* _p0, intptr_t _slot, QItemSelection* _p2, int _p3) { if (_slot) ((void (__stdcall *)(QItemSelectionModel*, QItemSelection*, int))_slot)(_p0, _p2, _p3); }
void miqt_exec_callback_QWindow_yChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsObject_collidesWithPath(const QGraphicsObject* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsObject*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
QPalette* miqt_exec_callback_QProxyStyle_standardPalette(const QProxyStyle* _p0, intptr_t _slot) { if (_slot) return ((QPalette* (__stdcall *)(const QProxyStyle*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QScrollBar_heightForWidth(const QScrollBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QScrollBar*, int))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QStackedLayout_count(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QStackedLayout*))_slot)(_p0); return 0; }
void miqt_exec_callback_QUndoGroup_indexChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QFileDialog_filesSelected(intptr_t _slot, struct miqt_array /* of struct miqt_string */ _p1) { if (_slot) ((void (__stdcall *)(struct miqt_array /* of struct miqt_string */))_slot)(_p1); }
void miqt_exec_callback_QWizard_currentIdChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QButtonGroup_buttonReleased(intptr_t _slot, QAbstractButton* _p1) { if (_slot) ((void (__stdcall *)(QAbstractButton*))_slot)(_p1); }
bool miqt_exec_callback_QFontDialog_eventFilter(QFontDialog* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QFontDialog*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QMenu_eventFilter(QMenu* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QMenu*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QRhiWidget_devType(const QRhiWidget* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QRhiWidget*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QWindow_size(const QWindow* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWindow*))_slot)(_p0); return nullptr; }
struct miqt_string miqt_exec_callback_QFileIconProvider_type(const QFileIconProvider* _p0, intptr_t _slot, QFileInfo* _p2) { if (_slot) return ((struct miqt_string (__stdcall *)(const QFileIconProvider*, QFileInfo*))_slot)(_p0, _p2); return {}; }
bool miqt_exec_callback_QEventLoop_eventFilter(QEventLoop* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QEventLoop*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGridLayout_setSpacing(QGridLayout* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGridLayout*, int))_slot)(_p0, _p2); }
int miqt_exec_callback_QFileDialog_exec(QFileDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(QFileDialog*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QStyledItemDelegate_event(QStyledItemDelegate* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QStyledItemDelegate*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QSpacerItem_setGeometry(QSpacerItem* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QSpacerItem*, QRect*))_slot)(_p0, _p2); }
QPaintEngine* miqt_exec_callback_QErrorMessage_paintEngine(const QErrorMessage* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QErrorMessage*))_slot)(_p0); return nullptr; }
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractProxyModel_itemData(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((struct miqt_map /* of int to QVariant* */  (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return {}; }
void miqt_exec_callback_QDrag_actionChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSize* miqt_exec_callback_QFrame_sizeHint(const QFrame* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFrame*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QProgressBar_paintEngine(const QProgressBar* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QProgressBar*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QDoubleSpinBox_fixup(const QDoubleSpinBox* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) ((void (__stdcall *)(const QDoubleSpinBox*, struct miqt_string))_slot)(_p0, _p2); }
void miqt_exec_callback_QSplitter_splitterMoved(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QIODevice_channelReadyRead(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QUndoGroup_redoTextChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
QPaintEngine* miqt_exec_callback_QWidget_paintEngine(const QWidget* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QWidget*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QFrame_hasHeightForWidth(const QFrame* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QFrame*))_slot)(_p0); return false; }
bool miqt_exec_callback_QAbstractScrollArea_event(QAbstractScrollArea* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QAbstractScrollArea*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QApplication_event(QApplication* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QApplication*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QWindow_maximumWidthChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QLayoutItem* miqt_exec_callback_QGridLayout_itemAt(const QGridLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(const QGridLayout*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QSpinBox_eventFilter(QSpinBox* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QSpinBox*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QAbstractItemModel_columnCount(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((int (__stdcall *)(const QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QAbstractProxyModel_columnCount(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((int (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return 0; }
QPalette* miqt_exec_callback_QStyle_standardPalette(const QStyle* _p0, intptr_t _slot) { if (_slot) return ((QPalette* (__stdcall *)(const QStyle*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsScale_yScaleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QHeaderView_sectionDoubleClicked(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QStackedLayout_currentChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QStyleHints_mousePressAndHoldIntervalChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QAbstractSlider_actionTriggered(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QLayout* miqt_exec_callback_QBoxLayout_layout(QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QBoxLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFileDialog_directoryEntered(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QFileDialog_hasHeightForWidth(const QFileDialog* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QFileDialog*))_slot)(_p0); return false; }
bool miqt_exec_callback_QSplashScreen_eventFilter(QSplashScreen* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QSplashScreen*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QAbstractProxyModel_fetchMore(QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) ((void (__stdcall *)(QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); }
QPaintEvent* miqt_exec_callback_QPaintEvent_clone(const QPaintEvent* _p0, intptr_t _slot) { if (_slot) return ((QPaintEvent* (__stdcall *)(const QPaintEvent*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QLayout_invalidate(QLayout* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QLayout*))_slot)(_p0); }
void miqt_exec_callback_QHBoxLayout_setSpacing(QHBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QHBoxLayout*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QToolBar_iconSizeChanged(intptr_t _slot, QSize* _p1) { if (_slot) ((void (__stdcall *)(QSize*))_slot)(_p1); }
bool miqt_exec_callback_QTimeLine_event(QTimeLine* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTimeLine*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QGuiApplication_screenRemoved(intptr_t _slot, QScreen* _p1) { if (_slot) ((void (__stdcall *)(QScreen*))_slot)(_p1); }
bool miqt_exec_callback_QSplashScreen_hasHeightForWidth(const QSplashScreen* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QSplashScreen*))_slot)(_p0); return false; }
void miqt_exec_callback_QToolBar_allowedAreasChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QVariant* miqt_exec_callback_QDialog_inputMethodQuery(const QDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QDialog*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QSpinBox_event(QSpinBox* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QSpinBox*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QIconEngine_actualSize(QIconEngine* _p0, intptr_t _slot, QSize* _p2, int _p3, int _p4) { if (_slot) return ((QSize* (__stdcall *)(QIconEngine*, QSize*, int, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
bool miqt_exec_callback_QUndoCommand_mergeWith(QUndoCommand* _p0, intptr_t _slot, QUndoCommand* _p2) { if (_slot) return ((bool (__stdcall *)(QUndoCommand*, QUndoCommand*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QDialogButtonBox_helpRequested(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QFileDialog_accept(QFileDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QFileDialog*))_slot)(_p0); }
bool miqt_exec_callback_QAbstractProxyModel_setData(QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2, QVariant* _p3, int _p4) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, QModelIndex*, QVariant*, int))_slot)(_p0, _p2, _p3, _p4); return false; }
QWheelEvent* miqt_exec_callback_QWheelEvent_clone(const QWheelEvent* _p0, intptr_t _slot) { if (_slot) return ((QWheelEvent* (__stdcall *)(const QWheelEvent*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QGroupBox_heightForWidth(const QGroupBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QGroupBox*, int))_slot)(_p0, _p2); return 0; }
QSize* miqt_exec_callback_QLabel_sizeHint(const QLabel* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLabel*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QUndoGroup_event(QUndoGroup* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QUndoGroup*, QEvent*))_slot)(_p0, _p2); return false; }
QLayout* miqt_exec_callback_QSpacerItem_layout(QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QSpacerItem*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QInputDialog_inputMethodQuery(const QInputDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QInputDialog*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QMainWindow_toolButtonStyleChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QPaintEngine* miqt_exec_callback_QTextEdit_paintEngine(const QTextEdit* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QTextEdit*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QWidgetAction_eventFilter(QWidgetAction* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QWidgetAction*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QDateEdit_hasHeightForWidth(const QDateEdit* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QDateEdit*))_slot)(_p0); return false; }
void miqt_exec_callback_QDockWidget_dockLocationChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QFormLayout_hasHeightForWidth(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QFormLayout*))_slot)(_p0); return false; }
QPainterPath* miqt_exec_callback_QGraphicsTextItem_opaqueArea(const QGraphicsTextItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsTextItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QMessageBox_accept(QMessageBox* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QMessageBox*))_slot)(_p0); }
void miqt_exec_callback_QDialogButtonBox_setVisible(QDialogButtonBox* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDialogButtonBox*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QLineEdit_editingFinished(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QStyleHints_wheelScrollLinesChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSize* miqt_exec_callback_QRubberBand_minimumSizeHint(const QRubberBand* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QRubberBand*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QScrollArea_eventFilter(QScrollArea* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QScrollArea*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QRhiWidget_fixedColorBufferSizeChanged(intptr_t _slot, QSize* _p1) { if (_slot) ((void (__stdcall *)(QSize*))_slot)(_p1); }
void miqt_exec_callback_QInputMethodEvent_setAccepted(QInputMethodEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QInputMethodEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QDateTimeEdit_clear(QDateTimeEdit* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QDateTimeEdit*))_slot)(_p0); }
bool miqt_exec_callback_QGraphicsSimpleTextItem_isObscuredBy(const QGraphicsSimpleTextItem* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsSimpleTextItem*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QKeySequenceEdit_setVisible(QKeySequenceEdit* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QKeySequenceEdit*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QLabel_linkHovered(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
void miqt_exec_callback_QUndoGroup_undoTextChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QErrorMessage_hasHeightForWidth(const QErrorMessage* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QErrorMessage*))_slot)(_p0); return false; }
bool miqt_exec_callback_QAbstractItemModel_canFetchMore(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((bool (__stdcall *)(const QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QGridLayout_heightForWidth(const QGridLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QGridLayout*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QComboBox_event(QComboBox* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QComboBox*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QWindow_modalityChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QDateTimeEdit_stepBy(QDateTimeEdit* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QDateTimeEdit*, int))_slot)(_p0, _p2); }
int miqt_exec_callback_QMdiSubWindow_heightForWidth(const QMdiSubWindow* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QMdiSubWindow*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QStackedLayout_setGeometry(QStackedLayout* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QStackedLayout*, QRect*))_slot)(_p0, _p2); }
void miqt_exec_callback_QIODevice_channelBytesWritten(intptr_t _slot, int _p1, long long _p2) { if (_slot) ((void (__stdcall *)(int, long long))_slot)(_p1, _p2); }
void miqt_exec_callback_QAbstractEventDispatcher_awake(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QAbstractTextDocumentLayout_update(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QAbstractButton_clickedWithChecked(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
int miqt_exec_callback_QDockWidget_devType(const QDockWidget* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QDockWidget*))_slot)(_p0); return 0; }
void miqt_exec_callback_QToolBar_orientationChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QClipboard_selectionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QHBoxLayout_eventFilter(QHBoxLayout* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QHBoxLayout*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QDialogButtonBox_devType(const QDialogButtonBox* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QDialogButtonBox*))_slot)(_p0); return 0; }
void miqt_exec_callback_QGraphicsObject_xChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QGraphicsLineItem_collidesWithPath(const QGraphicsLineItem* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsLineItem*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QProgressDialog_sizeHint(const QProgressDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QProgressDialog*))_slot)(_p0); return nullptr; }
QShowEvent* miqt_exec_callback_QShowEvent_clone(const QShowEvent* _p0, intptr_t _slot) { if (_slot) return ((QShowEvent* (__stdcall *)(const QShowEvent*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QSpinBox_setVisible(QSpinBox* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QSpinBox*, bool))_slot)(_p0, _p2); }
int miqt_exec_callback_QLayout_indexOf(const QLayout* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) return ((int (__stdcall *)(const QLayout*, QWidget*))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QTextBrowser_forwardAvailable(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
bool miqt_exec_callback_QWizardPage_eventFilter(QWizardPage* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QWizardPage*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QFileSystemModel_supportedDropActions(const QFileSystemModel* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFileSystemModel*))_slot)(_p0); return 0; }
void miqt_exec_callback_QAbstractItemView_viewportEntered(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QSpacerItem_invalidate(QSpacerItem* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QSpacerItem*))_slot)(_p0); }
void miqt_exec_callback_QHBoxLayout_invalidate(QHBoxLayout* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QHBoxLayout*))_slot)(_p0); }
bool miqt_exec_callback_QGraphicsObject_collidesWithItem(const QGraphicsObject* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsObject*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QSlider_heightForWidth(const QSlider* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QSlider*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QFocusFrame_event(QFocusFrame* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QFocusFrame*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QGraphicsRotation_originChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QHBoxLayout_minimumHeightForWidth(const QHBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QHBoxLayout*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QDialog_finished(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QLCDNumber_event(QLCDNumber* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QLCDNumber*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QTimeEdit_fixup(const QTimeEdit* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) ((void (__stdcall *)(const QTimeEdit*, struct miqt_string))_slot)(_p0, _p2); }
QSize* miqt_exec_callback_QDial_sizeHint(const QDial* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDial*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QDial_minimumSizeHint(const QDial* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDial*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QErrorMessage_heightForWidth(const QErrorMessage* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QErrorMessage*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QLineEdit_event(QLineEdit* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QLineEdit*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QHBoxLayout_isEmpty(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return false; }
struct miqt_string miqt_exec_callback_QItemEditorFactory_valuePropertyName(const QItemEditorFactory* _p0, intptr_t _slot, int _p2) { if (_slot) return ((struct miqt_string (__stdcall *)(const QItemEditorFactory*, int))_slot)(_p0, _p2); return {}; }
void miqt_exec_callback_QListWidget_itemEntered(intptr_t _slot, QListWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QListWidgetItem*))_slot)(_p1); }
void miqt_exec_callback_QMenu_aboutToShow(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QWidgetItem_expandingDirections(const QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QWidgetItem*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QHBoxLayout_hasHeightForWidth(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return false; }
bool miqt_exec_callback_QGraphicsScene_eventFilter(QGraphicsScene* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGraphicsScene*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QMdiArea_setVisible(QMdiArea* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QMdiArea*, bool))_slot)(_p0, _p2); }
QSize* miqt_exec_callback_QSpinBox_minimumSizeHint(const QSpinBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSpinBox*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QImage_paintEngine(const QImage* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QImage*))_slot)(_p0); return nullptr; }
QWidget* miqt_exec_callback_QLayout_widget(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QLayout*))_slot)(_p0); return nullptr; }
QGesture* miqt_exec_callback_QGestureRecognizer_create(QGestureRecognizer* _p0, intptr_t _slot, QObject* _p2) { if (_slot) return ((QGesture* (__stdcall *)(QGestureRecognizer*, QObject*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QKeySequenceEdit_keySequenceChanged(intptr_t _slot, QKeySequence* _p1) { if (_slot) ((void (__stdcall *)(QKeySequence*))_slot)(_p1); }
void miqt_exec_callback_QListWidget_currentItemChanged(intptr_t _slot, QListWidgetItem* _p1, QListWidgetItem* _p2) { if (_slot) ((void (__stdcall *)(QListWidgetItem*, QListWidgetItem*))_slot)(_p1, _p2); }
void miqt_exec_callback_QProxyStyle_polishWithPal(QProxyStyle* _p0, intptr_t _slot, QPalette* _p2) { if (_slot) ((void (__stdcall *)(QProxyStyle*, QPalette*))_slot)(_p0, _p2); }
QPaintEngine* miqt_exec_callback_QLabel_paintEngine(const QLabel* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QLabel*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAbstractScrollArea_setupViewport(QAbstractScrollArea* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QAbstractScrollArea*, QWidget*))_slot)(_p0, _p2); }
void miqt_exec_callback_QWindow_contentOrientationChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSize* miqt_exec_callback_QWidgetItem_maximumSize(const QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWidgetItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QPlainTextEdit_modificationChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QWindow_safeAreaMarginsChanged(intptr_t _slot, QMargins* _p1) { if (_slot) ((void (__stdcall *)(QMargins*))_slot)(_p1); }
QSize* miqt_exec_callback_QAbstractSpinBox_sizeHint(const QAbstractSpinBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QAbstractSpinBox*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QFocusFrame_sizeHint(const QFocusFrame* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFocusFrame*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QAbstractItemModel_span(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QSize* (__stdcall *)(const QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
int miqt_exec_callback_QMenuBar_heightForWidth(const QMenuBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QMenuBar*, int))_slot)(_p0, _p2); return 0; }
QPaintEngine* miqt_exec_callback_QSpinBox_paintEngine(const QSpinBox* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QSpinBox*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QWizard_exec(QWizard* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(QWizard*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QAbstractItemModel_dropMimeData(QAbstractItemModel* _p0, intptr_t _slot, QMimeData* _p2, int _p3, int _p4, int _p5, QModelIndex* _p6) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, QMimeData*, int, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
void miqt_exec_callback_QStyle_polishWithApplication(QStyle* _p0, intptr_t _slot, QApplication* _p2) { if (_slot) ((void (__stdcall *)(QStyle*, QApplication*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QGridLayout_hasHeightForWidth(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QGridLayout*))_slot)(_p0); return false; }
void miqt_exec_callback_QGraphicsObject_parentChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QTreeWidget_itemChanged(intptr_t _slot, QTreeWidgetItem* _p1, int _p2) { if (_slot) ((void (__stdcall *)(QTreeWidgetItem*, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QWizard_pageRemoved(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QModelIndex* miqt_exec_callback_QAbstractProxyModel_buddy(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QModelIndex* (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QIODevice_readChannelFinished(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QAbstractSpinBox_setVisible(QAbstractSpinBox* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QAbstractSpinBox*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QRhiWidget_event(QRhiWidget* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QRhiWidget*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QSlider_hasHeightForWidth(const QSlider* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QSlider*))_slot)(_p0); return false; }
int miqt_exec_callback_QBoxLayout_count(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QBoxLayout*))_slot)(_p0); return 0; }
void miqt_exec_callback_QWizard_helpRequested(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QAbstractProxyModel_moveRows(QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3, int _p4, QModelIndex* _p5, int _p6) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, QModelIndex*, int, int, QModelIndex*, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
void miqt_exec_callback_QPicture_setData(QPicture* _p0, intptr_t _slot, const char* _p2, unsigned int _p3) { if (_slot) ((void (__stdcall *)(QPicture*, const char*, unsigned int))_slot)(_p0, _p2, _p3); }
QLayoutItem* miqt_exec_callback_QBoxLayout_takeAt(QBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(QBoxLayout*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QTableWidget_cellDoubleClicked(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QAbstractItemView_pressed(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
bool miqt_exec_callback_QTimer_eventFilter(QTimer* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTimer*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QAction_triggered(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QTimeEdit_userTimeChanged(intptr_t _slot, QTime* _p1) { if (_slot) ((void (__stdcall *)(QTime*))_slot)(_p1); }
void miqt_exec_callback_QGraphicsSceneHelpEvent_setAccepted(QGraphicsSceneHelpEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGraphicsSceneHelpEvent*, bool))_slot)(_p0, _p2); }
int miqt_exec_callback_QLCDNumber_devType(const QLCDNumber* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QLCDNumber*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QStackedWidget_hasHeightForWidth(const QStackedWidget* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QStackedWidget*))_slot)(_p0); return false; }
void miqt_exec_callback_QDateEdit_clear(QDateEdit* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QDateEdit*))_slot)(_p0); }
bool miqt_exec_callback_QAbstractItemModel_canDropMimeData(const QAbstractItemModel* _p0, intptr_t _slot, QMimeData* _p2, int _p3, int _p4, int _p5, QModelIndex* _p6) { if (_slot) return ((bool (__stdcall *)(const QAbstractItemModel*, QMimeData*, int, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
void miqt_exec_callback_QSplashScreen_messageChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QSplitterHandle_hasHeightForWidth(const QSplitterHandle* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QSplitterHandle*))_slot)(_p0); return false; }
int miqt_exec_callback_QAbstractItemModel_supportedDragActions(const QAbstractItemModel* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QAbstractItemModel*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QTextTable_eventFilter(QTextTable* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTextTable*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGraphicsScene_selectionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QTextEdit_cursorPositionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QAbstractItemModel_event(QAbstractItemModel* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QFileSystemModel_insertRows(QFileSystemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
QPaintEngine* miqt_exec_callback_QPicture_paintEngine(const QPicture* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QPicture*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QButtonGroup_idPressed(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QCalendarWidget_event(QCalendarWidget* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QCalendarWidget*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QDialog_accepted(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QColorDialog_open(QColorDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QColorDialog*))_slot)(_p0); }
void miqt_exec_callback_QSplitter_setVisible(QSplitter* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QSplitter*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QGesture_eventFilter(QGesture* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGesture*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QScrollArea_setVisible(QScrollArea* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QScrollArea*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QTextDocument_contentsChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QAbstractSpinBox_devType(const QAbstractSpinBox* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QAbstractSpinBox*))_slot)(_p0); return 0; }
QLayoutItem* miqt_exec_callback_QVBoxLayout_itemAt(const QVBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(const QVBoxLayout*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QDateEdit_stepBy(QDateEdit* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QDateEdit*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QPlainTextEdit_setupViewport(QPlainTextEdit* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QPlainTextEdit*, QWidget*))_slot)(_p0, _p2); }
QSpacerItem* miqt_exec_callback_QWidgetItem_spacerItem(QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QWidgetItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsLineItem_isObscuredBy(const QGraphicsLineItem* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsLineItem*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
QRect* miqt_exec_callback_QWidgetItem_geometry(const QWidgetItem* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QWidgetItem*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QWidgetItem_heightForWidth(const QWidgetItem* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QWidgetItem*, int))_slot)(_p0, _p2); return 0; }
QLayoutItem* miqt_exec_callback_QGridLayout_takeAt(QGridLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(QGridLayout*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QFontDialog_done(QFontDialog* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QFontDialog*, int))_slot)(_p0, _p2); }
int miqt_exec_callback_QMenu_devType(const QMenu* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QMenu*))_slot)(_p0); return 0; }
void miqt_exec_callback_QTextEdit_textChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QWizardPage_event(QWizardPage* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QWizardPage*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QAbstractProxyModel_canFetchMore(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((bool (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QToolBox_eventFilter(QToolBox* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QToolBox*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QToolBar_topLevelChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QGuiApplication_applicationStateChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QLayoutItem_invalidate(QLayoutItem* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QLayoutItem*))_slot)(_p0); }
QSize* miqt_exec_callback_QMenu_minimumSizeHint(const QMenu* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMenu*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QPlainTextEdit_event(QPlainTextEdit* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QPlainTextEdit*, QEvent*))_slot)(_p0, _p2); return false; }
QPaintEngine* miqt_exec_callback_QProgressDialog_paintEngine(const QProgressDialog* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QProgressDialog*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QSplitter_event(QSplitter* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QSplitter*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QWizard_hasHeightForWidth(const QWizard* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWizard*))_slot)(_p0); return false; }
void miqt_exec_callback_QSplashScreen_setVisible(QSplashScreen* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QSplashScreen*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QFileSystemModel_moveColumns(QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3, int _p4, QModelIndex* _p5, int _p6) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, QModelIndex*, int, int, QModelIndex*, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
void miqt_exec_callback_QFontComboBox_setModel(QFontComboBox* _p0, intptr_t _slot, QAbstractItemModel* _p2) { if (_slot) ((void (__stdcall *)(QFontComboBox*, QAbstractItemModel*))_slot)(_p0, _p2); }
QRect* miqt_exec_callback_QStackedLayout_geometry(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QStackedLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWizard_setVisible(QWizard* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QWizard*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QDrag_event(QDrag* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QDrag*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QUndoGroup_canRedoChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
QRectF* miqt_exec_callback_QGraphicsLineItem_boundingRect(const QGraphicsLineItem* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsLineItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWizard_done(QWizard* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QWizard*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QTextDocument_blockCountChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QStyleHints_contextMenuTriggerChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QValidator_eventFilter(QValidator* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QValidator*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QPaintEngine* miqt_exec_callback_QCalendarWidget_paintEngine(const QCalendarWidget* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QCalendarWidget*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QDataWidgetMapper_currentIndexChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QDialogButtonBox_accepted(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QFileSystemModel_canFetchMore(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((bool (__stdcall *)(const QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); return false; }
QRect* miqt_exec_callback_QBoxLayout_geometry(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QBoxLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsScale_zScaleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QMdiArea_subWindowActivated(intptr_t _slot, QMdiSubWindow* _p1) { if (_slot) ((void (__stdcall *)(QMdiSubWindow*))_slot)(_p1); }
void miqt_exec_callback_QComboBox_showPopup(QComboBox* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QComboBox*))_slot)(_p0); }
void miqt_exec_callback_QDateEdit_userDateChanged(intptr_t _slot, QDate* _p1) { if (_slot) ((void (__stdcall *)(QDate*))_slot)(_p1); }
QSize* miqt_exec_callback_QDoubleSpinBox_minimumSizeHint(const QDoubleSpinBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDoubleSpinBox*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QWizardPage_minimumSizeHint(const QWizardPage* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWizardPage*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QSplitter_minimumSizeHint(const QSplitter* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSplitter*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAbstractSlider_rangeChanged(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
bool miqt_exec_callback_QAbstractProxyModel_insertRows(QAbstractProxyModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
int miqt_exec_callback_QFileSystemModel_flags(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((int (__stdcall *)(const QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); return 0; }
QPaintEngine* miqt_exec_callback_QTabWidget_paintEngine(const QTabWidget* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QTabWidget*))_slot)(_p0); return nullptr; }
QEvent* miqt_exec_callback_QGraphicsSceneDragDropEvent_clone(const QGraphicsSceneDragDropEvent* _p0, intptr_t _slot) { if (_slot) return ((QEvent* (__stdcall *)(const QGraphicsSceneDragDropEvent*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QMdiArea_sizeHint(const QMdiArea* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMdiArea*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QStatusBar_setVisible(QStatusBar* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QStatusBar*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QComboBox_hidePopup(QComboBox* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QComboBox*))_slot)(_p0); }
void miqt_exec_callback_QInputDialog_reject(QInputDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QInputDialog*))_slot)(_p0); }
QLayout* miqt_exec_callback_QLayout_layout(QLayout* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QLayout*))_slot)(_p0); return nullptr; }
QRectF* miqt_exec_callback_QGraphicsItemGroup_boundingRect(const QGraphicsItemGroup* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsItemGroup*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTreeWidget_currentItemChanged(intptr_t _slot, QTreeWidgetItem* _p1, QTreeWidgetItem* _p2) { if (_slot) ((void (__stdcall *)(QTreeWidgetItem*, QTreeWidgetItem*))_slot)(_p1, _p2); }
int miqt_exec_callback_QFormLayout_expandingDirections(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFormLayout*))_slot)(_p0); return 0; }
void miqt_exec_callback_QProgressDialog_setVisible(QProgressDialog* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QProgressDialog*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QStyledItemDelegate_editorEvent(QStyledItemDelegate* _p0, intptr_t _slot, QEvent* _p2, QAbstractItemModel* _p3, QStyleOptionViewItem* _p4, QModelIndex* _p5) { if (_slot) return ((bool (__stdcall *)(QStyledItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5); return false; }
bool miqt_exec_callback_QAbstractSlider_eventFilter(QAbstractSlider* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QAbstractSlider*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QGridLayout_isEmpty(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QGridLayout*))_slot)(_p0); return false; }
void miqt_exec_callback_QCommonStyle_polishWithWidget(QCommonStyle* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QCommonStyle*, QWidget*))_slot)(_p0, _p2); }
int miqt_exec_callback_QFileDialog_heightForWidth(const QFileDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QFileDialog*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QGraphicsSceneContextMenuEvent_setAccepted(QGraphicsSceneContextMenuEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGraphicsSceneContextMenuEvent*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QLabel_event(QLabel* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QLabel*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QShowEvent_setAccepted(QShowEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QShowEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QWindow_visibleChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QButtonGroup_idReleased(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
int miqt_exec_callback_QFontDialog_devType(const QFontDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFontDialog*))_slot)(_p0); return 0; }
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QFileSystemModel_mimeTypes(const QFileSystemModel* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_array /* of struct miqt_string */  (__stdcall *)(const QFileSystemModel*))_slot)(_p0); return {}; }
void miqt_exec_callback_QTabBar_tabBarDoubleClicked(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QLayoutItem_isEmpty(const QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QLayoutItem*))_slot)(_p0); return false; }
int miqt_exec_callback_QLayout_heightForWidth(const QLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QLayout*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QToolBox_event(QToolBox* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QToolBox*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QBoxLayout_setGeometry(QBoxLayout* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QBoxLayout*, QRect*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QButtonGroup_event(QButtonGroup* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QButtonGroup*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QInputDialog_exec(QInputDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(QInputDialog*))_slot)(_p0); return 0; }
QWidget* miqt_exec_callback_QStyledItemDelegate_createEditor(const QStyledItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QStyleOptionViewItem* _p3, QModelIndex* _p4) { if (_slot) return ((QWidget* (__stdcall *)(const QStyledItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
bool miqt_exec_callback_QGraphicsPixmapItem_isObscuredBy(const QGraphicsPixmapItem* _p0, intptr_t _slot, QGraphicsItem* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPixmapItem*, QGraphicsItem*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QRhiWidget_mirrorVerticallyChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
int miqt_exec_callback_QHBoxLayout_heightForWidth(const QHBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QHBoxLayout*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QDockWidget_setVisible(QDockWidget* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDockWidget*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QFileDialog_urlsSelected(intptr_t _slot, struct miqt_array /* of QUrl* */ _p1) { if (_slot) ((void (__stdcall *)(struct miqt_array /* of QUrl* */))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsItemGroup_collidesWithItem(const QGraphicsItemGroup* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsItemGroup*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGraphicsSceneMouseEvent_setAccepted(QGraphicsSceneMouseEvent* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QGraphicsSceneMouseEvent*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QGuiApplication_focusObjectChanged(intptr_t _slot, QObject* _p1) { if (_slot) ((void (__stdcall *)(QObject*))_slot)(_p1); }
void miqt_exec_callback_QFileSystemModel_directoryLoaded(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
int miqt_exec_callback_QDialogButtonBox_heightForWidth(const QDialogButtonBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QDialogButtonBox*, int))_slot)(_p0, _p2); return 0; }
QPaintEngine* miqt_exec_callback_QFocusFrame_paintEngine(const QFocusFrame* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QFocusFrame*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QStackedWidget_setVisible(QStackedWidget* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QStackedWidget*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QTextBrowser_home(QTextBrowser* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QTextBrowser*))_slot)(_p0); }
void miqt_exec_callback_QWizard_pageAdded(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QAbstractItemModel_headerDataChanged(intptr_t _slot, int _p1, int _p2, int _p3) { if (_slot) ((void (__stdcall *)(int, int, int))_slot)(_p1, _p2, _p3); }
void miqt_exec_callback_QAction_checkableChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QAbstractItemView_iconSizeChanged(intptr_t _slot, QSize* _p1) { if (_slot) ((void (__stdcall *)(QSize*))_slot)(_p1); }
int miqt_exec_callback_QSpacerItem_expandingDirections(const QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QSpacerItem*))_slot)(_p0); return 0; }
QEvent* miqt_exec_callback_QGraphicsSceneMouseEvent_clone(const QGraphicsSceneMouseEvent* _p0, intptr_t _slot) { if (_slot) return ((QEvent* (__stdcall *)(const QGraphicsSceneMouseEvent*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QHeaderView_sectionEntered(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QRect* miqt_exec_callback_QLayout_geometry(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QHeaderView_sortIndicatorChanged(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
QSize* miqt_exec_callback_QDialog_sizeHint(const QDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDialog*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsPolygonItem_collidesWithItem(const QGraphicsPolygonItem* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPolygonItem*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QMimeData_eventFilter(QMimeData* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QMimeData*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QWidget* miqt_exec_callback_QGridLayout_widget(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QGridLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QSpinBox_stepBy(QSpinBox* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QSpinBox*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged2(intptr_t _slot, struct miqt_array /* of QPersistentModelIndex* */ _p1, int _p2) { if (_slot) ((void (__stdcall *)(struct miqt_array /* of QPersistentModelIndex* */, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QItemSelectionModel_currentChanged(intptr_t _slot, QModelIndex* _p1, QModelIndex* _p2) { if (_slot) ((void (__stdcall *)(QModelIndex*, QModelIndex*))_slot)(_p1, _p2); }
int miqt_exec_callback_QFormLayout_minimumHeightForWidth(const QFormLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QFormLayout*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QGraphicsTextItem_collidesWithItem(const QGraphicsTextItem* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsTextItem*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QScrollArea_sizeHint(const QScrollArea* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QScrollArea*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QRubberBand_sizeHint(const QRubberBand* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QRubberBand*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QColumnView_updatePreviewWidget(intptr_t _slot, QModelIndex* _p1) { if (_slot) ((void (__stdcall *)(QModelIndex*))_slot)(_p1); }
bool miqt_exec_callback_QDockWidget_event(QDockWidget* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QDockWidget*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QSplashScreen_devType(const QSplashScreen* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QSplashScreen*))_slot)(_p0); return 0; }
QAccessibleInterface* miqt_exec_callback_QAccessibleEvent_accessibleInterface(const QAccessibleEvent* _p0, intptr_t _slot) { if (_slot) return ((QAccessibleInterface* (__stdcall *)(const QAccessibleEvent*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QSpacerItem_minimumHeightForWidth(const QSpacerItem* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QSpacerItem*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QGraphicsEllipseItem_paint(QGraphicsEllipseItem* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsEllipseItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
bool miqt_exec_callback_QMenu_event(QMenu* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QMenu*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QUndoStack_eventFilter(QUndoStack* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QUndoStack*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QVariant* miqt_exec_callback_QFrame_inputMethodQuery(const QFrame* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QFrame*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QVBoxLayout_eventFilter(QVBoxLayout* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QVBoxLayout*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QDateTimeEdit_heightForWidth(const QDateTimeEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QDateTimeEdit*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QPinchGesture_event(QPinchGesture* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QPinchGesture*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QMovie_stateChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QCommonStyle_eventFilter(QCommonStyle* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QCommonStyle*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QErrorMessage_open(QErrorMessage* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QErrorMessage*))_slot)(_p0); }
void miqt_exec_callback_QAbstractGraphicsShapeItem_advance(QAbstractGraphicsShapeItem* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QAbstractGraphicsShapeItem*, int))_slot)(_p0, _p2); }
QSize* miqt_exec_callback_QScrollArea_minimumSizeHint(const QScrollArea* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QScrollArea*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QLineEdit_textEdited(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
QSize* miqt_exec_callback_QWizard_sizeHint(const QWizard* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWizard*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWizardPage_initializePage(QWizardPage* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QWizardPage*))_slot)(_p0); }
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QFileSystemModel_roleNames(const QFileSystemModel* _p0, intptr_t _slot) { if (_slot) return ((struct miqt_map /* of int to struct miqt_string */  (__stdcall *)(const QFileSystemModel*))_slot)(_p0); return {}; }
bool miqt_exec_callback_QFileSystemModel_setItemData(QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2, struct miqt_map /* of int to QVariant* */ _p3) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, QModelIndex*, struct miqt_map /* of int to QVariant* */))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QHBoxLayout_expandingDirections(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QFocusFrame_minimumSizeHint(const QFocusFrame* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFocusFrame*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsOpacityEffect_opacityChanged(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
void miqt_exec_callback_QInputMethod_visibleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QLayout_addItem(QLayout* _p0, intptr_t _slot, QLayoutItem* _p2) { if (_slot) ((void (__stdcall *)(QLayout*, QLayoutItem*))_slot)(_p0, _p2); }
QRectF* miqt_exec_callback_QGraphicsSimpleTextItem_boundingRect(const QGraphicsSimpleTextItem* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsSimpleTextItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QProxyStyle_eventFilter(QProxyStyle* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QProxyStyle*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QPaintEngine* miqt_exec_callback_QToolBox_paintEngine(const QToolBox* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QToolBox*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QDialog_exec(QDialog* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(QDialog*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QFileDialog_minimumSizeHint(const QFileDialog* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFileDialog*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsTransform_eventFilter(QGraphicsTransform* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGraphicsTransform*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QStackedLayout_sizeHint(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QStackedLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QStyleHints_showShortcutsInContextMenusChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QPlainTextEdit_cursorPositionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QVariant* miqt_exec_callback_QWizardPage_inputMethodQuery(const QWizardPage* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QWizardPage*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QAbstractItemModel_eventFilter(QAbstractItemModel* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QTimeLine_eventFilter(QTimeLine* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QTimeLine*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QTextDocument_clear(QTextDocument* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QTextDocument*))_slot)(_p0); }
QVariant* miqt_exec_callback_QAbstractSlider_inputMethodQuery(const QAbstractSlider* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QAbstractSlider*, int))_slot)(_p0, _p2); return nullptr; }
int miqt_exec_callback_QFrame_heightForWidth(const QFrame* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QFrame*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QAbstractItemDelegate_destroyEditor(const QAbstractItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QModelIndex* _p3) { if (_slot) ((void (__stdcall *)(const QAbstractItemDelegate*, QWidget*, QModelIndex*))_slot)(_p0, _p2, _p3); }
void miqt_exec_callback_QHBoxLayout_setGeometry(QHBoxLayout* _p0, intptr_t _slot, QRect* _p2) { if (_slot) ((void (__stdcall *)(QHBoxLayout*, QRect*))_slot)(_p0, _p2); }
int miqt_exec_callback_QProgressBar_devType(const QProgressBar* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QProgressBar*))_slot)(_p0); return 0; }
void miqt_exec_callback_QAbstractItemModel_dataChanged2(intptr_t _slot, QModelIndex* _p1, QModelIndex* _p2, struct miqt_array /* of int */ _p3) { if (_slot) ((void (__stdcall *)(QModelIndex*, QModelIndex*, struct miqt_array /* of int */))_slot)(_p1, _p2, _p3); }
int miqt_exec_callback_QAbstractProxyModel_supportedDropActions(const QAbstractProxyModel* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QAbstractProxyModel*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QFileSystemModel_hasChildren(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((bool (__stdcall *)(const QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QRubberBand_devType(const QRubberBand* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QRubberBand*))_slot)(_p0); return 0; }
void miqt_exec_callback_QTimeEdit_setVisible(QTimeEdit* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QTimeEdit*, bool))_slot)(_p0, _p2); }
QPaintEngine* miqt_exec_callback_QDoubleSpinBox_paintEngine(const QDoubleSpinBox* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QDoubleSpinBox*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QStackedLayout_spacing(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QStackedLayout*))_slot)(_p0); return 0; }
int miqt_exec_callback_QWizardPage_devType(const QWizardPage* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QWizardPage*))_slot)(_p0); return 0; }
void miqt_exec_callback_QGuiApplication_primaryScreenChanged(intptr_t _slot, QScreen* _p1) { if (_slot) ((void (__stdcall *)(QScreen*))_slot)(_p1); }
void miqt_exec_callback_QStyleHints_mouseQuickSelectionThresholdChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QWidget* miqt_exec_callback_QSpacerItem_widget(const QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QSpacerItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QUndoStack_event(QUndoStack* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QUndoStack*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QStyle_eventFilter(QStyle* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QStyle*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QProgressDialog_canceled(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QToolBox_hasHeightForWidth(const QToolBox* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QToolBox*))_slot)(_p0); return false; }
void miqt_exec_callback_QMovie_error(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsObject_contains(const QGraphicsObject* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsObject*, QPointF*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QKeySequenceEdit_event(QKeySequenceEdit* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QKeySequenceEdit*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QProgressBar_sizeHint(const QProgressBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QProgressBar*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QTextBrowser_historyChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
double miqt_exec_callback_QTimeLine_valueForTime(const QTimeLine* _p0, intptr_t _slot, int _p2) { if (_slot) return ((double (__stdcall *)(const QTimeLine*, int))_slot)(_p0, _p2); return 0.0; }
bool miqt_exec_callback_QTextTable_event(QTextTable* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTextTable*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QSlider_minimumSizeHint(const QSlider* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSlider*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QGridLayout_sizeHint(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QGridLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QPanGesture_eventFilter(QPanGesture* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QPanGesture*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QWidgetAction_event(QWidgetAction* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QWidgetAction*, QEvent*))_slot)(_p0, _p2); return false; }
QVariant* miqt_exec_callback_QScrollArea_inputMethodQuery(const QScrollArea* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QScrollArea*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QWizard_reject(QWizard* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QWizard*))_slot)(_p0); }
bool miqt_exec_callback_QSystemTrayIcon_eventFilter(QSystemTrayIcon* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QSystemTrayIcon*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QScrollBar_minimumSizeHint(const QScrollBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QScrollBar*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QAbstractItemModel_moveRows(QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3, int _p4, QModelIndex* _p5, int _p6) { if (_slot) return ((bool (__stdcall *)(QAbstractItemModel*, QModelIndex*, int, int, QModelIndex*, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
int miqt_exec_callback_QDial_heightForWidth(const QDial* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QDial*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QIconEngine_addFile(QIconEngine* _p0, intptr_t _slot, struct miqt_string _p2, QSize* _p3, int _p4, int _p5) { if (_slot) ((void (__stdcall *)(QIconEngine*, struct miqt_string, QSize*, int, int))_slot)(_p0, _p2, _p3, _p4, _p5); }
QPainterPath* miqt_exec_callback_QGraphicsLineItem_opaqueArea(const QGraphicsLineItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsLineItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsSimpleTextItem_collidesWithItem(const QGraphicsSimpleTextItem* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsSimpleTextItem*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QStyleHints_mouseDoubleClickIntervalChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QColorDialog_done(QColorDialog* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QColorDialog*, int))_slot)(_p0, _p2); }
QModelIndex* miqt_exec_callback_QFileSystemModel_buddy(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QModelIndex* (__stdcall *)(const QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QCommonStyle_polish(QCommonStyle* _p0, intptr_t _slot, QPalette* _p2) { if (_slot) ((void (__stdcall *)(QCommonStyle*, QPalette*))_slot)(_p0, _p2); }
QPainterPath* miqt_exec_callback_QGraphicsRectItem_shape(const QGraphicsRectItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsRectItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsPixmapItem_paint(QGraphicsPixmapItem* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsPixmapItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
QSize* miqt_exec_callback_QBoxLayout_maximumSize(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QBoxLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QFontComboBox_hasHeightForWidth(const QFontComboBox* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QFontComboBox*))_slot)(_p0); return false; }
QPainterPath* miqt_exec_callback_QGraphicsPixmapItem_shape(const QGraphicsPixmapItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsPixmapItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsRotation_event(QGraphicsRotation* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGraphicsRotation*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QFocusFrame_setVisible(QFocusFrame* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QFocusFrame*, bool))_slot)(_p0, _p2); }
QRectF* miqt_exec_callback_QGraphicsTextItem_boundingRect(const QGraphicsTextItem* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsTextItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QAbstractProxyModel_setItemData(QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2, struct miqt_map /* of int to QVariant* */ _p3) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, QModelIndex*, struct miqt_map /* of int to QVariant* */))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QItemSelectionModel_reset(QItemSelectionModel* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QItemSelectionModel*))_slot)(_p0); }
void miqt_exec_callback_QScreen_availableGeometryChanged(intptr_t _slot, QRect* _p1) { if (_slot) ((void (__stdcall *)(QRect*))_slot)(_p1); }
void miqt_exec_callback_QAction_changed(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QSize* miqt_exec_callback_QDockWidget_sizeHint(const QDockWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDockWidget*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QSpacerItem_heightForWidth(const QSpacerItem* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QSpacerItem*, int))_slot)(_p0, _p2); return 0; }
QSize* miqt_exec_callback_QBoxLayout_sizeHint(const QBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QBoxLayout*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QDialogButtonBox_inputMethodQuery(const QDialogButtonBox* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QDialogButtonBox*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QAbstractButton_pressed(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QDateTimeEdit_eventFilter(QDateTimeEdit* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QDateTimeEdit*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QDoubleSpinBox_setVisible(QDoubleSpinBox* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDoubleSpinBox*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QStyle_polish(QStyle* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) ((void (__stdcall *)(QStyle*, QWidget*))_slot)(_p0, _p2); }
int miqt_exec_callback_QTimeEdit_heightForWidth(const QTimeEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QTimeEdit*, int))_slot)(_p0, _p2); return 0; }
QPainterPath* miqt_exec_callback_QAbstractGraphicsShapeItem_shape(const QAbstractGraphicsShapeItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QAbstractGraphicsShapeItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QMenu_triggered(intptr_t _slot, QAction* _p1) { if (_slot) ((void (__stdcall *)(QAction*))_slot)(_p1); }
QSize* miqt_exec_callback_QProgressBar_minimumSizeHint(const QProgressBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QProgressBar*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QLayout_sizeHint(const QLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QLayout*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QDateTimeEdit_minimumSizeHint(const QDateTimeEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QDateTimeEdit*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QFileSystemModel_dropMimeData(QFileSystemModel* _p0, intptr_t _slot, QMimeData* _p2, int _p3, int _p4, int _p5, QModelIndex* _p6) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, QMimeData*, int, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return false; }
void miqt_exec_callback_QProxyStyle_polishWithApp(QProxyStyle* _p0, intptr_t _slot, QApplication* _p2) { if (_slot) ((void (__stdcall *)(QProxyStyle*, QApplication*))_slot)(_p0, _p2); }
int miqt_exec_callback_QAbstractProxyModel_supportedDragActions(const QAbstractProxyModel* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QAbstractProxyModel*))_slot)(_p0); return 0; }
void miqt_exec_callback_QScreen_virtualGeometryChanged(intptr_t _slot, QRect* _p1) { if (_slot) ((void (__stdcall *)(QRect*))_slot)(_p1); }
int miqt_exec_callback_QGridLayout_minimumHeightForWidth(const QGridLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QGridLayout*, int))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QFocusFrame_heightForWidth(const QFocusFrame* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QFocusFrame*, int))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QGraphicsPathItem_type(const QGraphicsPathItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QGraphicsPathItem*))_slot)(_p0); return 0; }
void miqt_exec_callback_QItemSelectionModel_clear(QItemSelectionModel* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QItemSelectionModel*))_slot)(_p0); }
int miqt_exec_callback_QImage_devType(const QImage* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QImage*))_slot)(_p0); return 0; }
QLayoutItem* miqt_exec_callback_QFormLayout_takeAt(QFormLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(QFormLayout*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QListWidget_itemActivated(intptr_t _slot, QListWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QListWidgetItem*))_slot)(_p1); }
QSize* miqt_exec_callback_QMenu_sizeHint(const QMenu* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMenu*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QStackedWidget_currentChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QWindow_widthChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsRectItem_contains(const QGraphicsRectItem* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsRectItem*, QPointF*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QGroupBox_event(QGroupBox* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGroupBox*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QProxyStyle_drawItemPixmap(const QProxyStyle* _p0, intptr_t _slot, QPainter* _p2, QRect* _p3, int _p4, QPixmap* _p5) { if (_slot) ((void (__stdcall *)(const QProxyStyle*, QPainter*, QRect*, int, QPixmap*))_slot)(_p0, _p2, _p3, _p4, _p5); }
int miqt_exec_callback_QAbstractScrollArea_heightForWidth(const QAbstractScrollArea* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QAbstractScrollArea*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QWidget_eventFilter(QWidget* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QWidget*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QSize* miqt_exec_callback_QSlider_sizeHint(const QSlider* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSlider*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QLayoutItem_minimumHeightForWidth(const QLayoutItem* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QLayoutItem*, int))_slot)(_p0, _p2); return 0; }
QVariant* miqt_exec_callback_QToolBar_inputMethodQuery(const QToolBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QToolBar*, int))_slot)(_p0, _p2); return nullptr; }
int miqt_exec_callback_QWizardPage_nextId(const QWizardPage* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QWizardPage*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QGraphicsPathItem_collidesWithPath(const QGraphicsPathItem* _p0, intptr_t _slot, QPainterPath* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPathItem*, QPainterPath*, int))_slot)(_p0, _p2, _p3); return false; }
QRectF* miqt_exec_callback_QGraphicsRectItem_boundingRect(const QGraphicsRectItem* _p0, intptr_t _slot) { if (_slot) return ((QRectF* (__stdcall *)(const QGraphicsRectItem*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QTabWidget_event(QTabWidget* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTabWidget*, QEvent*))_slot)(_p0, _p2); return false; }
QPaintEngine* miqt_exec_callback_QMainWindow_paintEngine(const QMainWindow* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QMainWindow*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QTabBar_minimumSizeHint(const QTabBar* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QTabBar*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGraphicsPathItem_paint(QGraphicsPathItem* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsPathItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
QSize* miqt_exec_callback_QTextEdit_sizeHint(const QTextEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QTextEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QAbstractItemModel_fetchMore(QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) ((void (__stdcall *)(QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); }
void miqt_exec_callback_QAbstractItemModel_sort(QAbstractItemModel* _p0, intptr_t _slot, int _p2, int _p3) { if (_slot) ((void (__stdcall *)(QAbstractItemModel*, int, int))_slot)(_p0, _p2, _p3); }
void miqt_exec_callback_QDial_setVisible(QDial* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QDial*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QGraphicsOpacityEffect_opacityMaskChanged(intptr_t _slot, QBrush* _p1) { if (_slot) ((void (__stdcall *)(QBrush*))_slot)(_p1); }
bool miqt_exec_callback_QMdiSubWindow_event(QMdiSubWindow* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QMdiSubWindow*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QMessageBox_buttonClicked(intptr_t _slot, QAbstractButton* _p1) { if (_slot) ((void (__stdcall *)(QAbstractButton*))_slot)(_p1); }
void miqt_exec_callback_QInputDialog_accept(QInputDialog* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QInputDialog*))_slot)(_p0); }
int miqt_exec_callback_QVBoxLayout_expandingDirections(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return 0; }
void miqt_exec_callback_QGraphicsObject_yChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QGraphicsWidget_layoutChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QScrollArea_focusNextPrevChild(QScrollArea* _p0, intptr_t _slot, bool _p2) { if (_slot) return ((bool (__stdcall *)(QScrollArea*, bool))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QSystemTrayIcon_event(QSystemTrayIcon* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QSystemTrayIcon*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QHBoxLayout_indexOf(const QHBoxLayout* _p0, intptr_t _slot, QWidget* _p2) { if (_slot) return ((int (__stdcall *)(const QHBoxLayout*, QWidget*))_slot)(_p0, _p2); return 0; }
QVariant* miqt_exec_callback_QErrorMessage_inputMethodQuery(const QErrorMessage* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QErrorMessage*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QObject_destroyed(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QMovie_finished(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QPaintEngine* miqt_exec_callback_QComboBox_paintEngine(const QComboBox* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QComboBox*))_slot)(_p0); return nullptr; }
QModelIndex* miqt_exec_callback_QAbstractItemModel_buddy(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((QModelIndex* (__stdcall *)(const QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QTableWidget_cellPressed(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QMovie_started(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QTapAndHoldGesture_event(QTapAndHoldGesture* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTapAndHoldGesture*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QGraphicsRotation_axisChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QScroller_scrollerPropertiesChanged(intptr_t _slot, QScrollerProperties* _p1) { if (_slot) ((void (__stdcall *)(QScrollerProperties*))_slot)(_p1); }
int miqt_exec_callback_QToolBar_devType(const QToolBar* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QToolBar*))_slot)(_p0); return 0; }
void miqt_exec_callback_QComboBox_textActivated(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QFontComboBox_event(QFontComboBox* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QFontComboBox*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QAbstractSlider_sliderMoved(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
int miqt_exec_callback_QAbstractSlider_heightForWidth(const QAbstractSlider* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QAbstractSlider*, int))_slot)(_p0, _p2); return 0; }
QSize* miqt_exec_callback_QFrame_minimumSizeHint(const QFrame* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFrame*))_slot)(_p0); return nullptr; }
QLayoutItem* miqt_exec_callback_QLayout_takeAt(QLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(QLayout*, int))_slot)(_p0, _p2); return nullptr; }
QPainterPath* miqt_exec_callback_QGraphicsPathItem_opaqueArea(const QGraphicsPathItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsPathItem*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QPlainTextEdit_selectionChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QUndoStack_undoTextChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
int miqt_exec_callback_QLayoutItem_expandingDirections(const QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QLayoutItem*))_slot)(_p0); return 0; }
void miqt_exec_callback_QColorDialog_currentColorChanged(intptr_t _slot, QColor* _p1) { if (_slot) ((void (__stdcall *)(QColor*))_slot)(_p1); }
bool miqt_exec_callback_QDateEdit_eventFilter(QDateEdit* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QDateEdit*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QVariant* miqt_exec_callback_QTextEdit_inputMethodQuery(const QTextEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QTextEdit*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QSizeGrip_setVisible(QSizeGrip* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QSizeGrip*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QSlider_eventFilter(QSlider* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QSlider*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QColorDialog_event(QColorDialog* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QColorDialog*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QGraphicsScale_scaleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QMainWindow_heightForWidth(const QMainWindow* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QMainWindow*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QMdiSubWindow_windowStateChanged(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
bool miqt_exec_callback_QAbstractProxyModel_removeRows(QAbstractProxyModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
void miqt_exec_callback_QCheckBox_stateChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QVariant* miqt_exec_callback_QFocusFrame_inputMethodQuery(const QFocusFrame* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QFocusFrame*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QLineEdit_textChanged(intptr_t _slot, struct miqt_string _p1) { if (_slot) ((void (__stdcall *)(struct miqt_string))_slot)(_p1); }
bool miqt_exec_callback_QMainWindow_event(QMainWindow* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QMainWindow*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QDoubleSpinBox_clear(QDoubleSpinBox* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QDoubleSpinBox*))_slot)(_p0); }
void miqt_exec_callback_QScreen_physicalDotsPerInchChanged(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
QLayoutItem* miqt_exec_callback_QGridLayout_replaceWidget(QGridLayout* _p0, intptr_t _slot, QWidget* _p2, QWidget* _p3, int _p4) { if (_slot) return ((QLayoutItem* (__stdcall *)(QGridLayout*, QWidget*, QWidget*, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
int miqt_exec_callback_QHBoxLayout_controlTypes(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return 0; }
QSize* miqt_exec_callback_QVBoxLayout_maximumSize(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return nullptr; }
QPaintEngine* miqt_exec_callback_QMenu_paintEngine(const QMenu* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QMenu*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QWizard_inputMethodQuery(const QWizard* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QWizard*, int))_slot)(_p0, _p2); return nullptr; }
QSize* miqt_exec_callback_QAbstractScrollArea_sizeHint(const QAbstractScrollArea* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QAbstractScrollArea*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QVBoxLayout_isEmpty(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return false; }
bool miqt_exec_callback_QWizard_event(QWizard* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QWizard*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QWizardPage_validatePage(QWizardPage* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(QWizardPage*))_slot)(_p0); return false; }
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractProxyModel_match(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3, QVariant* _p4, int _p5, int _p6) { if (_slot) return ((struct miqt_array /* of QModelIndex* */  (__stdcall *)(const QAbstractProxyModel*, QModelIndex*, int, QVariant*, int, int))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return {}; }
QTimerEvent* miqt_exec_callback_QTimerEvent_clone(const QTimerEvent* _p0, intptr_t _slot) { if (_slot) return ((QTimerEvent* (__stdcall *)(const QTimerEvent*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QFileIconProvider_setOptions(QFileIconProvider* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QFileIconProvider*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QAbstractTextDocumentLayout_pageCountChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QRect* miqt_exec_callback_QGridLayout_geometry(const QGridLayout* _p0, intptr_t _slot) { if (_slot) return ((QRect* (__stdcall *)(const QGridLayout*))_slot)(_p0); return nullptr; }
QLayoutItem* miqt_exec_callback_QVBoxLayout_replaceWidget(QVBoxLayout* _p0, intptr_t _slot, QWidget* _p2, QWidget* _p3, int _p4) { if (_slot) return ((QLayoutItem* (__stdcall *)(QVBoxLayout*, QWidget*, QWidget*, int))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
void miqt_exec_callback_QDialogButtonBox_clicked(intptr_t _slot, QAbstractButton* _p1) { if (_slot) ((void (__stdcall *)(QAbstractButton*))_slot)(_p1); }
void miqt_exec_callback_QMenu_setVisible(QMenu* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QMenu*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QStyledItemDelegate_helpEvent(QStyledItemDelegate* _p0, intptr_t _slot, QHelpEvent* _p2, QAbstractItemView* _p3, QStyleOptionViewItem* _p4, QModelIndex* _p5) { if (_slot) return ((bool (__stdcall *)(QStyledItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4, _p5); return false; }
QWidget* miqt_exec_callback_QLayoutItem_widget(const QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QLayoutItem*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QLayout_indexOfWithQLayoutItem(const QLayout* _p0, intptr_t _slot, QLayoutItem* _p2) { if (_slot) return ((int (__stdcall *)(const QLayout*, QLayoutItem*))_slot)(_p0, _p2); return 0; }
int miqt_exec_callback_QVBoxLayout_count(const QVBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QVBoxLayout*))_slot)(_p0); return 0; }
QVariant* miqt_exec_callback_QGraphicsView_inputMethodQuery(const QGraphicsView* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QGraphicsView*, int))_slot)(_p0, _p2); return nullptr; }
QSize* miqt_exec_callback_QMessageBox_sizeHint(const QMessageBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QMessageBox*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QRhiWidget_sizeHint(const QRhiWidget* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QRhiWidget*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QStackedWidget_widgetAdded(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractItemModel_itemData(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((struct miqt_map /* of int to QVariant* */  (__stdcall *)(const QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); return {}; }
void miqt_exec_callback_QInputMethod_anchorRectangleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QDrag_eventFilter(QDrag* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QDrag*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
int miqt_exec_callback_QLayout_minimumHeightForWidth(const QLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QLayout*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QPlainTextEdit_textChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
QPaintEngine* miqt_exec_callback_QSplashScreen_paintEngine(const QSplashScreen* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QSplashScreen*))_slot)(_p0); return nullptr; }
QLayout* miqt_exec_callback_QLayoutItem_layout(QLayoutItem* _p0, intptr_t _slot) { if (_slot) return ((QLayout* (__stdcall *)(QLayoutItem*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QBoxLayout_minimumHeightForWidth(const QBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QBoxLayout*, int))_slot)(_p0, _p2); return 0; }
QPaintEngine* miqt_exec_callback_QRhiWidget_paintEngine(const QRhiWidget* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QRhiWidget*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QUndoGroup_eventFilter(QUndoGroup* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QUndoGroup*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QTabWidget_setVisible(QTabWidget* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QTabWidget*, bool))_slot)(_p0, _p2); }
bool miqt_exec_callback_QHBoxLayout_event(QHBoxLayout* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QHBoxLayout*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QTimeEdit_event(QTimeEdit* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTimeEdit*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QProgressBar_event(QProgressBar* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QProgressBar*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QWheelEvent_isEndEvent(const QWheelEvent* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QWheelEvent*))_slot)(_p0); return false; }
QMimeData* miqt_exec_callback_QFileSystemModel_mimeData(const QFileSystemModel* _p0, intptr_t _slot, struct miqt_array /* of QModelIndex* */ _p2) { if (_slot) return ((QMimeData* (__stdcall *)(const QFileSystemModel*, struct miqt_array /* of QModelIndex* */))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QGraphicsPathItem_advance(QGraphicsPathItem* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsPathItem*, int))_slot)(_p0, _p2); }
QVariant* miqt_exec_callback_QKeySequenceEdit_inputMethodQuery(const QKeySequenceEdit* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QKeySequenceEdit*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QAbstractProxyModel_eventFilter(QAbstractProxyModel* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QAbstractProxyModel*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGuiApplication_fontDatabaseChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
int miqt_exec_callback_QLayoutItem_heightForWidth(const QLayoutItem* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QLayoutItem*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QGraphicsLineItem_advance(QGraphicsLineItem* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsLineItem*, int))_slot)(_p0, _p2); }
void miqt_exec_callback_QRubberBand_setVisible(QRubberBand* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QRubberBand*, bool))_slot)(_p0, _p2); }
QPaintEngine* miqt_exec_callback_QScrollArea_paintEngine(const QScrollArea* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QScrollArea*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QMenuBar_hasHeightForWidth(const QMenuBar* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QMenuBar*))_slot)(_p0); return false; }
void miqt_exec_callback_QToolBar_movableChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
bool miqt_exec_callback_QFileSystemModel_submit(QFileSystemModel* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*))_slot)(_p0); return false; }
void miqt_exec_callback_QTabBar_tabMoved(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
QSize* miqt_exec_callback_QHBoxLayout_minimumSize(const QHBoxLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QHBoxLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QGraphicsTextItem_event(QGraphicsTextItem* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QGraphicsTextItem*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QStackedLayout_setSpacing(QStackedLayout* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QStackedLayout*, int))_slot)(_p0, _p2); }
QVariant* miqt_exec_callback_QColorDialog_inputMethodQuery(const QColorDialog* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QColorDialog*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QLineEdit_inputRejected(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChangedWithParents(intptr_t _slot, struct miqt_array /* of QPersistentModelIndex* */ _p1) { if (_slot) ((void (__stdcall *)(struct miqt_array /* of QPersistentModelIndex* */))_slot)(_p1); }
int miqt_exec_callback_QFileSystemModel_rowCount(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((int (__stdcall *)(const QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QAbstractGraphicsShapeItem_collidesWithItem(const QAbstractGraphicsShapeItem* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QAbstractGraphicsShapeItem*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
bool miqt_exec_callback_QToolBar_eventFilter(QToolBar* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QToolBar*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QWidget_setVisible(QWidget* _p0, intptr_t _slot, bool _p2) { if (_slot) ((void (__stdcall *)(QWidget*, bool))_slot)(_p0, _p2); }
void miqt_exec_callback_QItemDelegate_destroyEditor(const QItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QModelIndex* _p3) { if (_slot) ((void (__stdcall *)(const QItemDelegate*, QWidget*, QModelIndex*))_slot)(_p0, _p2, _p3); }
void miqt_exec_callback_QCoreApplication_organizationNameChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
bool miqt_exec_callback_QGraphicsEllipseItem_collidesWithItem(const QGraphicsEllipseItem* _p0, intptr_t _slot, QGraphicsItem* _p2, int _p3) { if (_slot) return ((bool (__stdcall *)(const QGraphicsEllipseItem*, QGraphicsItem*, int))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGraphicsBlurEffect_blurRadiusChanged(intptr_t _slot, double _p1) { if (_slot) ((void (__stdcall *)(double))_slot)(_p1); }
bool miqt_exec_callback_QGraphicsItemAnimation_eventFilter(QGraphicsItemAnimation* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QGraphicsItemAnimation*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGraphicsRotation_applyTo(const QGraphicsRotation* _p0, intptr_t _slot, QMatrix4x4* _p2) { if (_slot) ((void (__stdcall *)(const QGraphicsRotation*, QMatrix4x4*))_slot)(_p0, _p2); }
void miqt_exec_callback_QHeaderView_sectionHandleDoubleClicked(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
int miqt_exec_callback_QTabBar_devType(const QTabBar* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QTabBar*))_slot)(_p0); return 0; }
bool miqt_exec_callback_QInputDialog_eventFilter(QInputDialog* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QInputDialog*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
QVariant* miqt_exec_callback_QProgressBar_inputMethodQuery(const QProgressBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QProgressBar*, int))_slot)(_p0, _p2); return nullptr; }
bool miqt_exec_callback_QToolBar_hasHeightForWidth(const QToolBar* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QToolBar*))_slot)(_p0); return false; }
bool miqt_exec_callback_QCoreApplication_eventFilter(QCoreApplication* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QCoreApplication*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QAction_triggeredWithChecked(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QLineEdit_cursorPositionChanged(intptr_t _slot, int _p1, int _p2) { if (_slot) ((void (__stdcall *)(int, int))_slot)(_p1, _p2); }
void miqt_exec_callback_QWindow_visibilityChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QAbstractSlider_sliderPressed(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QItemDelegate_setEditorData(const QItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QModelIndex* _p3) { if (_slot) ((void (__stdcall *)(const QItemDelegate*, QWidget*, QModelIndex*))_slot)(_p0, _p2, _p3); }
void miqt_exec_callback_QListWidget_itemDoubleClicked(intptr_t _slot, QListWidgetItem* _p1) { if (_slot) ((void (__stdcall *)(QListWidgetItem*))_slot)(_p1); }
double miqt_exec_callback_QDoubleSpinBox_valueFromText(const QDoubleSpinBox* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) return ((double (__stdcall *)(const QDoubleSpinBox*, struct miqt_string))_slot)(_p0, _p2); return 0.0; }
void miqt_exec_callback_QAbstractProxyModel_setSourceModel(QAbstractProxyModel* _p0, intptr_t _slot, QAbstractItemModel* _p2) { if (_slot) ((void (__stdcall *)(QAbstractProxyModel*, QAbstractItemModel*))_slot)(_p0, _p2); }
bool miqt_exec_callback_QFileSystemModel_removeColumns(QFileSystemModel* _p0, intptr_t _slot, int _p2, int _p3, QModelIndex* _p4) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, int, int, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); return false; }
QLayoutItem* miqt_exec_callback_QVBoxLayout_takeAt(QVBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QLayoutItem* (__stdcall *)(QVBoxLayout*, int))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QUndoStack_canRedoChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
bool miqt_exec_callback_QScrollArea_hasHeightForWidth(const QScrollArea* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QScrollArea*))_slot)(_p0); return false; }
bool miqt_exec_callback_QMessageBox_eventFilter(QMessageBox* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QMessageBox*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QSystemTrayIcon_activated(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
void miqt_exec_callback_QTextBrowser_forward(QTextBrowser* _p0, intptr_t _slot) { if (_slot) ((void (__stdcall *)(QTextBrowser*))_slot)(_p0); }
QPaintEngine* miqt_exec_callback_QBitmap_paintEngine(const QBitmap* _p0, intptr_t _slot) { if (_slot) return ((QPaintEngine* (__stdcall *)(const QBitmap*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QWindow_heightChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
int miqt_exec_callback_QFileSystemModel_supportedDragActions(const QFileSystemModel* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFileSystemModel*))_slot)(_p0); return 0; }
QPixmap* miqt_exec_callback_QCommonStyle_generatedIconPixmap(const QCommonStyle* _p0, intptr_t _slot, int _p2, QPixmap* _p3, QStyleOption* _p4) { if (_slot) return ((QPixmap* (__stdcall *)(const QCommonStyle*, int, QPixmap*, QStyleOption*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
bool miqt_exec_callback_QTextEdit_hasHeightForWidth(const QTextEdit* _p0, intptr_t _slot) { if (_slot) return ((bool (__stdcall *)(const QTextEdit*))_slot)(_p0); return false; }
bool miqt_exec_callback_QSplitterHandle_event(QSplitterHandle* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QSplitterHandle*, QEvent*))_slot)(_p0, _p2); return false; }
void miqt_exec_callback_QGuiApplication_focusWindowChanged(intptr_t _slot, QWindow* _p1) { if (_slot) ((void (__stdcall *)(QWindow*))_slot)(_p1); }
QDragLeaveEvent* miqt_exec_callback_QDragLeaveEvent_clone(const QDragLeaveEvent* _p0, intptr_t _slot) { if (_slot) return ((QDragLeaveEvent* (__stdcall *)(const QDragLeaveEvent*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QScreen_orientationChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
QSize* miqt_exec_callback_QComboBox_minimumSizeHint(const QComboBox* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QComboBox*))_slot)(_p0); return nullptr; }
QEvent* miqt_exec_callback_QGraphicsSceneHoverEvent_clone(const QGraphicsSceneHoverEvent* _p0, intptr_t _slot) { if (_slot) return ((QEvent* (__stdcall *)(const QGraphicsSceneHoverEvent*))_slot)(_p0); return nullptr; }
QVariant* miqt_exec_callback_QScrollBar_inputMethodQuery(const QScrollBar* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QScrollBar*, int))_slot)(_p0, _p2); return nullptr; }
int miqt_exec_callback_QFileSystemModel_columnCount(const QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((int (__stdcall *)(const QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QComboBox_currentIndexChanged(intptr_t _slot, int _p1) { if (_slot) ((void (__stdcall *)(int))_slot)(_p1); }
bool miqt_exec_callback_QStatusBar_event(QStatusBar* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QStatusBar*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QGraphicsPixmapItem_contains(const QGraphicsPixmapItem* _p0, intptr_t _slot, QPointF* _p2) { if (_slot) return ((bool (__stdcall *)(const QGraphicsPixmapItem*, QPointF*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QSplashScreen_sizeHint(const QSplashScreen* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSplashScreen*))_slot)(_p0); return nullptr; }
QSpacerItem* miqt_exec_callback_QSpacerItem_spacerItem(QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((QSpacerItem* (__stdcall *)(QSpacerItem*))_slot)(_p0); return nullptr; }
QRect* miqt_exec_callback_QProxyStyle_itemPixmapRect(const QProxyStyle* _p0, intptr_t _slot, QRect* _p2, int _p3, QPixmap* _p4) { if (_slot) return ((QRect* (__stdcall *)(const QProxyStyle*, QRect*, int, QPixmap*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
int miqt_exec_callback_QStyle_layoutSpacing(const QStyle* _p0, intptr_t _slot, int _p2, int _p3, int _p4, QStyleOption* _p5, QWidget* _p6) { if (_slot) return ((int (__stdcall *)(const QStyle*, int, int, int, QStyleOption*, QWidget*))_slot)(_p0, _p2, _p3, _p4, _p5, _p6); return 0; }
bool miqt_exec_callback_QFileSystemModel_clearItemData(QFileSystemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((bool (__stdcall *)(QFileSystemModel*, QModelIndex*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QAbstractItemDelegate_event(QAbstractItemDelegate* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QAbstractItemDelegate*, QEvent*))_slot)(_p0, _p2); return false; }
QSize* miqt_exec_callback_QWidgetItemV2_maximumSize(const QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QWidgetItemV2*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QErrorMessage_sizeHint(const QErrorMessage* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QErrorMessage*))_slot)(_p0); return nullptr; }
int miqt_exec_callback_QAbstractProxyModel_rowCount(const QAbstractProxyModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((int (__stdcall *)(const QAbstractProxyModel*, QModelIndex*))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QIODevice_readyRead(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QScreen_geometryChanged(intptr_t _slot, QRect* _p1) { if (_slot) ((void (__stdcall *)(QRect*))_slot)(_p1); }
void miqt_exec_callback_QCommonStyle_drawItemPixmap(const QCommonStyle* _p0, intptr_t _slot, QPainter* _p2, QRect* _p3, int _p4, QPixmap* _p5) { if (_slot) ((void (__stdcall *)(const QCommonStyle*, QPainter*, QRect*, int, QPixmap*))_slot)(_p0, _p2, _p3, _p4, _p5); }
int miqt_exec_callback_QFormLayout_spacing(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFormLayout*))_slot)(_p0); return 0; }
QEvent* miqt_exec_callback_QGraphicsSceneHelpEvent_clone(const QGraphicsSceneHelpEvent* _p0, intptr_t _slot) { if (_slot) return ((QEvent* (__stdcall *)(const QGraphicsSceneHelpEvent*))_slot)(_p0); return nullptr; }
QPixmap* miqt_exec_callback_QStyle_generatedIconPixmap(const QStyle* _p0, intptr_t _slot, int _p2, QPixmap* _p3, QStyleOption* _p4) { if (_slot) return ((QPixmap* (__stdcall *)(const QStyle*, int, QPixmap*, QStyleOption*))_slot)(_p0, _p2, _p3, _p4); return nullptr; }
QVariant* miqt_exec_callback_QTabWidget_inputMethodQuery(const QTabWidget* _p0, intptr_t _slot, int _p2) { if (_slot) return ((QVariant* (__stdcall *)(const QTabWidget*, int))_slot)(_p0, _p2); return nullptr; }
int miqt_exec_callback_QSpacerItem_controlTypes(const QSpacerItem* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QSpacerItem*))_slot)(_p0); return 0; }
int miqt_exec_callback_QWidgetItemV2_controlTypes(const QWidgetItemV2* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QWidgetItemV2*))_slot)(_p0); return 0; }
int miqt_exec_callback_QSplashScreen_heightForWidth(const QSplashScreen* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QSplashScreen*, int))_slot)(_p0, _p2); return 0; }
bool miqt_exec_callback_QActionGroup_eventFilter(QActionGroup* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QActionGroup*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QGraphicsRectItem_paint(QGraphicsRectItem* _p0, intptr_t _slot, QPainter* _p2, QStyleOptionGraphicsItem* _p3, QWidget* _p4) { if (_slot) ((void (__stdcall *)(QGraphicsRectItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*))_slot)(_p0, _p2, _p3, _p4); }
void miqt_exec_callback_QGraphicsTextItem_advance(QGraphicsTextItem* _p0, intptr_t _slot, int _p2) { if (_slot) ((void (__stdcall *)(QGraphicsTextItem*, int))_slot)(_p0, _p2); }
QCloseEvent* miqt_exec_callback_QCloseEvent_clone(const QCloseEvent* _p0, intptr_t _slot) { if (_slot) return ((QCloseEvent* (__stdcall *)(const QCloseEvent*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QFormLayout_sizeHint(const QFormLayout* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QFormLayout*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QTranslator_event(QTranslator* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QTranslator*, QEvent*))_slot)(_p0, _p2); return false; }
int miqt_exec_callback_QBoxLayout_heightForWidth(const QBoxLayout* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QBoxLayout*, int))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QStyledItemDelegate_setEditorData(const QStyledItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QModelIndex* _p3) { if (_slot) ((void (__stdcall *)(const QStyledItemDelegate*, QWidget*, QModelIndex*))_slot)(_p0, _p2, _p3); }
int miqt_exec_callback_QAbstractItemModel_rowCount(const QAbstractItemModel* _p0, intptr_t _slot, QModelIndex* _p2) { if (_slot) return ((int (__stdcall *)(const QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2); return 0; }
void miqt_exec_callback_QValidator_fixup(const QValidator* _p0, intptr_t _slot, struct miqt_string _p2) { if (_slot) ((void (__stdcall *)(const QValidator*, struct miqt_string))_slot)(_p0, _p2); }
QPainterPath* miqt_exec_callback_QGraphicsSimpleTextItem_opaqueArea(const QGraphicsSimpleTextItem* _p0, intptr_t _slot) { if (_slot) return ((QPainterPath* (__stdcall *)(const QGraphicsSimpleTextItem*))_slot)(_p0); return nullptr; }
QSize* miqt_exec_callback_QPlainTextEdit_minimumSizeHint(const QPlainTextEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QPlainTextEdit*))_slot)(_p0); return nullptr; }
QWidget* miqt_exec_callback_QStackedLayout_widget(const QStackedLayout* _p0, intptr_t _slot) { if (_slot) return ((QWidget* (__stdcall *)(const QStackedLayout*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QGuiApplication_commitDataRequest(intptr_t _slot, QSessionManager* _p1) { if (_slot) ((void (__stdcall *)(QSessionManager*))_slot)(_p1); }
int miqt_exec_callback_QFontComboBox_devType(const QFontComboBox* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QFontComboBox*))_slot)(_p0); return 0; }
QIcon* miqt_exec_callback_QAbstractFileIconProvider_iconWithQFileInfo(const QAbstractFileIconProvider* _p0, intptr_t _slot, QFileInfo* _p2) { if (_slot) return ((QIcon* (__stdcall *)(const QAbstractFileIconProvider*, QFileInfo*))_slot)(_p0, _p2); return nullptr; }
void miqt_exec_callback_QInputMethod_cursorRectangleChanged(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QFontDialog_currentFontChanged(intptr_t _slot, QFont* _p1) { if (_slot) ((void (__stdcall *)(QFont*))_slot)(_p1); }
void miqt_exec_callback_QStyle_polishWithPalette(QStyle* _p0, intptr_t _slot, QPalette* _p2) { if (_slot) ((void (__stdcall *)(QStyle*, QPalette*))_slot)(_p0, _p2); }
void miqt_exec_callback_QMenu_aboutToHide(intptr_t _slot) { if (_slot) ((void (__stdcall *)(void))_slot)(); }
void miqt_exec_callback_QAbstractItemDelegate_setModelData(const QAbstractItemDelegate* _p0, intptr_t _slot, QWidget* _p2, QAbstractItemModel* _p3, QModelIndex* _p4) { if (_slot) ((void (__stdcall *)(const QAbstractItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*))_slot)(_p0, _p2, _p3, _p4); }
QSize* miqt_exec_callback_QTextEdit_minimumSizeHint(const QTextEdit* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QTextEdit*))_slot)(_p0); return nullptr; }
void miqt_exec_callback_QUndoGroup_canUndoChanged(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QTextEdit_undoAvailable(intptr_t _slot, bool _p1) { if (_slot) ((void (__stdcall *)(bool))_slot)(_p1); }
void miqt_exec_callback_QWindow_transientParentChanged(intptr_t _slot, QWindow* _p1) { if (_slot) ((void (__stdcall *)(QWindow*))_slot)(_p1); }
int miqt_exec_callback_QPlainTextEdit_devType(const QPlainTextEdit* _p0, intptr_t _slot) { if (_slot) return ((int (__stdcall *)(const QPlainTextEdit*))_slot)(_p0); return 0; }
void miqt_exec_callback_QItemSelectionModel_select(QItemSelectionModel* _p0, intptr_t _slot, QModelIndex* _p2, int _p3) { if (_slot) ((void (__stdcall *)(QItemSelectionModel*, QModelIndex*, int))_slot)(_p0, _p2, _p3); }
int miqt_exec_callback_QGraphicsView_heightForWidth(const QGraphicsView* _p0, intptr_t _slot, int _p2) { if (_slot) return ((int (__stdcall *)(const QGraphicsView*, int))_slot)(_p0, _p2); return 0; }
QSize* miqt_exec_callback_QSplitter_sizeHint(const QSplitter* _p0, intptr_t _slot) { if (_slot) return ((QSize* (__stdcall *)(const QSplitter*))_slot)(_p0); return nullptr; }
bool miqt_exec_callback_QShortcut_event(QShortcut* _p0, intptr_t _slot, QEvent* _p2) { if (_slot) return ((bool (__stdcall *)(QShortcut*, QEvent*))_slot)(_p0, _p2); return false; }
bool miqt_exec_callback_QLineEdit_eventFilter(QLineEdit* _p0, intptr_t _slot, QObject* _p2, QEvent* _p3) { if (_slot) return ((bool (__stdcall *)(QLineEdit*, QObject*, QEvent*))_slot)(_p0, _p2, _p3); return false; }
void miqt_exec_callback_QTreeWidget_itemDoubleClicked(intptr_t _slot, QTreeWidgetItem* _p1, int _p2) { if (_slot) ((void (__stdcall *)(QTreeWidgetItem*, int))_slot)(_p1, _p2); }

} // extern "C"
