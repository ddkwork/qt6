#include <QtGui>
#include "gen_QtGui.h"
#include <new>

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QImage_devType(const QImage*, intptr_t);
QPaintEngine* miqt_exec_callback_QImage_paintEngine(const QImage*, intptr_t);
int miqt_exec_callback_QPixmap_devType(const QPixmap*, intptr_t);
QPaintEngine* miqt_exec_callback_QPixmap_paintEngine(const QPixmap*, intptr_t);
QIcon* miqt_exec_callback_QAbstractFileIconProvider_icon(const QAbstractFileIconProvider*, intptr_t, int);
QIcon* miqt_exec_callback_QAbstractFileIconProvider_iconWithQFileInfo(const QAbstractFileIconProvider*, intptr_t, QFileInfo*);
struct miqt_string miqt_exec_callback_QAbstractFileIconProvider_type(const QAbstractFileIconProvider*, intptr_t, QFileInfo*);
void miqt_exec_callback_QAbstractFileIconProvider_setOptions(QAbstractFileIconProvider*, intptr_t, int);
int miqt_exec_callback_QAbstractFileIconProvider_options(const QAbstractFileIconProvider*, intptr_t);
void miqt_exec_callback_QScreen_geometryChanged(intptr_t, QRect*);
void miqt_exec_callback_QScreen_availableGeometryChanged(intptr_t, QRect*);
void miqt_exec_callback_QScreen_physicalSizeChanged(intptr_t, QSizeF*);
void miqt_exec_callback_QScreen_physicalDotsPerInchChanged(intptr_t, double);
void miqt_exec_callback_QScreen_logicalDotsPerInchChanged(intptr_t, double);
void miqt_exec_callback_QScreen_virtualGeometryChanged(intptr_t, QRect*);
void miqt_exec_callback_QScreen_primaryOrientationChanged(intptr_t, int);
void miqt_exec_callback_QScreen_orientationChanged(intptr_t, int);
void miqt_exec_callback_QScreen_refreshRateChanged(intptr_t, double);
void miqt_exec_callback_QInputMethod_cursorRectangleChanged(intptr_t);
void miqt_exec_callback_QInputMethod_anchorRectangleChanged(intptr_t);
void miqt_exec_callback_QInputMethod_keyboardRectangleChanged(intptr_t);
void miqt_exec_callback_QInputMethod_inputItemClipRectangleChanged(intptr_t);
void miqt_exec_callback_QInputMethod_visibleChanged(intptr_t);
void miqt_exec_callback_QInputMethod_animatingChanged(intptr_t);
void miqt_exec_callback_QInputMethod_localeChanged(intptr_t);
void miqt_exec_callback_QInputMethod_inputDirectionChanged(intptr_t, int);
void miqt_exec_callback_QGuiApplication_fontDatabaseChanged(intptr_t);
void miqt_exec_callback_QGuiApplication_screenAdded(intptr_t, QScreen*);
void miqt_exec_callback_QGuiApplication_screenRemoved(intptr_t, QScreen*);
void miqt_exec_callback_QGuiApplication_primaryScreenChanged(intptr_t, QScreen*);
void miqt_exec_callback_QGuiApplication_lastWindowClosed(intptr_t);
void miqt_exec_callback_QGuiApplication_focusObjectChanged(intptr_t, QObject*);
void miqt_exec_callback_QGuiApplication_focusWindowChanged(intptr_t, QWindow*);
void miqt_exec_callback_QGuiApplication_applicationStateChanged(intptr_t, int);
void miqt_exec_callback_QGuiApplication_layoutDirectionChanged(intptr_t, int);
void miqt_exec_callback_QGuiApplication_commitDataRequest(intptr_t, QSessionManager*);
void miqt_exec_callback_QGuiApplication_saveStateRequest(intptr_t, QSessionManager*);
void miqt_exec_callback_QGuiApplication_applicationDisplayNameChanged(intptr_t);
void miqt_exec_callback_QGuiApplication_paletteChanged(intptr_t, QPalette*);
void miqt_exec_callback_QGuiApplication_fontChanged(intptr_t, QFont*);
bool miqt_exec_callback_QGuiApplication_notify(QGuiApplication*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QGuiApplication_event(QGuiApplication*, intptr_t, QEvent*);
bool miqt_exec_callback_QGuiApplication_eventFilter(QGuiApplication*, intptr_t, QObject*, QEvent*);
QEnterEvent* miqt_exec_callback_QEnterEvent_clone(const QEnterEvent*, intptr_t);
QWheelEvent* miqt_exec_callback_QWheelEvent_clone(const QWheelEvent*, intptr_t);
bool miqt_exec_callback_QWheelEvent_isBeginEvent(const QWheelEvent*, intptr_t);
bool miqt_exec_callback_QWheelEvent_isUpdateEvent(const QWheelEvent*, intptr_t);
bool miqt_exec_callback_QWheelEvent_isEndEvent(const QWheelEvent*, intptr_t);
QPaintEvent* miqt_exec_callback_QPaintEvent_clone(const QPaintEvent*, intptr_t);
void miqt_exec_callback_QPaintEvent_setAccepted(QPaintEvent*, intptr_t, bool);
QMoveEvent* miqt_exec_callback_QMoveEvent_clone(const QMoveEvent*, intptr_t);
void miqt_exec_callback_QMoveEvent_setAccepted(QMoveEvent*, intptr_t, bool);
QExposeEvent* miqt_exec_callback_QExposeEvent_clone(const QExposeEvent*, intptr_t);
void miqt_exec_callback_QExposeEvent_setAccepted(QExposeEvent*, intptr_t, bool);
QResizeEvent* miqt_exec_callback_QResizeEvent_clone(const QResizeEvent*, intptr_t);
void miqt_exec_callback_QResizeEvent_setAccepted(QResizeEvent*, intptr_t, bool);
QCloseEvent* miqt_exec_callback_QCloseEvent_clone(const QCloseEvent*, intptr_t);
void miqt_exec_callback_QCloseEvent_setAccepted(QCloseEvent*, intptr_t, bool);
QShowEvent* miqt_exec_callback_QShowEvent_clone(const QShowEvent*, intptr_t);
void miqt_exec_callback_QShowEvent_setAccepted(QShowEvent*, intptr_t, bool);
QHideEvent* miqt_exec_callback_QHideEvent_clone(const QHideEvent*, intptr_t);
void miqt_exec_callback_QHideEvent_setAccepted(QHideEvent*, intptr_t, bool);
QContextMenuEvent* miqt_exec_callback_QContextMenuEvent_clone(const QContextMenuEvent*, intptr_t);
QInputMethodEvent* miqt_exec_callback_QInputMethodEvent_clone(const QInputMethodEvent*, intptr_t);
void miqt_exec_callback_QInputMethodEvent_setAccepted(QInputMethodEvent*, intptr_t, bool);
QDropEvent* miqt_exec_callback_QDropEvent_clone(const QDropEvent*, intptr_t);
void miqt_exec_callback_QDropEvent_setAccepted(QDropEvent*, intptr_t, bool);
QDragMoveEvent* miqt_exec_callback_QDragMoveEvent_clone(const QDragMoveEvent*, intptr_t);
void miqt_exec_callback_QDragMoveEvent_setAccepted(QDragMoveEvent*, intptr_t, bool);
QDragEnterEvent* miqt_exec_callback_QDragEnterEvent_clone(const QDragEnterEvent*, intptr_t);
void miqt_exec_callback_QDragEnterEvent_setAccepted(QDragEnterEvent*, intptr_t, bool);
QDragLeaveEvent* miqt_exec_callback_QDragLeaveEvent_clone(const QDragLeaveEvent*, intptr_t);
void miqt_exec_callback_QDragLeaveEvent_setAccepted(QDragLeaveEvent*, intptr_t, bool);
QActionEvent* miqt_exec_callback_QActionEvent_clone(const QActionEvent*, intptr_t);
void miqt_exec_callback_QActionEvent_setAccepted(QActionEvent*, intptr_t, bool);
void miqt_exec_callback_QTextDocument_contentsChange(intptr_t, int, int, int);
void miqt_exec_callback_QTextDocument_contentsChanged(intptr_t);
void miqt_exec_callback_QTextDocument_undoAvailable(intptr_t, bool);
void miqt_exec_callback_QTextDocument_redoAvailable(intptr_t, bool);
void miqt_exec_callback_QTextDocument_undoCommandAdded(intptr_t);
void miqt_exec_callback_QTextDocument_modificationChanged(intptr_t, bool);
void miqt_exec_callback_QTextDocument_cursorPositionChanged(intptr_t, QTextCursor*);
void miqt_exec_callback_QTextDocument_blockCountChanged(intptr_t, int);
void miqt_exec_callback_QTextDocument_baseUrlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QTextDocument_documentLayoutChanged(intptr_t);
void miqt_exec_callback_QTextDocument_clear(QTextDocument*, intptr_t);
bool miqt_exec_callback_QTextDocument_event(QTextDocument*, intptr_t, QEvent*);
bool miqt_exec_callback_QTextDocument_eventFilter(QTextDocument*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractTextDocumentLayout_update(intptr_t);
void miqt_exec_callback_QAbstractTextDocumentLayout_updateBlock(intptr_t, QTextBlock*);
void miqt_exec_callback_QAbstractTextDocumentLayout_documentSizeChanged(intptr_t, QSizeF*);
void miqt_exec_callback_QAbstractTextDocumentLayout_pageCountChanged(intptr_t, int);
void miqt_exec_callback_QAbstractTextDocumentLayout_updateWithQRectF(intptr_t, QRectF*);
QAccessibleInterface* miqt_exec_callback_QAccessibleEvent_accessibleInterface(const QAccessibleEvent*, intptr_t);
void miqt_exec_callback_QAction_changed(intptr_t);
void miqt_exec_callback_QAction_enabledChanged(intptr_t, bool);
void miqt_exec_callback_QAction_checkableChanged(intptr_t, bool);
void miqt_exec_callback_QAction_visibleChanged(intptr_t);
void miqt_exec_callback_QAction_triggered(intptr_t);
void miqt_exec_callback_QAction_hovered(intptr_t);
void miqt_exec_callback_QAction_toggled(intptr_t, bool);
void miqt_exec_callback_QAction_triggeredWithChecked(intptr_t, bool);
bool miqt_exec_callback_QAction_event(QAction*, intptr_t, QEvent*);
bool miqt_exec_callback_QAction_eventFilter(QAction*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QActionGroup_triggered(intptr_t, QAction*);
void miqt_exec_callback_QActionGroup_hovered(intptr_t, QAction*);
bool miqt_exec_callback_QActionGroup_event(QActionGroup*, intptr_t, QEvent*);
bool miqt_exec_callback_QActionGroup_eventFilter(QActionGroup*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QBitmap_devType(const QBitmap*, intptr_t);
QPaintEngine* miqt_exec_callback_QBitmap_paintEngine(const QBitmap*, intptr_t);
void miqt_exec_callback_QWindow_screenChanged(intptr_t, QScreen*);
void miqt_exec_callback_QWindow_modalityChanged(intptr_t, int);
void miqt_exec_callback_QWindow_flagsChanged(intptr_t, int);
void miqt_exec_callback_QWindow_windowStateChanged(intptr_t, int);
void miqt_exec_callback_QWindow_windowTitleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWindow_xChanged(intptr_t, int);
void miqt_exec_callback_QWindow_yChanged(intptr_t, int);
void miqt_exec_callback_QWindow_widthChanged(intptr_t, int);
void miqt_exec_callback_QWindow_heightChanged(intptr_t, int);
void miqt_exec_callback_QWindow_minimumWidthChanged(intptr_t, int);
void miqt_exec_callback_QWindow_minimumHeightChanged(intptr_t, int);
void miqt_exec_callback_QWindow_maximumWidthChanged(intptr_t, int);
void miqt_exec_callback_QWindow_maximumHeightChanged(intptr_t, int);
void miqt_exec_callback_QWindow_safeAreaMarginsChanged(intptr_t, QMargins*);
void miqt_exec_callback_QWindow_visibleChanged(intptr_t, bool);
void miqt_exec_callback_QWindow_visibilityChanged(intptr_t, int);
void miqt_exec_callback_QWindow_activeChanged(intptr_t);
void miqt_exec_callback_QWindow_contentOrientationChanged(intptr_t, int);
void miqt_exec_callback_QWindow_focusObjectChanged(intptr_t, QObject*);
void miqt_exec_callback_QWindow_opacityChanged(intptr_t, double);
void miqt_exec_callback_QWindow_transientParentChanged(intptr_t, QWindow*);
int miqt_exec_callback_QWindow_surfaceType(const QWindow*, intptr_t);
QSurfaceFormat* miqt_exec_callback_QWindow_format(const QWindow*, intptr_t);
QSize* miqt_exec_callback_QWindow_size(const QWindow*, intptr_t);
QAccessibleInterface* miqt_exec_callback_QWindow_accessibleRoot(const QWindow*, intptr_t);
QObject* miqt_exec_callback_QWindow_focusObject(const QWindow*, intptr_t);
bool miqt_exec_callback_QWindow_event(QWindow*, intptr_t, QEvent*);
bool miqt_exec_callback_QWindow_eventFilter(QWindow*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QClipboard_changed(intptr_t, int);
void miqt_exec_callback_QClipboard_selectionChanged(intptr_t);
void miqt_exec_callback_QClipboard_findBufferChanged(intptr_t);
void miqt_exec_callback_QClipboard_dataChanged(intptr_t);
void miqt_exec_callback_QDrag_actionChanged(intptr_t, int);
void miqt_exec_callback_QDrag_targetChanged(intptr_t, QObject*);
bool miqt_exec_callback_QDrag_event(QDrag*, intptr_t, QEvent*);
bool miqt_exec_callback_QDrag_eventFilter(QDrag*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFileSystemModel_rootPathChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QFileSystemModel_fileRenamed(intptr_t, struct miqt_string, struct miqt_string, struct miqt_string);
void miqt_exec_callback_QFileSystemModel_directoryLoaded(intptr_t, struct miqt_string);
QModelIndex* miqt_exec_callback_QFileSystemModel_index(const QFileSystemModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QFileSystemModel_parent(const QFileSystemModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QFileSystemModel_sibling(const QFileSystemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_hasChildren(const QFileSystemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_canFetchMore(const QFileSystemModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QFileSystemModel_fetchMore(QFileSystemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QFileSystemModel_rowCount(const QFileSystemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QFileSystemModel_columnCount(const QFileSystemModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QFileSystemModel_data(const QFileSystemModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QFileSystemModel_setData(QFileSystemModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QFileSystemModel_headerData(const QFileSystemModel*, intptr_t, int, int, int);
int miqt_exec_callback_QFileSystemModel_flags(const QFileSystemModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QFileSystemModel_sort(QFileSystemModel*, intptr_t, int, int);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QFileSystemModel_mimeTypes(const QFileSystemModel*, intptr_t);
QMimeData* miqt_exec_callback_QFileSystemModel_mimeData(const QFileSystemModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QFileSystemModel_dropMimeData(QFileSystemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QFileSystemModel_supportedDropActions(const QFileSystemModel*, intptr_t);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QFileSystemModel_roleNames(const QFileSystemModel*, intptr_t);
bool miqt_exec_callback_QFileSystemModel_setHeaderData(QFileSystemModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QFileSystemModel_itemData(const QFileSystemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_setItemData(QFileSystemModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QFileSystemModel_clearItemData(QFileSystemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_canDropMimeData(const QFileSystemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QFileSystemModel_supportedDragActions(const QFileSystemModel*, intptr_t);
bool miqt_exec_callback_QFileSystemModel_insertRows(QFileSystemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_insertColumns(QFileSystemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_removeRows(QFileSystemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_removeColumns(QFileSystemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QFileSystemModel_moveRows(QFileSystemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QFileSystemModel_moveColumns(QFileSystemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QFileSystemModel_buddy(const QFileSystemModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QFileSystemModel_match(const QFileSystemModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QFileSystemModel_span(const QFileSystemModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QFileSystemModel_multiData(const QFileSystemModel*, intptr_t, QModelIndex*, QModelRoleDataSpan*);
bool miqt_exec_callback_QFileSystemModel_submit(QFileSystemModel*, intptr_t);
void miqt_exec_callback_QFileSystemModel_revert(QFileSystemModel*, intptr_t);
bool miqt_exec_callback_QFileSystemModel_event(QFileSystemModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QFileSystemModel_eventFilter(QFileSystemModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QIconEngine_paint(QIconEngine*, intptr_t, QPainter*, QRect*, int, int);
QSize* miqt_exec_callback_QIconEngine_actualSize(QIconEngine*, intptr_t, QSize*, int, int);
QPixmap* miqt_exec_callback_QIconEngine_pixmap(QIconEngine*, intptr_t, QSize*, int, int);
void miqt_exec_callback_QIconEngine_addPixmap(QIconEngine*, intptr_t, QPixmap*, int, int);
void miqt_exec_callback_QIconEngine_addFile(QIconEngine*, intptr_t, struct miqt_string, QSize*, int, int);
struct miqt_string miqt_exec_callback_QIconEngine_key(const QIconEngine*, intptr_t);
QIconEngine* miqt_exec_callback_QIconEngine_clone(const QIconEngine*, intptr_t);
bool miqt_exec_callback_QIconEngine_read(QIconEngine*, intptr_t, QDataStream*);
bool miqt_exec_callback_QIconEngine_write(const QIconEngine*, intptr_t, QDataStream*);
struct miqt_array /* of QSize* */  miqt_exec_callback_QIconEngine_availableSizes(QIconEngine*, intptr_t, int, int);
struct miqt_string miqt_exec_callback_QIconEngine_iconName(QIconEngine*, intptr_t);
bool miqt_exec_callback_QIconEngine_isNull(QIconEngine*, intptr_t);
QPixmap* miqt_exec_callback_QIconEngine_scaledPixmap(QIconEngine*, intptr_t, QSize*, int, int, double);
void miqt_exec_callback_QMovie_started(intptr_t);
void miqt_exec_callback_QMovie_resized(intptr_t, QSize*);
void miqt_exec_callback_QMovie_updated(intptr_t, QRect*);
void miqt_exec_callback_QMovie_stateChanged(intptr_t, int);
void miqt_exec_callback_QMovie_error(intptr_t, int);
void miqt_exec_callback_QMovie_finished(intptr_t);
void miqt_exec_callback_QMovie_frameChanged(intptr_t, int);
bool miqt_exec_callback_QMovie_event(QMovie*, intptr_t, QEvent*);
bool miqt_exec_callback_QMovie_eventFilter(QMovie*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QPicture_devType(const QPicture*, intptr_t);
void miqt_exec_callback_QPicture_setData(QPicture*, intptr_t, const char*, unsigned int);
QPaintEngine* miqt_exec_callback_QPicture_paintEngine(const QPicture*, intptr_t);
void miqt_exec_callback_QShortcut_activated(intptr_t);
void miqt_exec_callback_QShortcut_activatedAmbiguously(intptr_t);
bool miqt_exec_callback_QShortcut_event(QShortcut*, intptr_t, QEvent*);
bool miqt_exec_callback_QShortcut_eventFilter(QShortcut*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStyleHints_cursorFlashTimeChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_keyboardInputIntervalChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_mouseDoubleClickIntervalChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_mousePressAndHoldIntervalChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_startDragDistanceChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_startDragTimeChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_tabFocusBehaviorChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_useHoverEffectsChanged(intptr_t, bool);
void miqt_exec_callback_QStyleHints_showShortcutsInContextMenusChanged(intptr_t, bool);
void miqt_exec_callback_QStyleHints_contextMenuTriggerChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_wheelScrollLinesChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_mouseQuickSelectionThresholdChanged(intptr_t, int);
void miqt_exec_callback_QStyleHints_colorSchemeChanged(intptr_t, int);
bool miqt_exec_callback_QTextFrame_event(QTextFrame*, intptr_t, QEvent*);
bool miqt_exec_callback_QTextFrame_eventFilter(QTextFrame*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QTextTable_event(QTextTable*, intptr_t, QEvent*);
bool miqt_exec_callback_QTextTable_eventFilter(QTextTable*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QUndoGroup_activeStackChanged(intptr_t, QUndoStack*);
void miqt_exec_callback_QUndoGroup_indexChanged(intptr_t, int);
void miqt_exec_callback_QUndoGroup_cleanChanged(intptr_t, bool);
void miqt_exec_callback_QUndoGroup_canUndoChanged(intptr_t, bool);
void miqt_exec_callback_QUndoGroup_canRedoChanged(intptr_t, bool);
void miqt_exec_callback_QUndoGroup_undoTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QUndoGroup_redoTextChanged(intptr_t, struct miqt_string);
bool miqt_exec_callback_QUndoGroup_event(QUndoGroup*, intptr_t, QEvent*);
bool miqt_exec_callback_QUndoGroup_eventFilter(QUndoGroup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QUndoCommand_undo(QUndoCommand*, intptr_t);
void miqt_exec_callback_QUndoCommand_redo(QUndoCommand*, intptr_t);
int miqt_exec_callback_QUndoCommand_id(const QUndoCommand*, intptr_t);
bool miqt_exec_callback_QUndoCommand_mergeWith(QUndoCommand*, intptr_t, QUndoCommand*);
void miqt_exec_callback_QUndoStack_indexChanged(intptr_t, int);
void miqt_exec_callback_QUndoStack_cleanChanged(intptr_t, bool);
void miqt_exec_callback_QUndoStack_canUndoChanged(intptr_t, bool);
void miqt_exec_callback_QUndoStack_canRedoChanged(intptr_t, bool);
void miqt_exec_callback_QUndoStack_undoTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QUndoStack_redoTextChanged(intptr_t, struct miqt_string);
bool miqt_exec_callback_QUndoStack_event(QUndoStack*, intptr_t, QEvent*);
bool miqt_exec_callback_QUndoStack_eventFilter(QUndoStack*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QValidator_changed(intptr_t);
void miqt_exec_callback_QValidator_fixup(const QValidator*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QValidator_event(QValidator*, intptr_t, QEvent*);
bool miqt_exec_callback_QValidator_eventFilter(QValidator*, intptr_t, QObject*, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

int QPaintDevice_devType(const QPaintDevice* self) {
	return self->devType();
}

bool QPaintDevice_paintingActive(const QPaintDevice* self) {
	return self->paintingActive();
}

QPaintEngine* QPaintDevice_paintEngine(const QPaintDevice* self) {
	return self->paintEngine();
}

int QPaintDevice_width(const QPaintDevice* self) {
	return self->width();
}

int QPaintDevice_height(const QPaintDevice* self) {
	return self->height();
}

int QPaintDevice_widthMM(const QPaintDevice* self) {
	return self->widthMM();
}

int QPaintDevice_heightMM(const QPaintDevice* self) {
	return self->heightMM();
}

int QPaintDevice_logicalDpiX(const QPaintDevice* self) {
	return self->logicalDpiX();
}

int QPaintDevice_logicalDpiY(const QPaintDevice* self) {
	return self->logicalDpiY();
}

int QPaintDevice_physicalDpiX(const QPaintDevice* self) {
	return self->physicalDpiX();
}

int QPaintDevice_physicalDpiY(const QPaintDevice* self) {
	return self->physicalDpiY();
}

double QPaintDevice_devicePixelRatio(const QPaintDevice* self) {
	double _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

double QPaintDevice_devicePixelRatioF(const QPaintDevice* self) {
	double _ret = self->devicePixelRatioF();
	return static_cast<double>(_ret);
}

int QPaintDevice_colorCount(const QPaintDevice* self) {
	return self->colorCount();
}

int QPaintDevice_depth(const QPaintDevice* self) {
	return self->depth();
}

double QPaintDevice_devicePixelRatioFScale() {
	double _ret = QPaintDevice::devicePixelRatioFScale();
	return static_cast<double>(_ret);
}

int QPaintDevice_encodeMetricF(int metric, double value) {
	return QPaintDevice::encodeMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metric), static_cast<double>(value));
}

void QPaintDevice_delete(QPaintDevice* self) {
	delete self;
}

QRgba64* QRgba64_new() {
	return new (std::nothrow) QRgba64();
}

QRgba64* QRgba64_new2(QRgba64* param1) {
	return new (std::nothrow) QRgba64(*param1);
}

QRgba64* QRgba64_fromRgba64(unsigned long long c) {
	return new QRgba64(QRgba64::fromRgba64(static_cast<unsigned long long>(c)));
}

QRgba64* QRgba64_fromRgba642(unsigned short red, unsigned short green, unsigned short blue, unsigned short alpha) {
	return new QRgba64(QRgba64::fromRgba64(static_cast<unsigned short>(red), static_cast<unsigned short>(green), static_cast<unsigned short>(blue), static_cast<unsigned short>(alpha)));
}

QRgba64* QRgba64_fromRgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
	return new QRgba64(QRgba64::fromRgba(static_cast<unsigned char>(red), static_cast<unsigned char>(green), static_cast<unsigned char>(blue), static_cast<unsigned char>(alpha)));
}

QRgba64* QRgba64_fromArgb32(unsigned int rgb) {
	return new QRgba64(QRgba64::fromArgb32(static_cast<unsigned int>(rgb)));
}

bool QRgba64_isOpaque(const QRgba64* self) {
	return self->isOpaque();
}

bool QRgba64_isTransparent(const QRgba64* self) {
	return self->isTransparent();
}

unsigned short QRgba64_red(const QRgba64* self) {
	unsigned short _ret = self->red();
	return static_cast<unsigned short>(_ret);
}

unsigned short QRgba64_green(const QRgba64* self) {
	unsigned short _ret = self->green();
	return static_cast<unsigned short>(_ret);
}

unsigned short QRgba64_blue(const QRgba64* self) {
	unsigned short _ret = self->blue();
	return static_cast<unsigned short>(_ret);
}

unsigned short QRgba64_alpha(const QRgba64* self) {
	unsigned short _ret = self->alpha();
	return static_cast<unsigned short>(_ret);
}

void QRgba64_setRed(QRgba64* self, unsigned short _red) {
	self->setRed(static_cast<unsigned short>(_red));
}

void QRgba64_setGreen(QRgba64* self, unsigned short _green) {
	self->setGreen(static_cast<unsigned short>(_green));
}

void QRgba64_setBlue(QRgba64* self, unsigned short _blue) {
	self->setBlue(static_cast<unsigned short>(_blue));
}

void QRgba64_setAlpha(QRgba64* self, unsigned short _alpha) {
	self->setAlpha(static_cast<unsigned short>(_alpha));
}

unsigned char QRgba64_red8(const QRgba64* self) {
	unsigned char _ret = self->red8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_green8(const QRgba64* self) {
	unsigned char _ret = self->green8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_blue8(const QRgba64* self) {
	unsigned char _ret = self->blue8();
	return static_cast<unsigned char>(_ret);
}

unsigned char QRgba64_alpha8(const QRgba64* self) {
	unsigned char _ret = self->alpha8();
	return static_cast<unsigned char>(_ret);
}

unsigned int QRgba64_toArgb32(const QRgba64* self) {
	unsigned int _ret = self->toArgb32();
	return static_cast<unsigned int>(_ret);
}

unsigned short QRgba64_toRgb16(const QRgba64* self) {
	unsigned short _ret = self->toRgb16();
	return static_cast<unsigned short>(_ret);
}

QRgba64* QRgba64_premultiplied(const QRgba64* self) {
	return new QRgba64(self->premultiplied());
}

QRgba64* QRgba64_unpremultiplied(const QRgba64* self) {
	return new QRgba64(self->unpremultiplied());
}

unsigned long long QRgba64_ToUnsignedLongLong(const QRgba64* self) {
	unsigned long long _ret = self->operator unsigned long long();
	return static_cast<unsigned long long>(_ret);
}

void QRgba64_delete(QRgba64* self) {
	delete self;
}

QColor* QColor_new() {
	return new (std::nothrow) QColor();
}

QColor* QColor_new2(int color) {
	return new (std::nothrow) QColor(static_cast<Qt::GlobalColor>(color));
}

QColor* QColor_new3(int r, int g, int b) {
	return new (std::nothrow) QColor(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b));
}

QColor* QColor_new4(unsigned int rgb) {
	return new (std::nothrow) QColor(static_cast<unsigned int>(rgb));
}

QColor* QColor_new5(QRgba64* rgba64) {
	return new (std::nothrow) QColor(*rgba64);
}

QColor* QColor_new6(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QColor(name_QString);
}

QColor* QColor_new7(const char* aname) {
	return new (std::nothrow) QColor(aname);
}

QColor* QColor_new8(int spec) {
	return new (std::nothrow) QColor(static_cast<QColor::Spec>(spec));
}

QColor* QColor_new9(int spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4) {
	return new (std::nothrow) QColor(static_cast<QColor::Spec>(spec), static_cast<unsigned short>(a1), static_cast<unsigned short>(a2), static_cast<unsigned short>(a3), static_cast<unsigned short>(a4));
}

QColor* QColor_new10(QColor* param1) {
	return new (std::nothrow) QColor(*param1);
}

QColor* QColor_new11(int r, int g, int b, int a) {
	return new (std::nothrow) QColor(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a));
}

QColor* QColor_new12(int spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5) {
	return new (std::nothrow) QColor(static_cast<QColor::Spec>(spec), static_cast<unsigned short>(a1), static_cast<unsigned short>(a2), static_cast<unsigned short>(a3), static_cast<unsigned short>(a4), static_cast<unsigned short>(a5));
}

bool QColor_isValid(const QColor* self) {
	return self->isValid();
}

struct miqt_string QColor_name(const QColor* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColor_setNamedColor(QColor* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setNamedColor(name_QString);
}

struct miqt_array /* of struct miqt_string */  QColor_colorNames() {
	QStringList _ret = QColor::colorNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QColor_spec(const QColor* self) {
	return self->spec();
}

int QColor_alpha(const QColor* self) {
	return self->alpha();
}

void QColor_setAlpha(QColor* self, int alpha) {
	self->setAlpha(static_cast<int>(alpha));
}

float QColor_alphaF(const QColor* self) {
	return self->alphaF();
}

void QColor_setAlphaF(QColor* self, float alpha) {
	self->setAlphaF(static_cast<float>(alpha));
}

int QColor_red(const QColor* self) {
	return self->red();
}

int QColor_green(const QColor* self) {
	return self->green();
}

int QColor_blue(const QColor* self) {
	return self->blue();
}

void QColor_setRed(QColor* self, int red) {
	self->setRed(static_cast<int>(red));
}

void QColor_setGreen(QColor* self, int green) {
	self->setGreen(static_cast<int>(green));
}

void QColor_setBlue(QColor* self, int blue) {
	self->setBlue(static_cast<int>(blue));
}

float QColor_redF(const QColor* self) {
	return self->redF();
}

float QColor_greenF(const QColor* self) {
	return self->greenF();
}

float QColor_blueF(const QColor* self) {
	return self->blueF();
}

void QColor_setRedF(QColor* self, float red) {
	self->setRedF(static_cast<float>(red));
}

void QColor_setGreenF(QColor* self, float green) {
	self->setGreenF(static_cast<float>(green));
}

void QColor_setBlueF(QColor* self, float blue) {
	self->setBlueF(static_cast<float>(blue));
}

void QColor_getRgb(const QColor* self, int* r, int* g, int* b) {
	self->getRgb(r, g, b);
}

void QColor_setRgb(QColor* self, int r, int g, int b) {
	self->setRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b));
}

void QColor_getRgbF(const QColor* self, float* r, float* g, float* b) {
	self->getRgbF(r, g, b);
}

void QColor_setRgbF(QColor* self, float r, float g, float b) {
	self->setRgbF(static_cast<float>(r), static_cast<float>(g), static_cast<float>(b));
}

QRgba64* QColor_rgba64(const QColor* self) {
	return new QRgba64(self->rgba64());
}

void QColor_setRgba64(QColor* self, QRgba64* rgba) {
	self->setRgba64(*rgba);
}

unsigned int QColor_rgba(const QColor* self) {
	unsigned int _ret = self->rgba();
	return static_cast<unsigned int>(_ret);
}

void QColor_setRgba(QColor* self, unsigned int rgba) {
	self->setRgba(static_cast<unsigned int>(rgba));
}

unsigned int QColor_rgb(const QColor* self) {
	unsigned int _ret = self->rgb();
	return static_cast<unsigned int>(_ret);
}

void QColor_setRgbWithRgb(QColor* self, unsigned int rgb) {
	self->setRgb(static_cast<unsigned int>(rgb));
}

int QColor_hue(const QColor* self) {
	return self->hue();
}

int QColor_saturation(const QColor* self) {
	return self->saturation();
}

int QColor_hsvHue(const QColor* self) {
	return self->hsvHue();
}

int QColor_hsvSaturation(const QColor* self) {
	return self->hsvSaturation();
}

int QColor_value(const QColor* self) {
	return self->value();
}

float QColor_hueF(const QColor* self) {
	return self->hueF();
}

float QColor_saturationF(const QColor* self) {
	return self->saturationF();
}

float QColor_hsvHueF(const QColor* self) {
	return self->hsvHueF();
}

float QColor_hsvSaturationF(const QColor* self) {
	return self->hsvSaturationF();
}

float QColor_valueF(const QColor* self) {
	return self->valueF();
}

void QColor_getHsv(const QColor* self, int* h, int* s, int* v) {
	self->getHsv(h, s, v);
}

void QColor_setHsv(QColor* self, int h, int s, int v) {
	self->setHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v));
}

void QColor_getHsvF(const QColor* self, float* h, float* s, float* v) {
	self->getHsvF(h, s, v);
}

void QColor_setHsvF(QColor* self, float h, float s, float v) {
	self->setHsvF(static_cast<float>(h), static_cast<float>(s), static_cast<float>(v));
}

int QColor_cyan(const QColor* self) {
	return self->cyan();
}

int QColor_magenta(const QColor* self) {
	return self->magenta();
}

int QColor_yellow(const QColor* self) {
	return self->yellow();
}

int QColor_black(const QColor* self) {
	return self->black();
}

float QColor_cyanF(const QColor* self) {
	return self->cyanF();
}

float QColor_magentaF(const QColor* self) {
	return self->magentaF();
}

float QColor_yellowF(const QColor* self) {
	return self->yellowF();
}

float QColor_blackF(const QColor* self) {
	return self->blackF();
}

void QColor_getCmyk(const QColor* self, int* c, int* m, int* y, int* k) {
	self->getCmyk(c, m, y, k);
}

void QColor_setCmyk(QColor* self, int c, int m, int y, int k) {
	self->setCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k));
}

void QColor_getCmykF(const QColor* self, float* c, float* m, float* y, float* k) {
	self->getCmykF(c, m, y, k);
}

void QColor_setCmykF(QColor* self, float c, float m, float y, float k) {
	self->setCmykF(static_cast<float>(c), static_cast<float>(m), static_cast<float>(y), static_cast<float>(k));
}

int QColor_hslHue(const QColor* self) {
	return self->hslHue();
}

int QColor_hslSaturation(const QColor* self) {
	return self->hslSaturation();
}

int QColor_lightness(const QColor* self) {
	return self->lightness();
}

float QColor_hslHueF(const QColor* self) {
	return self->hslHueF();
}

float QColor_hslSaturationF(const QColor* self) {
	return self->hslSaturationF();
}

float QColor_lightnessF(const QColor* self) {
	return self->lightnessF();
}

void QColor_getHsl(const QColor* self, int* h, int* s, int* l) {
	self->getHsl(h, s, l);
}

void QColor_setHsl(QColor* self, int h, int s, int l) {
	self->setHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l));
}

void QColor_getHslF(const QColor* self, float* h, float* s, float* l) {
	self->getHslF(h, s, l);
}

void QColor_setHslF(QColor* self, float h, float s, float l) {
	self->setHslF(static_cast<float>(h), static_cast<float>(s), static_cast<float>(l));
}

QColor* QColor_toRgb(const QColor* self) {
	return new QColor(self->toRgb());
}

QColor* QColor_toHsv(const QColor* self) {
	return new QColor(self->toHsv());
}

QColor* QColor_toCmyk(const QColor* self) {
	return new QColor(self->toCmyk());
}

QColor* QColor_toHsl(const QColor* self) {
	return new QColor(self->toHsl());
}

QColor* QColor_toExtendedRgb(const QColor* self) {
	return new QColor(self->toExtendedRgb());
}

QColor* QColor_convertTo(const QColor* self, int colorSpec) {
	return new QColor(self->convertTo(static_cast<QColor::Spec>(colorSpec)));
}

QColor* QColor_fromRgb(unsigned int rgb) {
	return new QColor(QColor::fromRgb(static_cast<unsigned int>(rgb)));
}

QColor* QColor_fromRgba(unsigned int rgba) {
	return new QColor(QColor::fromRgba(static_cast<unsigned int>(rgba)));
}

QColor* QColor_fromRgb2(int r, int g, int b) {
	return new QColor(QColor::fromRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b)));
}

QColor* QColor_fromRgbF(float r, float g, float b) {
	return new QColor(QColor::fromRgbF(static_cast<float>(r), static_cast<float>(g), static_cast<float>(b)));
}

QColor* QColor_fromRgba64(unsigned short r, unsigned short g, unsigned short b) {
	return new QColor(QColor::fromRgba64(static_cast<unsigned short>(r), static_cast<unsigned short>(g), static_cast<unsigned short>(b)));
}

QColor* QColor_fromRgba64WithRgba(QRgba64* rgba) {
	return new QColor(QColor::fromRgba64(*rgba));
}

QColor* QColor_fromHsv(int h, int s, int v) {
	return new QColor(QColor::fromHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v)));
}

QColor* QColor_fromHsvF(float h, float s, float v) {
	return new QColor(QColor::fromHsvF(static_cast<float>(h), static_cast<float>(s), static_cast<float>(v)));
}

QColor* QColor_fromCmyk(int c, int m, int y, int k) {
	return new QColor(QColor::fromCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k)));
}

QColor* QColor_fromCmykF(float c, float m, float y, float k) {
	return new QColor(QColor::fromCmykF(static_cast<float>(c), static_cast<float>(m), static_cast<float>(y), static_cast<float>(k)));
}

QColor* QColor_fromHsl(int h, int s, int l) {
	return new QColor(QColor::fromHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l)));
}

QColor* QColor_fromHslF(float h, float s, float l) {
	return new QColor(QColor::fromHslF(static_cast<float>(h), static_cast<float>(s), static_cast<float>(l)));
}

QColor* QColor_lighter(const QColor* self) {
	return new QColor(self->lighter());
}

QColor* QColor_darker(const QColor* self) {
	return new QColor(self->darker());
}

bool QColor_operatorNotEqual(const QColor* self, QColor* c) {
	return (*self != *c);
}

QVariant* QColor_ToQVariant(const QColor* self) {
	return new QVariant(self->operator QVariant());
}

bool QColor_isValidColor(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return QColor::isValidColor(name_QString);
}

struct miqt_string QColor_nameWithFormat(const QColor* self, int format) {
	QString _ret = self->name(static_cast<QColor::NameFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColor_getRgb2(const QColor* self, int* r, int* g, int* b, int* a) {
	self->getRgb(r, g, b, a);
}

void QColor_setRgb2(QColor* self, int r, int g, int b, int a) {
	self->setRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a));
}

void QColor_getRgbF2(const QColor* self, float* r, float* g, float* b, float* a) {
	self->getRgbF(r, g, b, a);
}

void QColor_setRgbF2(QColor* self, float r, float g, float b, float a) {
	self->setRgbF(static_cast<float>(r), static_cast<float>(g), static_cast<float>(b), static_cast<float>(a));
}

void QColor_getHsv2(const QColor* self, int* h, int* s, int* v, int* a) {
	self->getHsv(h, s, v, a);
}

void QColor_setHsv2(QColor* self, int h, int s, int v, int a) {
	self->setHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v), static_cast<int>(a));
}

void QColor_getHsvF2(const QColor* self, float* h, float* s, float* v, float* a) {
	self->getHsvF(h, s, v, a);
}

void QColor_setHsvF2(QColor* self, float h, float s, float v, float a) {
	self->setHsvF(static_cast<float>(h), static_cast<float>(s), static_cast<float>(v), static_cast<float>(a));
}

void QColor_getCmyk2(const QColor* self, int* c, int* m, int* y, int* k, int* a) {
	self->getCmyk(c, m, y, k, a);
}

void QColor_setCmyk2(QColor* self, int c, int m, int y, int k, int a) {
	self->setCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k), static_cast<int>(a));
}

void QColor_getCmykF2(const QColor* self, float* c, float* m, float* y, float* k, float* a) {
	self->getCmykF(c, m, y, k, a);
}

void QColor_setCmykF2(QColor* self, float c, float m, float y, float k, float a) {
	self->setCmykF(static_cast<float>(c), static_cast<float>(m), static_cast<float>(y), static_cast<float>(k), static_cast<float>(a));
}

void QColor_getHsl2(const QColor* self, int* h, int* s, int* l, int* a) {
	self->getHsl(h, s, l, a);
}

void QColor_setHsl2(QColor* self, int h, int s, int l, int a) {
	self->setHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l), static_cast<int>(a));
}

void QColor_getHslF2(const QColor* self, float* h, float* s, float* l, float* a) {
	self->getHslF(h, s, l, a);
}

void QColor_setHslF2(QColor* self, float h, float s, float l, float a) {
	self->setHslF(static_cast<float>(h), static_cast<float>(s), static_cast<float>(l), static_cast<float>(a));
}

QColor* QColor_fromRgb3(int r, int g, int b, int a) {
	return new QColor(QColor::fromRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a)));
}

QColor* QColor_fromRgbF2(float r, float g, float b, float a) {
	return new QColor(QColor::fromRgbF(static_cast<float>(r), static_cast<float>(g), static_cast<float>(b), static_cast<float>(a)));
}

QColor* QColor_fromRgba642(unsigned short r, unsigned short g, unsigned short b, unsigned short a) {
	return new QColor(QColor::fromRgba64(static_cast<unsigned short>(r), static_cast<unsigned short>(g), static_cast<unsigned short>(b), static_cast<unsigned short>(a)));
}

QColor* QColor_fromHsv2(int h, int s, int v, int a) {
	return new QColor(QColor::fromHsv(static_cast<int>(h), static_cast<int>(s), static_cast<int>(v), static_cast<int>(a)));
}

QColor* QColor_fromHsvF2(float h, float s, float v, float a) {
	return new QColor(QColor::fromHsvF(static_cast<float>(h), static_cast<float>(s), static_cast<float>(v), static_cast<float>(a)));
}

QColor* QColor_fromCmyk2(int c, int m, int y, int k, int a) {
	return new QColor(QColor::fromCmyk(static_cast<int>(c), static_cast<int>(m), static_cast<int>(y), static_cast<int>(k), static_cast<int>(a)));
}

QColor* QColor_fromCmykF2(float c, float m, float y, float k, float a) {
	return new QColor(QColor::fromCmykF(static_cast<float>(c), static_cast<float>(m), static_cast<float>(y), static_cast<float>(k), static_cast<float>(a)));
}

QColor* QColor_fromHsl2(int h, int s, int l, int a) {
	return new QColor(QColor::fromHsl(static_cast<int>(h), static_cast<int>(s), static_cast<int>(l), static_cast<int>(a)));
}

QColor* QColor_fromHslF2(float h, float s, float l, float a) {
	return new QColor(QColor::fromHslF(static_cast<float>(h), static_cast<float>(s), static_cast<float>(l), static_cast<float>(a)));
}

QColor* QColor_lighterWithInt(const QColor* self, int f) {
	return new QColor(self->lighter(static_cast<int>(f)));
}

QColor* QColor_darkerWithInt(const QColor* self, int f) {
	return new QColor(self->darker(static_cast<int>(f)));
}

void QColor_delete(QColor* self) {
	delete self;
}

QPixelFormat* QPixelFormat_new() {
	return new (std::nothrow) QPixelFormat();
}

QPixelFormat* QPixelFormat_new2(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation) {
	return new (std::nothrow) QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), static_cast<unsigned char>(firstSize), static_cast<unsigned char>(secondSize), static_cast<unsigned char>(thirdSize), static_cast<unsigned char>(fourthSize), static_cast<unsigned char>(fifthSize), static_cast<unsigned char>(alphaSize), static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation));
}

QPixelFormat* QPixelFormat_new3(QPixelFormat* param1) {
	return new (std::nothrow) QPixelFormat(*param1);
}

QPixelFormat* QPixelFormat_new4(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation, int byteOrder) {
	return new (std::nothrow) QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), static_cast<unsigned char>(firstSize), static_cast<unsigned char>(secondSize), static_cast<unsigned char>(thirdSize), static_cast<unsigned char>(fourthSize), static_cast<unsigned char>(fifthSize), static_cast<unsigned char>(alphaSize), static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation), static_cast<QPixelFormat::ByteOrder>(byteOrder));
}

QPixelFormat* QPixelFormat_new5(int colorModel, unsigned char firstSize, unsigned char secondSize, unsigned char thirdSize, unsigned char fourthSize, unsigned char fifthSize, unsigned char alphaSize, int alphaUsage, int alphaPosition, int premultiplied, int typeInterpretation, int byteOrder, unsigned char subEnum) {
	return new (std::nothrow) QPixelFormat(static_cast<QPixelFormat::ColorModel>(colorModel), static_cast<unsigned char>(firstSize), static_cast<unsigned char>(secondSize), static_cast<unsigned char>(thirdSize), static_cast<unsigned char>(fourthSize), static_cast<unsigned char>(fifthSize), static_cast<unsigned char>(alphaSize), static_cast<QPixelFormat::AlphaUsage>(alphaUsage), static_cast<QPixelFormat::AlphaPosition>(alphaPosition), static_cast<QPixelFormat::AlphaPremultiplied>(premultiplied), static_cast<QPixelFormat::TypeInterpretation>(typeInterpretation), static_cast<QPixelFormat::ByteOrder>(byteOrder), static_cast<unsigned char>(subEnum));
}

int QPixelFormat_colorModel(const QPixelFormat* self) {
	QPixelFormat::ColorModel _ret = self->colorModel();
	return static_cast<int>(_ret);
}

unsigned char QPixelFormat_channelCount(const QPixelFormat* self) {
	unsigned char _ret = self->channelCount();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_redSize(const QPixelFormat* self) {
	unsigned char _ret = self->redSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_greenSize(const QPixelFormat* self) {
	unsigned char _ret = self->greenSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_blueSize(const QPixelFormat* self) {
	unsigned char _ret = self->blueSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_cyanSize(const QPixelFormat* self) {
	unsigned char _ret = self->cyanSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_magentaSize(const QPixelFormat* self) {
	unsigned char _ret = self->magentaSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_yellowSize(const QPixelFormat* self) {
	unsigned char _ret = self->yellowSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_blackSize(const QPixelFormat* self) {
	unsigned char _ret = self->blackSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_hueSize(const QPixelFormat* self) {
	unsigned char _ret = self->hueSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_saturationSize(const QPixelFormat* self) {
	unsigned char _ret = self->saturationSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_lightnessSize(const QPixelFormat* self) {
	unsigned char _ret = self->lightnessSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_brightnessSize(const QPixelFormat* self) {
	unsigned char _ret = self->brightnessSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_alphaSize(const QPixelFormat* self) {
	unsigned char _ret = self->alphaSize();
	return static_cast<unsigned char>(_ret);
}

unsigned char QPixelFormat_bitsPerPixel(const QPixelFormat* self) {
	unsigned char _ret = self->bitsPerPixel();
	return static_cast<unsigned char>(_ret);
}

int QPixelFormat_alphaUsage(const QPixelFormat* self) {
	return self->alphaUsage();
}

int QPixelFormat_alphaPosition(const QPixelFormat* self) {
	return self->alphaPosition();
}

int QPixelFormat_premultiplied(const QPixelFormat* self) {
	return self->premultiplied();
}

int QPixelFormat_typeInterpretation(const QPixelFormat* self) {
	return self->typeInterpretation();
}

int QPixelFormat_byteOrder(const QPixelFormat* self) {
	QPixelFormat::ByteOrder _ret = self->byteOrder();
	return static_cast<int>(_ret);
}

int QPixelFormat_yuvLayout(const QPixelFormat* self) {
	return self->yuvLayout();
}

unsigned char QPixelFormat_subEnum(const QPixelFormat* self) {
	unsigned char _ret = self->subEnum();
	return static_cast<unsigned char>(_ret);
}

void QPixelFormat_delete(QPixelFormat* self) {
	delete self;
}

QPolygon* QPolygon_new() {
	return new (std::nothrow) QPolygon();
}

QPolygon* QPolygon_new2(struct miqt_array /* of QPoint* */  v) {
	QList<QPoint> v_QList;
	v_QList.reserve(v.len);
	QPoint** v_arr = static_cast<QPoint**>(v.data);
	for(size_t i = 0; i < v.len; ++i) {
		v_QList.push_back(*(v_arr[i]));
	}
	return new (std::nothrow) QPolygon(v_QList);
}

QPolygon* QPolygon_new3(QRect* r) {
	return new (std::nothrow) QPolygon(*r);
}

QPolygon* QPolygon_new4(int nPoints, const int* points) {
	return new (std::nothrow) QPolygon(static_cast<int>(nPoints), points);
}

QPolygon* QPolygon_new5(QRect* r, bool closed) {
	return new (std::nothrow) QPolygon(*r, closed);
}

QVariant* QPolygon_ToQVariant(const QPolygon* self) {
	return new QVariant(self->operator QVariant());
}

void QPolygon_translate(QPolygon* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

void QPolygon_translateWithOffset(QPolygon* self, QPoint* offset) {
	self->translate(*offset);
}

QRect* QPolygon_boundingRect(const QPolygon* self) {
	return new QRect(self->boundingRect());
}

void QPolygon_point(const QPolygon* self, int i, int* x, int* y) {
	self->point(static_cast<int>(i), x, y);
}

QPoint* QPolygon_pointWithInt(const QPolygon* self, int i) {
	return new QPoint(self->point(static_cast<int>(i)));
}

void QPolygon_setPoint(QPolygon* self, int index, int x, int y) {
	self->setPoint(static_cast<int>(index), static_cast<int>(x), static_cast<int>(y));
}

void QPolygon_setPoint2(QPolygon* self, int index, QPoint* p) {
	self->setPoint(static_cast<int>(index), *p);
}

void QPolygon_setPoints(QPolygon* self, int nPoints, const int* points) {
	self->setPoints(static_cast<int>(nPoints), points);
}

void QPolygon_putPoints(QPolygon* self, int index, int nPoints, const int* points) {
	self->putPoints(static_cast<int>(index), static_cast<int>(nPoints), points);
}

bool QPolygon_containsPoint(const QPolygon* self, QPoint* pt, int fillRule) {
	return self->containsPoint(*pt, static_cast<Qt::FillRule>(fillRule));
}

void QPolygon_delete(QPolygon* self) {
	delete self;
}

QPolygonF* QPolygonF_new() {
	return new (std::nothrow) QPolygonF();
}

QPolygonF* QPolygonF_new2(struct miqt_array /* of QPointF* */  v) {
	QList<QPointF> v_QList;
	v_QList.reserve(v.len);
	QPointF** v_arr = static_cast<QPointF**>(v.data);
	for(size_t i = 0; i < v.len; ++i) {
		v_QList.push_back(*(v_arr[i]));
	}
	return new (std::nothrow) QPolygonF(v_QList);
}

QPolygonF* QPolygonF_new3(QRectF* r) {
	return new (std::nothrow) QPolygonF(*r);
}

QVariant* QPolygonF_ToQVariant(const QPolygonF* self) {
	return new QVariant(self->operator QVariant());
}

void QPolygonF_translate(QPolygonF* self, double dx, double dy) {
	self->translate(static_cast<double>(dx), static_cast<double>(dy));
}

void QPolygonF_translateWithOffset(QPolygonF* self, QPointF* offset) {
	self->translate(*offset);
}

bool QPolygonF_isClosed(const QPolygonF* self) {
	return self->isClosed();
}

QRectF* QPolygonF_boundingRect(const QPolygonF* self) {
	return new QRectF(self->boundingRect());
}

bool QPolygonF_containsPoint(const QPolygonF* self, QPointF* pt, int fillRule) {
	return self->containsPoint(*pt, static_cast<Qt::FillRule>(fillRule));
}

void QPolygonF_delete(QPolygonF* self) {
	delete self;
}

QRegion* QRegion_new() {
	return new (std::nothrow) QRegion();
}

QRegion* QRegion_new2(int x, int y, int w, int h) {
	return new (std::nothrow) QRegion(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

QRegion* QRegion_new3(QRect* r) {
	return new (std::nothrow) QRegion(*r);
}

QRegion* QRegion_new4(QRegion* region) {
	return new (std::nothrow) QRegion(*region);
}

QRegion* QRegion_new5(QBitmap* bitmap) {
	return new (std::nothrow) QRegion(*bitmap);
}

QRegion* QRegion_new6(int x, int y, int w, int h, int t) {
	return new (std::nothrow) QRegion(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<QRegion::RegionType>(t));
}

QRegion* QRegion_new7(QRect* r, int t) {
	return new (std::nothrow) QRegion(*r, static_cast<QRegion::RegionType>(t));
}

void QRegion_swap(QRegion* self, QRegion* other) {
	self->swap(*other);
}

bool QRegion_isEmpty(const QRegion* self) {
	return self->isEmpty();
}

bool QRegion_isNull(const QRegion* self) {
	return self->isNull();
}

bool QRegion_contains(const QRegion* self, QPoint* p) {
	return self->contains(*p);
}

bool QRegion_containsWithQRect(const QRegion* self, QRect* r) {
	return self->contains(*r);
}

void QRegion_translate(QRegion* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

void QRegion_translateWithQPoint(QRegion* self, QPoint* p) {
	self->translate(*p);
}

QRegion* QRegion_translated(const QRegion* self, int dx, int dy) {
	return new QRegion(self->translated(static_cast<int>(dx), static_cast<int>(dy)));
}

QRegion* QRegion_translatedWithQPoint(const QRegion* self, QPoint* p) {
	return new QRegion(self->translated(*p));
}

QRegion* QRegion_united(const QRegion* self, QRegion* r) {
	return new QRegion(self->united(*r));
}

QRegion* QRegion_unitedWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->united(*r));
}

QRegion* QRegion_intersected(const QRegion* self, QRegion* r) {
	return new QRegion(self->intersected(*r));
}

QRegion* QRegion_intersectedWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->intersected(*r));
}

QRegion* QRegion_subtracted(const QRegion* self, QRegion* r) {
	return new QRegion(self->subtracted(*r));
}

QRegion* QRegion_xored(const QRegion* self, QRegion* r) {
	return new QRegion(self->xored(*r));
}

bool QRegion_intersects(const QRegion* self, QRegion* r) {
	return self->intersects(*r);
}

bool QRegion_intersectsWithQRect(const QRegion* self, QRect* r) {
	return self->intersects(*r);
}

QRect* QRegion_boundingRect(const QRegion* self) {
	return new QRect(self->boundingRect());
}

void* QRegion_rects(const QRegion* self) {
	return reinterpret_cast<void*>(new QSpan<const QRect>(self->rects()));
}

int QRegion_rectCount(const QRegion* self) {
	return self->rectCount();
}

QRegion* QRegion_operatorBitwiseOr(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator|(*r));
}

QRegion* QRegion_operatorPlus(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator+(*r));
}

QRegion* QRegion_operatorPlusWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->operator+(*r));
}

QRegion* QRegion_operatorBitwiseAnd(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator&(*r));
}

QRegion* QRegion_operatorBitwiseAndWithQRect(const QRegion* self, QRect* r) {
	return new QRegion(self->operator&(*r));
}

QRegion* QRegion_operatorMinus(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator-(*r));
}

QRegion* QRegion_operatorBitwiseNot(const QRegion* self, QRegion* r) {
	return new QRegion(self->operator^(*r));
}

void QRegion_operatorBitwiseOrAssign(QRegion* self, QRegion* r) {
	self->operator|=(*r);
}

QRegion* QRegion_operatorPlusAssign(QRegion* self, QRegion* r) {
	QRegion& _ret = self->operator+=(*r);
	// Cast returned reference into pointer
	return &_ret;
}

QRegion* QRegion_operatorPlusAssignWithQRect(QRegion* self, QRect* r) {
	QRegion& _ret = self->operator+=(*r);
	// Cast returned reference into pointer
	return &_ret;
}

void QRegion_operatorBitwiseAndAssign(QRegion* self, QRegion* r) {
	self->operator&=(*r);
}

void QRegion_operatorBitwiseAndAssignWithQRect(QRegion* self, QRect* r) {
	self->operator&=(*r);
}

QRegion* QRegion_operatorMinusAssign(QRegion* self, QRegion* r) {
	QRegion& _ret = self->operator-=(*r);
	// Cast returned reference into pointer
	return &_ret;
}

void QRegion_operatorBitwiseNotAssign(QRegion* self, QRegion* r) {
	self->operator^=(*r);
}

bool QRegion_operatorNotEqual(const QRegion* self, QRegion* r) {
	return (*self != *r);
}

QVariant* QRegion_ToQVariant(const QRegion* self) {
	return new QVariant(self->operator QVariant());
}

void QRegion_delete(QRegion* self) {
	delete self;
}

QTransform* QTransform_new(int param1) {
	return new (std::nothrow) QTransform(static_cast<Qt::Initialization>(param1));
}

QTransform* QTransform_new2() {
	return new (std::nothrow) QTransform();
}

QTransform* QTransform_new3(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33) {
	return new (std::nothrow) QTransform(static_cast<double>(h11), static_cast<double>(h12), static_cast<double>(h13), static_cast<double>(h21), static_cast<double>(h22), static_cast<double>(h23), static_cast<double>(h31), static_cast<double>(h32), static_cast<double>(h33));
}

QTransform* QTransform_new4(double h11, double h12, double h21, double h22, double dx, double dy) {
	return new (std::nothrow) QTransform(static_cast<double>(h11), static_cast<double>(h12), static_cast<double>(h21), static_cast<double>(h22), static_cast<double>(dx), static_cast<double>(dy));
}

QTransform* QTransform_new5(QTransform* other) {
	return new (std::nothrow) QTransform(*other);
}

bool QTransform_isAffine(const QTransform* self) {
	return self->isAffine();
}

bool QTransform_isIdentity(const QTransform* self) {
	return self->isIdentity();
}

bool QTransform_isInvertible(const QTransform* self) {
	return self->isInvertible();
}

bool QTransform_isScaling(const QTransform* self) {
	return self->isScaling();
}

bool QTransform_isRotating(const QTransform* self) {
	return self->isRotating();
}

bool QTransform_isTranslating(const QTransform* self) {
	return self->isTranslating();
}

int QTransform_type(const QTransform* self) {
	return self->type();
}

double QTransform_determinant(const QTransform* self) {
	double _ret = self->determinant();
	return static_cast<double>(_ret);
}

double QTransform_m11(const QTransform* self) {
	double _ret = self->m11();
	return static_cast<double>(_ret);
}

double QTransform_m12(const QTransform* self) {
	double _ret = self->m12();
	return static_cast<double>(_ret);
}

double QTransform_m13(const QTransform* self) {
	double _ret = self->m13();
	return static_cast<double>(_ret);
}

double QTransform_m21(const QTransform* self) {
	double _ret = self->m21();
	return static_cast<double>(_ret);
}

double QTransform_m22(const QTransform* self) {
	double _ret = self->m22();
	return static_cast<double>(_ret);
}

double QTransform_m23(const QTransform* self) {
	double _ret = self->m23();
	return static_cast<double>(_ret);
}

double QTransform_m31(const QTransform* self) {
	double _ret = self->m31();
	return static_cast<double>(_ret);
}

double QTransform_m32(const QTransform* self) {
	double _ret = self->m32();
	return static_cast<double>(_ret);
}

double QTransform_m33(const QTransform* self) {
	double _ret = self->m33();
	return static_cast<double>(_ret);
}

double QTransform_dx(const QTransform* self) {
	double _ret = self->dx();
	return static_cast<double>(_ret);
}

double QTransform_dy(const QTransform* self) {
	double _ret = self->dy();
	return static_cast<double>(_ret);
}

void QTransform_setMatrix(QTransform* self, double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
	self->setMatrix(static_cast<double>(m11), static_cast<double>(m12), static_cast<double>(m13), static_cast<double>(m21), static_cast<double>(m22), static_cast<double>(m23), static_cast<double>(m31), static_cast<double>(m32), static_cast<double>(m33));
}

QTransform* QTransform_inverted(const QTransform* self) {
	return new QTransform(self->inverted());
}

QTransform* QTransform_adjoint(const QTransform* self) {
	return new QTransform(self->adjoint());
}

QTransform* QTransform_transposed(const QTransform* self) {
	return new QTransform(self->transposed());
}

QTransform* QTransform_translate(QTransform* self, double dx, double dy) {
	QTransform& _ret = self->translate(static_cast<double>(dx), static_cast<double>(dy));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_scale(QTransform* self, double sx, double sy) {
	QTransform& _ret = self->scale(static_cast<double>(sx), static_cast<double>(sy));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_shear(QTransform* self, double sh, double sv) {
	QTransform& _ret = self->shear(static_cast<double>(sh), static_cast<double>(sv));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_rotate(QTransform* self, double a, int axis, double distanceToPlane) {
	QTransform& _ret = self->rotate(static_cast<double>(a), static_cast<Qt::Axis>(axis), static_cast<double>(distanceToPlane));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_rotateWithQreal(QTransform* self, double a) {
	QTransform& _ret = self->rotate(static_cast<double>(a));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_rotateRadians(QTransform* self, double a, int axis, double distanceToPlane) {
	QTransform& _ret = self->rotateRadians(static_cast<double>(a), static_cast<Qt::Axis>(axis), static_cast<double>(distanceToPlane));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_rotateRadiansWithQreal(QTransform* self, double a) {
	QTransform& _ret = self->rotateRadians(static_cast<double>(a));
	// Cast returned reference into pointer
	return &_ret;
}

bool QTransform_operatorNotEqual(const QTransform* self, QTransform* param1) {
	return (*self != *param1);
}

QTransform* QTransform_operatorMultiplyAssign(QTransform* self, QTransform* param1) {
	QTransform& _ret = self->operator*=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_operatorMultiply(const QTransform* self, QTransform* o) {
	return new QTransform(self->operator*(*o));
}

QVariant* QTransform_ToQVariant(const QTransform* self) {
	return new QVariant(self->operator QVariant());
}

void QTransform_reset(QTransform* self) {
	self->reset();
}

QPoint* QTransform_map(const QTransform* self, QPoint* p) {
	return new QPoint(self->map(*p));
}

QPointF* QTransform_mapWithQPointF(const QTransform* self, QPointF* p) {
	return new QPointF(self->map(*p));
}

QLine* QTransform_mapWithQLine(const QTransform* self, QLine* l) {
	return new QLine(self->map(*l));
}

QLineF* QTransform_mapWithQLineF(const QTransform* self, QLineF* l) {
	return new QLineF(self->map(*l));
}

QRegion* QTransform_mapWithQRegion(const QTransform* self, QRegion* r) {
	return new QRegion(self->map(*r));
}

QPainterPath* QTransform_mapWithQPainterPath(const QTransform* self, QPainterPath* p) {
	return new QPainterPath(self->map(*p));
}

QRect* QTransform_mapRect(const QTransform* self, QRect* param1) {
	return new QRect(self->mapRect(*param1));
}

QRectF* QTransform_mapRectWithQRectF(const QTransform* self, QRectF* param1) {
	return new QRectF(self->mapRect(*param1));
}

void QTransform_map2(const QTransform* self, int x, int y, int* tx, int* ty) {
	self->map(static_cast<int>(x), static_cast<int>(y), tx, ty);
}

void QTransform_map3(const QTransform* self, double x, double y, double* tx, double* ty) {
	self->map(static_cast<double>(x), static_cast<double>(y), tx, ty);
}

QTransform* QTransform_operatorMultiplyAssignWithDiv(QTransform* self, double div) {
	QTransform& _ret = self->operator*=(static_cast<double>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_operatorDivideAssign(QTransform* self, double div) {
	QTransform& _ret = self->operator/=(static_cast<double>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_operatorPlusAssign(QTransform* self, double div) {
	QTransform& _ret = self->operator+=(static_cast<double>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_operatorMinusAssign(QTransform* self, double div) {
	QTransform& _ret = self->operator-=(static_cast<double>(div));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_fromTranslate(double dx, double dy) {
	return new QTransform(QTransform::fromTranslate(static_cast<double>(dx), static_cast<double>(dy)));
}

QTransform* QTransform_fromScale(double dx, double dy) {
	return new QTransform(QTransform::fromScale(static_cast<double>(dx), static_cast<double>(dy)));
}

QTransform* QTransform_invertedWithInvertible(const QTransform* self, bool* invertible) {
	return new QTransform(self->inverted(invertible));
}

QTransform* QTransform_rotate2(QTransform* self, double a, int axis) {
	QTransform& _ret = self->rotate(static_cast<double>(a), static_cast<Qt::Axis>(axis));
	// Cast returned reference into pointer
	return &_ret;
}

QTransform* QTransform_rotateRadians2(QTransform* self, double a, int axis) {
	QTransform& _ret = self->rotateRadians(static_cast<double>(a), static_cast<Qt::Axis>(axis));
	// Cast returned reference into pointer
	return &_ret;
}

void QTransform_delete(QTransform* self) {
	delete self;
}

class MiqtVirtualQImage final : public QImage {
public:

	MiqtVirtualQImage(): QImage() {}
	MiqtVirtualQImage(const QSize& size, Format format): QImage(size, format) {}
	MiqtVirtualQImage(int width, int height, Format format): QImage(width, height, format) {}
	MiqtVirtualQImage(uchar* data, int width, int height, Format format): QImage(data, width, height, format) {}
	MiqtVirtualQImage(const uchar* data, int width, int height, Format format): QImage(data, width, height, format) {}
	MiqtVirtualQImage(uchar* data, int width, int height, qsizetype bytesPerLine, Format format): QImage(data, width, height, bytesPerLine, format) {}
	MiqtVirtualQImage(const uchar* data, int width, int height, qsizetype bytesPerLine, Format format): QImage(data, width, height, bytesPerLine, format) {}
	MiqtVirtualQImage(const QString& fileName): QImage(fileName) {}
	MiqtVirtualQImage(const QImage& param1): QImage(param1) {}
	MiqtVirtualQImage(const QString& fileName, const char* format): QImage(fileName, format) {}

	virtual ~MiqtVirtualQImage() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QImage::devType();
		}

		int callback_return_value = miqt_exec_callback_QImage_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QImage_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QImage::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QImage_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QImage_virtualbase_paintEngine(const void* self);

	// Wrappers to allow calling protected methods:
	friend QImage* QImage_protectedbase_mirroredHelper(bool* _dynamic_cast_ok, const void* self, bool horizontal, bool vertical);
	friend QImage* QImage_protectedbase_rgbSwappedHelper(bool* _dynamic_cast_ok, const void* self);
	friend void QImage_protectedbase_mirroredInplace(bool* _dynamic_cast_ok, void* self, bool horizontal, bool vertical);
	friend void QImage_protectedbase_rgbSwappedInplace(bool* _dynamic_cast_ok, void* self);
	friend QImage* QImage_protectedbase_convertToFormatHelper(bool* _dynamic_cast_ok, const void* self, int format, int flags);
	friend bool QImage_protectedbase_convertToFormatInplace(bool* _dynamic_cast_ok, void* self, int format, int flags);
	friend QImage* QImage_protectedbase_smoothScaled(bool* _dynamic_cast_ok, const void* self, int w, int h);
	friend void QImage_protectedbase_detachMetadata(bool* _dynamic_cast_ok, void* self);
	friend void QImage_protectedbase_detachMetadataWithInvalidateCache(bool* _dynamic_cast_ok, void* self, bool invalidateCache);
};

QImage* QImage_new() {
	return new (std::nothrow) MiqtVirtualQImage();
}

QImage* QImage_new2(QSize* size, int format) {
	return new (std::nothrow) MiqtVirtualQImage(*size, static_cast<QImage::Format>(format));
}

QImage* QImage_new3(int width, int height, int format) {
	return new (std::nothrow) MiqtVirtualQImage(static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new4(unsigned char* data, int width, int height, int format) {
	return new (std::nothrow) MiqtVirtualQImage(data, static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new5(const unsigned char* data, int width, int height, int format) {
	return new (std::nothrow) MiqtVirtualQImage(data, static_cast<int>(width), static_cast<int>(height), static_cast<QImage::Format>(format));
}

QImage* QImage_new6(unsigned char* data, int width, int height, int64_t bytesPerLine, int format) {
	return new (std::nothrow) MiqtVirtualQImage(data, static_cast<int>(width), static_cast<int>(height), (int64_t)(bytesPerLine), static_cast<QImage::Format>(format));
}

QImage* QImage_new7(const unsigned char* data, int width, int height, int64_t bytesPerLine, int format) {
	return new (std::nothrow) MiqtVirtualQImage(data, static_cast<int>(width), static_cast<int>(height), (int64_t)(bytesPerLine), static_cast<QImage::Format>(format));
}

QImage* QImage_new8(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQImage(fileName_QString);
}

QImage* QImage_new9(QImage* param1) {
	return new (std::nothrow) MiqtVirtualQImage(*param1);
}

QImage* QImage_new10(struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQImage(fileName_QString, format);
}

void QImage_virtbase(QImage* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

void QImage_swap(QImage* self, QImage* other) {
	self->swap(*other);
}

bool QImage_isNull(const QImage* self) {
	return self->isNull();
}

int QImage_devType(const QImage* self) {
	return self->devType();
}

bool QImage_operatorNotEqual(const QImage* self, QImage* param1) {
	return (*self != *param1);
}

QVariant* QImage_ToQVariant(const QImage* self) {
	return new QVariant(self->operator QVariant());
}

void QImage_detach(QImage* self) {
	self->detach();
}

bool QImage_isDetached(const QImage* self) {
	return self->isDetached();
}

QImage* QImage_copy(const QImage* self) {
	return new QImage(self->copy());
}

QImage* QImage_copy2(const QImage* self, int x, int y, int w, int h) {
	return new QImage(self->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

int QImage_format(const QImage* self) {
	return self->format();
}

QImage* QImage_convertToFormat(const QImage* self, int f) {
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f)));
}

QImage* QImage_convertToFormat2(const QImage* self, int f, struct miqt_array /* of unsigned int */  colorTable) {
	QList<QRgb> colorTable_QList;
	colorTable_QList.reserve(colorTable.len);
	unsigned int* colorTable_arr = static_cast<unsigned int*>(colorTable.data);
	for(size_t i = 0; i < colorTable.len; ++i) {
		colorTable_QList.push_back(static_cast<unsigned int>(colorTable_arr[i]));
	}
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), colorTable_QList));
}

bool QImage_reinterpretAsFormat(QImage* self, int f) {
	return self->reinterpretAsFormat(static_cast<QImage::Format>(f));
}

QImage* QImage_convertedTo(const QImage* self, int f) {
	return new QImage(self->convertedTo(static_cast<QImage::Format>(f)));
}

void QImage_convertTo(QImage* self, int f) {
	self->convertTo(static_cast<QImage::Format>(f));
}

int QImage_width(const QImage* self) {
	return self->width();
}

int QImage_height(const QImage* self) {
	return self->height();
}

QSize* QImage_size(const QImage* self) {
	return new QSize(self->size());
}

QRect* QImage_rect(const QImage* self) {
	return new QRect(self->rect());
}

int QImage_depth(const QImage* self) {
	return self->depth();
}

int QImage_colorCount(const QImage* self) {
	return self->colorCount();
}

int QImage_bitPlaneCount(const QImage* self) {
	return self->bitPlaneCount();
}

unsigned int QImage_color(const QImage* self, int i) {
	unsigned int _ret = self->color(static_cast<int>(i));
	return static_cast<unsigned int>(_ret);
}

void QImage_setColor(QImage* self, int i, unsigned int c) {
	self->setColor(static_cast<int>(i), static_cast<unsigned int>(c));
}

void QImage_setColorCount(QImage* self, int colorCount) {
	self->setColorCount(static_cast<int>(colorCount));
}

bool QImage_allGray(const QImage* self) {
	return self->allGray();
}

bool QImage_isGrayscale(const QImage* self) {
	return self->isGrayscale();
}

unsigned char* QImage_bits(QImage* self) {
	unsigned char* _ret = self->bits();
	return static_cast<unsigned char*>(_ret);
}

const unsigned char* QImage_bits2(const QImage* self) {
	const unsigned char* _ret = self->bits();
	return static_cast<const unsigned char*>(_ret);
}

const unsigned char* QImage_constBits(const QImage* self) {
	const unsigned char* _ret = self->constBits();
	return static_cast<const unsigned char*>(_ret);
}

int64_t QImage_sizeInBytes(const QImage* self) {
	int64_t _ret = self->sizeInBytes();
	return static_cast<int64_t>(_ret);
}

unsigned char* QImage_scanLine(QImage* self, int param1) {
	unsigned char* _ret = self->scanLine(static_cast<int>(param1));
	return static_cast<unsigned char*>(_ret);
}

const unsigned char* QImage_scanLineWithInt(const QImage* self, int param1) {
	const unsigned char* _ret = self->scanLine(static_cast<int>(param1));
	return static_cast<const unsigned char*>(_ret);
}

const unsigned char* QImage_constScanLine(const QImage* self, int param1) {
	const unsigned char* _ret = self->constScanLine(static_cast<int>(param1));
	return static_cast<const unsigned char*>(_ret);
}

int64_t QImage_bytesPerLine(const QImage* self) {
	int64_t _ret = self->bytesPerLine();
	return static_cast<int64_t>(_ret);
}

bool QImage_valid(const QImage* self, int x, int y) {
	return self->valid(static_cast<int>(x), static_cast<int>(y));
}

bool QImage_validWithPt(const QImage* self, QPoint* pt) {
	return self->valid(*pt);
}

int QImage_pixelIndex(const QImage* self, int x, int y) {
	return self->pixelIndex(static_cast<int>(x), static_cast<int>(y));
}

int QImage_pixelIndexWithPt(const QImage* self, QPoint* pt) {
	return self->pixelIndex(*pt);
}

unsigned int QImage_pixel(const QImage* self, int x, int y) {
	unsigned int _ret = self->pixel(static_cast<int>(x), static_cast<int>(y));
	return static_cast<unsigned int>(_ret);
}

unsigned int QImage_pixelWithPt(const QImage* self, QPoint* pt) {
	unsigned int _ret = self->pixel(*pt);
	return static_cast<unsigned int>(_ret);
}

void QImage_setPixel(QImage* self, int x, int y, unsigned int index_or_rgb) {
	self->setPixel(static_cast<int>(x), static_cast<int>(y), static_cast<unsigned int>(index_or_rgb));
}

void QImage_setPixel2(QImage* self, QPoint* pt, unsigned int index_or_rgb) {
	self->setPixel(*pt, static_cast<unsigned int>(index_or_rgb));
}

QColor* QImage_pixelColor(const QImage* self, int x, int y) {
	return new QColor(self->pixelColor(static_cast<int>(x), static_cast<int>(y)));
}

QColor* QImage_pixelColorWithPt(const QImage* self, QPoint* pt) {
	return new QColor(self->pixelColor(*pt));
}

void QImage_setPixelColor(QImage* self, int x, int y, QColor* c) {
	self->setPixelColor(static_cast<int>(x), static_cast<int>(y), *c);
}

void QImage_setPixelColor2(QImage* self, QPoint* pt, QColor* c) {
	self->setPixelColor(*pt, *c);
}

struct miqt_array /* of unsigned int */  QImage_colorTable(const QImage* self) {
	QList<QRgb> _ret = self->colorTable();
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QImage_setColorTable(QImage* self, struct miqt_array /* of unsigned int */  colors) {
	QList<QRgb> colors_QList;
	colors_QList.reserve(colors.len);
	unsigned int* colors_arr = static_cast<unsigned int*>(colors.data);
	for(size_t i = 0; i < colors.len; ++i) {
		colors_QList.push_back(static_cast<unsigned int>(colors_arr[i]));
	}
	self->setColorTable(colors_QList);
}

double QImage_devicePixelRatio(const QImage* self) {
	double _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

void QImage_setDevicePixelRatio(QImage* self, double scaleFactor) {
	self->setDevicePixelRatio(static_cast<double>(scaleFactor));
}

QSizeF* QImage_deviceIndependentSize(const QImage* self) {
	return new QSizeF(self->deviceIndependentSize());
}

void QImage_fill(QImage* self, unsigned int pixel) {
	self->fill(static_cast<unsigned int>(pixel));
}

void QImage_fillWithColor(QImage* self, QColor* color) {
	self->fill(*color);
}

void QImage_fill2(QImage* self, int color) {
	self->fill(static_cast<Qt::GlobalColor>(color));
}

bool QImage_hasAlphaChannel(const QImage* self) {
	return self->hasAlphaChannel();
}

void QImage_setAlphaChannel(QImage* self, QImage* alphaChannel) {
	self->setAlphaChannel(*alphaChannel);
}

QImage* QImage_createAlphaMask(const QImage* self) {
	return new QImage(self->createAlphaMask());
}

QImage* QImage_createHeuristicMask(const QImage* self) {
	return new QImage(self->createHeuristicMask());
}

QImage* QImage_createMaskFromColor(const QImage* self, unsigned int color) {
	return new QImage(self->createMaskFromColor(static_cast<unsigned int>(color)));
}

QImage* QImage_scaled(const QImage* self, int w, int h) {
	return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h)));
}

QImage* QImage_scaledWithQSize(const QImage* self, QSize* s) {
	return new QImage(self->scaled(*s));
}

QImage* QImage_scaledToWidth(const QImage* self, int w) {
	return new QImage(self->scaledToWidth(static_cast<int>(w)));
}

QImage* QImage_scaledToHeight(const QImage* self, int h) {
	return new QImage(self->scaledToHeight(static_cast<int>(h)));
}

QImage* QImage_transformed(const QImage* self, QTransform* matrix) {
	return new QImage(self->transformed(*matrix));
}

QTransform* QImage_trueMatrix(QTransform* param1, int w, int h) {
	return new QTransform(QImage::trueMatrix(*param1, static_cast<int>(w), static_cast<int>(h)));
}

QImage* QImage_mirrored(const QImage* self) {
	return new QImage(self->mirrored());
}

void QImage_mirror(QImage* self) {
	self->mirror();
}

QImage* QImage_rgbSwapped(const QImage* self) {
	return new QImage(self->rgbSwapped());
}

QImage* QImage_flipped(const QImage* self) {
	return new QImage(self->flipped());
}

void QImage_flip(QImage* self) {
	self->flip();
}

void QImage_rgbSwap(QImage* self) {
	self->rgbSwap();
}

void QImage_invertPixels(QImage* self) {
	self->invertPixels();
}

QColorSpace* QImage_colorSpace(const QImage* self) {
	return new QColorSpace(self->colorSpace());
}

QImage* QImage_convertedToColorSpace(const QImage* self, QColorSpace* colorSpace) {
	return new QImage(self->convertedToColorSpace(*colorSpace));
}

QImage* QImage_convertedToColorSpace2(const QImage* self, QColorSpace* colorSpace, int format) {
	return new QImage(self->convertedToColorSpace(*colorSpace, static_cast<QImage::Format>(format)));
}

void QImage_convertToColorSpace(QImage* self, QColorSpace* colorSpace) {
	self->convertToColorSpace(*colorSpace);
}

void QImage_convertToColorSpace2(QImage* self, QColorSpace* colorSpace, int format) {
	self->convertToColorSpace(*colorSpace, static_cast<QImage::Format>(format));
}

void QImage_setColorSpace(QImage* self, QColorSpace* colorSpace) {
	self->setColorSpace(*colorSpace);
}

QImage* QImage_colorTransformed(const QImage* self, QColorTransform* transform) {
	return new QImage(self->colorTransformed(*transform));
}

QImage* QImage_colorTransformed2(const QImage* self, QColorTransform* transform, int format) {
	return new QImage(self->colorTransformed(*transform, static_cast<QImage::Format>(format)));
}

void QImage_applyColorTransform(QImage* self, QColorTransform* transform) {
	self->applyColorTransform(*transform);
}

void QImage_applyColorTransform2(QImage* self, QColorTransform* transform, int format) {
	self->applyColorTransform(*transform, static_cast<QImage::Format>(format));
}

bool QImage_load(QImage* self, QIODevice* device, const char* format) {
	return self->load(device, format);
}

bool QImage_loadWithFileName(QImage* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QImage_loadFromData(QImage* self, const unsigned char* buf, int len) {
	return self->loadFromData(buf, static_cast<int>(len));
}

bool QImage_loadFromDataWithData(QImage* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray);
}

bool QImage_save(const QImage* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString);
}

bool QImage_saveWithDevice(const QImage* self, QIODevice* device) {
	return self->save(device);
}

QImage* QImage_fromData(const unsigned char* data, int size) {
	return new QImage(QImage::fromData(data, static_cast<int>(size)));
}

QImage* QImage_fromDataWithData(struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QImage(QImage::fromData(data_QByteArray));
}

long long QImage_cacheKey(const QImage* self) {
	long long _ret = self->cacheKey();
	return static_cast<long long>(_ret);
}

QPaintEngine* QImage_paintEngine(const QImage* self) {
	return self->paintEngine();
}

int QImage_dotsPerMeterX(const QImage* self) {
	return self->dotsPerMeterX();
}

int QImage_dotsPerMeterY(const QImage* self) {
	return self->dotsPerMeterY();
}

void QImage_setDotsPerMeterX(QImage* self, int dotsPerMeterX) {
	self->setDotsPerMeterX(static_cast<int>(dotsPerMeterX));
}

void QImage_setDotsPerMeterY(QImage* self, int dotsPerMeterY) {
	self->setDotsPerMeterY(static_cast<int>(dotsPerMeterY));
}

QPoint* QImage_offset(const QImage* self) {
	return new QPoint(self->offset());
}

void QImage_setOffset(QImage* self, QPoint* offset) {
	self->setOffset(*offset);
}

struct miqt_array /* of struct miqt_string */  QImage_textKeys(const QImage* self) {
	QStringList _ret = self->textKeys();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QImage_text(const QImage* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImage_setText(QImage* self, struct miqt_string key, struct miqt_string value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setText(key_QString, value_QString);
}

QPixelFormat* QImage_pixelFormat(const QImage* self) {
	return new QPixelFormat(self->pixelFormat());
}

QPixelFormat* QImage_toPixelFormat(int format) {
	return new QPixelFormat(QImage::toPixelFormat(static_cast<QImage::Format>(format)));
}

int QImage_toImageFormat(QPixelFormat* format) {
	QImage::Format _ret = QImage::toImageFormat(*format);
	return static_cast<int>(_ret);
}

QImage* QImage_copyWithRect(const QImage* self, QRect* rect) {
	return new QImage(self->copy(*rect));
}

QImage* QImage_convertToFormat3(const QImage* self, int f, int flags) {
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

QImage* QImage_convertToFormat4(const QImage* self, int f, struct miqt_array /* of unsigned int */  colorTable, int flags) {
	QList<QRgb> colorTable_QList;
	colorTable_QList.reserve(colorTable.len);
	unsigned int* colorTable_arr = static_cast<unsigned int*>(colorTable.data);
	for(size_t i = 0; i < colorTable.len; ++i) {
		colorTable_QList.push_back(static_cast<unsigned int>(colorTable_arr[i]));
	}
	return new QImage(self->convertToFormat(static_cast<QImage::Format>(f), colorTable_QList, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

QImage* QImage_convertedTo2(const QImage* self, int f, int flags) {
	return new QImage(self->convertedTo(static_cast<QImage::Format>(f), static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

void QImage_convertTo2(QImage* self, int f, int flags) {
	self->convertTo(static_cast<QImage::Format>(f), static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

QImage* QImage_createAlphaMaskWithFlags(const QImage* self, int flags) {
	return new QImage(self->createAlphaMask(static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

QImage* QImage_createHeuristicMaskWithClipTight(const QImage* self, bool clipTight) {
	return new QImage(self->createHeuristicMask(clipTight));
}

QImage* QImage_createMaskFromColor2(const QImage* self, unsigned int color, int mode) {
	return new QImage(self->createMaskFromColor(static_cast<unsigned int>(color), static_cast<Qt::MaskMode>(mode)));
}

QImage* QImage_scaled2(const QImage* self, int w, int h, int aspectMode) {
	return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QImage* QImage_scaled3(const QImage* self, int w, int h, int aspectMode, int mode) {
	return new QImage(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_scaled4(const QImage* self, QSize* s, int aspectMode) {
	return new QImage(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QImage* QImage_scaled5(const QImage* self, QSize* s, int aspectMode, int mode) {
	return new QImage(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_scaledToWidth2(const QImage* self, int w, int mode) {
	return new QImage(self->scaledToWidth(static_cast<int>(w), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_scaledToHeight2(const QImage* self, int h, int mode) {
	return new QImage(self->scaledToHeight(static_cast<int>(h), static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_transformed2(const QImage* self, QTransform* matrix, int mode) {
	return new QImage(self->transformed(*matrix, static_cast<Qt::TransformationMode>(mode)));
}

QImage* QImage_mirroredWithHorizontally(const QImage* self, bool horizontally) {
	return new QImage(self->mirrored(horizontally));
}

QImage* QImage_mirrored2(const QImage* self, bool horizontally, bool vertically) {
	return new QImage(self->mirrored(horizontally, vertically));
}

void QImage_mirrorWithHorizontally(QImage* self, bool horizontally) {
	self->mirror(horizontally);
}

void QImage_mirror2(QImage* self, bool horizontally, bool vertically) {
	self->mirror(horizontally, vertically);
}

QImage* QImage_flippedWithOrient(const QImage* self, int orient) {
	return new QImage(self->flipped(static_cast<QFlags<Qt::Orientation>>(orient)));
}

void QImage_flipWithOrient(QImage* self, int orient) {
	self->flip(static_cast<QFlags<Qt::Orientation>>(orient));
}

void QImage_invertPixelsWithInvertMode(QImage* self, int param1) {
	self->invertPixels(static_cast<QImage::InvertMode>(param1));
}

QImage* QImage_convertedToColorSpace3(const QImage* self, QColorSpace* colorSpace, int format, int flags) {
	return new QImage(self->convertedToColorSpace(*colorSpace, static_cast<QImage::Format>(format), static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

void QImage_convertToColorSpace3(QImage* self, QColorSpace* colorSpace, int format, int flags) {
	self->convertToColorSpace(*colorSpace, static_cast<QImage::Format>(format), static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

QImage* QImage_colorTransformed3(const QImage* self, QColorTransform* transform, int format, int flags) {
	return new QImage(self->colorTransformed(*transform, static_cast<QImage::Format>(format), static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

void QImage_applyColorTransform3(QImage* self, QColorTransform* transform, int format, int flags) {
	self->applyColorTransform(*transform, static_cast<QImage::Format>(format), static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

bool QImage_load2(QImage* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString, format);
}

bool QImage_loadFromData2(QImage* self, const unsigned char* buf, int len, const char* format) {
	return self->loadFromData(buf, static_cast<int>(len), format);
}

bool QImage_loadFromData3(QImage* self, struct miqt_string data, const char* format) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray, format);
}

bool QImage_save2(const QImage* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format);
}

bool QImage_save3(const QImage* self, struct miqt_string fileName, const char* format, int quality) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format, static_cast<int>(quality));
}

bool QImage_save4(const QImage* self, QIODevice* device, const char* format) {
	return self->save(device, format);
}

bool QImage_save5(const QImage* self, QIODevice* device, const char* format, int quality) {
	return self->save(device, format, static_cast<int>(quality));
}

QImage* QImage_fromData2(const unsigned char* data, int size, const char* format) {
	return new QImage(QImage::fromData(data, static_cast<int>(size), format));
}

QImage* QImage_fromData3(struct miqt_string data, const char* format) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QImage(QImage::fromData(data_QByteArray, format));
}

struct miqt_string QImage_textWithKey(const QImage* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString _ret = self->text(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImage_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QImage_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQImage*>(self)->QImage::devType();
}

bool QImage_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QImage_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQImage*>(self)->QImage::paintEngine();
}

QImage* QImage_protectedbase_mirroredHelper(bool* _dynamic_cast_ok, const void* self, bool horizontal, bool vertical) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QImage(self_cast->mirrored_helper(horizontal, vertical));
}

QImage* QImage_protectedbase_rgbSwappedHelper(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QImage(self_cast->rgbSwapped_helper());
}

void QImage_protectedbase_mirroredInplace(bool* _dynamic_cast_ok, void* self, bool horizontal, bool vertical) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->mirrored_inplace(horizontal, vertical);
}

void QImage_protectedbase_rgbSwappedInplace(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rgbSwapped_inplace();
}

QImage* QImage_protectedbase_convertToFormatHelper(bool* _dynamic_cast_ok, const void* self, int format, int flags) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QImage(self_cast->convertToFormat_helper(static_cast<MiqtVirtualQImage::Format>(format), static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

bool QImage_protectedbase_convertToFormatInplace(bool* _dynamic_cast_ok, void* self, int format, int flags) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->convertToFormat_inplace(static_cast<MiqtVirtualQImage::Format>(format), static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

QImage* QImage_protectedbase_smoothScaled(bool* _dynamic_cast_ok, const void* self, int w, int h) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QImage(self_cast->smoothScaled(static_cast<int>(w), static_cast<int>(h)));
}

void QImage_protectedbase_detachMetadata(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->detachMetadata();
}

void QImage_protectedbase_detachMetadataWithInvalidateCache(bool* _dynamic_cast_ok, void* self, bool invalidateCache) {
	MiqtVirtualQImage* self_cast = static_cast<MiqtVirtualQImage*>( (QImage*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->detachMetadata(invalidateCache);
}

void QImage_delete(QImage* self) {
	delete self;
}

class MiqtVirtualQPixmap final : public QPixmap {
public:

	MiqtVirtualQPixmap(): QPixmap() {}
	MiqtVirtualQPixmap(int w, int h): QPixmap(w, h) {}
	MiqtVirtualQPixmap(const QSize& param1): QPixmap(param1) {}
	MiqtVirtualQPixmap(const QString& fileName): QPixmap(fileName) {}
	MiqtVirtualQPixmap(const QPixmap& param1): QPixmap(param1) {}
	MiqtVirtualQPixmap(const QString& fileName, const char* format): QPixmap(fileName, format) {}
	MiqtVirtualQPixmap(const QString& fileName, const char* format, Qt::ImageConversionFlags flags): QPixmap(fileName, format, flags) {}

	virtual ~MiqtVirtualQPixmap() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPixmap::devType();
		}

		int callback_return_value = miqt_exec_callback_QPixmap_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QPixmap_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPixmap::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QPixmap_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QPixmap_virtualbase_paintEngine(const void* self);

};

QPixmap* QPixmap_new() {
	return new (std::nothrow) MiqtVirtualQPixmap();
}

QPixmap* QPixmap_new2(int w, int h) {
	return new (std::nothrow) MiqtVirtualQPixmap(static_cast<int>(w), static_cast<int>(h));
}

QPixmap* QPixmap_new3(QSize* param1) {
	return new (std::nothrow) MiqtVirtualQPixmap(*param1);
}

QPixmap* QPixmap_new4(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQPixmap(fileName_QString);
}

QPixmap* QPixmap_new5(QPixmap* param1) {
	return new (std::nothrow) MiqtVirtualQPixmap(*param1);
}

QPixmap* QPixmap_new6(struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQPixmap(fileName_QString, format);
}

QPixmap* QPixmap_new7(struct miqt_string fileName, const char* format, int flags) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQPixmap(fileName_QString, format, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

void QPixmap_virtbase(QPixmap* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

void QPixmap_swap(QPixmap* self, QPixmap* other) {
	self->swap(*other);
}

QVariant* QPixmap_ToQVariant(const QPixmap* self) {
	return new QVariant(self->operator QVariant());
}

bool QPixmap_isNull(const QPixmap* self) {
	return self->isNull();
}

int QPixmap_devType(const QPixmap* self) {
	return self->devType();
}

int QPixmap_width(const QPixmap* self) {
	return self->width();
}

int QPixmap_height(const QPixmap* self) {
	return self->height();
}

QSize* QPixmap_size(const QPixmap* self) {
	return new QSize(self->size());
}

QRect* QPixmap_rect(const QPixmap* self) {
	return new QRect(self->rect());
}

int QPixmap_depth(const QPixmap* self) {
	return self->depth();
}

int QPixmap_defaultDepth() {
	return QPixmap::defaultDepth();
}

void QPixmap_fill(QPixmap* self) {
	self->fill();
}

QBitmap* QPixmap_mask(const QPixmap* self) {
	return new QBitmap(self->mask());
}

void QPixmap_setMask(QPixmap* self, QBitmap* mask) {
	self->setMask(*mask);
}

double QPixmap_devicePixelRatio(const QPixmap* self) {
	double _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

void QPixmap_setDevicePixelRatio(QPixmap* self, double scaleFactor) {
	self->setDevicePixelRatio(static_cast<double>(scaleFactor));
}

QSizeF* QPixmap_deviceIndependentSize(const QPixmap* self) {
	return new QSizeF(self->deviceIndependentSize());
}

bool QPixmap_hasAlpha(const QPixmap* self) {
	return self->hasAlpha();
}

bool QPixmap_hasAlphaChannel(const QPixmap* self) {
	return self->hasAlphaChannel();
}

QBitmap* QPixmap_createHeuristicMask(const QPixmap* self) {
	return new QBitmap(self->createHeuristicMask());
}

QBitmap* QPixmap_createMaskFromColor(const QPixmap* self, QColor* maskColor) {
	return new QBitmap(self->createMaskFromColor(*maskColor));
}

QPixmap* QPixmap_scaled(const QPixmap* self, int w, int h) {
	return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QPixmap_scaledWithQSize(const QPixmap* self, QSize* s) {
	return new QPixmap(self->scaled(*s));
}

QPixmap* QPixmap_scaledToWidth(const QPixmap* self, int w) {
	return new QPixmap(self->scaledToWidth(static_cast<int>(w)));
}

QPixmap* QPixmap_scaledToHeight(const QPixmap* self, int h) {
	return new QPixmap(self->scaledToHeight(static_cast<int>(h)));
}

QPixmap* QPixmap_transformed(const QPixmap* self, QTransform* param1) {
	return new QPixmap(self->transformed(*param1));
}

QTransform* QPixmap_trueMatrix(QTransform* m, int w, int h) {
	return new QTransform(QPixmap::trueMatrix(*m, static_cast<int>(w), static_cast<int>(h)));
}

QImage* QPixmap_toImage(const QPixmap* self) {
	return new QImage(self->toImage());
}

QPixmap* QPixmap_fromImage(QImage* image) {
	return new QPixmap(QPixmap::fromImage(*image));
}

QPixmap* QPixmap_fromImageReader(QImageReader* imageReader) {
	return new QPixmap(QPixmap::fromImageReader(imageReader));
}

bool QPixmap_load(QPixmap* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QPixmap_loadFromData(QPixmap* self, const unsigned char* buf, unsigned int len) {
	return self->loadFromData(buf, static_cast<unsigned int>(len));
}

bool QPixmap_loadFromDataWithData(QPixmap* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray);
}

bool QPixmap_save(const QPixmap* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString);
}

bool QPixmap_saveWithDevice(const QPixmap* self, QIODevice* device) {
	return self->save(device);
}

bool QPixmap_convertFromImage(QPixmap* self, QImage* img) {
	return self->convertFromImage(*img);
}

QPixmap* QPixmap_copy(const QPixmap* self, int x, int y, int width, int height) {
	return new QPixmap(self->copy(static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height)));
}

QPixmap* QPixmap_copy2(const QPixmap* self) {
	return new QPixmap(self->copy());
}

void QPixmap_scroll(QPixmap* self, int dx, int dy, int x, int y, int width, int height) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height));
}

void QPixmap_scroll2(QPixmap* self, int dx, int dy, QRect* rect) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *rect);
}

long long QPixmap_cacheKey(const QPixmap* self) {
	long long _ret = self->cacheKey();
	return static_cast<long long>(_ret);
}

bool QPixmap_isDetached(const QPixmap* self) {
	return self->isDetached();
}

void QPixmap_detach(QPixmap* self) {
	self->detach();
}

bool QPixmap_isQBitmap(const QPixmap* self) {
	return self->isQBitmap();
}

QPaintEngine* QPixmap_paintEngine(const QPixmap* self) {
	return self->paintEngine();
}

bool QPixmap_operatorNot(const QPixmap* self) {
	return self->operator!();
}

void QPixmap_fillWithFillColor(QPixmap* self, QColor* fillColor) {
	self->fill(*fillColor);
}

QBitmap* QPixmap_createHeuristicMaskWithClipTight(const QPixmap* self, bool clipTight) {
	return new QBitmap(self->createHeuristicMask(clipTight));
}

QBitmap* QPixmap_createMaskFromColor2(const QPixmap* self, QColor* maskColor, int mode) {
	return new QBitmap(self->createMaskFromColor(*maskColor, static_cast<Qt::MaskMode>(mode)));
}

QPixmap* QPixmap_scaled2(const QPixmap* self, int w, int h, int aspectMode) {
	return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QPixmap* QPixmap_scaled3(const QPixmap* self, int w, int h, int aspectMode, int mode) {
	return new QPixmap(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_scaled4(const QPixmap* self, QSize* s, int aspectMode) {
	return new QPixmap(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode)));
}

QPixmap* QPixmap_scaled5(const QPixmap* self, QSize* s, int aspectMode, int mode) {
	return new QPixmap(self->scaled(*s, static_cast<Qt::AspectRatioMode>(aspectMode), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_scaledToWidth2(const QPixmap* self, int w, int mode) {
	return new QPixmap(self->scaledToWidth(static_cast<int>(w), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_scaledToHeight2(const QPixmap* self, int h, int mode) {
	return new QPixmap(self->scaledToHeight(static_cast<int>(h), static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_transformed2(const QPixmap* self, QTransform* param1, int mode) {
	return new QPixmap(self->transformed(*param1, static_cast<Qt::TransformationMode>(mode)));
}

QPixmap* QPixmap_fromImage2(QImage* image, int flags) {
	return new QPixmap(QPixmap::fromImage(*image, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

QPixmap* QPixmap_fromImageReader2(QImageReader* imageReader, int flags) {
	return new QPixmap(QPixmap::fromImageReader(imageReader, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

bool QPixmap_load2(QPixmap* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString, format);
}

bool QPixmap_load3(QPixmap* self, struct miqt_string fileName, const char* format, int flags) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString, format, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

bool QPixmap_loadFromData2(QPixmap* self, const unsigned char* buf, unsigned int len, const char* format) {
	return self->loadFromData(buf, static_cast<unsigned int>(len), format);
}

bool QPixmap_loadFromData3(QPixmap* self, const unsigned char* buf, unsigned int len, const char* format, int flags) {
	return self->loadFromData(buf, static_cast<unsigned int>(len), format, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

bool QPixmap_loadFromData4(QPixmap* self, struct miqt_string data, const char* format) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray, format);
}

bool QPixmap_loadFromData5(QPixmap* self, struct miqt_string data, const char* format, int flags) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->loadFromData(data_QByteArray, format, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

bool QPixmap_save2(const QPixmap* self, struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format);
}

bool QPixmap_save3(const QPixmap* self, struct miqt_string fileName, const char* format, int quality) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString, format, static_cast<int>(quality));
}

bool QPixmap_save4(const QPixmap* self, QIODevice* device, const char* format) {
	return self->save(device, format);
}

bool QPixmap_save5(const QPixmap* self, QIODevice* device, const char* format, int quality) {
	return self->save(device, format, static_cast<int>(quality));
}

bool QPixmap_convertFromImage2(QPixmap* self, QImage* img, int flags) {
	return self->convertFromImage(*img, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

QPixmap* QPixmap_copyWithRect(const QPixmap* self, QRect* rect) {
	return new QPixmap(self->copy(*rect));
}

void QPixmap_scroll3(QPixmap* self, int dx, int dy, int x, int y, int width, int height, QRegion* exposed) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), static_cast<int>(x), static_cast<int>(y), static_cast<int>(width), static_cast<int>(height), exposed);
}

void QPixmap_scroll4(QPixmap* self, int dx, int dy, QRect* rect, QRegion* exposed) {
	self->scroll(static_cast<int>(dx), static_cast<int>(dy), *rect, exposed);
}

bool QPixmap_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPixmap* self_cast = static_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QPixmap_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQPixmap*>(self)->QPixmap::devType();
}

bool QPixmap_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPixmap* self_cast = static_cast<MiqtVirtualQPixmap*>( (QPixmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPixmap_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQPixmap*>(self)->QPixmap::paintEngine();
}

void QPixmap_delete(QPixmap* self) {
	delete self;
}

QIcon* QIcon_new() {
	return new (std::nothrow) QIcon();
}

QIcon* QIcon_new2(QPixmap* pixmap) {
	return new (std::nothrow) QIcon(*pixmap);
}

QIcon* QIcon_new3(QIcon* other) {
	return new (std::nothrow) QIcon(*other);
}

QIcon* QIcon_new4(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) QIcon(fileName_QString);
}

QIcon* QIcon_new5(QIconEngine* engine) {
	return new (std::nothrow) QIcon(engine);
}

void QIcon_swap(QIcon* self, QIcon* other) {
	self->swap(*other);
}

QVariant* QIcon_ToQVariant(const QIcon* self) {
	return new QVariant(self->operator QVariant());
}

QPixmap* QIcon_pixmap(const QIcon* self, QSize* size) {
	return new QPixmap(self->pixmap(*size));
}

QPixmap* QIcon_pixmap2(const QIcon* self, int w, int h) {
	return new QPixmap(self->pixmap(static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QIcon_pixmapWithExtent(const QIcon* self, int extent) {
	return new QPixmap(self->pixmap(static_cast<int>(extent)));
}

QPixmap* QIcon_pixmap3(const QIcon* self, QSize* size, double devicePixelRatio) {
	return new QPixmap(self->pixmap(*size, static_cast<double>(devicePixelRatio)));
}

QPixmap* QIcon_pixmap4(const QIcon* self, QWindow* window, QSize* size) {
	return new QPixmap(self->pixmap(window, *size));
}

QSize* QIcon_actualSize(const QIcon* self, QSize* size) {
	return new QSize(self->actualSize(*size));
}

QSize* QIcon_actualSize2(const QIcon* self, QWindow* window, QSize* size) {
	return new QSize(self->actualSize(window, *size));
}

struct miqt_string QIcon_name(const QIcon* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIcon_paint(const QIcon* self, QPainter* painter, QRect* rect) {
	self->paint(painter, *rect);
}

void QIcon_paint2(const QIcon* self, QPainter* painter, int x, int y, int w, int h) {
	self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

bool QIcon_isNull(const QIcon* self) {
	return self->isNull();
}

bool QIcon_isDetached(const QIcon* self) {
	return self->isDetached();
}

void QIcon_detach(QIcon* self) {
	self->detach();
}

long long QIcon_cacheKey(const QIcon* self) {
	long long _ret = self->cacheKey();
	return static_cast<long long>(_ret);
}

void QIcon_addPixmap(QIcon* self, QPixmap* pixmap) {
	self->addPixmap(*pixmap);
}

void QIcon_addFile(QIcon* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString);
}

struct miqt_array /* of QSize* */  QIcon_availableSizes(const QIcon* self) {
	QList<QSize> _ret = self->availableSizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QIcon_setIsMask(QIcon* self, bool isMask) {
	self->setIsMask(isMask);
}

bool QIcon_isMask(const QIcon* self) {
	return self->isMask();
}

QIcon* QIcon_fromTheme(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QIcon(QIcon::fromTheme(name_QString));
}

QIcon* QIcon_fromTheme2(struct miqt_string name, QIcon* fallback) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QIcon(QIcon::fromTheme(name_QString, *fallback));
}

bool QIcon_hasThemeIcon(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return QIcon::hasThemeIcon(name_QString);
}

QIcon* QIcon_fromThemeWithIcon(int icon) {
	return new QIcon(QIcon::fromTheme(static_cast<QIcon::ThemeIcon>(icon)));
}

QIcon* QIcon_fromTheme3(int icon, QIcon* fallback) {
	return new QIcon(QIcon::fromTheme(static_cast<QIcon::ThemeIcon>(icon), *fallback));
}

bool QIcon_hasThemeIconWithIcon(int icon) {
	return QIcon::hasThemeIcon(static_cast<QIcon::ThemeIcon>(icon));
}

struct miqt_array /* of struct miqt_string */  QIcon_themeSearchPaths() {
	QStringList _ret = QIcon::themeSearchPaths();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QIcon_setThemeSearchPaths(struct miqt_array /* of struct miqt_string */  searchpath) {
	QStringList searchpath_QList;
	searchpath_QList.reserve(searchpath.len);
	struct miqt_string* searchpath_arr = static_cast<struct miqt_string*>(searchpath.data);
	for(size_t i = 0; i < searchpath.len; ++i) {
		QString searchpath_arr_i_QString = QString::fromUtf8(searchpath_arr[i].data, searchpath_arr[i].len);
		searchpath_QList.push_back(searchpath_arr_i_QString);
	}
	QIcon::setThemeSearchPaths(searchpath_QList);
}

struct miqt_array /* of struct miqt_string */  QIcon_fallbackSearchPaths() {
	QStringList _ret = QIcon::fallbackSearchPaths();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QIcon_setFallbackSearchPaths(struct miqt_array /* of struct miqt_string */  paths) {
	QStringList paths_QList;
	paths_QList.reserve(paths.len);
	struct miqt_string* paths_arr = static_cast<struct miqt_string*>(paths.data);
	for(size_t i = 0; i < paths.len; ++i) {
		QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
		paths_QList.push_back(paths_arr_i_QString);
	}
	QIcon::setFallbackSearchPaths(paths_QList);
}

struct miqt_string QIcon_themeName() {
	QString _ret = QIcon::themeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIcon_setThemeName(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QIcon::setThemeName(path_QString);
}

struct miqt_string QIcon_fallbackThemeName() {
	QString _ret = QIcon::fallbackThemeName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIcon_setFallbackThemeName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QIcon::setFallbackThemeName(name_QString);
}

QPixmap* QIcon_pixmap5(const QIcon* self, QSize* size, int mode) {
	return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_pixmap6(const QIcon* self, QSize* size, int mode, int state) {
	return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_pixmap7(const QIcon* self, int w, int h, int mode) {
	return new QPixmap(self->pixmap(static_cast<int>(w), static_cast<int>(h), static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_pixmap8(const QIcon* self, int w, int h, int mode, int state) {
	return new QPixmap(self->pixmap(static_cast<int>(w), static_cast<int>(h), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_pixmap9(const QIcon* self, int extent, int mode) {
	return new QPixmap(self->pixmap(static_cast<int>(extent), static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_pixmap10(const QIcon* self, int extent, int mode, int state) {
	return new QPixmap(self->pixmap(static_cast<int>(extent), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_pixmap11(const QIcon* self, QSize* size, double devicePixelRatio, int mode) {
	return new QPixmap(self->pixmap(*size, static_cast<double>(devicePixelRatio), static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_pixmap12(const QIcon* self, QSize* size, double devicePixelRatio, int mode, int state) {
	return new QPixmap(self->pixmap(*size, static_cast<double>(devicePixelRatio), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_pixmap13(const QIcon* self, QWindow* window, QSize* size, int mode) {
	return new QPixmap(self->pixmap(window, *size, static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_pixmap14(const QIcon* self, QWindow* window, QSize* size, int mode, int state) {
	return new QPixmap(self->pixmap(window, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QSize* QIcon_actualSize3(const QIcon* self, QSize* size, int mode) {
	return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode)));
}

QSize* QIcon_actualSize4(const QIcon* self, QSize* size, int mode, int state) {
	return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QSize* QIcon_actualSize5(const QIcon* self, QWindow* window, QSize* size, int mode) {
	return new QSize(self->actualSize(window, *size, static_cast<QIcon::Mode>(mode)));
}

QSize* QIcon_actualSize6(const QIcon* self, QWindow* window, QSize* size, int mode, int state) {
	return new QSize(self->actualSize(window, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

void QIcon_paint3(const QIcon* self, QPainter* painter, QRect* rect, int alignment) {
	self->paint(painter, *rect, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QIcon_paint4(const QIcon* self, QPainter* painter, QRect* rect, int alignment, int mode) {
	self->paint(painter, *rect, static_cast<QFlags<Qt::AlignmentFlag>>(alignment), static_cast<QIcon::Mode>(mode));
}

void QIcon_paint5(const QIcon* self, QPainter* painter, QRect* rect, int alignment, int mode, int state) {
	self->paint(painter, *rect, static_cast<QFlags<Qt::AlignmentFlag>>(alignment), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_paint6(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment) {
	self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QIcon_paint7(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, int mode) {
	self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<QFlags<Qt::AlignmentFlag>>(alignment), static_cast<QIcon::Mode>(mode));
}

void QIcon_paint8(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, int mode, int state) {
	self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<QFlags<Qt::AlignmentFlag>>(alignment), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_addPixmap2(QIcon* self, QPixmap* pixmap, int mode) {
	self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode));
}

void QIcon_addPixmap3(QIcon* self, QPixmap* pixmap, int mode, int state) {
	self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_addFile2(QIcon* self, struct miqt_string fileName, QSize* size) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString, *size);
}

void QIcon_addFile3(QIcon* self, struct miqt_string fileName, QSize* size, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode));
}

void QIcon_addFile4(QIcon* self, struct miqt_string fileName, QSize* size, int mode, int state) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

struct miqt_array /* of QSize* */  QIcon_availableSizesWithMode(const QIcon* self, int mode) {
	QList<QSize> _ret = self->availableSizes(static_cast<QIcon::Mode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QSize* */  QIcon_availableSizes2(const QIcon* self, int mode, int state) {
	QList<QSize> _ret = self->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QIcon_delete(QIcon* self) {
	delete self;
}

class MiqtVirtualQAbstractFileIconProvider final : public QAbstractFileIconProvider {
public:

	MiqtVirtualQAbstractFileIconProvider(): QAbstractFileIconProvider() {}

	virtual ~MiqtVirtualQAbstractFileIconProvider() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__icon = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(IconType param1) const override {
		if (handle__icon == 0) {
			return QAbstractFileIconProvider::icon(param1);
		}

		int sigval1 = param1;
		QIcon* callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_icon(this, handle__icon, sigval1);
		return *callback_return_value;
	}

	friend QIcon* QAbstractFileIconProvider_virtualbase_icon(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__iconWithQFileInfo = 0;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(const QFileInfo& param1) const override {
		if (handle__iconWithQFileInfo == 0) {
			return QAbstractFileIconProvider::icon(param1);
		}

		const QFileInfo& param1_ret = param1;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&param1_ret);
		QIcon* callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_iconWithQFileInfo(this, handle__iconWithQFileInfo, sigval1);
		return *callback_return_value;
	}

	friend QIcon* QAbstractFileIconProvider_virtualbase_iconWithQFileInfo(const void* self, QFileInfo* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QString type(const QFileInfo& param1) const override {
		if (handle__type == 0) {
			return QAbstractFileIconProvider::type(param1);
		}

		const QFileInfo& param1_ret = param1;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&param1_ret);
		struct miqt_string callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_type(this, handle__type, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QAbstractFileIconProvider_virtualbase_type(const void* self, QFileInfo* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setOptions = 0;

	// Subclass to allow providing a Go implementation
	virtual void setOptions(Options options) override {
		if (handle__setOptions == 0) {
			QAbstractFileIconProvider::setOptions(options);
			return;
		}

		int sigval1 = options;
		miqt_exec_callback_QAbstractFileIconProvider_setOptions(this, handle__setOptions, sigval1);

	}

	friend void QAbstractFileIconProvider_virtualbase_setOptions(void* self, int options);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__options = 0;

	// Subclass to allow providing a Go implementation
	virtual Options options() const override {
		if (handle__options == 0) {
			return QAbstractFileIconProvider::options();
		}

		int callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_options(this, handle__options);
		return static_cast<QAbstractFileIconProvider::Options>(callback_return_value);
	}

	friend int QAbstractFileIconProvider_virtualbase_options(const void* self);

};

QAbstractFileIconProvider* QAbstractFileIconProvider_new() {
	return new (std::nothrow) MiqtVirtualQAbstractFileIconProvider();
}

QIcon* QAbstractFileIconProvider_icon(const QAbstractFileIconProvider* self, int param1) {
	return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
}

QIcon* QAbstractFileIconProvider_iconWithQFileInfo(const QAbstractFileIconProvider* self, QFileInfo* param1) {
	return new QIcon(self->icon(*param1));
}

struct miqt_string QAbstractFileIconProvider_type(const QAbstractFileIconProvider* self, QFileInfo* param1) {
	QString _ret = self->type(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractFileIconProvider_setOptions(QAbstractFileIconProvider* self, int options) {
	self->setOptions(static_cast<QAbstractFileIconProvider::Options>(options));
}

int QAbstractFileIconProvider_options(const QAbstractFileIconProvider* self) {
	return self->options();
}

bool QAbstractFileIconProvider_override_virtual_icon(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = static_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__icon = slot;
	return true;
}

QIcon* QAbstractFileIconProvider_virtualbase_icon(const void* self, int param1) {
	return new QIcon(static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::icon(static_cast<MiqtVirtualQAbstractFileIconProvider::IconType>(param1)));
}

bool QAbstractFileIconProvider_override_virtual_iconWithQFileInfo(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = static_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__iconWithQFileInfo = slot;
	return true;
}

QIcon* QAbstractFileIconProvider_virtualbase_iconWithQFileInfo(const void* self, QFileInfo* param1) {
	return new QIcon(static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::icon(*param1));
}

bool QAbstractFileIconProvider_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = static_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = slot;
	return true;
}

struct miqt_string QAbstractFileIconProvider_virtualbase_type(const void* self, QFileInfo* param1) {
	QString _ret = static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::type(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractFileIconProvider_override_virtual_setOptions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = static_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setOptions = slot;
	return true;
}

void QAbstractFileIconProvider_virtualbase_setOptions(void* self, int options) {
	static_cast<MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::setOptions(static_cast<MiqtVirtualQAbstractFileIconProvider::Options>(options));
}

bool QAbstractFileIconProvider_override_virtual_options(void* self, intptr_t slot) {
	MiqtVirtualQAbstractFileIconProvider* self_cast = static_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__options = slot;
	return true;
}

int QAbstractFileIconProvider_virtualbase_options(const void* self) {
	return static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::options();
}

void QAbstractFileIconProvider_delete(QAbstractFileIconProvider* self) {
	delete self;
}

QVector2D* QVector2D_new() {
	return new (std::nothrow) QVector2D();
}

QVector2D* QVector2D_new2(int param1) {
	return new (std::nothrow) QVector2D(static_cast<Qt::Initialization>(param1));
}

QVector2D* QVector2D_new3(float xpos, float ypos) {
	return new (std::nothrow) QVector2D(static_cast<float>(xpos), static_cast<float>(ypos));
}

QVector2D* QVector2D_new4(QPoint* point) {
	return new (std::nothrow) QVector2D(*point);
}

QVector2D* QVector2D_new5(QPointF* point) {
	return new (std::nothrow) QVector2D(*point);
}

QVector2D* QVector2D_new6(QVector3D* vector) {
	return new (std::nothrow) QVector2D(*vector);
}

QVector2D* QVector2D_new7(QVector4D* vector) {
	return new (std::nothrow) QVector2D(*vector);
}

QVector2D* QVector2D_new8(QVector2D* param1) {
	return new (std::nothrow) QVector2D(*param1);
}

bool QVector2D_isNull(const QVector2D* self) {
	return self->isNull();
}

float QVector2D_x(const QVector2D* self) {
	return self->x();
}

float QVector2D_y(const QVector2D* self) {
	return self->y();
}

void QVector2D_setX(QVector2D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector2D_setY(QVector2D* self, float y) {
	self->setY(static_cast<float>(y));
}

float QVector2D_operatorSubscript(const QVector2D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector2D_length(const QVector2D* self) {
	return self->length();
}

float QVector2D_lengthSquared(const QVector2D* self) {
	return self->lengthSquared();
}

QVector2D* QVector2D_normalized(const QVector2D* self) {
	return new QVector2D(self->normalized());
}

void QVector2D_normalize(QVector2D* self) {
	self->normalize();
}

float QVector2D_distanceToPoint(const QVector2D* self, QVector2D* point) {
	return self->distanceToPoint(*point);
}

float QVector2D_distanceToLine(const QVector2D* self, QVector2D* point, QVector2D* direction) {
	return self->distanceToLine(*point, *direction);
}

QVector2D* QVector2D_operatorPlusAssign(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorMinusAssign(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorMultiplyAssign(QVector2D* self, float factor) {
	QVector2D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorMultiplyAssignWithVector(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorDivideAssign(QVector2D* self, float divisor) {
	QVector2D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector2D* QVector2D_operatorDivideAssignWithVector(QVector2D* self, QVector2D* vector) {
	QVector2D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector2D_dotProduct(QVector2D* v1, QVector2D* v2) {
	return QVector2D::dotProduct(*v1, *v2);
}

QVector3D* QVector2D_toVector3D(const QVector2D* self) {
	return new QVector3D(self->toVector3D());
}

QVector4D* QVector2D_toVector4D(const QVector2D* self) {
	return new QVector4D(self->toVector4D());
}

QPoint* QVector2D_toPoint(const QVector2D* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVector2D_toPointF(const QVector2D* self) {
	return new QPointF(self->toPointF());
}

QVariant* QVector2D_ToQVariant(const QVector2D* self) {
	return new QVariant(self->operator QVariant());
}

void QVector2D_delete(QVector2D* self) {
	delete self;
}

QVector3D* QVector3D_new() {
	return new (std::nothrow) QVector3D();
}

QVector3D* QVector3D_new2(int param1) {
	return new (std::nothrow) QVector3D(static_cast<Qt::Initialization>(param1));
}

QVector3D* QVector3D_new3(float xpos, float ypos, float zpos) {
	return new (std::nothrow) QVector3D(static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos));
}

QVector3D* QVector3D_new4(QPoint* point) {
	return new (std::nothrow) QVector3D(*point);
}

QVector3D* QVector3D_new5(QPointF* point) {
	return new (std::nothrow) QVector3D(*point);
}

QVector3D* QVector3D_new6(QVector2D* vector) {
	return new (std::nothrow) QVector3D(*vector);
}

QVector3D* QVector3D_new7(QVector2D* vector, float zpos) {
	return new (std::nothrow) QVector3D(*vector, static_cast<float>(zpos));
}

QVector3D* QVector3D_new8(QVector4D* vector) {
	return new (std::nothrow) QVector3D(*vector);
}

QVector3D* QVector3D_new9(QVector3D* param1) {
	return new (std::nothrow) QVector3D(*param1);
}

bool QVector3D_isNull(const QVector3D* self) {
	return self->isNull();
}

float QVector3D_x(const QVector3D* self) {
	return self->x();
}

float QVector3D_y(const QVector3D* self) {
	return self->y();
}

float QVector3D_z(const QVector3D* self) {
	return self->z();
}

void QVector3D_setX(QVector3D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector3D_setY(QVector3D* self, float y) {
	self->setY(static_cast<float>(y));
}

void QVector3D_setZ(QVector3D* self, float z) {
	self->setZ(static_cast<float>(z));
}

float QVector3D_operatorSubscript(const QVector3D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector3D_length(const QVector3D* self) {
	return self->length();
}

float QVector3D_lengthSquared(const QVector3D* self) {
	return self->lengthSquared();
}

QVector3D* QVector3D_normalized(const QVector3D* self) {
	return new QVector3D(self->normalized());
}

void QVector3D_normalize(QVector3D* self) {
	self->normalize();
}

QVector3D* QVector3D_operatorPlusAssign(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorMinusAssign(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorMultiplyAssign(QVector3D* self, float factor) {
	QVector3D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorMultiplyAssignWithVector(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorDivideAssign(QVector3D* self, float divisor) {
	QVector3D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector3D* QVector3D_operatorDivideAssignWithVector(QVector3D* self, QVector3D* vector) {
	QVector3D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector3D_dotProduct(QVector3D* v1, QVector3D* v2) {
	return QVector3D::dotProduct(*v1, *v2);
}

QVector3D* QVector3D_crossProduct(QVector3D* v1, QVector3D* v2) {
	return new QVector3D(QVector3D::crossProduct(*v1, *v2));
}

QVector3D* QVector3D_normal(QVector3D* v1, QVector3D* v2) {
	return new QVector3D(QVector3D::normal(*v1, *v2));
}

QVector3D* QVector3D_normal2(QVector3D* v1, QVector3D* v2, QVector3D* v3) {
	return new QVector3D(QVector3D::normal(*v1, *v2, *v3));
}

QVector3D* QVector3D_project(const QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport) {
	return new QVector3D(self->project(*modelView, *projection, *viewport));
}

QVector3D* QVector3D_unproject(const QVector3D* self, QMatrix4x4* modelView, QMatrix4x4* projection, QRect* viewport) {
	return new QVector3D(self->unproject(*modelView, *projection, *viewport));
}

float QVector3D_distanceToPoint(const QVector3D* self, QVector3D* point) {
	return self->distanceToPoint(*point);
}

float QVector3D_distanceToPlane(const QVector3D* self, QVector3D* plane, QVector3D* normal) {
	return self->distanceToPlane(*plane, *normal);
}

float QVector3D_distanceToPlane2(const QVector3D* self, QVector3D* plane1, QVector3D* plane2, QVector3D* plane3) {
	return self->distanceToPlane(*plane1, *plane2, *plane3);
}

float QVector3D_distanceToLine(const QVector3D* self, QVector3D* point, QVector3D* direction) {
	return self->distanceToLine(*point, *direction);
}

QVector2D* QVector3D_toVector2D(const QVector3D* self) {
	return new QVector2D(self->toVector2D());
}

QVector4D* QVector3D_toVector4D(const QVector3D* self) {
	return new QVector4D(self->toVector4D());
}

QPoint* QVector3D_toPoint(const QVector3D* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVector3D_toPointF(const QVector3D* self) {
	return new QPointF(self->toPointF());
}

QVariant* QVector3D_ToQVariant(const QVector3D* self) {
	return new QVariant(self->operator QVariant());
}

void QVector3D_delete(QVector3D* self) {
	delete self;
}

QVector4D* QVector4D_new() {
	return new (std::nothrow) QVector4D();
}

QVector4D* QVector4D_new2(int param1) {
	return new (std::nothrow) QVector4D(static_cast<Qt::Initialization>(param1));
}

QVector4D* QVector4D_new3(float xpos, float ypos, float zpos, float wpos) {
	return new (std::nothrow) QVector4D(static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos), static_cast<float>(wpos));
}

QVector4D* QVector4D_new4(QPoint* point) {
	return new (std::nothrow) QVector4D(*point);
}

QVector4D* QVector4D_new5(QPointF* point) {
	return new (std::nothrow) QVector4D(*point);
}

QVector4D* QVector4D_new6(QVector2D* vector) {
	return new (std::nothrow) QVector4D(*vector);
}

QVector4D* QVector4D_new7(QVector2D* vector, float zpos, float wpos) {
	return new (std::nothrow) QVector4D(*vector, static_cast<float>(zpos), static_cast<float>(wpos));
}

QVector4D* QVector4D_new8(QVector3D* vector) {
	return new (std::nothrow) QVector4D(*vector);
}

QVector4D* QVector4D_new9(QVector3D* vector, float wpos) {
	return new (std::nothrow) QVector4D(*vector, static_cast<float>(wpos));
}

QVector4D* QVector4D_new10(QVector4D* param1) {
	return new (std::nothrow) QVector4D(*param1);
}

bool QVector4D_isNull(const QVector4D* self) {
	return self->isNull();
}

float QVector4D_x(const QVector4D* self) {
	return self->x();
}

float QVector4D_y(const QVector4D* self) {
	return self->y();
}

float QVector4D_z(const QVector4D* self) {
	return self->z();
}

float QVector4D_w(const QVector4D* self) {
	return self->w();
}

void QVector4D_setX(QVector4D* self, float x) {
	self->setX(static_cast<float>(x));
}

void QVector4D_setY(QVector4D* self, float y) {
	self->setY(static_cast<float>(y));
}

void QVector4D_setZ(QVector4D* self, float z) {
	self->setZ(static_cast<float>(z));
}

void QVector4D_setW(QVector4D* self, float w) {
	self->setW(static_cast<float>(w));
}

float QVector4D_operatorSubscript(const QVector4D* self, int i) {
	return self->operator[](static_cast<int>(i));
}

float QVector4D_length(const QVector4D* self) {
	return self->length();
}

float QVector4D_lengthSquared(const QVector4D* self) {
	return self->lengthSquared();
}

QVector4D* QVector4D_normalized(const QVector4D* self) {
	return new QVector4D(self->normalized());
}

void QVector4D_normalize(QVector4D* self) {
	self->normalize();
}

QVector4D* QVector4D_operatorPlusAssign(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator+=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorMinusAssign(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator-=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorMultiplyAssign(QVector4D* self, float factor) {
	QVector4D& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorMultiplyAssignWithVector(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator*=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorDivideAssign(QVector4D* self, float divisor) {
	QVector4D& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QVector4D_operatorDivideAssignWithVector(QVector4D* self, QVector4D* vector) {
	QVector4D& _ret = self->operator/=(*vector);
	// Cast returned reference into pointer
	return &_ret;
}

float QVector4D_dotProduct(QVector4D* v1, QVector4D* v2) {
	return QVector4D::dotProduct(*v1, *v2);
}

QVector2D* QVector4D_toVector2D(const QVector4D* self) {
	return new QVector2D(self->toVector2D());
}

QVector2D* QVector4D_toVector2DAffine(const QVector4D* self) {
	return new QVector2D(self->toVector2DAffine());
}

QVector3D* QVector4D_toVector3D(const QVector4D* self) {
	return new QVector3D(self->toVector3D());
}

QVector3D* QVector4D_toVector3DAffine(const QVector4D* self) {
	return new QVector3D(self->toVector3DAffine());
}

QPoint* QVector4D_toPoint(const QVector4D* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVector4D_toPointF(const QVector4D* self) {
	return new QPointF(self->toPointF());
}

QVariant* QVector4D_ToQVariant(const QVector4D* self) {
	return new QVariant(self->operator QVariant());
}

void QVector4D_delete(QVector4D* self) {
	delete self;
}

void QScreen_virtbase(QScreen* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QScreen_metaObject(const QScreen* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QScreen_tr(const char* s) {
	QString _ret = QScreen::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_name(const QScreen* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_manufacturer(const QScreen* self) {
	QString _ret = self->manufacturer();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_model(const QScreen* self) {
	QString _ret = self->model();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_serialNumber(const QScreen* self) {
	QString _ret = self->serialNumber();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QScreen_depth(const QScreen* self) {
	return self->depth();
}

QSize* QScreen_size(const QScreen* self) {
	return new QSize(self->size());
}

QRect* QScreen_geometry(const QScreen* self) {
	return new QRect(self->geometry());
}

QSizeF* QScreen_physicalSize(const QScreen* self) {
	return new QSizeF(self->physicalSize());
}

double QScreen_physicalDotsPerInchX(const QScreen* self) {
	double _ret = self->physicalDotsPerInchX();
	return static_cast<double>(_ret);
}

double QScreen_physicalDotsPerInchY(const QScreen* self) {
	double _ret = self->physicalDotsPerInchY();
	return static_cast<double>(_ret);
}

double QScreen_physicalDotsPerInch(const QScreen* self) {
	double _ret = self->physicalDotsPerInch();
	return static_cast<double>(_ret);
}

double QScreen_logicalDotsPerInchX(const QScreen* self) {
	double _ret = self->logicalDotsPerInchX();
	return static_cast<double>(_ret);
}

double QScreen_logicalDotsPerInchY(const QScreen* self) {
	double _ret = self->logicalDotsPerInchY();
	return static_cast<double>(_ret);
}

double QScreen_logicalDotsPerInch(const QScreen* self) {
	double _ret = self->logicalDotsPerInch();
	return static_cast<double>(_ret);
}

double QScreen_devicePixelRatio(const QScreen* self) {
	double _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

QSize* QScreen_availableSize(const QScreen* self) {
	return new QSize(self->availableSize());
}

QRect* QScreen_availableGeometry(const QScreen* self) {
	return new QRect(self->availableGeometry());
}

struct miqt_array /* of QScreen* */  QScreen_virtualSiblings(const QScreen* self) {
	QList<QScreen *> _ret = self->virtualSiblings();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScreen** _arr = static_cast<QScreen**>(malloc(sizeof(QScreen*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QScreen* QScreen_virtualSiblingAt(QScreen* self, QPoint* point) {
	return self->virtualSiblingAt(*point);
}

QSize* QScreen_virtualSize(const QScreen* self) {
	return new QSize(self->virtualSize());
}

QRect* QScreen_virtualGeometry(const QScreen* self) {
	return new QRect(self->virtualGeometry());
}

QSize* QScreen_availableVirtualSize(const QScreen* self) {
	return new QSize(self->availableVirtualSize());
}

QRect* QScreen_availableVirtualGeometry(const QScreen* self) {
	return new QRect(self->availableVirtualGeometry());
}

int QScreen_primaryOrientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->primaryOrientation();
	return static_cast<int>(_ret);
}

int QScreen_orientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

int QScreen_nativeOrientation(const QScreen* self) {
	Qt::ScreenOrientation _ret = self->nativeOrientation();
	return static_cast<int>(_ret);
}

int QScreen_angleBetween(const QScreen* self, int a, int b) {
	return self->angleBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b));
}

QTransform* QScreen_transformBetween(const QScreen* self, int a, int b, QRect* target) {
	return new QTransform(self->transformBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *target));
}

QRect* QScreen_mapBetween(const QScreen* self, int a, int b, QRect* rect) {
	return new QRect(self->mapBetween(static_cast<Qt::ScreenOrientation>(a), static_cast<Qt::ScreenOrientation>(b), *rect));
}

bool QScreen_isPortrait(const QScreen* self, int orientation) {
	return self->isPortrait(static_cast<Qt::ScreenOrientation>(orientation));
}

bool QScreen_isLandscape(const QScreen* self, int orientation) {
	return self->isLandscape(static_cast<Qt::ScreenOrientation>(orientation));
}

QPixmap* QScreen_grabWindow(QScreen* self) {
	return new QPixmap(self->grabWindow());
}

double QScreen_refreshRate(const QScreen* self) {
	double _ret = self->refreshRate();
	return static_cast<double>(_ret);
}

void QScreen_geometryChanged(QScreen* self, QRect* geometry) {
	self->geometryChanged(*geometry);
}

void QScreen_connect_geometryChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::geometryChanged), self, [=](const QRect& geometry) {
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
		miqt_exec_callback_QScreen_geometryChanged(slot, sigval1);
	});
}

void QScreen_availableGeometryChanged(QScreen* self, QRect* geometry) {
	self->availableGeometryChanged(*geometry);
}

void QScreen_connect_availableGeometryChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::availableGeometryChanged), self, [=](const QRect& geometry) {
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
		miqt_exec_callback_QScreen_availableGeometryChanged(slot, sigval1);
	});
}

void QScreen_physicalSizeChanged(QScreen* self, QSizeF* size) {
	self->physicalSizeChanged(*size);
}

void QScreen_connect_physicalSizeChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QSizeF&)>(&QScreen::physicalSizeChanged), self, [=](const QSizeF& size) {
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
		miqt_exec_callback_QScreen_physicalSizeChanged(slot, sigval1);
	});
}

void QScreen_physicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->physicalDotsPerInchChanged(static_cast<double>(dpi));
}

void QScreen_connect_physicalDotsPerInchChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::physicalDotsPerInchChanged), self, [=](qreal dpi) {
		double dpi_ret = dpi;
		double sigval1 = static_cast<double>(dpi_ret);
		miqt_exec_callback_QScreen_physicalDotsPerInchChanged(slot, sigval1);
	});
}

void QScreen_logicalDotsPerInchChanged(QScreen* self, double dpi) {
	self->logicalDotsPerInchChanged(static_cast<double>(dpi));
}

void QScreen_connect_logicalDotsPerInchChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::logicalDotsPerInchChanged), self, [=](qreal dpi) {
		double dpi_ret = dpi;
		double sigval1 = static_cast<double>(dpi_ret);
		miqt_exec_callback_QScreen_logicalDotsPerInchChanged(slot, sigval1);
	});
}

void QScreen_virtualGeometryChanged(QScreen* self, QRect* rect) {
	self->virtualGeometryChanged(*rect);
}

void QScreen_connect_virtualGeometryChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(const QRect&)>(&QScreen::virtualGeometryChanged), self, [=](const QRect& rect) {
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		miqt_exec_callback_QScreen_virtualGeometryChanged(slot, sigval1);
	});
}

void QScreen_primaryOrientationChanged(QScreen* self, int orientation) {
	self->primaryOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_connect_primaryOrientationChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::primaryOrientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QScreen_primaryOrientationChanged(slot, sigval1);
	});
}

void QScreen_orientationChanged(QScreen* self, int orientation) {
	self->orientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QScreen_connect_orientationChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(Qt::ScreenOrientation)>(&QScreen::orientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QScreen_orientationChanged(slot, sigval1);
	});
}

void QScreen_refreshRateChanged(QScreen* self, double refreshRate) {
	self->refreshRateChanged(static_cast<double>(refreshRate));
}

void QScreen_connect_refreshRateChanged(QScreen* self, intptr_t slot) {
	QScreen::connect(self, static_cast<void (QScreen::*)(qreal)>(&QScreen::refreshRateChanged), self, [=](qreal refreshRate) {
		double refreshRate_ret = refreshRate;
		double sigval1 = static_cast<double>(refreshRate_ret);
		miqt_exec_callback_QScreen_refreshRateChanged(slot, sigval1);
	});
}

struct miqt_string QScreen_tr2(const char* s, const char* c) {
	QString _ret = QScreen::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScreen_tr3(const char* s, const char* c, int n) {
	QString _ret = QScreen::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPixmap* QScreen_grabWindowWithWindow(QScreen* self, uintptr_t window) {
	return new QPixmap(self->grabWindow(static_cast<uintptr_t>(window)));
}

QPixmap* QScreen_grabWindow2(QScreen* self, uintptr_t window, int x) {
	return new QPixmap(self->grabWindow(static_cast<uintptr_t>(window), static_cast<int>(x)));
}

QPixmap* QScreen_grabWindow3(QScreen* self, uintptr_t window, int x, int y) {
	return new QPixmap(self->grabWindow(static_cast<uintptr_t>(window), static_cast<int>(x), static_cast<int>(y)));
}

QPixmap* QScreen_grabWindow4(QScreen* self, uintptr_t window, int x, int y, int w) {
	return new QPixmap(self->grabWindow(static_cast<uintptr_t>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w)));
}

QPixmap* QScreen_grabWindow5(QScreen* self, uintptr_t window, int x, int y, int w, int h) {
	return new QPixmap(self->grabWindow(static_cast<uintptr_t>(window), static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h)));
}

void QScreen_delete(QScreen* self) {
	delete self;
}

void QInputMethod_virtbase(QInputMethod* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QInputMethod_metaObject(const QInputMethod* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QInputMethod_tr(const char* s) {
	QString _ret = QInputMethod::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTransform* QInputMethod_inputItemTransform(const QInputMethod* self) {
	return new QTransform(self->inputItemTransform());
}

void QInputMethod_setInputItemTransform(QInputMethod* self, QTransform* transform) {
	self->setInputItemTransform(*transform);
}

QRectF* QInputMethod_inputItemRectangle(const QInputMethod* self) {
	return new QRectF(self->inputItemRectangle());
}

void QInputMethod_setInputItemRectangle(QInputMethod* self, QRectF* rect) {
	self->setInputItemRectangle(*rect);
}

QRectF* QInputMethod_cursorRectangle(const QInputMethod* self) {
	return new QRectF(self->cursorRectangle());
}

QRectF* QInputMethod_anchorRectangle(const QInputMethod* self) {
	return new QRectF(self->anchorRectangle());
}

QRectF* QInputMethod_keyboardRectangle(const QInputMethod* self) {
	return new QRectF(self->keyboardRectangle());
}

QRectF* QInputMethod_inputItemClipRectangle(const QInputMethod* self) {
	return new QRectF(self->inputItemClipRectangle());
}

bool QInputMethod_isVisible(const QInputMethod* self) {
	return self->isVisible();
}

void QInputMethod_setVisible(QInputMethod* self, bool visible) {
	self->setVisible(visible);
}

bool QInputMethod_isAnimating(const QInputMethod* self) {
	return self->isAnimating();
}

QLocale* QInputMethod_locale(const QInputMethod* self) {
	return new QLocale(self->locale());
}

int QInputMethod_inputDirection(const QInputMethod* self) {
	Qt::LayoutDirection _ret = self->inputDirection();
	return static_cast<int>(_ret);
}

QVariant* QInputMethod_queryFocusObject(int query, QVariant* argument) {
	return new QVariant(QInputMethod::queryFocusObject(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QInputMethod_show(QInputMethod* self) {
	self->show();
}

void QInputMethod_hide(QInputMethod* self) {
	self->hide();
}

void QInputMethod_update(QInputMethod* self, int queries) {
	self->update(static_cast<QFlags<Qt::InputMethodQuery>>(queries));
}

void QInputMethod_reset(QInputMethod* self) {
	self->reset();
}

void QInputMethod_commit(QInputMethod* self) {
	self->commit();
}

void QInputMethod_invokeAction(QInputMethod* self, int a, int cursorPosition) {
	self->invokeAction(static_cast<QInputMethod::Action>(a), static_cast<int>(cursorPosition));
}

void QInputMethod_cursorRectangleChanged(QInputMethod* self) {
	self->cursorRectangleChanged();
}

void QInputMethod_connect_cursorRectangleChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::cursorRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_cursorRectangleChanged(slot);
	});
}

void QInputMethod_anchorRectangleChanged(QInputMethod* self) {
	self->anchorRectangleChanged();
}

void QInputMethod_connect_anchorRectangleChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::anchorRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_anchorRectangleChanged(slot);
	});
}

void QInputMethod_keyboardRectangleChanged(QInputMethod* self) {
	self->keyboardRectangleChanged();
}

void QInputMethod_connect_keyboardRectangleChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::keyboardRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_keyboardRectangleChanged(slot);
	});
}

void QInputMethod_inputItemClipRectangleChanged(QInputMethod* self) {
	self->inputItemClipRectangleChanged();
}

void QInputMethod_connect_inputItemClipRectangleChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::inputItemClipRectangleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_inputItemClipRectangleChanged(slot);
	});
}

void QInputMethod_visibleChanged(QInputMethod* self) {
	self->visibleChanged();
}

void QInputMethod_connect_visibleChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::visibleChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_visibleChanged(slot);
	});
}

void QInputMethod_animatingChanged(QInputMethod* self) {
	self->animatingChanged();
}

void QInputMethod_connect_animatingChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::animatingChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_animatingChanged(slot);
	});
}

void QInputMethod_localeChanged(QInputMethod* self) {
	self->localeChanged();
}

void QInputMethod_connect_localeChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)()>(&QInputMethod::localeChanged), self, [=]() {
		miqt_exec_callback_QInputMethod_localeChanged(slot);
	});
}

void QInputMethod_inputDirectionChanged(QInputMethod* self, int newDirection) {
	self->inputDirectionChanged(static_cast<Qt::LayoutDirection>(newDirection));
}

void QInputMethod_connect_inputDirectionChanged(QInputMethod* self, intptr_t slot) {
	QInputMethod::connect(self, static_cast<void (QInputMethod::*)(Qt::LayoutDirection)>(&QInputMethod::inputDirectionChanged), self, [=](Qt::LayoutDirection newDirection) {
		Qt::LayoutDirection newDirection_ret = newDirection;
		int sigval1 = static_cast<int>(newDirection_ret);
		miqt_exec_callback_QInputMethod_inputDirectionChanged(slot, sigval1);
	});
}

struct miqt_string QInputMethod_tr2(const char* s, const char* c) {
	QString _ret = QInputMethod::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputMethod_tr3(const char* s, const char* c, int n) {
	QString _ret = QInputMethod::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

class MiqtVirtualQGuiApplication final : public QGuiApplication {
public:

	MiqtVirtualQGuiApplication(int& argc, char** argv): QGuiApplication(argc, argv) {}
	MiqtVirtualQGuiApplication(int& argc, char** argv, int param3): QGuiApplication(argc, argv, param3) {}

	virtual ~MiqtVirtualQGuiApplication() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__notify = 0;

	// Subclass to allow providing a Go implementation
	virtual bool notify(QObject* param1, QEvent* param2) override {
		if (handle__notify == 0) {
			return QGuiApplication::notify(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QGuiApplication_notify(this, handle__notify, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGuiApplication_virtualbase_notify(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGuiApplication::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGuiApplication_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QGuiApplication_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGuiApplication::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGuiApplication_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGuiApplication_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend void* QGuiApplication_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision);
	friend QObject* QGuiApplication_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGuiApplication_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGuiApplication_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGuiApplication_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGuiApplication* QGuiApplication_new(int* argc, char** argv) {
	return new (std::nothrow) MiqtVirtualQGuiApplication(*argc, argv);
}

QGuiApplication* QGuiApplication_new2(int* argc, char** argv, int param3) {
	return new (std::nothrow) MiqtVirtualQGuiApplication(*argc, argv, static_cast<int>(param3));
}

void QGuiApplication_virtbase(QGuiApplication* src, QCoreApplication** outptr_QCoreApplication) {
	*outptr_QCoreApplication = static_cast<QCoreApplication*>(src);
}

QMetaObject* QGuiApplication_metaObject(const QGuiApplication* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QGuiApplication_tr(const char* s) {
	QString _ret = QGuiApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGuiApplication_setApplicationDisplayName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QGuiApplication::setApplicationDisplayName(name_QString);
}

struct miqt_string QGuiApplication_applicationDisplayName() {
	QString _ret = QGuiApplication::applicationDisplayName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGuiApplication_setBadgeNumber(QGuiApplication* self, long long number) {
	self->setBadgeNumber(static_cast<long long>(number));
}

void QGuiApplication_setDesktopFileName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QGuiApplication::setDesktopFileName(name_QString);
}

struct miqt_string QGuiApplication_desktopFileName() {
	QString _ret = QGuiApplication::desktopFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QWindow* */  QGuiApplication_allWindows() {
	QWindowList _ret = QGuiApplication::allWindows();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWindow** _arr = static_cast<QWindow**>(malloc(sizeof(QWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QWindow* */  QGuiApplication_topLevelWindows() {
	QWindowList _ret = QGuiApplication::topLevelWindows();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWindow** _arr = static_cast<QWindow**>(malloc(sizeof(QWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QWindow* QGuiApplication_topLevelAt(QPoint* pos) {
	return QGuiApplication::topLevelAt(*pos);
}

void QGuiApplication_setWindowIcon(QIcon* icon) {
	QGuiApplication::setWindowIcon(*icon);
}

QIcon* QGuiApplication_windowIcon() {
	return new QIcon(QGuiApplication::windowIcon());
}

struct miqt_string QGuiApplication_platformName() {
	QString _ret = QGuiApplication::platformName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWindow* QGuiApplication_modalWindow() {
	return QGuiApplication::modalWindow();
}

QWindow* QGuiApplication_focusWindow() {
	return QGuiApplication::focusWindow();
}

QObject* QGuiApplication_focusObject() {
	return QGuiApplication::focusObject();
}

QScreen* QGuiApplication_primaryScreen() {
	return QGuiApplication::primaryScreen();
}

struct miqt_array /* of QScreen* */  QGuiApplication_screens() {
	QList<QScreen *> _ret = QGuiApplication::screens();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScreen** _arr = static_cast<QScreen**>(malloc(sizeof(QScreen*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QScreen* QGuiApplication_screenAt(QPoint* point) {
	return QGuiApplication::screenAt(*point);
}

double QGuiApplication_devicePixelRatio(const QGuiApplication* self) {
	double _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

QCursor* QGuiApplication_overrideCursor() {
	return QGuiApplication::overrideCursor();
}

void QGuiApplication_setOverrideCursor(QCursor* overrideCursor) {
	QGuiApplication::setOverrideCursor(*overrideCursor);
}

void QGuiApplication_changeOverrideCursor(QCursor* param1) {
	QGuiApplication::changeOverrideCursor(*param1);
}

void QGuiApplication_restoreOverrideCursor() {
	QGuiApplication::restoreOverrideCursor();
}

QFont* QGuiApplication_font() {
	return new QFont(QGuiApplication::font());
}

void QGuiApplication_setFont(QFont* font) {
	QGuiApplication::setFont(*font);
}

QClipboard* QGuiApplication_clipboard() {
	return QGuiApplication::clipboard();
}

QPalette* QGuiApplication_palette() {
	return new QPalette(QGuiApplication::palette());
}

void QGuiApplication_setPalette(QPalette* pal) {
	QGuiApplication::setPalette(*pal);
}

int QGuiApplication_keyboardModifiers() {
	Qt::KeyboardModifiers _ret = QGuiApplication::keyboardModifiers();
	return static_cast<int>(_ret);
}

int QGuiApplication_queryKeyboardModifiers() {
	Qt::KeyboardModifiers _ret = QGuiApplication::queryKeyboardModifiers();
	return static_cast<int>(_ret);
}

int QGuiApplication_mouseButtons() {
	Qt::MouseButtons _ret = QGuiApplication::mouseButtons();
	return static_cast<int>(_ret);
}

void QGuiApplication_setLayoutDirection(int direction) {
	QGuiApplication::setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QGuiApplication_layoutDirection() {
	Qt::LayoutDirection _ret = QGuiApplication::layoutDirection();
	return static_cast<int>(_ret);
}

bool QGuiApplication_isRightToLeft() {
	return QGuiApplication::isRightToLeft();
}

bool QGuiApplication_isLeftToRight() {
	return QGuiApplication::isLeftToRight();
}

QStyleHints* QGuiApplication_styleHints() {
	return QGuiApplication::styleHints();
}

void QGuiApplication_setDesktopSettingsAware(bool on) {
	QGuiApplication::setDesktopSettingsAware(on);
}

bool QGuiApplication_desktopSettingsAware() {
	return QGuiApplication::desktopSettingsAware();
}

QInputMethod* QGuiApplication_inputMethod() {
	return QGuiApplication::inputMethod();
}

void QGuiApplication_setQuitOnLastWindowClosed(bool quit) {
	QGuiApplication::setQuitOnLastWindowClosed(quit);
}

bool QGuiApplication_quitOnLastWindowClosed() {
	return QGuiApplication::quitOnLastWindowClosed();
}

int QGuiApplication_applicationState() {
	Qt::ApplicationState _ret = QGuiApplication::applicationState();
	return static_cast<int>(_ret);
}

int QGuiApplication_exec() {
	return QGuiApplication::exec();
}

bool QGuiApplication_notify(QGuiApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

bool QGuiApplication_isSessionRestored(const QGuiApplication* self) {
	return self->isSessionRestored();
}

struct miqt_string QGuiApplication_sessionId(const QGuiApplication* self) {
	QString _ret = self->sessionId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGuiApplication_sessionKey(const QGuiApplication* self) {
	QString _ret = self->sessionKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGuiApplication_isSavingSession(const QGuiApplication* self) {
	return self->isSavingSession();
}

void QGuiApplication_sync() {
	QGuiApplication::sync();
}

void QGuiApplication_fontDatabaseChanged(QGuiApplication* self) {
	self->fontDatabaseChanged();
}

void QGuiApplication_connect_fontDatabaseChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::fontDatabaseChanged), self, [=]() {
		miqt_exec_callback_QGuiApplication_fontDatabaseChanged(slot);
	});
}

void QGuiApplication_screenAdded(QGuiApplication* self, QScreen* screen) {
	self->screenAdded(screen);
}

void QGuiApplication_connect_screenAdded(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::screenAdded), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QGuiApplication_screenAdded(slot, sigval1);
	});
}

void QGuiApplication_screenRemoved(QGuiApplication* self, QScreen* screen) {
	self->screenRemoved(screen);
}

void QGuiApplication_connect_screenRemoved(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::screenRemoved), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QGuiApplication_screenRemoved(slot, sigval1);
	});
}

void QGuiApplication_primaryScreenChanged(QGuiApplication* self, QScreen* screen) {
	self->primaryScreenChanged(screen);
}

void QGuiApplication_connect_primaryScreenChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::primaryScreenChanged), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QGuiApplication_primaryScreenChanged(slot, sigval1);
	});
}

void QGuiApplication_lastWindowClosed(QGuiApplication* self) {
	self->lastWindowClosed();
}

void QGuiApplication_connect_lastWindowClosed(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::lastWindowClosed), self, [=]() {
		miqt_exec_callback_QGuiApplication_lastWindowClosed(slot);
	});
}

void QGuiApplication_focusObjectChanged(QGuiApplication* self, QObject* focusObject) {
	self->focusObjectChanged(focusObject);
}

void QGuiApplication_connect_focusObjectChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QObject*)>(&QGuiApplication::focusObjectChanged), self, [=](QObject* focusObject) {
		QObject* sigval1 = focusObject;
		miqt_exec_callback_QGuiApplication_focusObjectChanged(slot, sigval1);
	});
}

void QGuiApplication_focusWindowChanged(QGuiApplication* self, QWindow* focusWindow) {
	self->focusWindowChanged(focusWindow);
}

void QGuiApplication_connect_focusWindowChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QWindow*)>(&QGuiApplication::focusWindowChanged), self, [=](QWindow* focusWindow) {
		QWindow* sigval1 = focusWindow;
		miqt_exec_callback_QGuiApplication_focusWindowChanged(slot, sigval1);
	});
}

void QGuiApplication_applicationStateChanged(QGuiApplication* self, int state) {
	self->applicationStateChanged(static_cast<Qt::ApplicationState>(state));
}

void QGuiApplication_connect_applicationStateChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(Qt::ApplicationState)>(&QGuiApplication::applicationStateChanged), self, [=](Qt::ApplicationState state) {
		Qt::ApplicationState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QGuiApplication_applicationStateChanged(slot, sigval1);
	});
}

void QGuiApplication_layoutDirectionChanged(QGuiApplication* self, int direction) {
	self->layoutDirectionChanged(static_cast<Qt::LayoutDirection>(direction));
}

void QGuiApplication_connect_layoutDirectionChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(Qt::LayoutDirection)>(&QGuiApplication::layoutDirectionChanged), self, [=](Qt::LayoutDirection direction) {
		Qt::LayoutDirection direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);
		miqt_exec_callback_QGuiApplication_layoutDirectionChanged(slot, sigval1);
	});
}

void QGuiApplication_commitDataRequest(QGuiApplication* self, QSessionManager* sessionManager) {
	self->commitDataRequest(*sessionManager);
}

void QGuiApplication_connect_commitDataRequest(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QSessionManager&)>(&QGuiApplication::commitDataRequest), self, [=](QSessionManager& sessionManager) {
		QSessionManager& sessionManager_ret = sessionManager;
		// Cast returned reference into pointer
		QSessionManager* sigval1 = &sessionManager_ret;
		miqt_exec_callback_QGuiApplication_commitDataRequest(slot, sigval1);
	});
}

void QGuiApplication_saveStateRequest(QGuiApplication* self, QSessionManager* sessionManager) {
	self->saveStateRequest(*sessionManager);
}

void QGuiApplication_connect_saveStateRequest(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QSessionManager&)>(&QGuiApplication::saveStateRequest), self, [=](QSessionManager& sessionManager) {
		QSessionManager& sessionManager_ret = sessionManager;
		// Cast returned reference into pointer
		QSessionManager* sigval1 = &sessionManager_ret;
		miqt_exec_callback_QGuiApplication_saveStateRequest(slot, sigval1);
	});
}

void QGuiApplication_applicationDisplayNameChanged(QGuiApplication* self) {
	self->applicationDisplayNameChanged();
}

void QGuiApplication_connect_applicationDisplayNameChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::applicationDisplayNameChanged), self, [=]() {
		miqt_exec_callback_QGuiApplication_applicationDisplayNameChanged(slot);
	});
}

void QGuiApplication_paletteChanged(QGuiApplication* self, QPalette* pal) {
	self->paletteChanged(*pal);
}

void QGuiApplication_connect_paletteChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(const QPalette&)>(&QGuiApplication::paletteChanged), self, [=](const QPalette& pal) {
		const QPalette& pal_ret = pal;
		// Cast returned reference into pointer
		QPalette* sigval1 = const_cast<QPalette*>(&pal_ret);
		miqt_exec_callback_QGuiApplication_paletteChanged(slot, sigval1);
	});
}

void QGuiApplication_fontChanged(QGuiApplication* self, QFont* font) {
	self->fontChanged(*font);
}

void QGuiApplication_connect_fontChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(const QFont&)>(&QGuiApplication::fontChanged), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QGuiApplication_fontChanged(slot, sigval1);
	});
}

struct miqt_string QGuiApplication_tr2(const char* s, const char* c) {
	QString _ret = QGuiApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGuiApplication_tr3(const char* s, const char* c, int n) {
	QString _ret = QGuiApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGuiApplication_override_virtual_notify(void* self, intptr_t slot) {
	MiqtVirtualQGuiApplication* self_cast = static_cast<MiqtVirtualQGuiApplication*>( (QGuiApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__notify = slot;
	return true;
}

bool QGuiApplication_virtualbase_notify(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQGuiApplication*>(self)->QGuiApplication::notify(param1, param2);
}

bool QGuiApplication_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQGuiApplication* self_cast = static_cast<MiqtVirtualQGuiApplication*>( (QGuiApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QGuiApplication_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGuiApplication*>(self)->QGuiApplication::event(event);
}

bool QGuiApplication_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQGuiApplication* self_cast = static_cast<MiqtVirtualQGuiApplication*>( (QGuiApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGuiApplication_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGuiApplication*>(self)->QGuiApplication::eventFilter(watched, event);
}

void* QGuiApplication_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision) {
	MiqtVirtualQGuiApplication* self_cast = static_cast<MiqtVirtualQGuiApplication*>( (QGuiApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->resolveInterface(name, static_cast<int>(revision));
}

QObject* QGuiApplication_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGuiApplication* self_cast = static_cast<MiqtVirtualQGuiApplication*>( (QGuiApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGuiApplication_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGuiApplication* self_cast = static_cast<MiqtVirtualQGuiApplication*>( (QGuiApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGuiApplication_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGuiApplication* self_cast = static_cast<MiqtVirtualQGuiApplication*>( (QGuiApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGuiApplication_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGuiApplication* self_cast = static_cast<MiqtVirtualQGuiApplication*>( (QGuiApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGuiApplication_delete(QGuiApplication* self) {
	delete self;
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new() {
	return new (std::nothrow) QPointingDeviceUniqueId();
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1) {
	return new (std::nothrow) QPointingDeviceUniqueId(*param1);
}

QPointingDeviceUniqueId* QPointingDeviceUniqueId_fromNumericId(long long id) {
	return new QPointingDeviceUniqueId(QPointingDeviceUniqueId::fromNumericId(static_cast<long long>(id)));
}

bool QPointingDeviceUniqueId_isValid(const QPointingDeviceUniqueId* self) {
	return self->isValid();
}

long long QPointingDeviceUniqueId_numericId(const QPointingDeviceUniqueId* self) {
	long long _ret = self->numericId();
	return static_cast<long long>(_ret);
}

void QPointingDeviceUniqueId_delete(QPointingDeviceUniqueId* self) {
	delete self;
}

QPointingDevice* QPointingDevice_new() {
	return new (std::nothrow) QPointingDevice();
}

QPointingDevice* QPointingDevice_new2(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QPointingDevice(name_QString, static_cast<long long>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount));
}

QPointingDevice* QPointingDevice_new3(QObject* parent) {
	return new (std::nothrow) QPointingDevice(parent);
}

QPointingDevice* QPointingDevice_new4(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return new (std::nothrow) QPointingDevice(name_QString, static_cast<long long>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString);
}

QPointingDevice* QPointingDevice_new5(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDeviceUniqueId* uniqueId) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return new (std::nothrow) QPointingDevice(name_QString, static_cast<long long>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString, *uniqueId);
}

QPointingDevice* QPointingDevice_new6(struct miqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, struct miqt_string seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return new (std::nothrow) QPointingDevice(name_QString, static_cast<long long>(systemId), static_cast<QInputDevice::DeviceType>(devType), static_cast<QPointingDevice::PointerType>(pType), static_cast<QInputDevice::Capabilities>(caps), static_cast<int>(maxPoints), static_cast<int>(buttonCount), seatName_QString, *uniqueId, parent);
}

QMetaObject* QPointingDevice_metaObject(const QPointingDevice* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QPointingDevice_tr(const char* s) {
	QString _ret = QPointingDevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPointingDevice_setType(QPointingDevice* self, int devType) {
	self->setType(static_cast<QInputDevice::DeviceType>(devType));
}

void QPointingDevice_setCapabilities(QPointingDevice* self, int caps) {
	self->setCapabilities(static_cast<QFlags<QInputDevice::Capability>>(caps));
}

void QPointingDevice_setMaximumTouchPoints(QPointingDevice* self, int c) {
	self->setMaximumTouchPoints(static_cast<int>(c));
}

int QPointingDevice_pointerType(const QPointingDevice* self) {
	QPointingDevice::PointerType _ret = self->pointerType();
	return static_cast<int>(_ret);
}

int QPointingDevice_maximumPoints(const QPointingDevice* self) {
	return self->maximumPoints();
}

int QPointingDevice_buttonCount(const QPointingDevice* self) {
	return self->buttonCount();
}

QPointingDeviceUniqueId* QPointingDevice_uniqueId(const QPointingDevice* self) {
	return new QPointingDeviceUniqueId(self->uniqueId());
}

QPointingDevice* QPointingDevice_primaryPointingDevice() {
	return (QPointingDevice*) QPointingDevice::primaryPointingDevice();
}

struct miqt_string QPointingDevice_tr2(const char* s, const char* c) {
	QString _ret = QPointingDevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPointingDevice_tr3(const char* s, const char* c, int n) {
	QString _ret = QPointingDevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointingDevice* QPointingDevice_primaryPointingDeviceWithSeatName(struct miqt_string seatName) {
	QString seatName_QString = QString::fromUtf8(seatName.data, seatName.len);
	return (QPointingDevice*) QPointingDevice::primaryPointingDevice(seatName_QString);
}

void QPointingDevice_delete(QPointingDevice* self) {
	delete self;
}

QKeySequence* QKeySequence_new() {
	return new (std::nothrow) QKeySequence();
}

QKeySequence* QKeySequence_new2(struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new (std::nothrow) QKeySequence(key_QString);
}

QKeySequence* QKeySequence_new3(int k1) {
	return new (std::nothrow) QKeySequence(static_cast<int>(k1));
}

QKeySequence* QKeySequence_new4(QKeyCombination* k1) {
	return new (std::nothrow) QKeySequence(*k1);
}

QKeySequence* QKeySequence_new5(QKeySequence* ks) {
	return new (std::nothrow) QKeySequence(*ks);
}

QKeySequence* QKeySequence_new6(int key) {
	return new (std::nothrow) QKeySequence(static_cast<QKeySequence::StandardKey>(key));
}

QKeySequence* QKeySequence_new7(struct miqt_string key, int format) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new (std::nothrow) QKeySequence(key_QString, static_cast<QKeySequence::SequenceFormat>(format));
}

QKeySequence* QKeySequence_new8(int k1, int k2) {
	return new (std::nothrow) QKeySequence(static_cast<int>(k1), static_cast<int>(k2));
}

QKeySequence* QKeySequence_new9(int k1, int k2, int k3) {
	return new (std::nothrow) QKeySequence(static_cast<int>(k1), static_cast<int>(k2), static_cast<int>(k3));
}

QKeySequence* QKeySequence_new10(int k1, int k2, int k3, int k4) {
	return new (std::nothrow) QKeySequence(static_cast<int>(k1), static_cast<int>(k2), static_cast<int>(k3), static_cast<int>(k4));
}

QKeySequence* QKeySequence_new11(QKeyCombination* k1, QKeyCombination* k2) {
	return new (std::nothrow) QKeySequence(*k1, *k2);
}

QKeySequence* QKeySequence_new12(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3) {
	return new (std::nothrow) QKeySequence(*k1, *k2, *k3);
}

QKeySequence* QKeySequence_new13(QKeyCombination* k1, QKeyCombination* k2, QKeyCombination* k3, QKeyCombination* k4) {
	return new (std::nothrow) QKeySequence(*k1, *k2, *k3, *k4);
}

int QKeySequence_count(const QKeySequence* self) {
	return self->count();
}

bool QKeySequence_isEmpty(const QKeySequence* self) {
	return self->isEmpty();
}

struct miqt_string QKeySequence_toString(const QKeySequence* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QKeySequence* QKeySequence_fromString(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QKeySequence(QKeySequence::fromString(str_QString));
}

struct miqt_array /* of QKeySequence* */  QKeySequence_listFromString(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QList<QKeySequence> _ret = QKeySequence::listFromString(str_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QKeySequence_listToString(struct miqt_array /* of QKeySequence* */  list) {
	QList<QKeySequence> list_QList;
	list_QList.reserve(list.len);
	QKeySequence** list_arr = static_cast<QKeySequence**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	QString _ret = QKeySequence::listToString(list_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QKeySequence_matches(const QKeySequence* self, QKeySequence* seq) {
	return self->matches(*seq);
}

QKeySequence* QKeySequence_mnemonic(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QKeySequence(QKeySequence::mnemonic(text_QString));
}

struct miqt_array /* of QKeySequence* */  QKeySequence_keyBindings(int key) {
	QList<QKeySequence> _ret = QKeySequence::keyBindings(static_cast<QKeySequence::StandardKey>(key));
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QVariant* QKeySequence_ToQVariant(const QKeySequence* self) {
	return new QVariant(self->operator QVariant());
}

QKeyCombination* QKeySequence_operatorSubscript(const QKeySequence* self, unsigned int i) {
	return new QKeyCombination(self->operator[](static_cast<unsigned int>(i)));
}

void QKeySequence_swap(QKeySequence* self, QKeySequence* other) {
	self->swap(*other);
}

bool QKeySequence_operatorNotEqual(const QKeySequence* self, QKeySequence* other) {
	return (*self != *other);
}

bool QKeySequence_operatorLesser(const QKeySequence* self, QKeySequence* ks) {
	return (*self < *ks);
}

bool QKeySequence_operatorGreater(const QKeySequence* self, QKeySequence* other) {
	return (*self > *other);
}

bool QKeySequence_operatorLesserOrEqual(const QKeySequence* self, QKeySequence* other) {
	return (*self <= *other);
}

bool QKeySequence_operatorGreaterOrEqual(const QKeySequence* self, QKeySequence* other) {
	return (*self >= *other);
}

bool QKeySequence_isDetached(const QKeySequence* self) {
	return self->isDetached();
}

struct miqt_string QKeySequence_toStringWithFormat(const QKeySequence* self, int format) {
	QString _ret = self->toString(static_cast<QKeySequence::SequenceFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QKeySequence* QKeySequence_fromString2(struct miqt_string str, int format) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QKeySequence(QKeySequence::fromString(str_QString, static_cast<QKeySequence::SequenceFormat>(format)));
}

struct miqt_array /* of QKeySequence* */  QKeySequence_listFromString2(struct miqt_string str, int format) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QList<QKeySequence> _ret = QKeySequence::listFromString(str_QString, static_cast<QKeySequence::SequenceFormat>(format));
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QKeySequence_listToString2(struct miqt_array /* of QKeySequence* */  list, int format) {
	QList<QKeySequence> list_QList;
	list_QList.reserve(list.len);
	QKeySequence** list_arr = static_cast<QKeySequence**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	QString _ret = QKeySequence::listToString(list_QList, static_cast<QKeySequence::SequenceFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QKeySequence_delete(QKeySequence* self) {
	delete self;
}

class MiqtVirtualQEnterEvent final : public QEnterEvent {
public:

	MiqtVirtualQEnterEvent(const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos): QEnterEvent(localPos, scenePos, globalPos) {}
	MiqtVirtualQEnterEvent(const QPointF& localPos, const QPointF& scenePos, const QPointF& globalPos, const QPointingDevice* device): QEnterEvent(localPos, scenePos, globalPos, device) {}

	virtual ~MiqtVirtualQEnterEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEnterEvent* clone() const override {
		if (handle__clone == 0) {
			return QEnterEvent::clone();
		}

		QEnterEvent* callback_return_value = miqt_exec_callback_QEnterEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QEnterEvent* QEnterEvent_virtualbase_clone(const void* self);

};

QEnterEvent* QEnterEvent_new(QPointF* localPos, QPointF* scenePos, QPointF* globalPos) {
	return new (std::nothrow) MiqtVirtualQEnterEvent(*localPos, *scenePos, *globalPos);
}

QEnterEvent* QEnterEvent_new2(QPointF* localPos, QPointF* scenePos, QPointF* globalPos, QPointingDevice* device) {
	return new (std::nothrow) MiqtVirtualQEnterEvent(*localPos, *scenePos, *globalPos, device);
}

QEnterEvent* QEnterEvent_clone(const QEnterEvent* self) {
	return self->clone();
}

QPoint* QEnterEvent_pos(const QEnterEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QEnterEvent_globalPos(const QEnterEvent* self) {
	return new QPoint(self->globalPos());
}

int QEnterEvent_x(const QEnterEvent* self) {
	return self->x();
}

int QEnterEvent_y(const QEnterEvent* self) {
	return self->y();
}

int QEnterEvent_globalX(const QEnterEvent* self) {
	return self->globalX();
}

int QEnterEvent_globalY(const QEnterEvent* self) {
	return self->globalY();
}

QPointF* QEnterEvent_localPos(const QEnterEvent* self) {
	return new QPointF(self->localPos());
}

QPointF* QEnterEvent_windowPos(const QEnterEvent* self) {
	return new QPointF(self->windowPos());
}

QPointF* QEnterEvent_screenPos(const QEnterEvent* self) {
	return new QPointF(self->screenPos());
}

bool QEnterEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQEnterEvent* self_cast = static_cast<MiqtVirtualQEnterEvent*>( (QEnterEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QEnterEvent* QEnterEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQEnterEvent*>(self)->QEnterEvent::clone();
}

void QEnterEvent_delete(QEnterEvent* self) {
	delete self;
}

QMouseEvent* QMouseEvent_clone(const QMouseEvent* self) {
	return self->clone();
}

QPoint* QMouseEvent_pos(const QMouseEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QMouseEvent_globalPos(const QMouseEvent* self) {
	return new QPoint(self->globalPos());
}

int QMouseEvent_x(const QMouseEvent* self) {
	return self->x();
}

int QMouseEvent_y(const QMouseEvent* self) {
	return self->y();
}

int QMouseEvent_globalX(const QMouseEvent* self) {
	return self->globalX();
}

int QMouseEvent_globalY(const QMouseEvent* self) {
	return self->globalY();
}

QPointF* QMouseEvent_localPos(const QMouseEvent* self) {
	return new QPointF(self->localPos());
}

QPointF* QMouseEvent_windowPos(const QMouseEvent* self) {
	return new QPointF(self->windowPos());
}

QPointF* QMouseEvent_screenPos(const QMouseEvent* self) {
	return new QPointF(self->screenPos());
}

int QMouseEvent_source(const QMouseEvent* self) {
	Qt::MouseEventSource _ret = self->source();
	return static_cast<int>(_ret);
}

int QMouseEvent_flags(const QMouseEvent* self) {
	Qt::MouseEventFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QMouseEvent_delete(QMouseEvent* self) {
	delete self;
}

QHoverEvent* QHoverEvent_clone(const QHoverEvent* self) {
	return self->clone();
}

QPoint* QHoverEvent_pos(const QHoverEvent* self) {
	return new QPoint(self->pos());
}

QPointF* QHoverEvent_posF(const QHoverEvent* self) {
	return new QPointF(self->posF());
}

bool QHoverEvent_isUpdateEvent(const QHoverEvent* self) {
	return self->isUpdateEvent();
}

QPoint* QHoverEvent_oldPos(const QHoverEvent* self) {
	return new QPoint(self->oldPos());
}

QPointF* QHoverEvent_oldPosF(const QHoverEvent* self) {
	return new QPointF(self->oldPosF());
}

void QHoverEvent_delete(QHoverEvent* self) {
	delete self;
}

class MiqtVirtualQWheelEvent final : public QWheelEvent {
public:

	MiqtVirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted): QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted) {}
	MiqtVirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source): QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source) {}
	MiqtVirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice* device): QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source, device) {}

	virtual ~MiqtVirtualQWheelEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QWheelEvent* clone() const override {
		if (handle__clone == 0) {
			return QWheelEvent::clone();
		}

		QWheelEvent* callback_return_value = miqt_exec_callback_QWheelEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QWheelEvent* QWheelEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isBeginEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isBeginEvent() const override {
		if (handle__isBeginEvent == 0) {
			return QWheelEvent::isBeginEvent();
		}

		bool callback_return_value = miqt_exec_callback_QWheelEvent_isBeginEvent(this, handle__isBeginEvent);
		return callback_return_value;
	}

	friend bool QWheelEvent_virtualbase_isBeginEvent(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isUpdateEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isUpdateEvent() const override {
		if (handle__isUpdateEvent == 0) {
			return QWheelEvent::isUpdateEvent();
		}

		bool callback_return_value = miqt_exec_callback_QWheelEvent_isUpdateEvent(this, handle__isUpdateEvent);
		return callback_return_value;
	}

	friend bool QWheelEvent_virtualbase_isUpdateEvent(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEndEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEndEvent() const override {
		if (handle__isEndEvent == 0) {
			return QWheelEvent::isEndEvent();
		}

		bool callback_return_value = miqt_exec_callback_QWheelEvent_isEndEvent(this, handle__isEndEvent);
		return callback_return_value;
	}

	friend bool QWheelEvent_virtualbase_isEndEvent(const void* self);

};

QWheelEvent* QWheelEvent_new(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted) {
	return new (std::nothrow) MiqtVirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted);
}

QWheelEvent* QWheelEvent_new2(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source) {
	return new (std::nothrow) MiqtVirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source));
}

QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source, QPointingDevice* device) {
	return new (std::nothrow) MiqtVirtualQWheelEvent(*pos, *globalPos, *pixelDelta, *angleDelta, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<Qt::ScrollPhase>(phase), inverted, static_cast<Qt::MouseEventSource>(source), device);
}

QWheelEvent* QWheelEvent_clone(const QWheelEvent* self) {
	return self->clone();
}

QPoint* QWheelEvent_pixelDelta(const QWheelEvent* self) {
	return new QPoint(self->pixelDelta());
}

QPoint* QWheelEvent_angleDelta(const QWheelEvent* self) {
	return new QPoint(self->angleDelta());
}

int QWheelEvent_phase(const QWheelEvent* self) {
	Qt::ScrollPhase _ret = self->phase();
	return static_cast<int>(_ret);
}

bool QWheelEvent_inverted(const QWheelEvent* self) {
	return self->inverted();
}

bool QWheelEvent_isInverted(const QWheelEvent* self) {
	return self->isInverted();
}

bool QWheelEvent_hasPixelDelta(const QWheelEvent* self) {
	return self->hasPixelDelta();
}

bool QWheelEvent_isBeginEvent(const QWheelEvent* self) {
	return self->isBeginEvent();
}

bool QWheelEvent_isUpdateEvent(const QWheelEvent* self) {
	return self->isUpdateEvent();
}

bool QWheelEvent_isEndEvent(const QWheelEvent* self) {
	return self->isEndEvent();
}

int QWheelEvent_source(const QWheelEvent* self) {
	Qt::MouseEventSource _ret = self->source();
	return static_cast<int>(_ret);
}

bool QWheelEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQWheelEvent* self_cast = static_cast<MiqtVirtualQWheelEvent*>( (QWheelEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QWheelEvent* QWheelEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQWheelEvent*>(self)->QWheelEvent::clone();
}

bool QWheelEvent_override_virtual_isBeginEvent(void* self, intptr_t slot) {
	MiqtVirtualQWheelEvent* self_cast = static_cast<MiqtVirtualQWheelEvent*>( (QWheelEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isBeginEvent = slot;
	return true;
}

bool QWheelEvent_virtualbase_isBeginEvent(const void* self) {
	return static_cast<const MiqtVirtualQWheelEvent*>(self)->QWheelEvent::isBeginEvent();
}

bool QWheelEvent_override_virtual_isUpdateEvent(void* self, intptr_t slot) {
	MiqtVirtualQWheelEvent* self_cast = static_cast<MiqtVirtualQWheelEvent*>( (QWheelEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isUpdateEvent = slot;
	return true;
}

bool QWheelEvent_virtualbase_isUpdateEvent(const void* self) {
	return static_cast<const MiqtVirtualQWheelEvent*>(self)->QWheelEvent::isUpdateEvent();
}

bool QWheelEvent_override_virtual_isEndEvent(void* self, intptr_t slot) {
	MiqtVirtualQWheelEvent* self_cast = static_cast<MiqtVirtualQWheelEvent*>( (QWheelEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEndEvent = slot;
	return true;
}

bool QWheelEvent_virtualbase_isEndEvent(const void* self) {
	return static_cast<const MiqtVirtualQWheelEvent*>(self)->QWheelEvent::isEndEvent();
}

void QWheelEvent_delete(QWheelEvent* self) {
	delete self;
}

QTabletEvent* QTabletEvent_clone(const QTabletEvent* self) {
	return self->clone();
}

QPoint* QTabletEvent_pos(const QTabletEvent* self) {
	return new QPoint(self->pos());
}

QPoint* QTabletEvent_globalPos(const QTabletEvent* self) {
	return new QPoint(self->globalPos());
}

QPointF* QTabletEvent_posF(const QTabletEvent* self) {
	return new QPointF(self->posF());
}

QPointF* QTabletEvent_globalPosF(const QTabletEvent* self) {
	return new QPointF(self->globalPosF());
}

int QTabletEvent_x(const QTabletEvent* self) {
	return self->x();
}

int QTabletEvent_y(const QTabletEvent* self) {
	return self->y();
}

int QTabletEvent_globalX(const QTabletEvent* self) {
	return self->globalX();
}

int QTabletEvent_globalY(const QTabletEvent* self) {
	return self->globalY();
}

double QTabletEvent_hiResGlobalX(const QTabletEvent* self) {
	double _ret = self->hiResGlobalX();
	return static_cast<double>(_ret);
}

double QTabletEvent_hiResGlobalY(const QTabletEvent* self) {
	double _ret = self->hiResGlobalY();
	return static_cast<double>(_ret);
}

long long QTabletEvent_uniqueId(const QTabletEvent* self) {
	long long _ret = self->uniqueId();
	return static_cast<long long>(_ret);
}

double QTabletEvent_pressure(const QTabletEvent* self) {
	double _ret = self->pressure();
	return static_cast<double>(_ret);
}

double QTabletEvent_rotation(const QTabletEvent* self) {
	double _ret = self->rotation();
	return static_cast<double>(_ret);
}

double QTabletEvent_z(const QTabletEvent* self) {
	double _ret = self->z();
	return static_cast<double>(_ret);
}

double QTabletEvent_tangentialPressure(const QTabletEvent* self) {
	double _ret = self->tangentialPressure();
	return static_cast<double>(_ret);
}

double QTabletEvent_xTilt(const QTabletEvent* self) {
	double _ret = self->xTilt();
	return static_cast<double>(_ret);
}

double QTabletEvent_yTilt(const QTabletEvent* self) {
	double _ret = self->yTilt();
	return static_cast<double>(_ret);
}

void QTabletEvent_delete(QTabletEvent* self) {
	delete self;
}

QKeyEvent* QKeyEvent_clone(const QKeyEvent* self) {
	return self->clone();
}

int QKeyEvent_key(const QKeyEvent* self) {
	return self->key();
}

bool QKeyEvent_matches(const QKeyEvent* self, int key) {
	return self->matches(static_cast<QKeySequence::StandardKey>(key));
}

int QKeyEvent_modifiers(const QKeyEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

QKeyCombination* QKeyEvent_keyCombination(const QKeyEvent* self) {
	return new QKeyCombination(self->keyCombination());
}

struct miqt_string QKeyEvent_text(const QKeyEvent* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QKeyEvent_isAutoRepeat(const QKeyEvent* self) {
	return self->isAutoRepeat();
}

int QKeyEvent_count(const QKeyEvent* self) {
	return self->count();
}

unsigned int QKeyEvent_nativeScanCode(const QKeyEvent* self) {
	unsigned int _ret = self->nativeScanCode();
	return static_cast<unsigned int>(_ret);
}

unsigned int QKeyEvent_nativeVirtualKey(const QKeyEvent* self) {
	unsigned int _ret = self->nativeVirtualKey();
	return static_cast<unsigned int>(_ret);
}

unsigned int QKeyEvent_nativeModifiers(const QKeyEvent* self) {
	unsigned int _ret = self->nativeModifiers();
	return static_cast<unsigned int>(_ret);
}

void QKeyEvent_delete(QKeyEvent* self) {
	delete self;
}

void QFocusEvent_virtbase(QFocusEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QFocusEvent* QFocusEvent_clone(const QFocusEvent* self) {
	return self->clone();
}

bool QFocusEvent_gotFocus(const QFocusEvent* self) {
	return self->gotFocus();
}

bool QFocusEvent_lostFocus(const QFocusEvent* self) {
	return self->lostFocus();
}

int QFocusEvent_reason(const QFocusEvent* self) {
	Qt::FocusReason _ret = self->reason();
	return static_cast<int>(_ret);
}

void QFocusEvent_delete(QFocusEvent* self) {
	delete self;
}

class MiqtVirtualQPaintEvent final : public QPaintEvent {
public:

	MiqtVirtualQPaintEvent(const QRegion& paintRegion): QPaintEvent(paintRegion) {}
	MiqtVirtualQPaintEvent(const QRect& paintRect): QPaintEvent(paintRect) {}

	virtual ~MiqtVirtualQPaintEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEvent* clone() const override {
		if (handle__clone == 0) {
			return QPaintEvent::clone();
		}

		QPaintEvent* callback_return_value = miqt_exec_callback_QPaintEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QPaintEvent* QPaintEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QPaintEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QPaintEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QPaintEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QPaintEvent* QPaintEvent_new(QRegion* paintRegion) {
	return new (std::nothrow) MiqtVirtualQPaintEvent(*paintRegion);
}

QPaintEvent* QPaintEvent_new2(QRect* paintRect) {
	return new (std::nothrow) MiqtVirtualQPaintEvent(*paintRect);
}

void QPaintEvent_virtbase(QPaintEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QPaintEvent* QPaintEvent_clone(const QPaintEvent* self) {
	return self->clone();
}

QRect* QPaintEvent_rect(const QPaintEvent* self) {
	const QRect& _ret = self->rect();
	// Cast returned reference into pointer
	return const_cast<QRect*>(&_ret);
}

QRegion* QPaintEvent_region(const QPaintEvent* self) {
	const QRegion& _ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&_ret);
}

bool QPaintEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQPaintEvent* self_cast = static_cast<MiqtVirtualQPaintEvent*>( (QPaintEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QPaintEvent* QPaintEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQPaintEvent*>(self)->QPaintEvent::clone();
}

bool QPaintEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQPaintEvent* self_cast = static_cast<MiqtVirtualQPaintEvent*>( (QPaintEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QPaintEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQPaintEvent*>(self)->QPaintEvent::setAccepted(accepted);
}

void QPaintEvent_delete(QPaintEvent* self) {
	delete self;
}

class MiqtVirtualQMoveEvent final : public QMoveEvent {
public:

	MiqtVirtualQMoveEvent(const QPoint& pos, const QPoint& oldPos): QMoveEvent(pos, oldPos) {}

	virtual ~MiqtVirtualQMoveEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QMoveEvent* clone() const override {
		if (handle__clone == 0) {
			return QMoveEvent::clone();
		}

		QMoveEvent* callback_return_value = miqt_exec_callback_QMoveEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QMoveEvent* QMoveEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QMoveEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QMoveEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QMoveEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QMoveEvent* QMoveEvent_new(QPoint* pos, QPoint* oldPos) {
	return new (std::nothrow) MiqtVirtualQMoveEvent(*pos, *oldPos);
}

void QMoveEvent_virtbase(QMoveEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QMoveEvent* QMoveEvent_clone(const QMoveEvent* self) {
	return self->clone();
}

QPoint* QMoveEvent_pos(const QMoveEvent* self) {
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

QPoint* QMoveEvent_oldPos(const QMoveEvent* self) {
	const QPoint& _ret = self->oldPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

bool QMoveEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQMoveEvent* self_cast = static_cast<MiqtVirtualQMoveEvent*>( (QMoveEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QMoveEvent* QMoveEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQMoveEvent*>(self)->QMoveEvent::clone();
}

bool QMoveEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQMoveEvent* self_cast = static_cast<MiqtVirtualQMoveEvent*>( (QMoveEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QMoveEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQMoveEvent*>(self)->QMoveEvent::setAccepted(accepted);
}

void QMoveEvent_delete(QMoveEvent* self) {
	delete self;
}

class MiqtVirtualQExposeEvent final : public QExposeEvent {
public:

	MiqtVirtualQExposeEvent(const QRegion& m_region): QExposeEvent(m_region) {}

	virtual ~MiqtVirtualQExposeEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QExposeEvent* clone() const override {
		if (handle__clone == 0) {
			return QExposeEvent::clone();
		}

		QExposeEvent* callback_return_value = miqt_exec_callback_QExposeEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QExposeEvent* QExposeEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QExposeEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QExposeEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QExposeEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QExposeEvent* QExposeEvent_new(QRegion* m_region) {
	return new (std::nothrow) MiqtVirtualQExposeEvent(*m_region);
}

void QExposeEvent_virtbase(QExposeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QExposeEvent* QExposeEvent_clone(const QExposeEvent* self) {
	return self->clone();
}

QRegion* QExposeEvent_region(const QExposeEvent* self) {
	const QRegion& _ret = self->region();
	// Cast returned reference into pointer
	return const_cast<QRegion*>(&_ret);
}

bool QExposeEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQExposeEvent* self_cast = static_cast<MiqtVirtualQExposeEvent*>( (QExposeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QExposeEvent* QExposeEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQExposeEvent*>(self)->QExposeEvent::clone();
}

bool QExposeEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQExposeEvent* self_cast = static_cast<MiqtVirtualQExposeEvent*>( (QExposeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QExposeEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQExposeEvent*>(self)->QExposeEvent::setAccepted(accepted);
}

void QExposeEvent_delete(QExposeEvent* self) {
	delete self;
}

class MiqtVirtualQResizeEvent final : public QResizeEvent {
public:

	MiqtVirtualQResizeEvent(const QSize& size, const QSize& oldSize): QResizeEvent(size, oldSize) {}

	virtual ~MiqtVirtualQResizeEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QResizeEvent* clone() const override {
		if (handle__clone == 0) {
			return QResizeEvent::clone();
		}

		QResizeEvent* callback_return_value = miqt_exec_callback_QResizeEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QResizeEvent* QResizeEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QResizeEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QResizeEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QResizeEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QResizeEvent* QResizeEvent_new(QSize* size, QSize* oldSize) {
	return new (std::nothrow) MiqtVirtualQResizeEvent(*size, *oldSize);
}

void QResizeEvent_virtbase(QResizeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QResizeEvent* QResizeEvent_clone(const QResizeEvent* self) {
	return self->clone();
}

QSize* QResizeEvent_size(const QResizeEvent* self) {
	const QSize& _ret = self->size();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&_ret);
}

QSize* QResizeEvent_oldSize(const QResizeEvent* self) {
	const QSize& _ret = self->oldSize();
	// Cast returned reference into pointer
	return const_cast<QSize*>(&_ret);
}

bool QResizeEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQResizeEvent* self_cast = static_cast<MiqtVirtualQResizeEvent*>( (QResizeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QResizeEvent* QResizeEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQResizeEvent*>(self)->QResizeEvent::clone();
}

bool QResizeEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQResizeEvent* self_cast = static_cast<MiqtVirtualQResizeEvent*>( (QResizeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QResizeEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQResizeEvent*>(self)->QResizeEvent::setAccepted(accepted);
}

void QResizeEvent_delete(QResizeEvent* self) {
	delete self;
}

class MiqtVirtualQCloseEvent final : public QCloseEvent {
public:

	MiqtVirtualQCloseEvent(): QCloseEvent() {}

	virtual ~MiqtVirtualQCloseEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QCloseEvent* clone() const override {
		if (handle__clone == 0) {
			return QCloseEvent::clone();
		}

		QCloseEvent* callback_return_value = miqt_exec_callback_QCloseEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QCloseEvent* QCloseEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QCloseEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QCloseEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QCloseEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QCloseEvent* QCloseEvent_new() {
	return new (std::nothrow) MiqtVirtualQCloseEvent();
}

void QCloseEvent_virtbase(QCloseEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QCloseEvent* QCloseEvent_clone(const QCloseEvent* self) {
	return self->clone();
}

bool QCloseEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQCloseEvent* self_cast = static_cast<MiqtVirtualQCloseEvent*>( (QCloseEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QCloseEvent* QCloseEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQCloseEvent*>(self)->QCloseEvent::clone();
}

bool QCloseEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQCloseEvent* self_cast = static_cast<MiqtVirtualQCloseEvent*>( (QCloseEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QCloseEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQCloseEvent*>(self)->QCloseEvent::setAccepted(accepted);
}

void QCloseEvent_delete(QCloseEvent* self) {
	delete self;
}

class MiqtVirtualQShowEvent final : public QShowEvent {
public:

	MiqtVirtualQShowEvent(): QShowEvent() {}

	virtual ~MiqtVirtualQShowEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QShowEvent* clone() const override {
		if (handle__clone == 0) {
			return QShowEvent::clone();
		}

		QShowEvent* callback_return_value = miqt_exec_callback_QShowEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QShowEvent* QShowEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QShowEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QShowEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QShowEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QShowEvent* QShowEvent_new() {
	return new (std::nothrow) MiqtVirtualQShowEvent();
}

void QShowEvent_virtbase(QShowEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QShowEvent* QShowEvent_clone(const QShowEvent* self) {
	return self->clone();
}

bool QShowEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQShowEvent* self_cast = static_cast<MiqtVirtualQShowEvent*>( (QShowEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QShowEvent* QShowEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQShowEvent*>(self)->QShowEvent::clone();
}

bool QShowEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQShowEvent* self_cast = static_cast<MiqtVirtualQShowEvent*>( (QShowEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QShowEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQShowEvent*>(self)->QShowEvent::setAccepted(accepted);
}

void QShowEvent_delete(QShowEvent* self) {
	delete self;
}

class MiqtVirtualQHideEvent final : public QHideEvent {
public:

	MiqtVirtualQHideEvent(): QHideEvent() {}

	virtual ~MiqtVirtualQHideEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QHideEvent* clone() const override {
		if (handle__clone == 0) {
			return QHideEvent::clone();
		}

		QHideEvent* callback_return_value = miqt_exec_callback_QHideEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QHideEvent* QHideEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QHideEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QHideEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QHideEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QHideEvent* QHideEvent_new() {
	return new (std::nothrow) MiqtVirtualQHideEvent();
}

void QHideEvent_virtbase(QHideEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QHideEvent* QHideEvent_clone(const QHideEvent* self) {
	return self->clone();
}

bool QHideEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQHideEvent* self_cast = static_cast<MiqtVirtualQHideEvent*>( (QHideEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QHideEvent* QHideEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQHideEvent*>(self)->QHideEvent::clone();
}

bool QHideEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQHideEvent* self_cast = static_cast<MiqtVirtualQHideEvent*>( (QHideEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QHideEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQHideEvent*>(self)->QHideEvent::setAccepted(accepted);
}

void QHideEvent_delete(QHideEvent* self) {
	delete self;
}

class MiqtVirtualQContextMenuEvent final : public QContextMenuEvent {
public:

	MiqtVirtualQContextMenuEvent(Reason reason, const QPoint& pos, const QPoint& globalPos): QContextMenuEvent(reason, pos, globalPos) {}
	MiqtVirtualQContextMenuEvent(Reason reason, const QPoint& pos): QContextMenuEvent(reason, pos) {}
	MiqtVirtualQContextMenuEvent(Reason reason, const QPoint& pos, const QPoint& globalPos, Qt::KeyboardModifiers modifiers): QContextMenuEvent(reason, pos, globalPos, modifiers) {}

	virtual ~MiqtVirtualQContextMenuEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QContextMenuEvent* clone() const override {
		if (handle__clone == 0) {
			return QContextMenuEvent::clone();
		}

		QContextMenuEvent* callback_return_value = miqt_exec_callback_QContextMenuEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QContextMenuEvent* QContextMenuEvent_virtualbase_clone(const void* self);

};

QContextMenuEvent* QContextMenuEvent_new(int reason, QPoint* pos, QPoint* globalPos) {
	return new (std::nothrow) MiqtVirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos);
}

QContextMenuEvent* QContextMenuEvent_new2(int reason, QPoint* pos) {
	return new (std::nothrow) MiqtVirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos);
}

QContextMenuEvent* QContextMenuEvent_new3(int reason, QPoint* pos, QPoint* globalPos, int modifiers) {
	return new (std::nothrow) MiqtVirtualQContextMenuEvent(static_cast<QContextMenuEvent::Reason>(reason), *pos, *globalPos, static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QContextMenuEvent* QContextMenuEvent_clone(const QContextMenuEvent* self) {
	return self->clone();
}

int QContextMenuEvent_x(const QContextMenuEvent* self) {
	return self->x();
}

int QContextMenuEvent_y(const QContextMenuEvent* self) {
	return self->y();
}

int QContextMenuEvent_globalX(const QContextMenuEvent* self) {
	return self->globalX();
}

int QContextMenuEvent_globalY(const QContextMenuEvent* self) {
	return self->globalY();
}

QPoint* QContextMenuEvent_pos(const QContextMenuEvent* self) {
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

QPoint* QContextMenuEvent_globalPos(const QContextMenuEvent* self) {
	const QPoint& _ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

int QContextMenuEvent_reason(const QContextMenuEvent* self) {
	return self->reason();
}

bool QContextMenuEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQContextMenuEvent* self_cast = static_cast<MiqtVirtualQContextMenuEvent*>( (QContextMenuEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QContextMenuEvent* QContextMenuEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQContextMenuEvent*>(self)->QContextMenuEvent::clone();
}

void QContextMenuEvent_delete(QContextMenuEvent* self) {
	delete self;
}

class MiqtVirtualQInputMethodEvent final : public QInputMethodEvent {
public:

	MiqtVirtualQInputMethodEvent(): QInputMethodEvent() {}

	virtual ~MiqtVirtualQInputMethodEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QInputMethodEvent* clone() const override {
		if (handle__clone == 0) {
			return QInputMethodEvent::clone();
		}

		QInputMethodEvent* callback_return_value = miqt_exec_callback_QInputMethodEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QInputMethodEvent* QInputMethodEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QInputMethodEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QInputMethodEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QInputMethodEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QInputMethodEvent* QInputMethodEvent_new() {
	return new (std::nothrow) MiqtVirtualQInputMethodEvent();
}

void QInputMethodEvent_virtbase(QInputMethodEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QInputMethodEvent* QInputMethodEvent_clone(const QInputMethodEvent* self) {
	return self->clone();
}

void QInputMethodEvent_setCommitString(QInputMethodEvent* self, struct miqt_string commitString) {
	QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
	self->setCommitString(commitString_QString);
}

struct miqt_string QInputMethodEvent_preeditString(const QInputMethodEvent* self) {
	const QString _ret = self->preeditString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QInputMethodEvent_commitString(const QInputMethodEvent* self) {
	const QString _ret = self->commitString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QInputMethodEvent_replacementStart(const QInputMethodEvent* self) {
	return self->replacementStart();
}

int QInputMethodEvent_replacementLength(const QInputMethodEvent* self) {
	return self->replacementLength();
}

void QInputMethodEvent_setCommitString2(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom) {
	QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
	self->setCommitString(commitString_QString, static_cast<int>(replaceFrom));
}

void QInputMethodEvent_setCommitString3(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom, int replaceLength) {
	QString commitString_QString = QString::fromUtf8(commitString.data, commitString.len);
	self->setCommitString(commitString_QString, static_cast<int>(replaceFrom), static_cast<int>(replaceLength));
}

bool QInputMethodEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQInputMethodEvent* self_cast = static_cast<MiqtVirtualQInputMethodEvent*>( (QInputMethodEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QInputMethodEvent* QInputMethodEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQInputMethodEvent*>(self)->QInputMethodEvent::clone();
}

bool QInputMethodEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQInputMethodEvent* self_cast = static_cast<MiqtVirtualQInputMethodEvent*>( (QInputMethodEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QInputMethodEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQInputMethodEvent*>(self)->QInputMethodEvent::setAccepted(accepted);
}

void QInputMethodEvent_delete(QInputMethodEvent* self) {
	delete self;
}

class MiqtVirtualQDropEvent final : public QDropEvent {
public:

	MiqtVirtualQDropEvent(const QPointF& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers): QDropEvent(pos, actions, data, buttons, modifiers) {}

	virtual ~MiqtVirtualQDropEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QDropEvent* clone() const override {
		if (handle__clone == 0) {
			return QDropEvent::clone();
		}

		QDropEvent* callback_return_value = miqt_exec_callback_QDropEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QDropEvent* QDropEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QDropEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QDropEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QDropEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QDropEvent* QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new (std::nothrow) MiqtVirtualQDropEvent(*pos, static_cast<QFlags<Qt::DropAction>>(actions), data, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

void QDropEvent_virtbase(QDropEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QDropEvent* QDropEvent_clone(const QDropEvent* self) {
	return self->clone();
}

QPoint* QDropEvent_pos(const QDropEvent* self) {
	return new QPoint(self->pos());
}

QPointF* QDropEvent_posF(const QDropEvent* self) {
	return new QPointF(self->posF());
}

int QDropEvent_mouseButtons(const QDropEvent* self) {
	Qt::MouseButtons _ret = self->mouseButtons();
	return static_cast<int>(_ret);
}

int QDropEvent_keyboardModifiers(const QDropEvent* self) {
	Qt::KeyboardModifiers _ret = self->keyboardModifiers();
	return static_cast<int>(_ret);
}

QPointF* QDropEvent_position(const QDropEvent* self) {
	return new QPointF(self->position());
}

int QDropEvent_buttons(const QDropEvent* self) {
	Qt::MouseButtons _ret = self->buttons();
	return static_cast<int>(_ret);
}

int QDropEvent_modifiers(const QDropEvent* self) {
	Qt::KeyboardModifiers _ret = self->modifiers();
	return static_cast<int>(_ret);
}

int QDropEvent_possibleActions(const QDropEvent* self) {
	Qt::DropActions _ret = self->possibleActions();
	return static_cast<int>(_ret);
}

int QDropEvent_proposedAction(const QDropEvent* self) {
	Qt::DropAction _ret = self->proposedAction();
	return static_cast<int>(_ret);
}

void QDropEvent_acceptProposedAction(QDropEvent* self) {
	self->acceptProposedAction();
}

int QDropEvent_dropAction(const QDropEvent* self) {
	Qt::DropAction _ret = self->dropAction();
	return static_cast<int>(_ret);
}

void QDropEvent_setDropAction(QDropEvent* self, int action) {
	self->setDropAction(static_cast<Qt::DropAction>(action));
}

QObject* QDropEvent_source(const QDropEvent* self) {
	return self->source();
}

QMimeData* QDropEvent_mimeData(const QDropEvent* self) {
	return (QMimeData*) self->mimeData();
}

bool QDropEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQDropEvent* self_cast = static_cast<MiqtVirtualQDropEvent*>( (QDropEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QDropEvent* QDropEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQDropEvent*>(self)->QDropEvent::clone();
}

bool QDropEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQDropEvent* self_cast = static_cast<MiqtVirtualQDropEvent*>( (QDropEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QDropEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQDropEvent*>(self)->QDropEvent::setAccepted(accepted);
}

void QDropEvent_delete(QDropEvent* self) {
	delete self;
}

class MiqtVirtualQDragMoveEvent final : public QDragMoveEvent {
public:

	MiqtVirtualQDragMoveEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers): QDragMoveEvent(pos, actions, data, buttons, modifiers) {}

	virtual ~MiqtVirtualQDragMoveEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QDragMoveEvent* clone() const override {
		if (handle__clone == 0) {
			return QDragMoveEvent::clone();
		}

		QDragMoveEvent* callback_return_value = miqt_exec_callback_QDragMoveEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QDragMoveEvent* QDragMoveEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QDragMoveEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QDragMoveEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QDragMoveEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QDragMoveEvent* QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new (std::nothrow) MiqtVirtualQDragMoveEvent(*pos, static_cast<QFlags<Qt::DropAction>>(actions), data, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

void QDragMoveEvent_virtbase(QDragMoveEvent* src, QDropEvent** outptr_QDropEvent) {
	*outptr_QDropEvent = static_cast<QDropEvent*>(src);
}

QDragMoveEvent* QDragMoveEvent_clone(const QDragMoveEvent* self) {
	return self->clone();
}

QRect* QDragMoveEvent_answerRect(const QDragMoveEvent* self) {
	return new QRect(self->answerRect());
}

void QDragMoveEvent_accept(QDragMoveEvent* self) {
	self->accept();
}

void QDragMoveEvent_ignore(QDragMoveEvent* self) {
	self->ignore();
}

void QDragMoveEvent_acceptWithQRect(QDragMoveEvent* self, QRect* r) {
	self->accept(*r);
}

void QDragMoveEvent_ignoreWithQRect(QDragMoveEvent* self, QRect* r) {
	self->ignore(*r);
}

bool QDragMoveEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQDragMoveEvent* self_cast = static_cast<MiqtVirtualQDragMoveEvent*>( (QDragMoveEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QDragMoveEvent* QDragMoveEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQDragMoveEvent*>(self)->QDragMoveEvent::clone();
}

bool QDragMoveEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQDragMoveEvent* self_cast = static_cast<MiqtVirtualQDragMoveEvent*>( (QDragMoveEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QDragMoveEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQDragMoveEvent*>(self)->QDragMoveEvent::setAccepted(accepted);
}

void QDragMoveEvent_delete(QDragMoveEvent* self) {
	delete self;
}

class MiqtVirtualQDragEnterEvent final : public QDragEnterEvent {
public:

	MiqtVirtualQDragEnterEvent(const QPoint& pos, Qt::DropActions actions, const QMimeData* data, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers): QDragEnterEvent(pos, actions, data, buttons, modifiers) {}

	virtual ~MiqtVirtualQDragEnterEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QDragEnterEvent* clone() const override {
		if (handle__clone == 0) {
			return QDragEnterEvent::clone();
		}

		QDragEnterEvent* callback_return_value = miqt_exec_callback_QDragEnterEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QDragEnterEvent* QDragEnterEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QDragEnterEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QDragEnterEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QDragEnterEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QDragEnterEvent* QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers) {
	return new (std::nothrow) MiqtVirtualQDragEnterEvent(*pos, static_cast<QFlags<Qt::DropAction>>(actions), data, static_cast<QFlags<Qt::MouseButton>>(buttons), static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

void QDragEnterEvent_virtbase(QDragEnterEvent* src, QDragMoveEvent** outptr_QDragMoveEvent) {
	*outptr_QDragMoveEvent = static_cast<QDragMoveEvent*>(src);
}

QDragEnterEvent* QDragEnterEvent_clone(const QDragEnterEvent* self) {
	return self->clone();
}

bool QDragEnterEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQDragEnterEvent* self_cast = static_cast<MiqtVirtualQDragEnterEvent*>( (QDragEnterEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QDragEnterEvent* QDragEnterEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQDragEnterEvent*>(self)->QDragEnterEvent::clone();
}

bool QDragEnterEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQDragEnterEvent* self_cast = static_cast<MiqtVirtualQDragEnterEvent*>( (QDragEnterEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QDragEnterEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQDragEnterEvent*>(self)->QDragEnterEvent::setAccepted(accepted);
}

void QDragEnterEvent_delete(QDragEnterEvent* self) {
	delete self;
}

class MiqtVirtualQDragLeaveEvent final : public QDragLeaveEvent {
public:

	MiqtVirtualQDragLeaveEvent(): QDragLeaveEvent() {}

	virtual ~MiqtVirtualQDragLeaveEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QDragLeaveEvent* clone() const override {
		if (handle__clone == 0) {
			return QDragLeaveEvent::clone();
		}

		QDragLeaveEvent* callback_return_value = miqt_exec_callback_QDragLeaveEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QDragLeaveEvent* QDragLeaveEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QDragLeaveEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QDragLeaveEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QDragLeaveEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QDragLeaveEvent* QDragLeaveEvent_new() {
	return new (std::nothrow) MiqtVirtualQDragLeaveEvent();
}

void QDragLeaveEvent_virtbase(QDragLeaveEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QDragLeaveEvent* QDragLeaveEvent_clone(const QDragLeaveEvent* self) {
	return self->clone();
}

bool QDragLeaveEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQDragLeaveEvent* self_cast = static_cast<MiqtVirtualQDragLeaveEvent*>( (QDragLeaveEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QDragLeaveEvent* QDragLeaveEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQDragLeaveEvent*>(self)->QDragLeaveEvent::clone();
}

bool QDragLeaveEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQDragLeaveEvent* self_cast = static_cast<MiqtVirtualQDragLeaveEvent*>( (QDragLeaveEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QDragLeaveEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQDragLeaveEvent*>(self)->QDragLeaveEvent::setAccepted(accepted);
}

void QDragLeaveEvent_delete(QDragLeaveEvent* self) {
	delete self;
}

void QHelpEvent_virtbase(QHelpEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QHelpEvent* QHelpEvent_clone(const QHelpEvent* self) {
	return self->clone();
}

int QHelpEvent_x(const QHelpEvent* self) {
	return self->x();
}

int QHelpEvent_y(const QHelpEvent* self) {
	return self->y();
}

int QHelpEvent_globalX(const QHelpEvent* self) {
	return self->globalX();
}

int QHelpEvent_globalY(const QHelpEvent* self) {
	return self->globalY();
}

QPoint* QHelpEvent_pos(const QHelpEvent* self) {
	const QPoint& _ret = self->pos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

QPoint* QHelpEvent_globalPos(const QHelpEvent* self) {
	const QPoint& _ret = self->globalPos();
	// Cast returned reference into pointer
	return const_cast<QPoint*>(&_ret);
}

void QHelpEvent_delete(QHelpEvent* self) {
	delete self;
}

class MiqtVirtualQActionEvent final : public QActionEvent {
public:

	MiqtVirtualQActionEvent(int type, QAction* action): QActionEvent(type, action) {}
	MiqtVirtualQActionEvent(int type, QAction* action, QAction* before): QActionEvent(type, action, before) {}

	virtual ~MiqtVirtualQActionEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QActionEvent* clone() const override {
		if (handle__clone == 0) {
			return QActionEvent::clone();
		}

		QActionEvent* callback_return_value = miqt_exec_callback_QActionEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QActionEvent* QActionEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QActionEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QActionEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QActionEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QActionEvent* QActionEvent_new(int type, QAction* action) {
	return new (std::nothrow) MiqtVirtualQActionEvent(static_cast<int>(type), action);
}

QActionEvent* QActionEvent_new2(int type, QAction* action, QAction* before) {
	return new (std::nothrow) MiqtVirtualQActionEvent(static_cast<int>(type), action, before);
}

void QActionEvent_virtbase(QActionEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QActionEvent* QActionEvent_clone(const QActionEvent* self) {
	return self->clone();
}

QAction* QActionEvent_action(const QActionEvent* self) {
	return self->action();
}

QAction* QActionEvent_before(const QActionEvent* self) {
	return self->before();
}

bool QActionEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQActionEvent* self_cast = static_cast<MiqtVirtualQActionEvent*>( (QActionEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QActionEvent* QActionEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQActionEvent*>(self)->QActionEvent::clone();
}

bool QActionEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQActionEvent* self_cast = static_cast<MiqtVirtualQActionEvent*>( (QActionEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QActionEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQActionEvent*>(self)->QActionEvent::setAccepted(accepted);
}

void QActionEvent_delete(QActionEvent* self) {
	delete self;
}

QTouchEvent* QTouchEvent_clone(const QTouchEvent* self) {
	return self->clone();
}

QObject* QTouchEvent_target(const QTouchEvent* self) {
	return self->target();
}

struct miqt_array /* of QEventPoint* */  QTouchEvent_touchPoints(const QTouchEvent* self) {
	const QList<QEventPoint>& _ret = self->touchPoints();
	// Convert QList<> from C++ memory to manually-managed C memory
	QEventPoint** _arr = static_cast<QEventPoint**>(malloc(sizeof(QEventPoint*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QEventPoint(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QTouchEvent_isBeginEvent(const QTouchEvent* self) {
	return self->isBeginEvent();
}

bool QTouchEvent_isUpdateEvent(const QTouchEvent* self) {
	return self->isUpdateEvent();
}

bool QTouchEvent_isEndEvent(const QTouchEvent* self) {
	return self->isEndEvent();
}

void QTouchEvent_delete(QTouchEvent* self) {
	delete self;
}

QFont* QFont_new() {
	return new (std::nothrow) QFont();
}

QFont* QFont_new2(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return new (std::nothrow) QFont(family_QString);
}

QFont* QFont_new3(struct miqt_array /* of struct miqt_string */  families) {
	QStringList families_QList;
	families_QList.reserve(families.len);
	struct miqt_string* families_arr = static_cast<struct miqt_string*>(families.data);
	for(size_t i = 0; i < families.len; ++i) {
		QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
		families_QList.push_back(families_arr_i_QString);
	}
	return new (std::nothrow) QFont(families_QList);
}

QFont* QFont_new4(QFont* font, QPaintDevice* pd) {
	return new (std::nothrow) QFont(*font, pd);
}

QFont* QFont_new5(QFont* font) {
	return new (std::nothrow) QFont(*font);
}

QFont* QFont_new6(struct miqt_string family, int pointSize) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return new (std::nothrow) QFont(family_QString, static_cast<int>(pointSize));
}

QFont* QFont_new7(struct miqt_string family, int pointSize, int weight) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return new (std::nothrow) QFont(family_QString, static_cast<int>(pointSize), static_cast<int>(weight));
}

QFont* QFont_new8(struct miqt_string family, int pointSize, int weight, bool italic) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return new (std::nothrow) QFont(family_QString, static_cast<int>(pointSize), static_cast<int>(weight), italic);
}

QFont* QFont_new9(struct miqt_array /* of struct miqt_string */  families, int pointSize) {
	QStringList families_QList;
	families_QList.reserve(families.len);
	struct miqt_string* families_arr = static_cast<struct miqt_string*>(families.data);
	for(size_t i = 0; i < families.len; ++i) {
		QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
		families_QList.push_back(families_arr_i_QString);
	}
	return new (std::nothrow) QFont(families_QList, static_cast<int>(pointSize));
}

QFont* QFont_new10(struct miqt_array /* of struct miqt_string */  families, int pointSize, int weight) {
	QStringList families_QList;
	families_QList.reserve(families.len);
	struct miqt_string* families_arr = static_cast<struct miqt_string*>(families.data);
	for(size_t i = 0; i < families.len; ++i) {
		QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
		families_QList.push_back(families_arr_i_QString);
	}
	return new (std::nothrow) QFont(families_QList, static_cast<int>(pointSize), static_cast<int>(weight));
}

QFont* QFont_new11(struct miqt_array /* of struct miqt_string */  families, int pointSize, int weight, bool italic) {
	QStringList families_QList;
	families_QList.reserve(families.len);
	struct miqt_string* families_arr = static_cast<struct miqt_string*>(families.data);
	for(size_t i = 0; i < families.len; ++i) {
		QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
		families_QList.push_back(families_arr_i_QString);
	}
	return new (std::nothrow) QFont(families_QList, static_cast<int>(pointSize), static_cast<int>(weight), italic);
}

void QFont_swap(QFont* self, QFont* other) {
	self->swap(*other);
}

struct miqt_string QFont_family(const QFont* self) {
	QString _ret = self->family();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFont_setFamily(QFont* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	self->setFamily(family_QString);
}

struct miqt_array /* of struct miqt_string */  QFont_families(const QFont* self) {
	QStringList _ret = self->families();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFont_setFamilies(QFont* self, struct miqt_array /* of struct miqt_string */  families) {
	QStringList families_QList;
	families_QList.reserve(families.len);
	struct miqt_string* families_arr = static_cast<struct miqt_string*>(families.data);
	for(size_t i = 0; i < families.len; ++i) {
		QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
		families_QList.push_back(families_arr_i_QString);
	}
	self->setFamilies(families_QList);
}

struct miqt_string QFont_styleName(const QFont* self) {
	QString _ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFont_setStyleName(QFont* self, struct miqt_string styleName) {
	QString styleName_QString = QString::fromUtf8(styleName.data, styleName.len);
	self->setStyleName(styleName_QString);
}

int QFont_pointSize(const QFont* self) {
	return self->pointSize();
}

void QFont_setPointSize(QFont* self, int pointSize) {
	self->setPointSize(static_cast<int>(pointSize));
}

double QFont_pointSizeF(const QFont* self) {
	double _ret = self->pointSizeF();
	return static_cast<double>(_ret);
}

void QFont_setPointSizeF(QFont* self, double pointSizeF) {
	self->setPointSizeF(static_cast<double>(pointSizeF));
}

int QFont_pixelSize(const QFont* self) {
	return self->pixelSize();
}

void QFont_setPixelSize(QFont* self, int pixelSize) {
	self->setPixelSize(static_cast<int>(pixelSize));
}

int QFont_weight(const QFont* self) {
	return self->weight();
}

void QFont_setWeight(QFont* self, int weight) {
	self->setWeight(static_cast<QFont::Weight>(weight));
}

bool QFont_bold(const QFont* self) {
	return self->bold();
}

void QFont_setBold(QFont* self, bool bold) {
	self->setBold(bold);
}

void QFont_setStyle(QFont* self, int style) {
	self->setStyle(static_cast<QFont::Style>(style));
}

int QFont_style(const QFont* self) {
	return self->style();
}

bool QFont_italic(const QFont* self) {
	return self->italic();
}

void QFont_setItalic(QFont* self, bool b) {
	self->setItalic(b);
}

bool QFont_underline(const QFont* self) {
	return self->underline();
}

void QFont_setUnderline(QFont* self, bool underline) {
	self->setUnderline(underline);
}

bool QFont_overline(const QFont* self) {
	return self->overline();
}

void QFont_setOverline(QFont* self, bool overline) {
	self->setOverline(overline);
}

bool QFont_strikeOut(const QFont* self) {
	return self->strikeOut();
}

void QFont_setStrikeOut(QFont* self, bool strikeOut) {
	self->setStrikeOut(strikeOut);
}

bool QFont_fixedPitch(const QFont* self) {
	return self->fixedPitch();
}

void QFont_setFixedPitch(QFont* self, bool fixedPitch) {
	self->setFixedPitch(fixedPitch);
}

bool QFont_kerning(const QFont* self) {
	return self->kerning();
}

void QFont_setKerning(QFont* self, bool kerning) {
	self->setKerning(kerning);
}

int QFont_styleHint(const QFont* self) {
	return self->styleHint();
}

int QFont_styleStrategy(const QFont* self) {
	return self->styleStrategy();
}

void QFont_setStyleHint(QFont* self, int param1) {
	self->setStyleHint(static_cast<QFont::StyleHint>(param1));
}

void QFont_setStyleStrategy(QFont* self, int s) {
	self->setStyleStrategy(static_cast<QFont::StyleStrategy>(s));
}

int QFont_stretch(const QFont* self) {
	return self->stretch();
}

void QFont_setStretch(QFont* self, int stretch) {
	self->setStretch(static_cast<int>(stretch));
}

double QFont_letterSpacing(const QFont* self) {
	double _ret = self->letterSpacing();
	return static_cast<double>(_ret);
}

int QFont_letterSpacingType(const QFont* self) {
	return self->letterSpacingType();
}

void QFont_setLetterSpacing(QFont* self, int type, double spacing) {
	self->setLetterSpacing(static_cast<QFont::SpacingType>(type), static_cast<double>(spacing));
}

double QFont_wordSpacing(const QFont* self) {
	double _ret = self->wordSpacing();
	return static_cast<double>(_ret);
}

void QFont_setWordSpacing(QFont* self, double spacing) {
	self->setWordSpacing(static_cast<double>(spacing));
}

void QFont_setCapitalization(QFont* self, int capitalization) {
	self->setCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

int QFont_capitalization(const QFont* self) {
	return self->capitalization();
}

void QFont_setHintingPreference(QFont* self, int hintingPreference) {
	self->setHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

int QFont_hintingPreference(const QFont* self) {
	return self->hintingPreference();
}

void QFont_clearFeatures(QFont* self) {
	self->clearFeatures();
}

void QFont_clearVariableAxes(QFont* self) {
	self->clearVariableAxes();
}

bool QFont_exactMatch(const QFont* self) {
	return self->exactMatch();
}

bool QFont_operatorNotEqual(const QFont* self, QFont* param1) {
	return (*self != *param1);
}

bool QFont_operatorLesser(const QFont* self, QFont* param1) {
	return (*self < *param1);
}

QVariant* QFont_ToQVariant(const QFont* self) {
	return new QVariant(self->operator QVariant());
}

bool QFont_isCopyOf(const QFont* self, QFont* param1) {
	return self->isCopyOf(*param1);
}

struct miqt_string QFont_key(const QFont* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFont_toString(const QFont* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFont_fromString(QFont* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->fromString(param1_QString);
}

struct miqt_string QFont_substitute(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QString _ret = QFont::substitute(param1_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QFont_substitutes(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QStringList _ret = QFont::substitutes(param1_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QFont_substitutions() {
	QStringList _ret = QFont::substitutions();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFont_insertSubstitution(struct miqt_string param1, struct miqt_string param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	QFont::insertSubstitution(param1_QString, param2_QString);
}

void QFont_insertSubstitutions(struct miqt_string param1, struct miqt_array /* of struct miqt_string */  param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QStringList param2_QList;
	param2_QList.reserve(param2.len);
	struct miqt_string* param2_arr = static_cast<struct miqt_string*>(param2.data);
	for(size_t i = 0; i < param2.len; ++i) {
		QString param2_arr_i_QString = QString::fromUtf8(param2_arr[i].data, param2_arr[i].len);
		param2_QList.push_back(param2_arr_i_QString);
	}
	QFont::insertSubstitutions(param1_QString, param2_QList);
}

void QFont_removeSubstitutions(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QFont::removeSubstitutions(param1_QString);
}

void QFont_initialize() {
	QFont::initialize();
}

void QFont_cleanup() {
	QFont::cleanup();
}

void QFont_cacheStatistics() {
	QFont::cacheStatistics();
}

struct miqt_string QFont_defaultFamily(const QFont* self) {
	QString _ret = self->defaultFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFont* QFont_resolve(const QFont* self, QFont* param1) {
	return new QFont(self->resolve(*param1));
}

unsigned int QFont_resolveMask(const QFont* self) {
	unsigned int _ret = self->resolveMask();
	return static_cast<unsigned int>(_ret);
}

void QFont_setResolveMask(QFont* self, unsigned int mask) {
	self->setResolveMask(static_cast<unsigned int>(mask));
}

void QFont_setLegacyWeight(QFont* self, int legacyWeight) {
	self->setLegacyWeight(static_cast<int>(legacyWeight));
}

int QFont_legacyWeight(const QFont* self) {
	return self->legacyWeight();
}

void QFont_setStyleHint2(QFont* self, int param1, int param2) {
	self->setStyleHint(static_cast<QFont::StyleHint>(param1), static_cast<QFont::StyleStrategy>(param2));
}

void QFont_delete(QFont* self) {
	delete self;
}

QFontDatabase* QFontDatabase_new() {
	return new (std::nothrow) QFontDatabase();
}

struct miqt_array /* of int */  QFontDatabase_standardSizes() {
	QList<int> _ret = QFontDatabase::standardSizes();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_writingSystems() {
	QList<QFontDatabase::WritingSystem> _ret = QFontDatabase::writingSystems();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QFontDatabase::WritingSystem _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_writingSystemsWithFamily(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QList<QFontDatabase::WritingSystem> _ret = QFontDatabase::writingSystems(family_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QFontDatabase::WritingSystem _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_families() {
	QStringList _ret = QFontDatabase::families();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_styles(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QStringList _ret = QFontDatabase::styles(family_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_pointSizes(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QList<int> _ret = QFontDatabase::pointSizes(family_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_smoothSizes(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	QList<int> _ret = QFontDatabase::smoothSizes(family_QString, style_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QFontDatabase_styleString(QFont* font) {
	QString _ret = QFontDatabase::styleString(*font);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontDatabase_styleStringWithFontInfo(QFontInfo* fontInfo) {
	QString _ret = QFontDatabase::styleString(*fontInfo);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFont* QFontDatabase_font(struct miqt_string family, struct miqt_string style, int pointSize) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return new QFont(QFontDatabase::font(family_QString, style_QString, static_cast<int>(pointSize)));
}

bool QFontDatabase_isBitmapScalable(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::isBitmapScalable(family_QString);
}

bool QFontDatabase_isSmoothlyScalable(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::isSmoothlyScalable(family_QString);
}

bool QFontDatabase_isScalable(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::isScalable(family_QString);
}

bool QFontDatabase_isFixedPitch(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::isFixedPitch(family_QString);
}

bool QFontDatabase_italic(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::italic(family_QString, style_QString);
}

bool QFontDatabase_bold(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::bold(family_QString, style_QString);
}

int QFontDatabase_weight(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::weight(family_QString, style_QString);
}

bool QFontDatabase_hasFamily(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::hasFamily(family_QString);
}

bool QFontDatabase_isPrivateFamily(struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	return QFontDatabase::isPrivateFamily(family_QString);
}

struct miqt_string QFontDatabase_writingSystemName(int writingSystem) {
	QString _ret = QFontDatabase::writingSystemName(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontDatabase_writingSystemSample(int writingSystem) {
	QString _ret = QFontDatabase::writingSystemSample(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFontDatabase_addApplicationFont(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFontDatabase::addApplicationFont(fileName_QString);
}

int QFontDatabase_addApplicationFontFromData(struct miqt_string fontData) {
	QByteArray fontData_QByteArray(fontData.data, fontData.len);
	return QFontDatabase::addApplicationFontFromData(fontData_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationFontFamilies(int id) {
	QStringList _ret = QFontDatabase::applicationFontFamilies(static_cast<int>(id));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QFontDatabase_removeApplicationFont(int id) {
	return QFontDatabase::removeApplicationFont(static_cast<int>(id));
}

bool QFontDatabase_removeAllApplicationFonts() {
	return QFontDatabase::removeAllApplicationFonts();
}

void QFontDatabase_addApplicationFallbackFontFamily(int script, struct miqt_string familyName) {
	QString familyName_QString = QString::fromUtf8(familyName.data, familyName.len);
	QFontDatabase::addApplicationFallbackFontFamily(static_cast<QChar::Script>(script), familyName_QString);
}

bool QFontDatabase_removeApplicationFallbackFontFamily(int script, struct miqt_string familyName) {
	QString familyName_QString = QString::fromUtf8(familyName.data, familyName.len);
	return QFontDatabase::removeApplicationFallbackFontFamily(static_cast<QChar::Script>(script), familyName_QString);
}

void QFontDatabase_setApplicationFallbackFontFamilies(int param1, struct miqt_array /* of struct miqt_string */  familyNames) {
	QStringList familyNames_QList;
	familyNames_QList.reserve(familyNames.len);
	struct miqt_string* familyNames_arr = static_cast<struct miqt_string*>(familyNames.data);
	for(size_t i = 0; i < familyNames.len; ++i) {
		QString familyNames_arr_i_QString = QString::fromUtf8(familyNames_arr[i].data, familyNames_arr[i].len);
		familyNames_QList.push_back(familyNames_arr_i_QString);
	}
	QFontDatabase::setApplicationFallbackFontFamilies(static_cast<QChar::Script>(param1), familyNames_QList);
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationFallbackFontFamilies(int script) {
	QStringList _ret = QFontDatabase::applicationFallbackFontFamilies(static_cast<QChar::Script>(script));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFontDatabase_addApplicationEmojiFontFamily(struct miqt_string familyName) {
	QString familyName_QString = QString::fromUtf8(familyName.data, familyName.len);
	QFontDatabase::addApplicationEmojiFontFamily(familyName_QString);
}

bool QFontDatabase_removeApplicationEmojiFontFamily(struct miqt_string familyName) {
	QString familyName_QString = QString::fromUtf8(familyName.data, familyName.len);
	return QFontDatabase::removeApplicationEmojiFontFamily(familyName_QString);
}

void QFontDatabase_setApplicationEmojiFontFamilies(struct miqt_array /* of struct miqt_string */  familyNames) {
	QStringList familyNames_QList;
	familyNames_QList.reserve(familyNames.len);
	struct miqt_string* familyNames_arr = static_cast<struct miqt_string*>(familyNames.data);
	for(size_t i = 0; i < familyNames.len; ++i) {
		QString familyNames_arr_i_QString = QString::fromUtf8(familyNames_arr[i].data, familyNames_arr[i].len);
		familyNames_QList.push_back(familyNames_arr_i_QString);
	}
	QFontDatabase::setApplicationEmojiFontFamilies(familyNames_QList);
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_applicationEmojiFontFamilies() {
	QStringList _ret = QFontDatabase::applicationEmojiFontFamilies();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QFont* QFontDatabase_systemFont(int type) {
	return new QFont(QFontDatabase::systemFont(static_cast<QFontDatabase::SystemFont>(type)));
}

struct miqt_array /* of struct miqt_string */  QFontDatabase_familiesWithWritingSystem(int writingSystem) {
	QStringList _ret = QFontDatabase::families(static_cast<QFontDatabase::WritingSystem>(writingSystem));
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QFontDatabase_pointSizes2(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	QList<int> _ret = QFontDatabase::pointSizes(family_QString, style_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QFontDatabase_isBitmapScalable2(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::isBitmapScalable(family_QString, style_QString);
}

bool QFontDatabase_isSmoothlyScalable2(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::isSmoothlyScalable(family_QString, style_QString);
}

bool QFontDatabase_isScalable2(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::isScalable(family_QString, style_QString);
}

bool QFontDatabase_isFixedPitch2(struct miqt_string family, struct miqt_string style) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	QString style_QString = QString::fromUtf8(style.data, style.len);
	return QFontDatabase::isFixedPitch(family_QString, style_QString);
}

void QFontDatabase_delete(QFontDatabase* self) {
	delete self;
}

QGlyphRun* QGlyphRun_new() {
	return new (std::nothrow) QGlyphRun();
}

QGlyphRun* QGlyphRun_new2(QGlyphRun* other) {
	return new (std::nothrow) QGlyphRun(*other);
}

void QGlyphRun_swap(QGlyphRun* self, QGlyphRun* other) {
	self->swap(*other);
}

void QGlyphRun_setRawData(QGlyphRun* self, const unsigned int* glyphIndexArray, QPointF* glyphPositionArray, int size) {
	self->setRawData(glyphIndexArray, glyphPositionArray, static_cast<int>(size));
}

struct miqt_array /* of unsigned int */  QGlyphRun_glyphIndexes(const QGlyphRun* self) {
	QList<quint32> _ret = self->glyphIndexes();
	// Convert QList<> from C++ memory to manually-managed C memory
	unsigned int* _arr = static_cast<unsigned int*>(malloc(sizeof(unsigned int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGlyphRun_setGlyphIndexes(QGlyphRun* self, struct miqt_array /* of unsigned int */  glyphIndexes) {
	QList<quint32> glyphIndexes_QList;
	glyphIndexes_QList.reserve(glyphIndexes.len);
	unsigned int* glyphIndexes_arr = static_cast<unsigned int*>(glyphIndexes.data);
	for(size_t i = 0; i < glyphIndexes.len; ++i) {
		glyphIndexes_QList.push_back(static_cast<unsigned int>(glyphIndexes_arr[i]));
	}
	self->setGlyphIndexes(glyphIndexes_QList);
}

struct miqt_array /* of QPointF* */  QGlyphRun_positions(const QGlyphRun* self) {
	QList<QPointF> _ret = self->positions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QPointF** _arr = static_cast<QPointF**>(malloc(sizeof(QPointF*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QPointF(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGlyphRun_setPositions(QGlyphRun* self, struct miqt_array /* of QPointF* */  positions) {
	QList<QPointF> positions_QList;
	positions_QList.reserve(positions.len);
	QPointF** positions_arr = static_cast<QPointF**>(positions.data);
	for(size_t i = 0; i < positions.len; ++i) {
		positions_QList.push_back(*(positions_arr[i]));
	}
	self->setPositions(positions_QList);
}

void QGlyphRun_clear(QGlyphRun* self) {
	self->clear();
}

bool QGlyphRun_operatorNotEqual(const QGlyphRun* self, QGlyphRun* other) {
	return (*self != *other);
}

void QGlyphRun_setOverline(QGlyphRun* self, bool overline) {
	self->setOverline(overline);
}

bool QGlyphRun_overline(const QGlyphRun* self) {
	return self->overline();
}

void QGlyphRun_setUnderline(QGlyphRun* self, bool underline) {
	self->setUnderline(underline);
}

bool QGlyphRun_underline(const QGlyphRun* self) {
	return self->underline();
}

void QGlyphRun_setStrikeOut(QGlyphRun* self, bool strikeOut) {
	self->setStrikeOut(strikeOut);
}

bool QGlyphRun_strikeOut(const QGlyphRun* self) {
	return self->strikeOut();
}

void QGlyphRun_setRightToLeft(QGlyphRun* self, bool on) {
	self->setRightToLeft(on);
}

bool QGlyphRun_isRightToLeft(const QGlyphRun* self) {
	return self->isRightToLeft();
}

void QGlyphRun_setFlag(QGlyphRun* self, int flag) {
	self->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag));
}

void QGlyphRun_setFlags(QGlyphRun* self, int flags) {
	self->setFlags(static_cast<QGlyphRun::GlyphRunFlags>(flags));
}

int QGlyphRun_flags(const QGlyphRun* self) {
	return self->flags();
}

void QGlyphRun_setBoundingRect(QGlyphRun* self, QRectF* boundingRect) {
	self->setBoundingRect(*boundingRect);
}

QRectF* QGlyphRun_boundingRect(const QGlyphRun* self) {
	return new QRectF(self->boundingRect());
}

void QGlyphRun_setSourceString(QGlyphRun* self, struct miqt_string sourceString) {
	QString sourceString_QString = QString::fromUtf8(sourceString.data, sourceString.len);
	self->setSourceString(sourceString_QString);
}

struct miqt_string QGlyphRun_sourceString(const QGlyphRun* self) {
	QString _ret = self->sourceString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGlyphRun_isEmpty(const QGlyphRun* self) {
	return self->isEmpty();
}

void QGlyphRun_setFlag2(QGlyphRun* self, int flag, bool enabled) {
	self->setFlag(static_cast<QGlyphRun::GlyphRunFlag>(flag), enabled);
}

void QGlyphRun_delete(QGlyphRun* self) {
	delete self;
}

void QAbstractUndoItem_undo(QAbstractUndoItem* self) {
	self->undo();
}

void QAbstractUndoItem_redo(QAbstractUndoItem* self) {
	self->redo();
}

void QAbstractUndoItem_delete(QAbstractUndoItem* self) {
	delete self;
}

class MiqtVirtualQTextDocument final : public QTextDocument {
public:

	MiqtVirtualQTextDocument(): QTextDocument() {}
	MiqtVirtualQTextDocument(const QString& text): QTextDocument(text) {}
	MiqtVirtualQTextDocument(QObject* parent): QTextDocument(parent) {}
	MiqtVirtualQTextDocument(const QString& text, QObject* parent): QTextDocument(text, parent) {}

	virtual ~MiqtVirtualQTextDocument() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QTextDocument::clear();
			return;
		}

		miqt_exec_callback_QTextDocument_clear(this, handle__clear);

	}

	friend void QTextDocument_virtualbase_clear(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTextDocument::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTextDocument_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QTextDocument_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTextDocument::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTextDocument_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTextDocument_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QTextDocument_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTextDocument_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTextDocument_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTextDocument_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTextDocument* QTextDocument_new() {
	return new (std::nothrow) MiqtVirtualQTextDocument();
}

QTextDocument* QTextDocument_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQTextDocument(text_QString);
}

QTextDocument* QTextDocument_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQTextDocument(parent);
}

QTextDocument* QTextDocument_new4(struct miqt_string text, QObject* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQTextDocument(text_QString, parent);
}

void QTextDocument_virtbase(QTextDocument* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTextDocument_metaObject(const QTextDocument* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QTextDocument_tr(const char* s) {
	QString _ret = QTextDocument::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextDocument* QTextDocument_clone(const QTextDocument* self) {
	return self->clone();
}

bool QTextDocument_isEmpty(const QTextDocument* self) {
	return self->isEmpty();
}

void QTextDocument_clear(QTextDocument* self) {
	self->clear();
}

void QTextDocument_setUndoRedoEnabled(QTextDocument* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

bool QTextDocument_isUndoRedoEnabled(const QTextDocument* self) {
	return self->isUndoRedoEnabled();
}

bool QTextDocument_isUndoAvailable(const QTextDocument* self) {
	return self->isUndoAvailable();
}

bool QTextDocument_isRedoAvailable(const QTextDocument* self) {
	return self->isRedoAvailable();
}

int QTextDocument_availableUndoSteps(const QTextDocument* self) {
	return self->availableUndoSteps();
}

int QTextDocument_availableRedoSteps(const QTextDocument* self) {
	return self->availableRedoSteps();
}

int QTextDocument_revision(const QTextDocument* self) {
	return self->revision();
}

void QTextDocument_setDocumentLayout(QTextDocument* self, QAbstractTextDocumentLayout* layout) {
	self->setDocumentLayout(layout);
}

QAbstractTextDocumentLayout* QTextDocument_documentLayout(const QTextDocument* self) {
	return self->documentLayout();
}

void QTextDocument_setMetaInformation(QTextDocument* self, int info, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	self->setMetaInformation(static_cast<QTextDocument::MetaInformation>(info), param2_QString);
}

struct miqt_string QTextDocument_metaInformation(const QTextDocument* self, int info) {
	QString _ret = self->metaInformation(static_cast<QTextDocument::MetaInformation>(info));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDocument_toHtml(const QTextDocument* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocument_setHtml(QTextDocument* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

struct miqt_string QTextDocument_toMarkdown(const QTextDocument* self) {
	QString _ret = self->toMarkdown();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocument_setMarkdown(QTextDocument* self, struct miqt_string markdown) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->setMarkdown(markdown_QString);
}

struct miqt_string QTextDocument_toRawText(const QTextDocument* self) {
	QString _ret = self->toRawText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDocument_toPlainText(const QTextDocument* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocument_setPlainText(QTextDocument* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

QChar* QTextDocument_characterAt(const QTextDocument* self, int pos) {
	return new QChar(self->characterAt(static_cast<int>(pos)));
}

QTextCursor* QTextDocument_find(const QTextDocument* self, struct miqt_string subString) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return new QTextCursor(self->find(subString_QString));
}

QTextCursor* QTextDocument_find2(const QTextDocument* self, struct miqt_string subString, QTextCursor* cursor) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return new QTextCursor(self->find(subString_QString, *cursor));
}

QTextCursor* QTextDocument_findWithExpr(const QTextDocument* self, QRegularExpression* expr) {
	return new QTextCursor(self->find(*expr));
}

QTextCursor* QTextDocument_find3(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor) {
	return new QTextCursor(self->find(*expr, *cursor));
}

QTextFrame* QTextDocument_frameAt(const QTextDocument* self, int pos) {
	return self->frameAt(static_cast<int>(pos));
}

QTextFrame* QTextDocument_rootFrame(const QTextDocument* self) {
	return self->rootFrame();
}

QTextObject* QTextDocument_object(const QTextDocument* self, int objectIndex) {
	return self->object(static_cast<int>(objectIndex));
}

QTextObject* QTextDocument_objectForFormat(const QTextDocument* self, QTextFormat* param1) {
	return self->objectForFormat(*param1);
}

QTextBlock* QTextDocument_findBlock(const QTextDocument* self, int pos) {
	return new QTextBlock(self->findBlock(static_cast<int>(pos)));
}

QTextBlock* QTextDocument_findBlockByNumber(const QTextDocument* self, int blockNumber) {
	return new QTextBlock(self->findBlockByNumber(static_cast<int>(blockNumber)));
}

QTextBlock* QTextDocument_findBlockByLineNumber(const QTextDocument* self, int blockNumber) {
	return new QTextBlock(self->findBlockByLineNumber(static_cast<int>(blockNumber)));
}

QTextBlock* QTextDocument_begin(const QTextDocument* self) {
	return new QTextBlock(self->begin());
}

QTextBlock* QTextDocument_end(const QTextDocument* self) {
	return new QTextBlock(self->end());
}

QTextBlock* QTextDocument_firstBlock(const QTextDocument* self) {
	return new QTextBlock(self->firstBlock());
}

QTextBlock* QTextDocument_lastBlock(const QTextDocument* self) {
	return new QTextBlock(self->lastBlock());
}

void QTextDocument_setPageSize(QTextDocument* self, QSizeF* size) {
	self->setPageSize(*size);
}

QSizeF* QTextDocument_pageSize(const QTextDocument* self) {
	return new QSizeF(self->pageSize());
}

void QTextDocument_setDefaultFont(QTextDocument* self, QFont* font) {
	self->setDefaultFont(*font);
}

QFont* QTextDocument_defaultFont(const QTextDocument* self) {
	return new QFont(self->defaultFont());
}

void QTextDocument_setSuperScriptBaseline(QTextDocument* self, double baseline) {
	self->setSuperScriptBaseline(static_cast<double>(baseline));
}

double QTextDocument_superScriptBaseline(const QTextDocument* self) {
	double _ret = self->superScriptBaseline();
	return static_cast<double>(_ret);
}

void QTextDocument_setSubScriptBaseline(QTextDocument* self, double baseline) {
	self->setSubScriptBaseline(static_cast<double>(baseline));
}

double QTextDocument_subScriptBaseline(const QTextDocument* self) {
	double _ret = self->subScriptBaseline();
	return static_cast<double>(_ret);
}

void QTextDocument_setBaselineOffset(QTextDocument* self, double baseline) {
	self->setBaselineOffset(static_cast<double>(baseline));
}

double QTextDocument_baselineOffset(const QTextDocument* self) {
	double _ret = self->baselineOffset();
	return static_cast<double>(_ret);
}

int QTextDocument_pageCount(const QTextDocument* self) {
	return self->pageCount();
}

bool QTextDocument_isModified(const QTextDocument* self) {
	return self->isModified();
}

void QTextDocument_print(const QTextDocument* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

QVariant* QTextDocument_resource(const QTextDocument* self, int type, QUrl* name) {
	return new QVariant(self->resource(static_cast<int>(type), *name));
}

void QTextDocument_addResource(QTextDocument* self, int type, QUrl* name, QVariant* resource) {
	self->addResource(static_cast<int>(type), *name, *resource);
}

struct miqt_array /* of QTextFormat* */  QTextDocument_allFormats(const QTextDocument* self) {
	QList<QTextFormat> _ret = self->allFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextFormat** _arr = static_cast<QTextFormat**>(malloc(sizeof(QTextFormat*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextFormat(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextDocument_markContentsDirty(QTextDocument* self, int from, int length) {
	self->markContentsDirty(static_cast<int>(from), static_cast<int>(length));
}

void QTextDocument_setUseDesignMetrics(QTextDocument* self, bool b) {
	self->setUseDesignMetrics(b);
}

bool QTextDocument_useDesignMetrics(const QTextDocument* self) {
	return self->useDesignMetrics();
}

void QTextDocument_setLayoutEnabled(QTextDocument* self, bool b) {
	self->setLayoutEnabled(b);
}

bool QTextDocument_isLayoutEnabled(const QTextDocument* self) {
	return self->isLayoutEnabled();
}

void QTextDocument_drawContents(QTextDocument* self, QPainter* painter) {
	self->drawContents(painter);
}

void QTextDocument_setTextWidth(QTextDocument* self, double width) {
	self->setTextWidth(static_cast<double>(width));
}

double QTextDocument_textWidth(const QTextDocument* self) {
	double _ret = self->textWidth();
	return static_cast<double>(_ret);
}

double QTextDocument_idealWidth(const QTextDocument* self) {
	double _ret = self->idealWidth();
	return static_cast<double>(_ret);
}

double QTextDocument_indentWidth(const QTextDocument* self) {
	double _ret = self->indentWidth();
	return static_cast<double>(_ret);
}

void QTextDocument_setIndentWidth(QTextDocument* self, double width) {
	self->setIndentWidth(static_cast<double>(width));
}

double QTextDocument_documentMargin(const QTextDocument* self) {
	double _ret = self->documentMargin();
	return static_cast<double>(_ret);
}

void QTextDocument_setDocumentMargin(QTextDocument* self, double margin) {
	self->setDocumentMargin(static_cast<double>(margin));
}

void QTextDocument_adjustSize(QTextDocument* self) {
	self->adjustSize();
}

QSizeF* QTextDocument_size(const QTextDocument* self) {
	return new QSizeF(self->size());
}

int QTextDocument_blockCount(const QTextDocument* self) {
	return self->blockCount();
}

int QTextDocument_lineCount(const QTextDocument* self) {
	return self->lineCount();
}

int QTextDocument_characterCount(const QTextDocument* self) {
	return self->characterCount();
}

void QTextDocument_setDefaultStyleSheet(QTextDocument* self, struct miqt_string sheet) {
	QString sheet_QString = QString::fromUtf8(sheet.data, sheet.len);
	self->setDefaultStyleSheet(sheet_QString);
}

struct miqt_string QTextDocument_defaultStyleSheet(const QTextDocument* self) {
	QString _ret = self->defaultStyleSheet();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocument_undo(QTextDocument* self, QTextCursor* cursor) {
	self->undo(cursor);
}

void QTextDocument_redo(QTextDocument* self, QTextCursor* cursor) {
	self->redo(cursor);
}

void QTextDocument_clearUndoRedoStacks(QTextDocument* self) {
	self->clearUndoRedoStacks();
}

int QTextDocument_maximumBlockCount(const QTextDocument* self) {
	return self->maximumBlockCount();
}

void QTextDocument_setMaximumBlockCount(QTextDocument* self, int maximum) {
	self->setMaximumBlockCount(static_cast<int>(maximum));
}

QTextOption* QTextDocument_defaultTextOption(const QTextDocument* self) {
	return new QTextOption(self->defaultTextOption());
}

void QTextDocument_setDefaultTextOption(QTextDocument* self, QTextOption* option) {
	self->setDefaultTextOption(*option);
}

QUrl* QTextDocument_baseUrl(const QTextDocument* self) {
	return new QUrl(self->baseUrl());
}

void QTextDocument_setBaseUrl(QTextDocument* self, QUrl* url) {
	self->setBaseUrl(*url);
}

int QTextDocument_defaultCursorMoveStyle(const QTextDocument* self) {
	Qt::CursorMoveStyle _ret = self->defaultCursorMoveStyle();
	return static_cast<int>(_ret);
}

void QTextDocument_setDefaultCursorMoveStyle(QTextDocument* self, int style) {
	self->setDefaultCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

void QTextDocument_contentsChange(QTextDocument* self, int from, int charsRemoved, int charsAdded) {
	self->contentsChange(static_cast<int>(from), static_cast<int>(charsRemoved), static_cast<int>(charsAdded));
}

void QTextDocument_connect_contentsChange(QTextDocument* self, intptr_t slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(int, int, int)>(&QTextDocument::contentsChange), self, [=](int from, int charsRemoved, int charsAdded) {
		int sigval1 = from;
		int sigval2 = charsRemoved;
		int sigval3 = charsAdded;
		miqt_exec_callback_QTextDocument_contentsChange(slot, sigval1, sigval2, sigval3);
	});
}

void QTextDocument_contentsChanged(QTextDocument* self) {
	self->contentsChanged();
}

void QTextDocument_connect_contentsChanged(QTextDocument* self, intptr_t slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::contentsChanged), self, [=]() {
		miqt_exec_callback_QTextDocument_contentsChanged(slot);
	});
}

void QTextDocument_undoAvailable(QTextDocument* self, bool param1) {
	self->undoAvailable(param1);
}

void QTextDocument_connect_undoAvailable(QTextDocument* self, intptr_t slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::undoAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextDocument_undoAvailable(slot, sigval1);
	});
}

void QTextDocument_redoAvailable(QTextDocument* self, bool param1) {
	self->redoAvailable(param1);
}

void QTextDocument_connect_redoAvailable(QTextDocument* self, intptr_t slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::redoAvailable), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QTextDocument_redoAvailable(slot, sigval1);
	});
}

void QTextDocument_undoCommandAdded(QTextDocument* self) {
	self->undoCommandAdded();
}

void QTextDocument_connect_undoCommandAdded(QTextDocument* self, intptr_t slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::undoCommandAdded), self, [=]() {
		miqt_exec_callback_QTextDocument_undoCommandAdded(slot);
	});
}

void QTextDocument_modificationChanged(QTextDocument* self, bool m) {
	self->modificationChanged(m);
}

void QTextDocument_connect_modificationChanged(QTextDocument* self, intptr_t slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(bool)>(&QTextDocument::modificationChanged), self, [=](bool m) {
		bool sigval1 = m;
		miqt_exec_callback_QTextDocument_modificationChanged(slot, sigval1);
	});
}

void QTextDocument_cursorPositionChanged(QTextDocument* self, QTextCursor* cursor) {
	self->cursorPositionChanged(*cursor);
}

void QTextDocument_connect_cursorPositionChanged(QTextDocument* self, intptr_t slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(const QTextCursor&)>(&QTextDocument::cursorPositionChanged), self, [=](const QTextCursor& cursor) {
		const QTextCursor& cursor_ret = cursor;
		// Cast returned reference into pointer
		QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);
		miqt_exec_callback_QTextDocument_cursorPositionChanged(slot, sigval1);
	});
}

void QTextDocument_blockCountChanged(QTextDocument* self, int newBlockCount) {
	self->blockCountChanged(static_cast<int>(newBlockCount));
}

void QTextDocument_connect_blockCountChanged(QTextDocument* self, intptr_t slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(int)>(&QTextDocument::blockCountChanged), self, [=](int newBlockCount) {
		int sigval1 = newBlockCount;
		miqt_exec_callback_QTextDocument_blockCountChanged(slot, sigval1);
	});
}

void QTextDocument_baseUrlChanged(QTextDocument* self, QUrl* url) {
	self->baseUrlChanged(*url);
}

void QTextDocument_connect_baseUrlChanged(QTextDocument* self, intptr_t slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)(const QUrl&)>(&QTextDocument::baseUrlChanged), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QTextDocument_baseUrlChanged(slot, sigval1);
	});
}

void QTextDocument_documentLayoutChanged(QTextDocument* self) {
	self->documentLayoutChanged();
}

void QTextDocument_connect_documentLayoutChanged(QTextDocument* self, intptr_t slot) {
	QTextDocument::connect(self, static_cast<void (QTextDocument::*)()>(&QTextDocument::documentLayoutChanged), self, [=]() {
		miqt_exec_callback_QTextDocument_documentLayoutChanged(slot);
	});
}

void QTextDocument_undo2(QTextDocument* self) {
	self->undo();
}

void QTextDocument_redo2(QTextDocument* self) {
	self->redo();
}

void QTextDocument_appendUndoItem(QTextDocument* self, QAbstractUndoItem* param1) {
	self->appendUndoItem(param1);
}

void QTextDocument_setModified(QTextDocument* self) {
	self->setModified();
}

struct miqt_string QTextDocument_tr2(const char* s, const char* c) {
	QString _ret = QTextDocument::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDocument_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextDocument::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextDocument* QTextDocument_cloneWithParent(const QTextDocument* self, QObject* parent) {
	return self->clone(parent);
}

struct miqt_string QTextDocument_toMarkdownWithFeatures(const QTextDocument* self, int features) {
	QString _ret = self->toMarkdown(static_cast<QTextDocument::MarkdownFeatures>(features));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextDocument_setMarkdown2(QTextDocument* self, struct miqt_string markdown, int features) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->setMarkdown(markdown_QString, static_cast<QTextDocument::MarkdownFeatures>(features));
}

QTextCursor* QTextDocument_find4(const QTextDocument* self, struct miqt_string subString, int from) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return new QTextCursor(self->find(subString_QString, static_cast<int>(from)));
}

QTextCursor* QTextDocument_find5(const QTextDocument* self, struct miqt_string subString, int from, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return new QTextCursor(self->find(subString_QString, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_find6(const QTextDocument* self, struct miqt_string subString, QTextCursor* cursor, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return new QTextCursor(self->find(subString_QString, *cursor, static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_find7(const QTextDocument* self, QRegularExpression* expr, int from) {
	return new QTextCursor(self->find(*expr, static_cast<int>(from)));
}

QTextCursor* QTextDocument_find8(const QTextDocument* self, QRegularExpression* expr, int from, int options) {
	return new QTextCursor(self->find(*expr, static_cast<int>(from), static_cast<QTextDocument::FindFlags>(options)));
}

QTextCursor* QTextDocument_find9(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor, int options) {
	return new QTextCursor(self->find(*expr, *cursor, static_cast<QTextDocument::FindFlags>(options)));
}

void QTextDocument_drawContents2(QTextDocument* self, QPainter* painter, QRectF* rect) {
	self->drawContents(painter, *rect);
}

void QTextDocument_clearUndoRedoStacksWithHistoryToClear(QTextDocument* self, int historyToClear) {
	self->clearUndoRedoStacks(static_cast<QTextDocument::Stacks>(historyToClear));
}

void QTextDocument_setModifiedWithBool(QTextDocument* self, bool m) {
	self->setModified(m);
}

bool QTextDocument_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = static_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clear = slot;
	return true;
}

void QTextDocument_virtualbase_clear(void* self) {
	static_cast<MiqtVirtualQTextDocument*>(self)->QTextDocument::clear();
}

bool QTextDocument_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = static_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QTextDocument_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTextDocument*>(self)->QTextDocument::event(event);
}

bool QTextDocument_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextDocument* self_cast = static_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTextDocument_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTextDocument*>(self)->QTextDocument::eventFilter(watched, event);
}

QObject* QTextDocument_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextDocument* self_cast = static_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTextDocument_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextDocument* self_cast = static_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTextDocument_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTextDocument* self_cast = static_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTextDocument_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTextDocument* self_cast = static_cast<MiqtVirtualQTextDocument*>( (QTextDocument*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTextDocument_delete(QTextDocument* self) {
	delete self;
}

QBrush* QBrush_new() {
	return new (std::nothrow) QBrush();
}

QBrush* QBrush_new2(int bs) {
	return new (std::nothrow) QBrush(static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new3(QColor* color) {
	return new (std::nothrow) QBrush(*color);
}

QBrush* QBrush_new4(int color) {
	return new (std::nothrow) QBrush(static_cast<Qt::GlobalColor>(color));
}

QBrush* QBrush_new5(QColor* color, QPixmap* pixmap) {
	return new (std::nothrow) QBrush(*color, *pixmap);
}

QBrush* QBrush_new6(int color, QPixmap* pixmap) {
	return new (std::nothrow) QBrush(static_cast<Qt::GlobalColor>(color), *pixmap);
}

QBrush* QBrush_new7(QPixmap* pixmap) {
	return new (std::nothrow) QBrush(*pixmap);
}

QBrush* QBrush_new8(QImage* image) {
	return new (std::nothrow) QBrush(*image);
}

QBrush* QBrush_new9(QBrush* brush) {
	return new (std::nothrow) QBrush(*brush);
}

QBrush* QBrush_new10(QGradient* gradient) {
	return new (std::nothrow) QBrush(*gradient);
}

QBrush* QBrush_new11(QColor* color, int bs) {
	return new (std::nothrow) QBrush(*color, static_cast<Qt::BrushStyle>(bs));
}

QBrush* QBrush_new12(int color, int bs) {
	return new (std::nothrow) QBrush(static_cast<Qt::GlobalColor>(color), static_cast<Qt::BrushStyle>(bs));
}

void QBrush_swap(QBrush* self, QBrush* other) {
	self->swap(*other);
}

QVariant* QBrush_ToQVariant(const QBrush* self) {
	return new QVariant(self->operator QVariant());
}

int QBrush_style(const QBrush* self) {
	Qt::BrushStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QBrush_setStyle(QBrush* self, int style) {
	self->setStyle(static_cast<Qt::BrushStyle>(style));
}

QTransform* QBrush_transform(const QBrush* self) {
	return new QTransform(self->transform());
}

void QBrush_setTransform(QBrush* self, QTransform* transform) {
	self->setTransform(*transform);
}

QPixmap* QBrush_texture(const QBrush* self) {
	return new QPixmap(self->texture());
}

void QBrush_setTexture(QBrush* self, QPixmap* pixmap) {
	self->setTexture(*pixmap);
}

QImage* QBrush_textureImage(const QBrush* self) {
	return new QImage(self->textureImage());
}

void QBrush_setTextureImage(QBrush* self, QImage* image) {
	self->setTextureImage(*image);
}

QColor* QBrush_color(const QBrush* self) {
	const QColor& _ret = self->color();
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

void QBrush_setColor(QBrush* self, QColor* color) {
	self->setColor(*color);
}

void QBrush_setColorWithColor(QBrush* self, int color) {
	self->setColor(static_cast<Qt::GlobalColor>(color));
}

QGradient* QBrush_gradient(const QBrush* self) {
	return (QGradient*) self->gradient();
}

bool QBrush_isOpaque(const QBrush* self) {
	return self->isOpaque();
}

bool QBrush_operatorNotEqual(const QBrush* self, QBrush* b) {
	return (*self != *b);
}

bool QBrush_isDetached(const QBrush* self) {
	return self->isDetached();
}

void QBrush_delete(QBrush* self) {
	delete self;
}

QGradient* QGradient_new() {
	return new (std::nothrow) QGradient();
}

QGradient* QGradient_new2(int param1) {
	return new (std::nothrow) QGradient(static_cast<QGradient::Preset>(param1));
}

QGradient* QGradient_new3(QGradient* param1) {
	return new (std::nothrow) QGradient(*param1);
}

void QGradient_setSpread(QGradient* self, int spread) {
	self->setSpread(static_cast<QGradient::Spread>(spread));
}

int QGradient_spread(const QGradient* self) {
	return self->spread();
}

void QGradient_setColorAt(QGradient* self, double pos, QColor* color) {
	self->setColorAt(static_cast<double>(pos), *color);
}

int QGradient_coordinateMode(const QGradient* self) {
	return self->coordinateMode();
}

void QGradient_setCoordinateMode(QGradient* self, int mode) {
	self->setCoordinateMode(static_cast<QGradient::CoordinateMode>(mode));
}

int QGradient_interpolationMode(const QGradient* self) {
	return self->interpolationMode();
}

void QGradient_setInterpolationMode(QGradient* self, int mode) {
	self->setInterpolationMode(static_cast<QGradient::InterpolationMode>(mode));
}

bool QGradient_operatorNotEqual(const QGradient* self, QGradient* other) {
	return (*self != *other);
}

void QGradient_delete(QGradient* self) {
	delete self;
}

QPen* QPen_new() {
	return new (std::nothrow) QPen();
}

QPen* QPen_new2(int param1) {
	return new (std::nothrow) QPen(static_cast<Qt::PenStyle>(param1));
}

QPen* QPen_new3(QColor* color) {
	return new (std::nothrow) QPen(*color);
}

QPen* QPen_new4(QBrush* brush, double width) {
	return new (std::nothrow) QPen(*brush, static_cast<double>(width));
}

QPen* QPen_new5(QPen* pen) {
	return new (std::nothrow) QPen(*pen);
}

QPen* QPen_new6(QBrush* brush, double width, int s) {
	return new (std::nothrow) QPen(*brush, static_cast<double>(width), static_cast<Qt::PenStyle>(s));
}

QPen* QPen_new7(QBrush* brush, double width, int s, int c) {
	return new (std::nothrow) QPen(*brush, static_cast<double>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c));
}

QPen* QPen_new8(QBrush* brush, double width, int s, int c, int j) {
	return new (std::nothrow) QPen(*brush, static_cast<double>(width), static_cast<Qt::PenStyle>(s), static_cast<Qt::PenCapStyle>(c), static_cast<Qt::PenJoinStyle>(j));
}

void QPen_swap(QPen* self, QPen* other) {
	self->swap(*other);
}

int QPen_style(const QPen* self) {
	Qt::PenStyle _ret = self->style();
	return static_cast<int>(_ret);
}

void QPen_setStyle(QPen* self, int style) {
	self->setStyle(static_cast<Qt::PenStyle>(style));
}

struct miqt_array /* of double */  QPen_dashPattern(const QPen* self) {
	QList<qreal> _ret = self->dashPattern();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QPen_setDashPattern(QPen* self, struct miqt_array /* of double */  pattern) {
	QList<qreal> pattern_QList;
	pattern_QList.reserve(pattern.len);
	double* pattern_arr = static_cast<double*>(pattern.data);
	for(size_t i = 0; i < pattern.len; ++i) {
		pattern_QList.push_back(static_cast<double>(pattern_arr[i]));
	}
	self->setDashPattern(pattern_QList);
}

double QPen_dashOffset(const QPen* self) {
	double _ret = self->dashOffset();
	return static_cast<double>(_ret);
}

void QPen_setDashOffset(QPen* self, double doffset) {
	self->setDashOffset(static_cast<double>(doffset));
}

double QPen_miterLimit(const QPen* self) {
	double _ret = self->miterLimit();
	return static_cast<double>(_ret);
}

void QPen_setMiterLimit(QPen* self, double limit) {
	self->setMiterLimit(static_cast<double>(limit));
}

double QPen_widthF(const QPen* self) {
	double _ret = self->widthF();
	return static_cast<double>(_ret);
}

void QPen_setWidthF(QPen* self, double width) {
	self->setWidthF(static_cast<double>(width));
}

int QPen_width(const QPen* self) {
	return self->width();
}

void QPen_setWidth(QPen* self, int width) {
	self->setWidth(static_cast<int>(width));
}

QColor* QPen_color(const QPen* self) {
	return new QColor(self->color());
}

void QPen_setColor(QPen* self, QColor* color) {
	self->setColor(*color);
}

QBrush* QPen_brush(const QPen* self) {
	return new QBrush(self->brush());
}

void QPen_setBrush(QPen* self, QBrush* brush) {
	self->setBrush(*brush);
}

bool QPen_isSolid(const QPen* self) {
	return self->isSolid();
}

int QPen_capStyle(const QPen* self) {
	Qt::PenCapStyle _ret = self->capStyle();
	return static_cast<int>(_ret);
}

void QPen_setCapStyle(QPen* self, int pcs) {
	self->setCapStyle(static_cast<Qt::PenCapStyle>(pcs));
}

int QPen_joinStyle(const QPen* self) {
	Qt::PenJoinStyle _ret = self->joinStyle();
	return static_cast<int>(_ret);
}

void QPen_setJoinStyle(QPen* self, int pcs) {
	self->setJoinStyle(static_cast<Qt::PenJoinStyle>(pcs));
}

bool QPen_isCosmetic(const QPen* self) {
	return self->isCosmetic();
}

void QPen_setCosmetic(QPen* self, bool cosmetic) {
	self->setCosmetic(cosmetic);
}

bool QPen_operatorNotEqual(const QPen* self, QPen* p) {
	return (*self != *p);
}

QVariant* QPen_ToQVariant(const QPen* self) {
	return new QVariant(self->operator QVariant());
}

bool QPen_isDetached(QPen* self) {
	return self->isDetached();
}

void QPen_delete(QPen* self) {
	delete self;
}

QTextOption* QTextOption_new() {
	return new (std::nothrow) QTextOption();
}

QTextOption* QTextOption_new2(int alignment) {
	return new (std::nothrow) QTextOption(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

QTextOption* QTextOption_new3(QTextOption* o) {
	return new (std::nothrow) QTextOption(*o);
}

void QTextOption_setAlignment(QTextOption* self, int alignment) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QTextOption_alignment(const QTextOption* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextOption_setTextDirection(QTextOption* self, int aDirection) {
	self->setTextDirection(static_cast<Qt::LayoutDirection>(aDirection));
}

int QTextOption_textDirection(const QTextOption* self) {
	Qt::LayoutDirection _ret = self->textDirection();
	return static_cast<int>(_ret);
}

void QTextOption_setWrapMode(QTextOption* self, int wrap) {
	self->setWrapMode(static_cast<QTextOption::WrapMode>(wrap));
}

int QTextOption_wrapMode(const QTextOption* self) {
	return self->wrapMode();
}

void QTextOption_setFlags(QTextOption* self, int flags) {
	self->setFlags(static_cast<QTextOption::Flags>(flags));
}

int QTextOption_flags(const QTextOption* self) {
	return self->flags();
}

void QTextOption_setTabStopDistance(QTextOption* self, double tabStopDistance) {
	self->setTabStopDistance(static_cast<double>(tabStopDistance));
}

double QTextOption_tabStopDistance(const QTextOption* self) {
	double _ret = self->tabStopDistance();
	return static_cast<double>(_ret);
}

void QTextOption_setTabArray(QTextOption* self, struct miqt_array /* of double */  tabStops) {
	QList<qreal> tabStops_QList;
	tabStops_QList.reserve(tabStops.len);
	double* tabStops_arr = static_cast<double*>(tabStops.data);
	for(size_t i = 0; i < tabStops.len; ++i) {
		tabStops_QList.push_back(static_cast<double>(tabStops_arr[i]));
	}
	self->setTabArray(tabStops_QList);
}

struct miqt_array /* of double */  QTextOption_tabArray(const QTextOption* self) {
	QList<qreal> _ret = self->tabArray();
	// Convert QList<> from C++ memory to manually-managed C memory
	double* _arr = static_cast<double*>(malloc(sizeof(double) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextOption_setUseDesignMetrics(QTextOption* self, bool b) {
	self->setUseDesignMetrics(b);
}

bool QTextOption_useDesignMetrics(const QTextOption* self) {
	return self->useDesignMetrics();
}

void QTextOption_delete(QTextOption* self) {
	delete self;
}

QTextLength* QTextLength_new() {
	return new (std::nothrow) QTextLength();
}

QTextLength* QTextLength_new2(QTextLength* param1) {
	return new (std::nothrow) QTextLength(*param1);
}

double QTextLength_value(const QTextLength* self, double maximumLength) {
	double _ret = self->value(static_cast<double>(maximumLength));
	return static_cast<double>(_ret);
}

double QTextLength_rawValue(const QTextLength* self) {
	double _ret = self->rawValue();
	return static_cast<double>(_ret);
}

bool QTextLength_operatorNotEqual(const QTextLength* self, QTextLength* other) {
	return (*self != *other);
}

QVariant* QTextLength_ToQVariant(const QTextLength* self) {
	return new QVariant(self->operator QVariant());
}

void QTextLength_delete(QTextLength* self) {
	delete self;
}

QTextFormat* QTextFormat_new() {
	return new (std::nothrow) QTextFormat();
}

QTextFormat* QTextFormat_new2(int type) {
	return new (std::nothrow) QTextFormat(static_cast<int>(type));
}

QTextFormat* QTextFormat_new3(QTextFormat* rhs) {
	return new (std::nothrow) QTextFormat(*rhs);
}

void QTextFormat_swap(QTextFormat* self, QTextFormat* other) {
	self->swap(*other);
}

void QTextFormat_merge(QTextFormat* self, QTextFormat* other) {
	self->merge(*other);
}

bool QTextFormat_isValid(const QTextFormat* self) {
	return self->isValid();
}

bool QTextFormat_isEmpty(const QTextFormat* self) {
	return self->isEmpty();
}

int QTextFormat_type(const QTextFormat* self) {
	return self->type();
}

int QTextFormat_objectIndex(const QTextFormat* self) {
	return self->objectIndex();
}

void QTextFormat_setObjectIndex(QTextFormat* self, int object) {
	self->setObjectIndex(static_cast<int>(object));
}

QVariant* QTextFormat_property(const QTextFormat* self, int propertyId) {
	return new QVariant(self->property(static_cast<int>(propertyId)));
}

void QTextFormat_setProperty(QTextFormat* self, int propertyId, QVariant* value) {
	self->setProperty(static_cast<int>(propertyId), *value);
}

void QTextFormat_clearProperty(QTextFormat* self, int propertyId) {
	self->clearProperty(static_cast<int>(propertyId));
}

bool QTextFormat_hasProperty(const QTextFormat* self, int propertyId) {
	return self->hasProperty(static_cast<int>(propertyId));
}

bool QTextFormat_boolProperty(const QTextFormat* self, int propertyId) {
	return self->boolProperty(static_cast<int>(propertyId));
}

int QTextFormat_intProperty(const QTextFormat* self, int propertyId) {
	return self->intProperty(static_cast<int>(propertyId));
}

double QTextFormat_doubleProperty(const QTextFormat* self, int propertyId) {
	double _ret = self->doubleProperty(static_cast<int>(propertyId));
	return static_cast<double>(_ret);
}

struct miqt_string QTextFormat_stringProperty(const QTextFormat* self, int propertyId) {
	QString _ret = self->stringProperty(static_cast<int>(propertyId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QColor* QTextFormat_colorProperty(const QTextFormat* self, int propertyId) {
	return new QColor(self->colorProperty(static_cast<int>(propertyId)));
}

QPen* QTextFormat_penProperty(const QTextFormat* self, int propertyId) {
	return new QPen(self->penProperty(static_cast<int>(propertyId)));
}

QBrush* QTextFormat_brushProperty(const QTextFormat* self, int propertyId) {
	return new QBrush(self->brushProperty(static_cast<int>(propertyId)));
}

QTextLength* QTextFormat_lengthProperty(const QTextFormat* self, int propertyId) {
	return new QTextLength(self->lengthProperty(static_cast<int>(propertyId)));
}

struct miqt_array /* of QTextLength* */  QTextFormat_lengthVectorProperty(const QTextFormat* self, int propertyId) {
	QList<QTextLength> _ret = self->lengthVectorProperty(static_cast<int>(propertyId));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextLength** _arr = static_cast<QTextLength**>(malloc(sizeof(QTextLength*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextLength(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextFormat_setProperty2(QTextFormat* self, int propertyId, struct miqt_array /* of QTextLength* */  lengths) {
	QList<QTextLength> lengths_QList;
	lengths_QList.reserve(lengths.len);
	QTextLength** lengths_arr = static_cast<QTextLength**>(lengths.data);
	for(size_t i = 0; i < lengths.len; ++i) {
		lengths_QList.push_back(*(lengths_arr[i]));
	}
	self->setProperty(static_cast<int>(propertyId), lengths_QList);
}

struct miqt_map /* of int to QVariant* */  QTextFormat_properties(const QTextFormat* self) {
	QMap<int, QVariant> _ret = self->properties();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

int QTextFormat_propertyCount(const QTextFormat* self) {
	return self->propertyCount();
}

void QTextFormat_setObjectType(QTextFormat* self, int type) {
	self->setObjectType(static_cast<int>(type));
}

int QTextFormat_objectType(const QTextFormat* self) {
	return self->objectType();
}

bool QTextFormat_isCharFormat(const QTextFormat* self) {
	return self->isCharFormat();
}

bool QTextFormat_isBlockFormat(const QTextFormat* self) {
	return self->isBlockFormat();
}

bool QTextFormat_isListFormat(const QTextFormat* self) {
	return self->isListFormat();
}

bool QTextFormat_isFrameFormat(const QTextFormat* self) {
	return self->isFrameFormat();
}

bool QTextFormat_isImageFormat(const QTextFormat* self) {
	return self->isImageFormat();
}

bool QTextFormat_isTableFormat(const QTextFormat* self) {
	return self->isTableFormat();
}

bool QTextFormat_isTableCellFormat(const QTextFormat* self) {
	return self->isTableCellFormat();
}

QTextBlockFormat* QTextFormat_toBlockFormat(const QTextFormat* self) {
	return new QTextBlockFormat(self->toBlockFormat());
}

QTextCharFormat* QTextFormat_toCharFormat(const QTextFormat* self) {
	return new QTextCharFormat(self->toCharFormat());
}

QTextListFormat* QTextFormat_toListFormat(const QTextFormat* self) {
	return new QTextListFormat(self->toListFormat());
}

QTextTableFormat* QTextFormat_toTableFormat(const QTextFormat* self) {
	return new QTextTableFormat(self->toTableFormat());
}

QTextFrameFormat* QTextFormat_toFrameFormat(const QTextFormat* self) {
	return new QTextFrameFormat(self->toFrameFormat());
}

QTextImageFormat* QTextFormat_toImageFormat(const QTextFormat* self) {
	return new QTextImageFormat(self->toImageFormat());
}

QTextTableCellFormat* QTextFormat_toTableCellFormat(const QTextFormat* self) {
	return new QTextTableCellFormat(self->toTableCellFormat());
}

bool QTextFormat_operatorNotEqual(const QTextFormat* self, QTextFormat* rhs) {
	return (*self != *rhs);
}

QVariant* QTextFormat_ToQVariant(const QTextFormat* self) {
	return new QVariant(self->operator QVariant());
}

void QTextFormat_setLayoutDirection(QTextFormat* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QTextFormat_layoutDirection(const QTextFormat* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<int>(_ret);
}

void QTextFormat_setBackground(QTextFormat* self, QBrush* brush) {
	self->setBackground(*brush);
}

QBrush* QTextFormat_background(const QTextFormat* self) {
	return new QBrush(self->background());
}

void QTextFormat_clearBackground(QTextFormat* self) {
	self->clearBackground();
}

void QTextFormat_setForeground(QTextFormat* self, QBrush* brush) {
	self->setForeground(*brush);
}

QBrush* QTextFormat_foreground(const QTextFormat* self) {
	return new QBrush(self->foreground());
}

void QTextFormat_clearForeground(QTextFormat* self) {
	self->clearForeground();
}

void QTextFormat_delete(QTextFormat* self) {
	delete self;
}

QTextCharFormat* QTextCharFormat_new() {
	return new (std::nothrow) QTextCharFormat();
}

QTextCharFormat* QTextCharFormat_new2(QTextCharFormat* param1) {
	return new (std::nothrow) QTextCharFormat(*param1);
}

void QTextCharFormat_virtbase(QTextCharFormat* src, QTextFormat** outptr_QTextFormat) {
	*outptr_QTextFormat = static_cast<QTextFormat*>(src);
}

bool QTextCharFormat_isValid(const QTextCharFormat* self) {
	return self->isValid();
}

void QTextCharFormat_setFont(QTextCharFormat* self, QFont* font) {
	self->setFont(*font);
}

QFont* QTextCharFormat_font(const QTextCharFormat* self) {
	return new QFont(self->font());
}

void QTextCharFormat_setFontFamily(QTextCharFormat* self, struct miqt_string family) {
	QString family_QString = QString::fromUtf8(family.data, family.len);
	self->setFontFamily(family_QString);
}

struct miqt_string QTextCharFormat_fontFamily(const QTextCharFormat* self) {
	QString _ret = self->fontFamily();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_setFontFamilies(QTextCharFormat* self, struct miqt_array /* of struct miqt_string */  families) {
	QStringList families_QList;
	families_QList.reserve(families.len);
	struct miqt_string* families_arr = static_cast<struct miqt_string*>(families.data);
	for(size_t i = 0; i < families.len; ++i) {
		QString families_arr_i_QString = QString::fromUtf8(families_arr[i].data, families_arr[i].len);
		families_QList.push_back(families_arr_i_QString);
	}
	self->setFontFamilies(families_QList);
}

QVariant* QTextCharFormat_fontFamilies(const QTextCharFormat* self) {
	return new QVariant(self->fontFamilies());
}

void QTextCharFormat_setFontStyleName(QTextCharFormat* self, struct miqt_string styleName) {
	QString styleName_QString = QString::fromUtf8(styleName.data, styleName.len);
	self->setFontStyleName(styleName_QString);
}

QVariant* QTextCharFormat_fontStyleName(const QTextCharFormat* self) {
	return new QVariant(self->fontStyleName());
}

void QTextCharFormat_setFontPointSize(QTextCharFormat* self, double size) {
	self->setFontPointSize(static_cast<double>(size));
}

double QTextCharFormat_fontPointSize(const QTextCharFormat* self) {
	double _ret = self->fontPointSize();
	return static_cast<double>(_ret);
}

void QTextCharFormat_setFontWeight(QTextCharFormat* self, int weight) {
	self->setFontWeight(static_cast<int>(weight));
}

int QTextCharFormat_fontWeight(const QTextCharFormat* self) {
	return self->fontWeight();
}

void QTextCharFormat_setFontItalic(QTextCharFormat* self, bool italic) {
	self->setFontItalic(italic);
}

bool QTextCharFormat_fontItalic(const QTextCharFormat* self) {
	return self->fontItalic();
}

void QTextCharFormat_setFontCapitalization(QTextCharFormat* self, int capitalization) {
	self->setFontCapitalization(static_cast<QFont::Capitalization>(capitalization));
}

int QTextCharFormat_fontCapitalization(const QTextCharFormat* self) {
	QFont::Capitalization _ret = self->fontCapitalization();
	return static_cast<int>(_ret);
}

void QTextCharFormat_setFontLetterSpacingType(QTextCharFormat* self, int letterSpacingType) {
	self->setFontLetterSpacingType(static_cast<QFont::SpacingType>(letterSpacingType));
}

int QTextCharFormat_fontLetterSpacingType(const QTextCharFormat* self) {
	QFont::SpacingType _ret = self->fontLetterSpacingType();
	return static_cast<int>(_ret);
}

void QTextCharFormat_setFontLetterSpacing(QTextCharFormat* self, double spacing) {
	self->setFontLetterSpacing(static_cast<double>(spacing));
}

double QTextCharFormat_fontLetterSpacing(const QTextCharFormat* self) {
	double _ret = self->fontLetterSpacing();
	return static_cast<double>(_ret);
}

void QTextCharFormat_setFontWordSpacing(QTextCharFormat* self, double spacing) {
	self->setFontWordSpacing(static_cast<double>(spacing));
}

double QTextCharFormat_fontWordSpacing(const QTextCharFormat* self) {
	double _ret = self->fontWordSpacing();
	return static_cast<double>(_ret);
}

void QTextCharFormat_setFontUnderline(QTextCharFormat* self, bool underline) {
	self->setFontUnderline(underline);
}

bool QTextCharFormat_fontUnderline(const QTextCharFormat* self) {
	return self->fontUnderline();
}

void QTextCharFormat_setFontOverline(QTextCharFormat* self, bool overline) {
	self->setFontOverline(overline);
}

bool QTextCharFormat_fontOverline(const QTextCharFormat* self) {
	return self->fontOverline();
}

void QTextCharFormat_setFontStrikeOut(QTextCharFormat* self, bool strikeOut) {
	self->setFontStrikeOut(strikeOut);
}

bool QTextCharFormat_fontStrikeOut(const QTextCharFormat* self) {
	return self->fontStrikeOut();
}

void QTextCharFormat_setUnderlineColor(QTextCharFormat* self, QColor* color) {
	self->setUnderlineColor(*color);
}

QColor* QTextCharFormat_underlineColor(const QTextCharFormat* self) {
	return new QColor(self->underlineColor());
}

void QTextCharFormat_setFontFixedPitch(QTextCharFormat* self, bool fixedPitch) {
	self->setFontFixedPitch(fixedPitch);
}

bool QTextCharFormat_fontFixedPitch(const QTextCharFormat* self) {
	return self->fontFixedPitch();
}

void QTextCharFormat_setFontStretch(QTextCharFormat* self, int factor) {
	self->setFontStretch(static_cast<int>(factor));
}

int QTextCharFormat_fontStretch(const QTextCharFormat* self) {
	return self->fontStretch();
}

void QTextCharFormat_setFontStyleHint(QTextCharFormat* self, int hint) {
	self->setFontStyleHint(static_cast<QFont::StyleHint>(hint));
}

void QTextCharFormat_setFontStyleStrategy(QTextCharFormat* self, int strategy) {
	self->setFontStyleStrategy(static_cast<QFont::StyleStrategy>(strategy));
}

int QTextCharFormat_fontStyleHint(const QTextCharFormat* self) {
	QFont::StyleHint _ret = self->fontStyleHint();
	return static_cast<int>(_ret);
}

int QTextCharFormat_fontStyleStrategy(const QTextCharFormat* self) {
	QFont::StyleStrategy _ret = self->fontStyleStrategy();
	return static_cast<int>(_ret);
}

void QTextCharFormat_setFontHintingPreference(QTextCharFormat* self, int hintingPreference) {
	self->setFontHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}

int QTextCharFormat_fontHintingPreference(const QTextCharFormat* self) {
	QFont::HintingPreference _ret = self->fontHintingPreference();
	return static_cast<int>(_ret);
}

void QTextCharFormat_setFontKerning(QTextCharFormat* self, bool enable) {
	self->setFontKerning(enable);
}

bool QTextCharFormat_fontKerning(const QTextCharFormat* self) {
	return self->fontKerning();
}

void QTextCharFormat_setUnderlineStyle(QTextCharFormat* self, int style) {
	self->setUnderlineStyle(static_cast<QTextCharFormat::UnderlineStyle>(style));
}

int QTextCharFormat_underlineStyle(const QTextCharFormat* self) {
	return self->underlineStyle();
}

void QTextCharFormat_setVerticalAlignment(QTextCharFormat* self, int alignment) {
	self->setVerticalAlignment(static_cast<QTextCharFormat::VerticalAlignment>(alignment));
}

int QTextCharFormat_verticalAlignment(const QTextCharFormat* self) {
	return self->verticalAlignment();
}

void QTextCharFormat_setTextOutline(QTextCharFormat* self, QPen* pen) {
	self->setTextOutline(*pen);
}

QPen* QTextCharFormat_textOutline(const QTextCharFormat* self) {
	return new QPen(self->textOutline());
}

void QTextCharFormat_setToolTip(QTextCharFormat* self, struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	self->setToolTip(tip_QString);
}

struct miqt_string QTextCharFormat_toolTip(const QTextCharFormat* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_setSuperScriptBaseline(QTextCharFormat* self, double baseline) {
	self->setSuperScriptBaseline(static_cast<double>(baseline));
}

double QTextCharFormat_superScriptBaseline(const QTextCharFormat* self) {
	double _ret = self->superScriptBaseline();
	return static_cast<double>(_ret);
}

void QTextCharFormat_setSubScriptBaseline(QTextCharFormat* self, double baseline) {
	self->setSubScriptBaseline(static_cast<double>(baseline));
}

double QTextCharFormat_subScriptBaseline(const QTextCharFormat* self) {
	double _ret = self->subScriptBaseline();
	return static_cast<double>(_ret);
}

void QTextCharFormat_setBaselineOffset(QTextCharFormat* self, double baseline) {
	self->setBaselineOffset(static_cast<double>(baseline));
}

double QTextCharFormat_baselineOffset(const QTextCharFormat* self) {
	double _ret = self->baselineOffset();
	return static_cast<double>(_ret);
}

void QTextCharFormat_setAnchor(QTextCharFormat* self, bool anchor) {
	self->setAnchor(anchor);
}

bool QTextCharFormat_isAnchor(const QTextCharFormat* self) {
	return self->isAnchor();
}

void QTextCharFormat_setAnchorHref(QTextCharFormat* self, struct miqt_string value) {
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setAnchorHref(value_QString);
}

struct miqt_string QTextCharFormat_anchorHref(const QTextCharFormat* self) {
	QString _ret = self->anchorHref();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextCharFormat_setAnchorNames(QTextCharFormat* self, struct miqt_array /* of struct miqt_string */  names) {
	QStringList names_QList;
	names_QList.reserve(names.len);
	struct miqt_string* names_arr = static_cast<struct miqt_string*>(names.data);
	for(size_t i = 0; i < names.len; ++i) {
		QString names_arr_i_QString = QString::fromUtf8(names_arr[i].data, names_arr[i].len);
		names_QList.push_back(names_arr_i_QString);
	}
	self->setAnchorNames(names_QList);
}

struct miqt_array /* of struct miqt_string */  QTextCharFormat_anchorNames(const QTextCharFormat* self) {
	QStringList _ret = self->anchorNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextCharFormat_setTableCellRowSpan(QTextCharFormat* self, int tableCellRowSpan) {
	self->setTableCellRowSpan(static_cast<int>(tableCellRowSpan));
}

int QTextCharFormat_tableCellRowSpan(const QTextCharFormat* self) {
	return self->tableCellRowSpan();
}

void QTextCharFormat_setTableCellColumnSpan(QTextCharFormat* self, int tableCellColumnSpan) {
	self->setTableCellColumnSpan(static_cast<int>(tableCellColumnSpan));
}

int QTextCharFormat_tableCellColumnSpan(const QTextCharFormat* self) {
	return self->tableCellColumnSpan();
}

void QTextCharFormat_setFont2(QTextCharFormat* self, QFont* font, int behavior) {
	self->setFont(*font, static_cast<QTextCharFormat::FontPropertiesInheritanceBehavior>(behavior));
}

void QTextCharFormat_setFontStyleHint2(QTextCharFormat* self, int hint, int strategy) {
	self->setFontStyleHint(static_cast<QFont::StyleHint>(hint), static_cast<QFont::StyleStrategy>(strategy));
}

void QTextCharFormat_delete(QTextCharFormat* self) {
	delete self;
}

QTextBlockFormat* QTextBlockFormat_new() {
	return new (std::nothrow) QTextBlockFormat();
}

QTextBlockFormat* QTextBlockFormat_new2(QTextBlockFormat* param1) {
	return new (std::nothrow) QTextBlockFormat(*param1);
}

void QTextBlockFormat_virtbase(QTextBlockFormat* src, QTextFormat** outptr_QTextFormat) {
	*outptr_QTextFormat = static_cast<QTextFormat*>(src);
}

bool QTextBlockFormat_isValid(const QTextBlockFormat* self) {
	return self->isValid();
}

void QTextBlockFormat_setAlignment(QTextBlockFormat* self, int alignment) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QTextBlockFormat_alignment(const QTextBlockFormat* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextBlockFormat_setTopMargin(QTextBlockFormat* self, double margin) {
	self->setTopMargin(static_cast<double>(margin));
}

double QTextBlockFormat_topMargin(const QTextBlockFormat* self) {
	double _ret = self->topMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_setBottomMargin(QTextBlockFormat* self, double margin) {
	self->setBottomMargin(static_cast<double>(margin));
}

double QTextBlockFormat_bottomMargin(const QTextBlockFormat* self) {
	double _ret = self->bottomMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_setLeftMargin(QTextBlockFormat* self, double margin) {
	self->setLeftMargin(static_cast<double>(margin));
}

double QTextBlockFormat_leftMargin(const QTextBlockFormat* self) {
	double _ret = self->leftMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_setRightMargin(QTextBlockFormat* self, double margin) {
	self->setRightMargin(static_cast<double>(margin));
}

double QTextBlockFormat_rightMargin(const QTextBlockFormat* self) {
	double _ret = self->rightMargin();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_setTextIndent(QTextBlockFormat* self, double aindent) {
	self->setTextIndent(static_cast<double>(aindent));
}

double QTextBlockFormat_textIndent(const QTextBlockFormat* self) {
	double _ret = self->textIndent();
	return static_cast<double>(_ret);
}

void QTextBlockFormat_setIndent(QTextBlockFormat* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QTextBlockFormat_indent(const QTextBlockFormat* self) {
	return self->indent();
}

void QTextBlockFormat_setHeadingLevel(QTextBlockFormat* self, int alevel) {
	self->setHeadingLevel(static_cast<int>(alevel));
}

int QTextBlockFormat_headingLevel(const QTextBlockFormat* self) {
	return self->headingLevel();
}

void QTextBlockFormat_setLineHeight(QTextBlockFormat* self, double height, int heightType) {
	self->setLineHeight(static_cast<double>(height), static_cast<int>(heightType));
}

double QTextBlockFormat_lineHeight(const QTextBlockFormat* self, double scriptLineHeight, double scaling) {
	double _ret = self->lineHeight(static_cast<double>(scriptLineHeight), static_cast<double>(scaling));
	return static_cast<double>(_ret);
}

double QTextBlockFormat_lineHeight2(const QTextBlockFormat* self) {
	double _ret = self->lineHeight();
	return static_cast<double>(_ret);
}

int QTextBlockFormat_lineHeightType(const QTextBlockFormat* self) {
	return self->lineHeightType();
}

void QTextBlockFormat_setNonBreakableLines(QTextBlockFormat* self, bool b) {
	self->setNonBreakableLines(b);
}

bool QTextBlockFormat_nonBreakableLines(const QTextBlockFormat* self) {
	return self->nonBreakableLines();
}

void QTextBlockFormat_setMarker(QTextBlockFormat* self, int marker) {
	self->setMarker(static_cast<QTextBlockFormat::MarkerType>(marker));
}

int QTextBlockFormat_marker(const QTextBlockFormat* self) {
	QTextBlockFormat::MarkerType _ret = self->marker();
	return static_cast<int>(_ret);
}

void QTextBlockFormat_delete(QTextBlockFormat* self) {
	delete self;
}

QTextListFormat* QTextListFormat_new() {
	return new (std::nothrow) QTextListFormat();
}

QTextListFormat* QTextListFormat_new2(QTextListFormat* param1) {
	return new (std::nothrow) QTextListFormat(*param1);
}

void QTextListFormat_virtbase(QTextListFormat* src, QTextFormat** outptr_QTextFormat) {
	*outptr_QTextFormat = static_cast<QTextFormat*>(src);
}

bool QTextListFormat_isValid(const QTextListFormat* self) {
	return self->isValid();
}

void QTextListFormat_setStyle(QTextListFormat* self, int style) {
	self->setStyle(static_cast<QTextListFormat::Style>(style));
}

int QTextListFormat_style(const QTextListFormat* self) {
	return self->style();
}

void QTextListFormat_setIndent(QTextListFormat* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QTextListFormat_indent(const QTextListFormat* self) {
	return self->indent();
}

void QTextListFormat_setNumberPrefix(QTextListFormat* self, struct miqt_string numberPrefix) {
	QString numberPrefix_QString = QString::fromUtf8(numberPrefix.data, numberPrefix.len);
	self->setNumberPrefix(numberPrefix_QString);
}

struct miqt_string QTextListFormat_numberPrefix(const QTextListFormat* self) {
	QString _ret = self->numberPrefix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextListFormat_setNumberSuffix(QTextListFormat* self, struct miqt_string numberSuffix) {
	QString numberSuffix_QString = QString::fromUtf8(numberSuffix.data, numberSuffix.len);
	self->setNumberSuffix(numberSuffix_QString);
}

struct miqt_string QTextListFormat_numberSuffix(const QTextListFormat* self) {
	QString _ret = self->numberSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextListFormat_setStart(QTextListFormat* self, int indent) {
	self->setStart(static_cast<int>(indent));
}

int QTextListFormat_start(const QTextListFormat* self) {
	return self->start();
}

void QTextListFormat_delete(QTextListFormat* self) {
	delete self;
}

QTextImageFormat* QTextImageFormat_new() {
	return new (std::nothrow) QTextImageFormat();
}

QTextImageFormat* QTextImageFormat_new2(QTextImageFormat* param1) {
	return new (std::nothrow) QTextImageFormat(*param1);
}

void QTextImageFormat_virtbase(QTextImageFormat* src, QTextCharFormat** outptr_QTextCharFormat) {
	*outptr_QTextCharFormat = static_cast<QTextCharFormat*>(src);
}

bool QTextImageFormat_isValid(const QTextImageFormat* self) {
	return self->isValid();
}

void QTextImageFormat_setName(QTextImageFormat* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string QTextImageFormat_name(const QTextImageFormat* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextImageFormat_setWidth(QTextImageFormat* self, double width) {
	self->setWidth(static_cast<double>(width));
}

double QTextImageFormat_width(const QTextImageFormat* self) {
	double _ret = self->width();
	return static_cast<double>(_ret);
}

void QTextImageFormat_setMaximumWidth(QTextImageFormat* self, QTextLength* maxWidth) {
	self->setMaximumWidth(*maxWidth);
}

QTextLength* QTextImageFormat_maximumWidth(const QTextImageFormat* self) {
	return new QTextLength(self->maximumWidth());
}

void QTextImageFormat_setHeight(QTextImageFormat* self, double height) {
	self->setHeight(static_cast<double>(height));
}

double QTextImageFormat_height(const QTextImageFormat* self) {
	double _ret = self->height();
	return static_cast<double>(_ret);
}

void QTextImageFormat_setQuality(QTextImageFormat* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

void QTextImageFormat_setQuality2(QTextImageFormat* self) {
	self->setQuality();
}

int QTextImageFormat_quality(const QTextImageFormat* self) {
	return self->quality();
}

void QTextImageFormat_delete(QTextImageFormat* self) {
	delete self;
}

QTextFrameFormat* QTextFrameFormat_new() {
	return new (std::nothrow) QTextFrameFormat();
}

QTextFrameFormat* QTextFrameFormat_new2(QTextFrameFormat* param1) {
	return new (std::nothrow) QTextFrameFormat(*param1);
}

void QTextFrameFormat_virtbase(QTextFrameFormat* src, QTextFormat** outptr_QTextFormat) {
	*outptr_QTextFormat = static_cast<QTextFormat*>(src);
}

bool QTextFrameFormat_isValid(const QTextFrameFormat* self) {
	return self->isValid();
}

void QTextFrameFormat_setPosition(QTextFrameFormat* self, int f) {
	self->setPosition(static_cast<QTextFrameFormat::Position>(f));
}

int QTextFrameFormat_position(const QTextFrameFormat* self) {
	return self->position();
}

void QTextFrameFormat_setBorder(QTextFrameFormat* self, double border) {
	self->setBorder(static_cast<double>(border));
}

double QTextFrameFormat_border(const QTextFrameFormat* self) {
	double _ret = self->border();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setBorderBrush(QTextFrameFormat* self, QBrush* brush) {
	self->setBorderBrush(*brush);
}

QBrush* QTextFrameFormat_borderBrush(const QTextFrameFormat* self) {
	return new QBrush(self->borderBrush());
}

void QTextFrameFormat_setBorderStyle(QTextFrameFormat* self, int style) {
	self->setBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextFrameFormat_borderStyle(const QTextFrameFormat* self) {
	return self->borderStyle();
}

void QTextFrameFormat_setMargin(QTextFrameFormat* self, double margin) {
	self->setMargin(static_cast<double>(margin));
}

double QTextFrameFormat_margin(const QTextFrameFormat* self) {
	double _ret = self->margin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setTopMargin(QTextFrameFormat* self, double margin) {
	self->setTopMargin(static_cast<double>(margin));
}

double QTextFrameFormat_topMargin(const QTextFrameFormat* self) {
	double _ret = self->topMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setBottomMargin(QTextFrameFormat* self, double margin) {
	self->setBottomMargin(static_cast<double>(margin));
}

double QTextFrameFormat_bottomMargin(const QTextFrameFormat* self) {
	double _ret = self->bottomMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setLeftMargin(QTextFrameFormat* self, double margin) {
	self->setLeftMargin(static_cast<double>(margin));
}

double QTextFrameFormat_leftMargin(const QTextFrameFormat* self) {
	double _ret = self->leftMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setRightMargin(QTextFrameFormat* self, double margin) {
	self->setRightMargin(static_cast<double>(margin));
}

double QTextFrameFormat_rightMargin(const QTextFrameFormat* self) {
	double _ret = self->rightMargin();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setPadding(QTextFrameFormat* self, double padding) {
	self->setPadding(static_cast<double>(padding));
}

double QTextFrameFormat_padding(const QTextFrameFormat* self) {
	double _ret = self->padding();
	return static_cast<double>(_ret);
}

void QTextFrameFormat_setWidth(QTextFrameFormat* self, double width) {
	self->setWidth(static_cast<double>(width));
}

void QTextFrameFormat_setWidthWithLength(QTextFrameFormat* self, QTextLength* length) {
	self->setWidth(*length);
}

QTextLength* QTextFrameFormat_width(const QTextFrameFormat* self) {
	return new QTextLength(self->width());
}

void QTextFrameFormat_setHeight(QTextFrameFormat* self, double height) {
	self->setHeight(static_cast<double>(height));
}

void QTextFrameFormat_setHeightWithHeight(QTextFrameFormat* self, QTextLength* height) {
	self->setHeight(*height);
}

QTextLength* QTextFrameFormat_height(const QTextFrameFormat* self) {
	return new QTextLength(self->height());
}

void QTextFrameFormat_delete(QTextFrameFormat* self) {
	delete self;
}

QTextTableFormat* QTextTableFormat_new() {
	return new (std::nothrow) QTextTableFormat();
}

QTextTableFormat* QTextTableFormat_new2(QTextTableFormat* param1) {
	return new (std::nothrow) QTextTableFormat(*param1);
}

void QTextTableFormat_virtbase(QTextTableFormat* src, QTextFrameFormat** outptr_QTextFrameFormat) {
	*outptr_QTextFrameFormat = static_cast<QTextFrameFormat*>(src);
}

bool QTextTableFormat_isValid(const QTextTableFormat* self) {
	return self->isValid();
}

int QTextTableFormat_columns(const QTextTableFormat* self) {
	return self->columns();
}

void QTextTableFormat_setColumns(QTextTableFormat* self, int columns) {
	self->setColumns(static_cast<int>(columns));
}

void QTextTableFormat_setColumnWidthConstraints(QTextTableFormat* self, struct miqt_array /* of QTextLength* */  constraints) {
	QList<QTextLength> constraints_QList;
	constraints_QList.reserve(constraints.len);
	QTextLength** constraints_arr = static_cast<QTextLength**>(constraints.data);
	for(size_t i = 0; i < constraints.len; ++i) {
		constraints_QList.push_back(*(constraints_arr[i]));
	}
	self->setColumnWidthConstraints(constraints_QList);
}

struct miqt_array /* of QTextLength* */  QTextTableFormat_columnWidthConstraints(const QTextTableFormat* self) {
	QList<QTextLength> _ret = self->columnWidthConstraints();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextLength** _arr = static_cast<QTextLength**>(malloc(sizeof(QTextLength*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextLength(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextTableFormat_clearColumnWidthConstraints(QTextTableFormat* self) {
	self->clearColumnWidthConstraints();
}

double QTextTableFormat_cellSpacing(const QTextTableFormat* self) {
	double _ret = self->cellSpacing();
	return static_cast<double>(_ret);
}

void QTextTableFormat_setCellSpacing(QTextTableFormat* self, double spacing) {
	self->setCellSpacing(static_cast<double>(spacing));
}

double QTextTableFormat_cellPadding(const QTextTableFormat* self) {
	double _ret = self->cellPadding();
	return static_cast<double>(_ret);
}

void QTextTableFormat_setCellPadding(QTextTableFormat* self, double padding) {
	self->setCellPadding(static_cast<double>(padding));
}

void QTextTableFormat_setAlignment(QTextTableFormat* self, int alignment) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

int QTextTableFormat_alignment(const QTextTableFormat* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QTextTableFormat_setHeaderRowCount(QTextTableFormat* self, int count) {
	self->setHeaderRowCount(static_cast<int>(count));
}

int QTextTableFormat_headerRowCount(const QTextTableFormat* self) {
	return self->headerRowCount();
}

void QTextTableFormat_setBorderCollapse(QTextTableFormat* self, bool borderCollapse) {
	self->setBorderCollapse(borderCollapse);
}

bool QTextTableFormat_borderCollapse(const QTextTableFormat* self) {
	return self->borderCollapse();
}

void QTextTableFormat_delete(QTextTableFormat* self) {
	delete self;
}

QTextTableCellFormat* QTextTableCellFormat_new() {
	return new (std::nothrow) QTextTableCellFormat();
}

QTextTableCellFormat* QTextTableCellFormat_new2(QTextTableCellFormat* param1) {
	return new (std::nothrow) QTextTableCellFormat(*param1);
}

void QTextTableCellFormat_virtbase(QTextTableCellFormat* src, QTextCharFormat** outptr_QTextCharFormat) {
	*outptr_QTextCharFormat = static_cast<QTextCharFormat*>(src);
}

bool QTextTableCellFormat_isValid(const QTextTableCellFormat* self) {
	return self->isValid();
}

void QTextTableCellFormat_setTopPadding(QTextTableCellFormat* self, double padding) {
	self->setTopPadding(static_cast<double>(padding));
}

double QTextTableCellFormat_topPadding(const QTextTableCellFormat* self) {
	double _ret = self->topPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setBottomPadding(QTextTableCellFormat* self, double padding) {
	self->setBottomPadding(static_cast<double>(padding));
}

double QTextTableCellFormat_bottomPadding(const QTextTableCellFormat* self) {
	double _ret = self->bottomPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setLeftPadding(QTextTableCellFormat* self, double padding) {
	self->setLeftPadding(static_cast<double>(padding));
}

double QTextTableCellFormat_leftPadding(const QTextTableCellFormat* self) {
	double _ret = self->leftPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setRightPadding(QTextTableCellFormat* self, double padding) {
	self->setRightPadding(static_cast<double>(padding));
}

double QTextTableCellFormat_rightPadding(const QTextTableCellFormat* self) {
	double _ret = self->rightPadding();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setPadding(QTextTableCellFormat* self, double padding) {
	self->setPadding(static_cast<double>(padding));
}

void QTextTableCellFormat_setTopBorder(QTextTableCellFormat* self, double width) {
	self->setTopBorder(static_cast<double>(width));
}

double QTextTableCellFormat_topBorder(const QTextTableCellFormat* self) {
	double _ret = self->topBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setBottomBorder(QTextTableCellFormat* self, double width) {
	self->setBottomBorder(static_cast<double>(width));
}

double QTextTableCellFormat_bottomBorder(const QTextTableCellFormat* self) {
	double _ret = self->bottomBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setLeftBorder(QTextTableCellFormat* self, double width) {
	self->setLeftBorder(static_cast<double>(width));
}

double QTextTableCellFormat_leftBorder(const QTextTableCellFormat* self) {
	double _ret = self->leftBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setRightBorder(QTextTableCellFormat* self, double width) {
	self->setRightBorder(static_cast<double>(width));
}

double QTextTableCellFormat_rightBorder(const QTextTableCellFormat* self) {
	double _ret = self->rightBorder();
	return static_cast<double>(_ret);
}

void QTextTableCellFormat_setBorder(QTextTableCellFormat* self, double width) {
	self->setBorder(static_cast<double>(width));
}

void QTextTableCellFormat_setTopBorderStyle(QTextTableCellFormat* self, int style) {
	self->setTopBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_topBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->topBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_setBottomBorderStyle(QTextTableCellFormat* self, int style) {
	self->setBottomBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_bottomBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->bottomBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_setLeftBorderStyle(QTextTableCellFormat* self, int style) {
	self->setLeftBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_leftBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->leftBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_setRightBorderStyle(QTextTableCellFormat* self, int style) {
	self->setRightBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

int QTextTableCellFormat_rightBorderStyle(const QTextTableCellFormat* self) {
	QTextFrameFormat::BorderStyle _ret = self->rightBorderStyle();
	return static_cast<int>(_ret);
}

void QTextTableCellFormat_setBorderStyle(QTextTableCellFormat* self, int style) {
	self->setBorderStyle(static_cast<QTextFrameFormat::BorderStyle>(style));
}

void QTextTableCellFormat_setTopBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setTopBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_topBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->topBorderBrush());
}

void QTextTableCellFormat_setBottomBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setBottomBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_bottomBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->bottomBorderBrush());
}

void QTextTableCellFormat_setLeftBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setLeftBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_leftBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->leftBorderBrush());
}

void QTextTableCellFormat_setRightBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setRightBorderBrush(*brush);
}

QBrush* QTextTableCellFormat_rightBorderBrush(const QTextTableCellFormat* self) {
	return new QBrush(self->rightBorderBrush());
}

void QTextTableCellFormat_setBorderBrush(QTextTableCellFormat* self, QBrush* brush) {
	self->setBorderBrush(*brush);
}

void QTextTableCellFormat_delete(QTextTableCellFormat* self) {
	delete self;
}

QTextCursor* QTextCursor_new() {
	return new (std::nothrow) QTextCursor();
}

QTextCursor* QTextCursor_new2(QTextDocument* document) {
	return new (std::nothrow) QTextCursor(document);
}

QTextCursor* QTextCursor_new3(QTextFrame* frame) {
	return new (std::nothrow) QTextCursor(frame);
}

QTextCursor* QTextCursor_new4(QTextBlock* block) {
	return new (std::nothrow) QTextCursor(*block);
}

QTextCursor* QTextCursor_new5(QTextCursor* cursor) {
	return new (std::nothrow) QTextCursor(*cursor);
}

void QTextCursor_swap(QTextCursor* self, QTextCursor* other) {
	self->swap(*other);
}

bool QTextCursor_isNull(const QTextCursor* self) {
	return self->isNull();
}

void QTextCursor_setPosition(QTextCursor* self, int pos) {
	self->setPosition(static_cast<int>(pos));
}

int QTextCursor_position(const QTextCursor* self) {
	return self->position();
}

int QTextCursor_positionInBlock(const QTextCursor* self) {
	return self->positionInBlock();
}

int QTextCursor_anchor(const QTextCursor* self) {
	return self->anchor();
}

void QTextCursor_insertText(QTextCursor* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertText(text_QString);
}

void QTextCursor_insertText2(QTextCursor* self, struct miqt_string text, QTextCharFormat* format) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertText(text_QString, *format);
}

bool QTextCursor_movePosition(QTextCursor* self, int op) {
	return self->movePosition(static_cast<QTextCursor::MoveOperation>(op));
}

bool QTextCursor_visualNavigation(const QTextCursor* self) {
	return self->visualNavigation();
}

void QTextCursor_setVisualNavigation(QTextCursor* self, bool b) {
	self->setVisualNavigation(b);
}

void QTextCursor_setVerticalMovementX(QTextCursor* self, int x) {
	self->setVerticalMovementX(static_cast<int>(x));
}

int QTextCursor_verticalMovementX(const QTextCursor* self) {
	return self->verticalMovementX();
}

void QTextCursor_setKeepPositionOnInsert(QTextCursor* self, bool b) {
	self->setKeepPositionOnInsert(b);
}

bool QTextCursor_keepPositionOnInsert(const QTextCursor* self) {
	return self->keepPositionOnInsert();
}

void QTextCursor_deleteChar(QTextCursor* self) {
	self->deleteChar();
}

void QTextCursor_deletePreviousChar(QTextCursor* self) {
	self->deletePreviousChar();
}

void QTextCursor_select(QTextCursor* self, int selection) {
	self->select(static_cast<QTextCursor::SelectionType>(selection));
}

bool QTextCursor_hasSelection(const QTextCursor* self) {
	return self->hasSelection();
}

bool QTextCursor_hasComplexSelection(const QTextCursor* self) {
	return self->hasComplexSelection();
}

void QTextCursor_removeSelectedText(QTextCursor* self) {
	self->removeSelectedText();
}

void QTextCursor_clearSelection(QTextCursor* self) {
	self->clearSelection();
}

int QTextCursor_selectionStart(const QTextCursor* self) {
	return self->selectionStart();
}

int QTextCursor_selectionEnd(const QTextCursor* self) {
	return self->selectionEnd();
}

struct miqt_string QTextCursor_selectedText(const QTextCursor* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextDocumentFragment* QTextCursor_selection(const QTextCursor* self) {
	return new QTextDocumentFragment(self->selection());
}

void QTextCursor_selectedTableCells(const QTextCursor* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns) {
	self->selectedTableCells(firstRow, numRows, firstColumn, numColumns);
}

QTextBlock* QTextCursor_block(const QTextCursor* self) {
	return new QTextBlock(self->block());
}

QTextCharFormat* QTextCursor_charFormat(const QTextCursor* self) {
	return new QTextCharFormat(self->charFormat());
}

void QTextCursor_setCharFormat(QTextCursor* self, QTextCharFormat* format) {
	self->setCharFormat(*format);
}

void QTextCursor_mergeCharFormat(QTextCursor* self, QTextCharFormat* modifier) {
	self->mergeCharFormat(*modifier);
}

QTextBlockFormat* QTextCursor_blockFormat(const QTextCursor* self) {
	return new QTextBlockFormat(self->blockFormat());
}

void QTextCursor_setBlockFormat(QTextCursor* self, QTextBlockFormat* format) {
	self->setBlockFormat(*format);
}

void QTextCursor_mergeBlockFormat(QTextCursor* self, QTextBlockFormat* modifier) {
	self->mergeBlockFormat(*modifier);
}

QTextCharFormat* QTextCursor_blockCharFormat(const QTextCursor* self) {
	return new QTextCharFormat(self->blockCharFormat());
}

void QTextCursor_setBlockCharFormat(QTextCursor* self, QTextCharFormat* format) {
	self->setBlockCharFormat(*format);
}

void QTextCursor_mergeBlockCharFormat(QTextCursor* self, QTextCharFormat* modifier) {
	self->mergeBlockCharFormat(*modifier);
}

bool QTextCursor_atBlockStart(const QTextCursor* self) {
	return self->atBlockStart();
}

bool QTextCursor_atBlockEnd(const QTextCursor* self) {
	return self->atBlockEnd();
}

bool QTextCursor_atStart(const QTextCursor* self) {
	return self->atStart();
}

bool QTextCursor_atEnd(const QTextCursor* self) {
	return self->atEnd();
}

void QTextCursor_insertBlock(QTextCursor* self) {
	self->insertBlock();
}

void QTextCursor_insertBlockWithFormat(QTextCursor* self, QTextBlockFormat* format) {
	self->insertBlock(*format);
}

void QTextCursor_insertBlock2(QTextCursor* self, QTextBlockFormat* format, QTextCharFormat* charFormat) {
	self->insertBlock(*format, *charFormat);
}

QTextList* QTextCursor_insertList(QTextCursor* self, QTextListFormat* format) {
	return self->insertList(*format);
}

QTextList* QTextCursor_insertListWithStyle(QTextCursor* self, int style) {
	return self->insertList(static_cast<QTextListFormat::Style>(style));
}

QTextList* QTextCursor_createList(QTextCursor* self, QTextListFormat* format) {
	return self->createList(*format);
}

QTextList* QTextCursor_createListWithStyle(QTextCursor* self, int style) {
	return self->createList(static_cast<QTextListFormat::Style>(style));
}

QTextList* QTextCursor_currentList(const QTextCursor* self) {
	return self->currentList();
}

QTextTable* QTextCursor_insertTable(QTextCursor* self, int rows, int cols, QTextTableFormat* format) {
	return self->insertTable(static_cast<int>(rows), static_cast<int>(cols), *format);
}

QTextTable* QTextCursor_insertTable2(QTextCursor* self, int rows, int cols) {
	return self->insertTable(static_cast<int>(rows), static_cast<int>(cols));
}

QTextTable* QTextCursor_currentTable(const QTextCursor* self) {
	return self->currentTable();
}

QTextFrame* QTextCursor_insertFrame(QTextCursor* self, QTextFrameFormat* format) {
	return self->insertFrame(*format);
}

QTextFrame* QTextCursor_currentFrame(const QTextCursor* self) {
	return self->currentFrame();
}

void QTextCursor_insertFragment(QTextCursor* self, QTextDocumentFragment* fragment) {
	self->insertFragment(*fragment);
}

void QTextCursor_insertHtml(QTextCursor* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->insertHtml(html_QString);
}

void QTextCursor_insertMarkdown(QTextCursor* self, struct miqt_string markdown) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->insertMarkdown(markdown_QString);
}

void QTextCursor_insertImage(QTextCursor* self, QTextImageFormat* format, int alignment) {
	self->insertImage(*format, static_cast<QTextFrameFormat::Position>(alignment));
}

void QTextCursor_insertImageWithFormat(QTextCursor* self, QTextImageFormat* format) {
	self->insertImage(*format);
}

void QTextCursor_insertImageWithName(QTextCursor* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->insertImage(name_QString);
}

void QTextCursor_insertImageWithImage(QTextCursor* self, QImage* image) {
	self->insertImage(*image);
}

void QTextCursor_beginEditBlock(QTextCursor* self) {
	self->beginEditBlock();
}

void QTextCursor_joinPreviousEditBlock(QTextCursor* self) {
	self->joinPreviousEditBlock();
}

void QTextCursor_endEditBlock(QTextCursor* self) {
	self->endEditBlock();
}

bool QTextCursor_operatorNotEqual(const QTextCursor* self, QTextCursor* rhs) {
	return (*self != *rhs);
}

bool QTextCursor_operatorLesser(const QTextCursor* self, QTextCursor* rhs) {
	return (*self < *rhs);
}

bool QTextCursor_operatorLesserOrEqual(const QTextCursor* self, QTextCursor* rhs) {
	return (*self <= *rhs);
}

bool QTextCursor_operatorGreaterOrEqual(const QTextCursor* self, QTextCursor* rhs) {
	return (*self >= *rhs);
}

bool QTextCursor_operatorGreater(const QTextCursor* self, QTextCursor* rhs) {
	return (*self > *rhs);
}

bool QTextCursor_isCopyOf(const QTextCursor* self, QTextCursor* other) {
	return self->isCopyOf(*other);
}

int QTextCursor_blockNumber(const QTextCursor* self) {
	return self->blockNumber();
}

int QTextCursor_columnNumber(const QTextCursor* self) {
	return self->columnNumber();
}

QTextDocument* QTextCursor_document(const QTextCursor* self) {
	return self->document();
}

void QTextCursor_setPosition2(QTextCursor* self, int pos, int mode) {
	self->setPosition(static_cast<int>(pos), static_cast<QTextCursor::MoveMode>(mode));
}

bool QTextCursor_movePosition2(QTextCursor* self, int op, int param2) {
	return self->movePosition(static_cast<QTextCursor::MoveOperation>(op), static_cast<QTextCursor::MoveMode>(param2));
}

bool QTextCursor_movePosition3(QTextCursor* self, int op, int param2, int n) {
	return self->movePosition(static_cast<QTextCursor::MoveOperation>(op), static_cast<QTextCursor::MoveMode>(param2), static_cast<int>(n));
}

void QTextCursor_insertMarkdown2(QTextCursor* self, struct miqt_string markdown, int features) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->insertMarkdown(markdown_QString, static_cast<QFlags<QTextDocument::MarkdownFeature>>(features));
}

void QTextCursor_insertImage2(QTextCursor* self, QImage* image, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->insertImage(*image, name_QString);
}

void QTextCursor_delete(QTextCursor* self) {
	delete self;
}

QTextInlineObject* QTextInlineObject_new() {
	return new (std::nothrow) QTextInlineObject();
}

bool QTextInlineObject_isValid(const QTextInlineObject* self) {
	return self->isValid();
}

QRectF* QTextInlineObject_rect(const QTextInlineObject* self) {
	return new QRectF(self->rect());
}

double QTextInlineObject_width(const QTextInlineObject* self) {
	double _ret = self->width();
	return static_cast<double>(_ret);
}

double QTextInlineObject_ascent(const QTextInlineObject* self) {
	double _ret = self->ascent();
	return static_cast<double>(_ret);
}

double QTextInlineObject_descent(const QTextInlineObject* self) {
	double _ret = self->descent();
	return static_cast<double>(_ret);
}

double QTextInlineObject_height(const QTextInlineObject* self) {
	double _ret = self->height();
	return static_cast<double>(_ret);
}

int QTextInlineObject_textDirection(const QTextInlineObject* self) {
	Qt::LayoutDirection _ret = self->textDirection();
	return static_cast<int>(_ret);
}

void QTextInlineObject_setWidth(QTextInlineObject* self, double w) {
	self->setWidth(static_cast<double>(w));
}

void QTextInlineObject_setAscent(QTextInlineObject* self, double a) {
	self->setAscent(static_cast<double>(a));
}

void QTextInlineObject_setDescent(QTextInlineObject* self, double d) {
	self->setDescent(static_cast<double>(d));
}

int QTextInlineObject_textPosition(const QTextInlineObject* self) {
	return self->textPosition();
}

int QTextInlineObject_formatIndex(const QTextInlineObject* self) {
	return self->formatIndex();
}

QTextFormat* QTextInlineObject_format(const QTextInlineObject* self) {
	return new QTextFormat(self->format());
}

void QTextInlineObject_delete(QTextInlineObject* self) {
	delete self;
}

QTextLayout* QTextLayout_new() {
	return new (std::nothrow) QTextLayout();
}

QTextLayout* QTextLayout_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QTextLayout(text_QString);
}

QTextLayout* QTextLayout_new3(struct miqt_string text, QFont* font) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QTextLayout(text_QString, *font);
}

QTextLayout* QTextLayout_new4(QTextBlock* b) {
	return new (std::nothrow) QTextLayout(*b);
}

QTextLayout* QTextLayout_new5(struct miqt_string text, QFont* font, QPaintDevice* paintdevice) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QTextLayout(text_QString, *font, paintdevice);
}

void QTextLayout_setFont(QTextLayout* self, QFont* f) {
	self->setFont(*f);
}

QFont* QTextLayout_font(const QTextLayout* self) {
	return new QFont(self->font());
}

void QTextLayout_setText(QTextLayout* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	self->setText(string_QString);
}

struct miqt_string QTextLayout_text(const QTextLayout* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextLayout_setTextOption(QTextLayout* self, QTextOption* option) {
	self->setTextOption(*option);
}

QTextOption* QTextLayout_textOption(const QTextLayout* self) {
	const QTextOption& _ret = self->textOption();
	// Cast returned reference into pointer
	return const_cast<QTextOption*>(&_ret);
}

void QTextLayout_setPreeditArea(QTextLayout* self, int position, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPreeditArea(static_cast<int>(position), text_QString);
}

int QTextLayout_preeditAreaPosition(const QTextLayout* self) {
	return self->preeditAreaPosition();
}

struct miqt_string QTextLayout_preeditAreaText(const QTextLayout* self) {
	QString _ret = self->preeditAreaText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextLayout_clearFormats(QTextLayout* self) {
	self->clearFormats();
}

void QTextLayout_setCacheEnabled(QTextLayout* self, bool enable) {
	self->setCacheEnabled(enable);
}

bool QTextLayout_cacheEnabled(const QTextLayout* self) {
	return self->cacheEnabled();
}

void QTextLayout_setCursorMoveStyle(QTextLayout* self, int style) {
	self->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

int QTextLayout_cursorMoveStyle(const QTextLayout* self) {
	Qt::CursorMoveStyle _ret = self->cursorMoveStyle();
	return static_cast<int>(_ret);
}

void QTextLayout_beginLayout(QTextLayout* self) {
	self->beginLayout();
}

void QTextLayout_endLayout(QTextLayout* self) {
	self->endLayout();
}

void QTextLayout_clearLayout(QTextLayout* self) {
	self->clearLayout();
}

int QTextLayout_lineCount(const QTextLayout* self) {
	return self->lineCount();
}

bool QTextLayout_isValidCursorPosition(const QTextLayout* self, int pos) {
	return self->isValidCursorPosition(static_cast<int>(pos));
}

int QTextLayout_nextCursorPosition(const QTextLayout* self, int oldPos) {
	return self->nextCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_previousCursorPosition(const QTextLayout* self, int oldPos) {
	return self->previousCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_leftCursorPosition(const QTextLayout* self, int oldPos) {
	return self->leftCursorPosition(static_cast<int>(oldPos));
}

int QTextLayout_rightCursorPosition(const QTextLayout* self, int oldPos) {
	return self->rightCursorPosition(static_cast<int>(oldPos));
}

void QTextLayout_drawCursor(const QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition) {
	self->drawCursor(p, *pos, static_cast<int>(cursorPosition));
}

void QTextLayout_drawCursor2(const QTextLayout* self, QPainter* p, QPointF* pos, int cursorPosition, int width) {
	self->drawCursor(p, *pos, static_cast<int>(cursorPosition), static_cast<int>(width));
}

QPointF* QTextLayout_position(const QTextLayout* self) {
	return new QPointF(self->position());
}

void QTextLayout_setPosition(QTextLayout* self, QPointF* p) {
	self->setPosition(*p);
}

QRectF* QTextLayout_boundingRect(const QTextLayout* self) {
	return new QRectF(self->boundingRect());
}

double QTextLayout_minimumWidth(const QTextLayout* self) {
	double _ret = self->minimumWidth();
	return static_cast<double>(_ret);
}

double QTextLayout_maximumWidth(const QTextLayout* self) {
	double _ret = self->maximumWidth();
	return static_cast<double>(_ret);
}

struct miqt_array /* of QGlyphRun* */  QTextLayout_glyphRuns(const QTextLayout* self, int from, int length, int flags) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length), static_cast<QTextLayout::GlyphRunRetrievalFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGlyphRun* */  QTextLayout_glyphRuns2(const QTextLayout* self) {
	QList<QGlyphRun> _ret = self->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextLayout_setFlags(QTextLayout* self, int flags) {
	self->setFlags(static_cast<int>(flags));
}

int QTextLayout_nextCursorPosition2(const QTextLayout* self, int oldPos, int mode) {
	return self->nextCursorPosition(static_cast<int>(oldPos), static_cast<QTextLayout::CursorMode>(mode));
}

int QTextLayout_previousCursorPosition2(const QTextLayout* self, int oldPos, int mode) {
	return self->previousCursorPosition(static_cast<int>(oldPos), static_cast<QTextLayout::CursorMode>(mode));
}

struct miqt_array /* of QGlyphRun* */  QTextLayout_glyphRunsWithFrom(const QTextLayout* self, int from) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGlyphRun* */  QTextLayout_glyphRuns3(const QTextLayout* self, int from, int length) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextLayout_delete(QTextLayout* self) {
	delete self;
}

QPalette* QPalette_new() {
	return new (std::nothrow) QPalette();
}

QPalette* QPalette_new2(QColor* button) {
	return new (std::nothrow) QPalette(*button);
}

QPalette* QPalette_new3(int button) {
	return new (std::nothrow) QPalette(static_cast<Qt::GlobalColor>(button));
}

QPalette* QPalette_new4(QColor* button, QColor* window) {
	return new (std::nothrow) QPalette(*button, *window);
}

QPalette* QPalette_new5(QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window) {
	return new (std::nothrow) QPalette(*windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}

QPalette* QPalette_new6(QColor* windowText, QColor* window, QColor* light, QColor* dark, QColor* mid, QColor* text, QColor* base) {
	return new (std::nothrow) QPalette(*windowText, *window, *light, *dark, *mid, *text, *base);
}

QPalette* QPalette_new7(QPalette* palette) {
	return new (std::nothrow) QPalette(*palette);
}

void QPalette_swap(QPalette* self, QPalette* other) {
	self->swap(*other);
}

QVariant* QPalette_ToQVariant(const QPalette* self) {
	return new QVariant(self->operator QVariant());
}

int QPalette_currentColorGroup(const QPalette* self) {
	return self->currentColorGroup();
}

void QPalette_setCurrentColorGroup(QPalette* self, int cg) {
	self->setCurrentColorGroup(static_cast<QPalette::ColorGroup>(cg));
}

QColor* QPalette_color(const QPalette* self, int cg, int cr) {
	const QColor& _ret = self->color(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

QBrush* QPalette_brush(const QPalette* self, int cg, int cr) {
	const QBrush& _ret = self->brush(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QPalette_setColor(QPalette* self, int cg, int cr, QColor* color) {
	self->setColor(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr), *color);
}

void QPalette_setColor2(QPalette* self, int cr, QColor* color) {
	self->setColor(static_cast<QPalette::ColorRole>(cr), *color);
}

void QPalette_setBrush(QPalette* self, int cr, QBrush* brush) {
	self->setBrush(static_cast<QPalette::ColorRole>(cr), *brush);
}

bool QPalette_isBrushSet(const QPalette* self, int cg, int cr) {
	return self->isBrushSet(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr));
}

void QPalette_setBrush2(QPalette* self, int cg, int cr, QBrush* brush) {
	self->setBrush(static_cast<QPalette::ColorGroup>(cg), static_cast<QPalette::ColorRole>(cr), *brush);
}

void QPalette_setColorGroup(QPalette* self, int cr, QBrush* windowText, QBrush* button, QBrush* light, QBrush* dark, QBrush* mid, QBrush* text, QBrush* bright_text, QBrush* base, QBrush* window) {
	self->setColorGroup(static_cast<QPalette::ColorGroup>(cr), *windowText, *button, *light, *dark, *mid, *text, *bright_text, *base, *window);
}

bool QPalette_isEqual(const QPalette* self, int cr1, int cr2) {
	return self->isEqual(static_cast<QPalette::ColorGroup>(cr1), static_cast<QPalette::ColorGroup>(cr2));
}

QColor* QPalette_colorWithCr(const QPalette* self, int cr) {
	const QColor& _ret = self->color(static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QColor*>(&_ret);
}

QBrush* QPalette_brushWithCr(const QPalette* self, int cr) {
	const QBrush& _ret = self->brush(static_cast<QPalette::ColorRole>(cr));
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_windowText(const QPalette* self) {
	const QBrush& _ret = self->windowText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_button(const QPalette* self) {
	const QBrush& _ret = self->button();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_light(const QPalette* self) {
	const QBrush& _ret = self->light();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_dark(const QPalette* self) {
	const QBrush& _ret = self->dark();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_mid(const QPalette* self) {
	const QBrush& _ret = self->mid();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_text(const QPalette* self) {
	const QBrush& _ret = self->text();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_base(const QPalette* self) {
	const QBrush& _ret = self->base();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_alternateBase(const QPalette* self) {
	const QBrush& _ret = self->alternateBase();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_toolTipBase(const QPalette* self) {
	const QBrush& _ret = self->toolTipBase();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_toolTipText(const QPalette* self) {
	const QBrush& _ret = self->toolTipText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_window(const QPalette* self) {
	const QBrush& _ret = self->window();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_midlight(const QPalette* self) {
	const QBrush& _ret = self->midlight();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_brightText(const QPalette* self) {
	const QBrush& _ret = self->brightText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_buttonText(const QPalette* self) {
	const QBrush& _ret = self->buttonText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_shadow(const QPalette* self) {
	const QBrush& _ret = self->shadow();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_highlight(const QPalette* self) {
	const QBrush& _ret = self->highlight();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_highlightedText(const QPalette* self) {
	const QBrush& _ret = self->highlightedText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_link(const QPalette* self) {
	const QBrush& _ret = self->link();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_linkVisited(const QPalette* self) {
	const QBrush& _ret = self->linkVisited();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_placeholderText(const QPalette* self) {
	const QBrush& _ret = self->placeholderText();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

QBrush* QPalette_accent(const QPalette* self) {
	const QBrush& _ret = self->accent();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

bool QPalette_operatorNotEqual(const QPalette* self, QPalette* p) {
	return (*self != *p);
}

bool QPalette_isCopyOf(const QPalette* self, QPalette* p) {
	return self->isCopyOf(*p);
}

long long QPalette_cacheKey(const QPalette* self) {
	long long _ret = self->cacheKey();
	return static_cast<long long>(_ret);
}

QPalette* QPalette_resolve(const QPalette* self, QPalette* other) {
	return new QPalette(self->resolve(*other));
}

int QPalette_resolveMask(const QPalette* self) {
	return self->resolveMask();
}

void QPalette_setResolveMask(QPalette* self, int mask) {
	self->setResolveMask(static_cast<QPalette::ResolveMask>(mask));
}

void QPalette_delete(QPalette* self) {
	delete self;
}

void QAbstractTextDocumentLayout_virtbase(QAbstractTextDocumentLayout* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractTextDocumentLayout_metaObject(const QAbstractTextDocumentLayout* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QAbstractTextDocumentLayout_tr(const char* s) {
	QString _ret = QAbstractTextDocumentLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractTextDocumentLayout_hitTest(const QAbstractTextDocumentLayout* self, QPointF* point, int accuracy) {
	return self->hitTest(*point, static_cast<Qt::HitTestAccuracy>(accuracy));
}

struct miqt_string QAbstractTextDocumentLayout_anchorAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	QString _ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_imageAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	QString _ret = self->imageAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextFormat* QAbstractTextDocumentLayout_formatAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	return new QTextFormat(self->formatAt(*pos));
}

QTextBlock* QAbstractTextDocumentLayout_blockWithMarkerAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
	return new QTextBlock(self->blockWithMarkerAt(*pos));
}

int QAbstractTextDocumentLayout_pageCount(const QAbstractTextDocumentLayout* self) {
	return self->pageCount();
}

QSizeF* QAbstractTextDocumentLayout_documentSize(const QAbstractTextDocumentLayout* self) {
	return new QSizeF(self->documentSize());
}

QRectF* QAbstractTextDocumentLayout_frameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame) {
	return new QRectF(self->frameBoundingRect(frame));
}

QRectF* QAbstractTextDocumentLayout_blockBoundingRect(const QAbstractTextDocumentLayout* self, QTextBlock* block) {
	return new QRectF(self->blockBoundingRect(*block));
}

void QAbstractTextDocumentLayout_setPaintDevice(QAbstractTextDocumentLayout* self, QPaintDevice* device) {
	self->setPaintDevice(device);
}

QPaintDevice* QAbstractTextDocumentLayout_paintDevice(const QAbstractTextDocumentLayout* self) {
	return self->paintDevice();
}

QTextDocument* QAbstractTextDocumentLayout_document(const QAbstractTextDocumentLayout* self) {
	return self->document();
}

void QAbstractTextDocumentLayout_registerHandler(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
	self->registerHandler(static_cast<int>(objectType), component);
}

void QAbstractTextDocumentLayout_unregisterHandler(QAbstractTextDocumentLayout* self, int objectType) {
	self->unregisterHandler(static_cast<int>(objectType));
}

QTextObjectInterface* QAbstractTextDocumentLayout_handlerForObject(const QAbstractTextDocumentLayout* self, int objectType) {
	return self->handlerForObject(static_cast<int>(objectType));
}

void QAbstractTextDocumentLayout_update(QAbstractTextDocumentLayout* self) {
	self->update();
}

void QAbstractTextDocumentLayout_connect_update(QAbstractTextDocumentLayout* self, intptr_t slot) {
	QAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QRectF&)>(&QAbstractTextDocumentLayout::update), self, [=]() {
		miqt_exec_callback_QAbstractTextDocumentLayout_update(slot);
	});
}

void QAbstractTextDocumentLayout_updateBlock(QAbstractTextDocumentLayout* self, QTextBlock* block) {
	self->updateBlock(*block);
}

void QAbstractTextDocumentLayout_connect_updateBlock(QAbstractTextDocumentLayout* self, intptr_t slot) {
	QAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QTextBlock&)>(&QAbstractTextDocumentLayout::updateBlock), self, [=](const QTextBlock& block) {
		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);
		miqt_exec_callback_QAbstractTextDocumentLayout_updateBlock(slot, sigval1);
	});
}

void QAbstractTextDocumentLayout_documentSizeChanged(QAbstractTextDocumentLayout* self, QSizeF* newSize) {
	self->documentSizeChanged(*newSize);
}

void QAbstractTextDocumentLayout_connect_documentSizeChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
	QAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QSizeF&)>(&QAbstractTextDocumentLayout::documentSizeChanged), self, [=](const QSizeF& newSize) {
		const QSizeF& newSize_ret = newSize;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&newSize_ret);
		miqt_exec_callback_QAbstractTextDocumentLayout_documentSizeChanged(slot, sigval1);
	});
}

void QAbstractTextDocumentLayout_pageCountChanged(QAbstractTextDocumentLayout* self, int newPages) {
	self->pageCountChanged(static_cast<int>(newPages));
}

void QAbstractTextDocumentLayout_connect_pageCountChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
	QAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(int)>(&QAbstractTextDocumentLayout::pageCountChanged), self, [=](int newPages) {
		int sigval1 = newPages;
		miqt_exec_callback_QAbstractTextDocumentLayout_pageCountChanged(slot, sigval1);
	});
}

struct miqt_string QAbstractTextDocumentLayout_tr2(const char* s, const char* c) {
	QString _ret = QAbstractTextDocumentLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTextDocumentLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTextDocumentLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractTextDocumentLayout_unregisterHandler2(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
	self->unregisterHandler(static_cast<int>(objectType), component);
}

void QAbstractTextDocumentLayout_updateWithQRectF(QAbstractTextDocumentLayout* self, QRectF* param1) {
	self->update(*param1);
}

void QAbstractTextDocumentLayout_connect_updateWithQRectF(QAbstractTextDocumentLayout* self, intptr_t slot) {
	QAbstractTextDocumentLayout::connect(self, static_cast<void (QAbstractTextDocumentLayout::*)(const QRectF&)>(&QAbstractTextDocumentLayout::update), self, [=](const QRectF& param1) {
		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		miqt_exec_callback_QAbstractTextDocumentLayout_updateWithQRectF(slot, sigval1);
	});
}

void QAbstractTextDocumentLayout_delete(QAbstractTextDocumentLayout* self) {
	delete self;
}

QSizeF* QTextObjectInterface_intrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, QTextFormat* format) {
	return new QSizeF(self->intrinsicSize(doc, static_cast<int>(posInDocument), *format));
}

void QTextObjectInterface_drawObject(QTextObjectInterface* self, QPainter* painter, QRectF* rect, QTextDocument* doc, int posInDocument, QTextFormat* format) {
	self->drawObject(painter, *rect, doc, static_cast<int>(posInDocument), *format);
}

void QTextObjectInterface_delete(QTextObjectInterface* self) {
	delete self;
}

QAccessibleInterface* QAccessible_queryAccessibleInterface(QObject* param1) {
	return QAccessible::queryAccessibleInterface(param1);
}

int QAccessible_uniqueId(QAccessibleInterface* iface) {
	return QAccessible::uniqueId(iface);
}

QAccessibleInterface* QAccessible_accessibleInterface(int uniqueId) {
	return QAccessible::accessibleInterface(static_cast<QAccessible::Id>(uniqueId));
}

int QAccessible_registerAccessibleInterface(QAccessibleInterface* iface) {
	return QAccessible::registerAccessibleInterface(iface);
}

void QAccessible_deleteAccessibleInterface(int uniqueId) {
	QAccessible::deleteAccessibleInterface(static_cast<QAccessible::Id>(uniqueId));
}

void QAccessible_updateAccessibility(QAccessibleEvent* event) {
	QAccessible::updateAccessibility(event);
}

bool QAccessible_isActive() {
	return QAccessible::isActive();
}

void QAccessible_setActive(bool active) {
	QAccessible::setActive(active);
}

void QAccessible_setRootObject(QObject* object) {
	QAccessible::setRootObject(object);
}

void QAccessible_cleanup() {
	QAccessible::cleanup();
}

void QAccessible_delete(QAccessible* self) {
	delete self;
}

bool QAccessibleInterface_isValid(const QAccessibleInterface* self) {
	return self->isValid();
}

QObject* QAccessibleInterface_object(const QAccessibleInterface* self) {
	return self->object();
}

QWindow* QAccessibleInterface_window(const QAccessibleInterface* self) {
	return self->window();
}

QAccessibleInterface* QAccessibleInterface_focusChild(const QAccessibleInterface* self) {
	return self->focusChild();
}

QAccessibleInterface* QAccessibleInterface_childAt(const QAccessibleInterface* self, int x, int y) {
	return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QAccessibleInterface* QAccessibleInterface_parent(const QAccessibleInterface* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleInterface_child(const QAccessibleInterface* self, int index) {
	return self->child(static_cast<int>(index));
}

int QAccessibleInterface_childCount(const QAccessibleInterface* self) {
	return self->childCount();
}

int QAccessibleInterface_indexOfChild(const QAccessibleInterface* self, QAccessibleInterface* param1) {
	return self->indexOfChild(param1);
}

struct miqt_string QAccessibleInterface_text(const QAccessibleInterface* self, int t) {
	QString _ret = self->text(static_cast<QAccessible::Text>(t));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessibleInterface_setText(QAccessibleInterface* self, int t, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(static_cast<QAccessible::Text>(t), text_QString);
}

QRect* QAccessibleInterface_rect(const QAccessibleInterface* self) {
	return new QRect(self->rect());
}

int QAccessibleInterface_role(const QAccessibleInterface* self) {
	QAccessible::Role _ret = self->role();
	return static_cast<int>(_ret);
}

QColor* QAccessibleInterface_foregroundColor(const QAccessibleInterface* self) {
	return new QColor(self->foregroundColor());
}

QColor* QAccessibleInterface_backgroundColor(const QAccessibleInterface* self) {
	return new QColor(self->backgroundColor());
}

QAccessibleTextInterface* QAccessibleInterface_textInterface(QAccessibleInterface* self) {
	return self->textInterface();
}

QAccessibleEditableTextInterface* QAccessibleInterface_editableTextInterface(QAccessibleInterface* self) {
	return self->editableTextInterface();
}

QAccessibleValueInterface* QAccessibleInterface_valueInterface(QAccessibleInterface* self) {
	return self->valueInterface();
}

QAccessibleActionInterface* QAccessibleInterface_actionInterface(QAccessibleInterface* self) {
	return self->actionInterface();
}

QAccessibleImageInterface* QAccessibleInterface_imageInterface(QAccessibleInterface* self) {
	return self->imageInterface();
}

QAccessibleTableInterface* QAccessibleInterface_tableInterface(QAccessibleInterface* self) {
	return self->tableInterface();
}

QAccessibleTableCellInterface* QAccessibleInterface_tableCellInterface(QAccessibleInterface* self) {
	return self->tableCellInterface();
}

QAccessibleHyperlinkInterface* QAccessibleInterface_hyperlinkInterface(QAccessibleInterface* self) {
	return self->hyperlinkInterface();
}

QAccessibleSelectionInterface* QAccessibleInterface_selectionInterface(QAccessibleInterface* self) {
	return self->selectionInterface();
}

QAccessibleAttributesInterface* QAccessibleInterface_attributesInterface(QAccessibleInterface* self) {
	return self->attributesInterface();
}

void* QAccessibleInterface_interfaceCast(QAccessibleInterface* self, int param1) {
	return self->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
}

void QAccessibleTextInterface_selection(const QAccessibleTextInterface* self, int selectionIndex, int* startOffset, int* endOffset) {
	self->selection(static_cast<int>(selectionIndex), startOffset, endOffset);
}

int QAccessibleTextInterface_selectionCount(const QAccessibleTextInterface* self) {
	return self->selectionCount();
}

void QAccessibleTextInterface_addSelection(QAccessibleTextInterface* self, int startOffset, int endOffset) {
	self->addSelection(static_cast<int>(startOffset), static_cast<int>(endOffset));
}

void QAccessibleTextInterface_removeSelection(QAccessibleTextInterface* self, int selectionIndex) {
	self->removeSelection(static_cast<int>(selectionIndex));
}

void QAccessibleTextInterface_setSelection(QAccessibleTextInterface* self, int selectionIndex, int startOffset, int endOffset) {
	self->setSelection(static_cast<int>(selectionIndex), static_cast<int>(startOffset), static_cast<int>(endOffset));
}

int QAccessibleTextInterface_cursorPosition(const QAccessibleTextInterface* self) {
	return self->cursorPosition();
}

void QAccessibleTextInterface_setCursorPosition(QAccessibleTextInterface* self, int position) {
	self->setCursorPosition(static_cast<int>(position));
}

struct miqt_string QAccessibleTextInterface_text(const QAccessibleTextInterface* self, int startOffset, int endOffset) {
	QString _ret = self->text(static_cast<int>(startOffset), static_cast<int>(endOffset));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleTextInterface_textBeforeOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	QString _ret = self->textBeforeOffset(static_cast<int>(offset), static_cast<QAccessible::TextBoundaryType>(boundaryType), startOffset, endOffset);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleTextInterface_textAfterOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	QString _ret = self->textAfterOffset(static_cast<int>(offset), static_cast<QAccessible::TextBoundaryType>(boundaryType), startOffset, endOffset);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleTextInterface_textAtOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	QString _ret = self->textAtOffset(static_cast<int>(offset), static_cast<QAccessible::TextBoundaryType>(boundaryType), startOffset, endOffset);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleTextInterface_characterCount(const QAccessibleTextInterface* self) {
	return self->characterCount();
}

QRect* QAccessibleTextInterface_characterRect(const QAccessibleTextInterface* self, int offset) {
	return new QRect(self->characterRect(static_cast<int>(offset)));
}

int QAccessibleTextInterface_offsetAtPoint(const QAccessibleTextInterface* self, QPoint* point) {
	return self->offsetAtPoint(*point);
}

void QAccessibleTextInterface_scrollToSubstring(QAccessibleTextInterface* self, int startIndex, int endIndex) {
	self->scrollToSubstring(static_cast<int>(startIndex), static_cast<int>(endIndex));
}

struct miqt_string QAccessibleTextInterface_attributes(const QAccessibleTextInterface* self, int offset, int* startOffset, int* endOffset) {
	QString _ret = self->attributes(static_cast<int>(offset), startOffset, endOffset);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessibleTextInterface_delete(QAccessibleTextInterface* self) {
	delete self;
}

void QAccessibleEditableTextInterface_deleteText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset) {
	self->deleteText(static_cast<int>(startOffset), static_cast<int>(endOffset));
}

void QAccessibleEditableTextInterface_insertText(QAccessibleEditableTextInterface* self, int offset, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertText(static_cast<int>(offset), text_QString);
}

void QAccessibleEditableTextInterface_replaceText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->replaceText(static_cast<int>(startOffset), static_cast<int>(endOffset), text_QString);
}

void QAccessibleEditableTextInterface_delete(QAccessibleEditableTextInterface* self) {
	delete self;
}

QVariant* QAccessibleValueInterface_currentValue(const QAccessibleValueInterface* self) {
	return new QVariant(self->currentValue());
}

void QAccessibleValueInterface_setCurrentValue(QAccessibleValueInterface* self, QVariant* value) {
	self->setCurrentValue(*value);
}

QVariant* QAccessibleValueInterface_maximumValue(const QAccessibleValueInterface* self) {
	return new QVariant(self->maximumValue());
}

QVariant* QAccessibleValueInterface_minimumValue(const QAccessibleValueInterface* self) {
	return new QVariant(self->minimumValue());
}

QVariant* QAccessibleValueInterface_minimumStepSize(const QAccessibleValueInterface* self) {
	return new QVariant(self->minimumStepSize());
}

void QAccessibleValueInterface_delete(QAccessibleValueInterface* self) {
	delete self;
}

bool QAccessibleTableCellInterface_isSelected(const QAccessibleTableCellInterface* self) {
	return self->isSelected();
}

struct miqt_array /* of QAccessibleInterface* */  QAccessibleTableCellInterface_columnHeaderCells(const QAccessibleTableCellInterface* self) {
	QList<QAccessibleInterface *> _ret = self->columnHeaderCells();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAccessibleInterface** _arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QAccessibleInterface* */  QAccessibleTableCellInterface_rowHeaderCells(const QAccessibleTableCellInterface* self) {
	QList<QAccessibleInterface *> _ret = self->rowHeaderCells();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAccessibleInterface** _arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QAccessibleTableCellInterface_columnIndex(const QAccessibleTableCellInterface* self) {
	return self->columnIndex();
}

int QAccessibleTableCellInterface_rowIndex(const QAccessibleTableCellInterface* self) {
	return self->rowIndex();
}

int QAccessibleTableCellInterface_columnExtent(const QAccessibleTableCellInterface* self) {
	return self->columnExtent();
}

int QAccessibleTableCellInterface_rowExtent(const QAccessibleTableCellInterface* self) {
	return self->rowExtent();
}

QAccessibleInterface* QAccessibleTableCellInterface_table(const QAccessibleTableCellInterface* self) {
	return self->table();
}

void QAccessibleTableCellInterface_delete(QAccessibleTableCellInterface* self) {
	delete self;
}

QAccessibleInterface* QAccessibleTableInterface_caption(const QAccessibleTableInterface* self) {
	return self->caption();
}

QAccessibleInterface* QAccessibleTableInterface_summary(const QAccessibleTableInterface* self) {
	return self->summary();
}

QAccessibleInterface* QAccessibleTableInterface_cellAt(const QAccessibleTableInterface* self, int row, int column) {
	return self->cellAt(static_cast<int>(row), static_cast<int>(column));
}

int QAccessibleTableInterface_selectedCellCount(const QAccessibleTableInterface* self) {
	return self->selectedCellCount();
}

struct miqt_array /* of QAccessibleInterface* */  QAccessibleTableInterface_selectedCells(const QAccessibleTableInterface* self) {
	QList<QAccessibleInterface *> _ret = self->selectedCells();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAccessibleInterface** _arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QAccessibleTableInterface_columnDescription(const QAccessibleTableInterface* self, int column) {
	QString _ret = self->columnDescription(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleTableInterface_rowDescription(const QAccessibleTableInterface* self, int row) {
	QString _ret = self->rowDescription(static_cast<int>(row));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleTableInterface_selectedColumnCount(const QAccessibleTableInterface* self) {
	return self->selectedColumnCount();
}

int QAccessibleTableInterface_selectedRowCount(const QAccessibleTableInterface* self) {
	return self->selectedRowCount();
}

int QAccessibleTableInterface_columnCount(const QAccessibleTableInterface* self) {
	return self->columnCount();
}

int QAccessibleTableInterface_rowCount(const QAccessibleTableInterface* self) {
	return self->rowCount();
}

struct miqt_array /* of int */  QAccessibleTableInterface_selectedColumns(const QAccessibleTableInterface* self) {
	QList<int> _ret = self->selectedColumns();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QAccessibleTableInterface_selectedRows(const QAccessibleTableInterface* self) {
	QList<int> _ret = self->selectedRows();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QAccessibleTableInterface_isColumnSelected(const QAccessibleTableInterface* self, int column) {
	return self->isColumnSelected(static_cast<int>(column));
}

bool QAccessibleTableInterface_isRowSelected(const QAccessibleTableInterface* self, int row) {
	return self->isRowSelected(static_cast<int>(row));
}

bool QAccessibleTableInterface_selectRow(QAccessibleTableInterface* self, int row) {
	return self->selectRow(static_cast<int>(row));
}

bool QAccessibleTableInterface_selectColumn(QAccessibleTableInterface* self, int column) {
	return self->selectColumn(static_cast<int>(column));
}

bool QAccessibleTableInterface_unselectRow(QAccessibleTableInterface* self, int row) {
	return self->unselectRow(static_cast<int>(row));
}

bool QAccessibleTableInterface_unselectColumn(QAccessibleTableInterface* self, int column) {
	return self->unselectColumn(static_cast<int>(column));
}

void QAccessibleTableInterface_delete(QAccessibleTableInterface* self) {
	delete self;
}

struct miqt_string QAccessibleActionInterface_tr(const char* sourceText) {
	QString _ret = QAccessibleActionInterface::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QAccessibleActionInterface_actionNames(const QAccessibleActionInterface* self) {
	QStringList _ret = self->actionNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QAccessibleActionInterface_localizedActionName(const QAccessibleActionInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->localizedActionName(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_localizedActionDescription(const QAccessibleActionInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->localizedActionDescription(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessibleActionInterface_doAction(QAccessibleActionInterface* self, struct miqt_string actionName) {
	QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
	self->doAction(actionName_QString);
}

struct miqt_array /* of struct miqt_string */  QAccessibleActionInterface_keyBindingsForAction(const QAccessibleActionInterface* self, struct miqt_string actionName) {
	QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
	QStringList _ret = self->keyBindingsForAction(actionName_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QAccessibleActionInterface_pressAction() {
	const QString _ret = QAccessibleActionInterface::pressAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_increaseAction() {
	const QString _ret = QAccessibleActionInterface::increaseAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_decreaseAction() {
	const QString _ret = QAccessibleActionInterface::decreaseAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_showMenuAction() {
	const QString _ret = QAccessibleActionInterface::showMenuAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_setFocusAction() {
	const QString _ret = QAccessibleActionInterface::setFocusAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_toggleAction() {
	const QString _ret = QAccessibleActionInterface::toggleAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_scrollLeftAction() {
	QString _ret = QAccessibleActionInterface::scrollLeftAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_scrollRightAction() {
	QString _ret = QAccessibleActionInterface::scrollRightAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_scrollUpAction() {
	QString _ret = QAccessibleActionInterface::scrollUpAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_scrollDownAction() {
	QString _ret = QAccessibleActionInterface::scrollDownAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_nextPageAction() {
	QString _ret = QAccessibleActionInterface::nextPageAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_previousPageAction() {
	QString _ret = QAccessibleActionInterface::previousPageAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QAccessibleActionInterface::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QAccessibleActionInterface::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessibleActionInterface_delete(QAccessibleActionInterface* self) {
	delete self;
}

struct miqt_string QAccessibleImageInterface_imageDescription(const QAccessibleImageInterface* self) {
	QString _ret = self->imageDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QAccessibleImageInterface_imageSize(const QAccessibleImageInterface* self) {
	return new QSize(self->imageSize());
}

QPoint* QAccessibleImageInterface_imagePosition(const QAccessibleImageInterface* self) {
	return new QPoint(self->imagePosition());
}

void QAccessibleImageInterface_delete(QAccessibleImageInterface* self) {
	delete self;
}

struct miqt_string QAccessibleHyperlinkInterface_anchor(const QAccessibleHyperlinkInterface* self) {
	QString _ret = self->anchor();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleHyperlinkInterface_anchorTarget(const QAccessibleHyperlinkInterface* self) {
	QString _ret = self->anchorTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleHyperlinkInterface_startIndex(const QAccessibleHyperlinkInterface* self) {
	return self->startIndex();
}

int QAccessibleHyperlinkInterface_endIndex(const QAccessibleHyperlinkInterface* self) {
	return self->endIndex();
}

bool QAccessibleHyperlinkInterface_isValid(const QAccessibleHyperlinkInterface* self) {
	return self->isValid();
}

void QAccessibleHyperlinkInterface_delete(QAccessibleHyperlinkInterface* self) {
	delete self;
}

int QAccessibleSelectionInterface_selectedItemCount(const QAccessibleSelectionInterface* self) {
	return self->selectedItemCount();
}

struct miqt_array /* of QAccessibleInterface* */  QAccessibleSelectionInterface_selectedItems(const QAccessibleSelectionInterface* self) {
	QList<QAccessibleInterface *> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAccessibleInterface** _arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAccessibleInterface* QAccessibleSelectionInterface_selectedItem(const QAccessibleSelectionInterface* self, int selectionIndex) {
	return self->selectedItem(static_cast<int>(selectionIndex));
}

bool QAccessibleSelectionInterface_isSelected(const QAccessibleSelectionInterface* self, QAccessibleInterface* childItem) {
	return self->isSelected(childItem);
}

bool QAccessibleSelectionInterface_select(QAccessibleSelectionInterface* self, QAccessibleInterface* childItem) {
	return self->select(childItem);
}

bool QAccessibleSelectionInterface_unselect(QAccessibleSelectionInterface* self, QAccessibleInterface* childItem) {
	return self->unselect(childItem);
}

bool QAccessibleSelectionInterface_selectAll(QAccessibleSelectionInterface* self) {
	return self->selectAll();
}

bool QAccessibleSelectionInterface_clear(QAccessibleSelectionInterface* self) {
	return self->clear();
}

void QAccessibleSelectionInterface_delete(QAccessibleSelectionInterface* self) {
	delete self;
}

struct miqt_array /* of int */  QAccessibleAttributesInterface_attributeKeys(const QAccessibleAttributesInterface* self) {
	QList<QAccessible::Attribute> _ret = self->attributeKeys();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QAccessible::Attribute _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QVariant* QAccessibleAttributesInterface_attributeValue(const QAccessibleAttributesInterface* self, int key) {
	return new QVariant(self->attributeValue(static_cast<QAccessible::Attribute>(key)));
}

void QAccessibleAttributesInterface_delete(QAccessibleAttributesInterface* self) {
	delete self;
}

class MiqtVirtualQAccessibleEvent final : public QAccessibleEvent {
public:

	MiqtVirtualQAccessibleEvent(QObject* obj, QAccessible::Event typ): QAccessibleEvent(obj, typ) {}
	MiqtVirtualQAccessibleEvent(QAccessibleInterface* iface, QAccessible::Event typ): QAccessibleEvent(iface, typ) {}

	virtual ~MiqtVirtualQAccessibleEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accessibleInterface = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* accessibleInterface() const override {
		if (handle__accessibleInterface == 0) {
			return QAccessibleEvent::accessibleInterface();
		}

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QAccessibleEvent_accessibleInterface(this, handle__accessibleInterface);
		return callback_return_value;
	}

	friend QAccessibleInterface* QAccessibleEvent_virtualbase_accessibleInterface(const void* self);

};

QAccessibleEvent* QAccessibleEvent_new(QObject* obj, int typ) {
	return new (std::nothrow) MiqtVirtualQAccessibleEvent(obj, static_cast<QAccessible::Event>(typ));
}

QAccessibleEvent* QAccessibleEvent_new2(QAccessibleInterface* iface, int typ) {
	return new (std::nothrow) MiqtVirtualQAccessibleEvent(iface, static_cast<QAccessible::Event>(typ));
}

int QAccessibleEvent_type(const QAccessibleEvent* self) {
	QAccessible::Event _ret = self->type();
	return static_cast<int>(_ret);
}

QObject* QAccessibleEvent_object(const QAccessibleEvent* self) {
	return self->object();
}

unsigned int QAccessibleEvent_uniqueId(const QAccessibleEvent* self) {
	unsigned int _ret = self->uniqueId();
	return static_cast<unsigned int>(_ret);
}

void QAccessibleEvent_setChild(QAccessibleEvent* self, int chld) {
	self->setChild(static_cast<int>(chld));
}

int QAccessibleEvent_child(const QAccessibleEvent* self) {
	return self->child();
}

QAccessibleInterface* QAccessibleEvent_accessibleInterface(const QAccessibleEvent* self) {
	return self->accessibleInterface();
}

bool QAccessibleEvent_override_virtual_accessibleInterface(void* self, intptr_t slot) {
	MiqtVirtualQAccessibleEvent* self_cast = static_cast<MiqtVirtualQAccessibleEvent*>( (QAccessibleEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__accessibleInterface = slot;
	return true;
}

QAccessibleInterface* QAccessibleEvent_virtualbase_accessibleInterface(const void* self) {
	return static_cast<const MiqtVirtualQAccessibleEvent*>(self)->QAccessibleEvent::accessibleInterface();
}

void QAccessibleEvent_delete(QAccessibleEvent* self) {
	delete self;
}

class MiqtVirtualQAction final : public QAction {
public:

	MiqtVirtualQAction(): QAction() {}
	MiqtVirtualQAction(const QString& text): QAction(text) {}
	MiqtVirtualQAction(const QIcon& icon, const QString& text): QAction(icon, text) {}
	MiqtVirtualQAction(QObject* parent): QAction(parent) {}
	MiqtVirtualQAction(const QString& text, QObject* parent): QAction(text, parent) {}
	MiqtVirtualQAction(const QIcon& icon, const QString& text, QObject* parent): QAction(icon, text, parent) {}

	virtual ~MiqtVirtualQAction() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAction::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAction_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QAction_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAction::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAction_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAction_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QAction_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAction_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAction_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAction_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAction* QAction_new() {
	return new (std::nothrow) MiqtVirtualQAction();
}

QAction* QAction_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQAction(text_QString);
}

QAction* QAction_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQAction(*icon, text_QString);
}

QAction* QAction_new4(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAction(parent);
}

QAction* QAction_new5(struct miqt_string text, QObject* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQAction(text_QString, parent);
}

QAction* QAction_new6(QIcon* icon, struct miqt_string text, QObject* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQAction(*icon, text_QString, parent);
}

void QAction_virtbase(QAction* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAction_metaObject(const QAction* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QAction_tr(const char* s) {
	QString _ret = QAction::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QObject* */  QAction_associatedObjects(const QAction* self) {
	QList<QObject *> _ret = self->associatedObjects();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAction_setActionGroup(QAction* self, QActionGroup* group) {
	self->setActionGroup(group);
}

QActionGroup* QAction_actionGroup(const QAction* self) {
	return self->actionGroup();
}

void QAction_setIcon(QAction* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QAction_icon(const QAction* self) {
	return new QIcon(self->icon());
}

void QAction_setText(QAction* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

struct miqt_string QAction_text(const QAction* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setIconText(QAction* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setIconText(text_QString);
}

struct miqt_string QAction_iconText(const QAction* self) {
	QString _ret = self->iconText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setToolTip(QAction* self, struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	self->setToolTip(tip_QString);
}

struct miqt_string QAction_toolTip(const QAction* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setStatusTip(QAction* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QAction_statusTip(const QAction* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setWhatsThis(QAction* self, struct miqt_string what) {
	QString what_QString = QString::fromUtf8(what.data, what.len);
	self->setWhatsThis(what_QString);
}

struct miqt_string QAction_whatsThis(const QAction* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAction_setPriority(QAction* self, int priority) {
	self->setPriority(static_cast<QAction::Priority>(priority));
}

int QAction_priority(const QAction* self) {
	QAction::Priority _ret = self->priority();
	return static_cast<int>(_ret);
}

void QAction_setSeparator(QAction* self, bool b) {
	self->setSeparator(b);
}

bool QAction_isSeparator(const QAction* self) {
	return self->isSeparator();
}

void QAction_setShortcut(QAction* self, QKeySequence* shortcut) {
	self->setShortcut(*shortcut);
}

QKeySequence* QAction_shortcut(const QAction* self) {
	return new QKeySequence(self->shortcut());
}

void QAction_setShortcuts(QAction* self, struct miqt_array /* of QKeySequence* */  shortcuts) {
	QList<QKeySequence> shortcuts_QList;
	shortcuts_QList.reserve(shortcuts.len);
	QKeySequence** shortcuts_arr = static_cast<QKeySequence**>(shortcuts.data);
	for(size_t i = 0; i < shortcuts.len; ++i) {
		shortcuts_QList.push_back(*(shortcuts_arr[i]));
	}
	self->setShortcuts(shortcuts_QList);
}

void QAction_setShortcutsWithShortcuts(QAction* self, int shortcuts) {
	self->setShortcuts(static_cast<QKeySequence::StandardKey>(shortcuts));
}

struct miqt_array /* of QKeySequence* */  QAction_shortcuts(const QAction* self) {
	QList<QKeySequence> _ret = self->shortcuts();
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QAction_setShortcutContext(QAction* self, int context) {
	self->setShortcutContext(static_cast<Qt::ShortcutContext>(context));
}

int QAction_shortcutContext(const QAction* self) {
	Qt::ShortcutContext _ret = self->shortcutContext();
	return static_cast<int>(_ret);
}

void QAction_setAutoRepeat(QAction* self, bool autoRepeat) {
	self->setAutoRepeat(autoRepeat);
}

bool QAction_autoRepeat(const QAction* self) {
	return self->autoRepeat();
}

void QAction_setFont(QAction* self, QFont* font) {
	self->setFont(*font);
}

QFont* QAction_font(const QAction* self) {
	return new QFont(self->font());
}

void QAction_setCheckable(QAction* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QAction_isCheckable(const QAction* self) {
	return self->isCheckable();
}

QVariant* QAction_data(const QAction* self) {
	return new QVariant(self->data());
}

void QAction_setData(QAction* self, QVariant* var) {
	self->setData(*var);
}

bool QAction_isChecked(const QAction* self) {
	return self->isChecked();
}

bool QAction_isEnabled(const QAction* self) {
	return self->isEnabled();
}

bool QAction_isVisible(const QAction* self) {
	return self->isVisible();
}

void QAction_activate(QAction* self, int event) {
	self->activate(static_cast<QAction::ActionEvent>(event));
}

void QAction_setMenuRole(QAction* self, int menuRole) {
	self->setMenuRole(static_cast<QAction::MenuRole>(menuRole));
}

int QAction_menuRole(const QAction* self) {
	return self->menuRole();
}

void QAction_setIconVisibleInMenu(QAction* self, bool visible) {
	self->setIconVisibleInMenu(visible);
}

bool QAction_isIconVisibleInMenu(const QAction* self) {
	return self->isIconVisibleInMenu();
}

void QAction_setShortcutVisibleInContextMenu(QAction* self, bool show) {
	self->setShortcutVisibleInContextMenu(show);
}

bool QAction_isShortcutVisibleInContextMenu(const QAction* self) {
	return self->isShortcutVisibleInContextMenu();
}

bool QAction_showStatusText(QAction* self) {
	return self->showStatusText();
}

void QAction_trigger(QAction* self) {
	self->trigger();
}

void QAction_hover(QAction* self) {
	self->hover();
}

void QAction_setChecked(QAction* self, bool checked) {
	self->setChecked(checked);
}

void QAction_toggle(QAction* self) {
	self->toggle();
}

void QAction_setEnabled(QAction* self, bool enabled) {
	self->setEnabled(enabled);
}

void QAction_resetEnabled(QAction* self) {
	self->resetEnabled();
}

void QAction_setDisabled(QAction* self, bool b) {
	self->setDisabled(b);
}

void QAction_setVisible(QAction* self, bool visible) {
	self->setVisible(visible);
}

void QAction_changed(QAction* self) {
	self->changed();
}

void QAction_connect_changed(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)()>(&QAction::changed), self, [=]() {
		miqt_exec_callback_QAction_changed(slot);
	});
}

void QAction_enabledChanged(QAction* self, bool enabled) {
	self->enabledChanged(enabled);
}

void QAction_connect_enabledChanged(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::enabledChanged), self, [=](bool enabled) {
		bool sigval1 = enabled;
		miqt_exec_callback_QAction_enabledChanged(slot, sigval1);
	});
}

void QAction_checkableChanged(QAction* self, bool checkable) {
	self->checkableChanged(checkable);
}

void QAction_connect_checkableChanged(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::checkableChanged), self, [=](bool checkable) {
		bool sigval1 = checkable;
		miqt_exec_callback_QAction_checkableChanged(slot, sigval1);
	});
}

void QAction_visibleChanged(QAction* self) {
	self->visibleChanged();
}

void QAction_connect_visibleChanged(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)()>(&QAction::visibleChanged), self, [=]() {
		miqt_exec_callback_QAction_visibleChanged(slot);
	});
}

void QAction_triggered(QAction* self) {
	self->triggered();
}

void QAction_connect_triggered(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::triggered), self, [=]() {
		miqt_exec_callback_QAction_triggered(slot);
	});
}

void QAction_hovered(QAction* self) {
	self->hovered();
}

void QAction_connect_hovered(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)()>(&QAction::hovered), self, [=]() {
		miqt_exec_callback_QAction_hovered(slot);
	});
}

void QAction_toggled(QAction* self, bool param1) {
	self->toggled(param1);
}

void QAction_connect_toggled(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::toggled), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QAction_toggled(slot, sigval1);
	});
}

struct miqt_string QAction_tr2(const char* s, const char* c) {
	QString _ret = QAction::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAction_tr3(const char* s, const char* c, int n) {
	QString _ret = QAction::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAction_showStatusTextWithObject(QAction* self, QObject* object) {
	return self->showStatusText(object);
}

void QAction_triggeredWithChecked(QAction* self, bool checked) {
	self->triggered(checked);
}

void QAction_connect_triggeredWithChecked(QAction* self, intptr_t slot) {
	QAction::connect(self, static_cast<void (QAction::*)(bool)>(&QAction::triggered), self, [=](bool checked) {
		bool sigval1 = checked;
		miqt_exec_callback_QAction_triggeredWithChecked(slot, sigval1);
	});
}

bool QAction_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = static_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QAction_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAction*>(self)->QAction::event(event);
}

bool QAction_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAction* self_cast = static_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAction_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAction*>(self)->QAction::eventFilter(watched, event);
}

QObject* QAction_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAction* self_cast = static_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAction_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAction* self_cast = static_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAction_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAction* self_cast = static_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAction_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAction* self_cast = static_cast<MiqtVirtualQAction*>( (QAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAction_delete(QAction* self) {
	delete self;
}

class MiqtVirtualQActionGroup final : public QActionGroup {
public:

	MiqtVirtualQActionGroup(QObject* parent): QActionGroup(parent) {}

	virtual ~MiqtVirtualQActionGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QActionGroup::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QActionGroup_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QActionGroup_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QActionGroup::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QActionGroup_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QActionGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QActionGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QActionGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QActionGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QActionGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QActionGroup* QActionGroup_new(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQActionGroup(parent);
}

void QActionGroup_virtbase(QActionGroup* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QActionGroup_metaObject(const QActionGroup* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QActionGroup_tr(const char* s) {
	QString _ret = QActionGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QActionGroup_addAction(QActionGroup* self, QAction* a) {
	return self->addAction(a);
}

QAction* QActionGroup_addActionWithText(QActionGroup* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(text_QString);
}

QAction* QActionGroup_addAction2(QActionGroup* self, QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addAction(*icon, text_QString);
}

void QActionGroup_removeAction(QActionGroup* self, QAction* a) {
	self->removeAction(a);
}

struct miqt_array /* of QAction* */  QActionGroup_actions(const QActionGroup* self) {
	QList<QAction *> _ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAction* QActionGroup_checkedAction(const QActionGroup* self) {
	return self->checkedAction();
}

bool QActionGroup_isExclusive(const QActionGroup* self) {
	return self->isExclusive();
}

bool QActionGroup_isEnabled(const QActionGroup* self) {
	return self->isEnabled();
}

bool QActionGroup_isVisible(const QActionGroup* self) {
	return self->isVisible();
}

void QActionGroup_setEnabled(QActionGroup* self, bool enabled) {
	self->setEnabled(enabled);
}

void QActionGroup_setDisabled(QActionGroup* self, bool b) {
	self->setDisabled(b);
}

void QActionGroup_setVisible(QActionGroup* self, bool visible) {
	self->setVisible(visible);
}

void QActionGroup_setExclusive(QActionGroup* self, bool exclusive) {
	self->setExclusive(exclusive);
}

void QActionGroup_triggered(QActionGroup* self, QAction* param1) {
	self->triggered(param1);
}

void QActionGroup_connect_triggered(QActionGroup* self, intptr_t slot) {
	QActionGroup::connect(self, static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::triggered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QActionGroup_triggered(slot, sigval1);
	});
}

void QActionGroup_hovered(QActionGroup* self, QAction* param1) {
	self->hovered(param1);
}

void QActionGroup_connect_hovered(QActionGroup* self, intptr_t slot) {
	QActionGroup::connect(self, static_cast<void (QActionGroup::*)(QAction*)>(&QActionGroup::hovered), self, [=](QAction* param1) {
		QAction* sigval1 = param1;
		miqt_exec_callback_QActionGroup_hovered(slot, sigval1);
	});
}

struct miqt_string QActionGroup_tr2(const char* s, const char* c) {
	QString _ret = QActionGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QActionGroup_tr3(const char* s, const char* c, int n) {
	QString _ret = QActionGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QActionGroup_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQActionGroup* self_cast = static_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QActionGroup_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQActionGroup*>(self)->QActionGroup::event(event);
}

bool QActionGroup_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQActionGroup* self_cast = static_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QActionGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQActionGroup*>(self)->QActionGroup::eventFilter(watched, event);
}

QObject* QActionGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQActionGroup* self_cast = static_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QActionGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQActionGroup* self_cast = static_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QActionGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQActionGroup* self_cast = static_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QActionGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQActionGroup* self_cast = static_cast<MiqtVirtualQActionGroup*>( (QActionGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QActionGroup_delete(QActionGroup* self) {
	delete self;
}

QSurfaceFormat* QSurfaceFormat_new() {
	return new (std::nothrow) QSurfaceFormat();
}

QSurfaceFormat* QSurfaceFormat_new2(int options) {
	return new (std::nothrow) QSurfaceFormat(static_cast<QSurfaceFormat::FormatOptions>(options));
}

QSurfaceFormat* QSurfaceFormat_new3(QSurfaceFormat* other) {
	return new (std::nothrow) QSurfaceFormat(*other);
}

void QSurfaceFormat_setDepthBufferSize(QSurfaceFormat* self, int size) {
	self->setDepthBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_depthBufferSize(const QSurfaceFormat* self) {
	return self->depthBufferSize();
}

void QSurfaceFormat_setStencilBufferSize(QSurfaceFormat* self, int size) {
	self->setStencilBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_stencilBufferSize(const QSurfaceFormat* self) {
	return self->stencilBufferSize();
}

void QSurfaceFormat_setRedBufferSize(QSurfaceFormat* self, int size) {
	self->setRedBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_redBufferSize(const QSurfaceFormat* self) {
	return self->redBufferSize();
}

void QSurfaceFormat_setGreenBufferSize(QSurfaceFormat* self, int size) {
	self->setGreenBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_greenBufferSize(const QSurfaceFormat* self) {
	return self->greenBufferSize();
}

void QSurfaceFormat_setBlueBufferSize(QSurfaceFormat* self, int size) {
	self->setBlueBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_blueBufferSize(const QSurfaceFormat* self) {
	return self->blueBufferSize();
}

void QSurfaceFormat_setAlphaBufferSize(QSurfaceFormat* self, int size) {
	self->setAlphaBufferSize(static_cast<int>(size));
}

int QSurfaceFormat_alphaBufferSize(const QSurfaceFormat* self) {
	return self->alphaBufferSize();
}

void QSurfaceFormat_setSamples(QSurfaceFormat* self, int numSamples) {
	self->setSamples(static_cast<int>(numSamples));
}

int QSurfaceFormat_samples(const QSurfaceFormat* self) {
	return self->samples();
}

void QSurfaceFormat_setSwapBehavior(QSurfaceFormat* self, int behavior) {
	self->setSwapBehavior(static_cast<QSurfaceFormat::SwapBehavior>(behavior));
}

int QSurfaceFormat_swapBehavior(const QSurfaceFormat* self) {
	return self->swapBehavior();
}

bool QSurfaceFormat_hasAlpha(const QSurfaceFormat* self) {
	return self->hasAlpha();
}

void QSurfaceFormat_setProfile(QSurfaceFormat* self, int profile) {
	self->setProfile(static_cast<QSurfaceFormat::OpenGLContextProfile>(profile));
}

int QSurfaceFormat_profile(const QSurfaceFormat* self) {
	return self->profile();
}

void QSurfaceFormat_setRenderableType(QSurfaceFormat* self, int type) {
	self->setRenderableType(static_cast<QSurfaceFormat::RenderableType>(type));
}

int QSurfaceFormat_renderableType(const QSurfaceFormat* self) {
	return self->renderableType();
}

void QSurfaceFormat_setMajorVersion(QSurfaceFormat* self, int majorVersion) {
	self->setMajorVersion(static_cast<int>(majorVersion));
}

int QSurfaceFormat_majorVersion(const QSurfaceFormat* self) {
	return self->majorVersion();
}

void QSurfaceFormat_setMinorVersion(QSurfaceFormat* self, int minorVersion) {
	self->setMinorVersion(static_cast<int>(minorVersion));
}

int QSurfaceFormat_minorVersion(const QSurfaceFormat* self) {
	return self->minorVersion();
}

void QSurfaceFormat_setVersion(QSurfaceFormat* self, int major, int minor) {
	self->setVersion(static_cast<int>(major), static_cast<int>(minor));
}

bool QSurfaceFormat_stereo(const QSurfaceFormat* self) {
	return self->stereo();
}

void QSurfaceFormat_setStereo(QSurfaceFormat* self, bool enable) {
	self->setStereo(enable);
}

void QSurfaceFormat_setOptions(QSurfaceFormat* self, int options) {
	self->setOptions(static_cast<QFlags<QSurfaceFormat::FormatOption>>(options));
}

void QSurfaceFormat_setOption(QSurfaceFormat* self, int option) {
	self->setOption(static_cast<QSurfaceFormat::FormatOption>(option));
}

bool QSurfaceFormat_testOption(const QSurfaceFormat* self, int option) {
	return self->testOption(static_cast<QSurfaceFormat::FormatOption>(option));
}

int QSurfaceFormat_options(const QSurfaceFormat* self) {
	QSurfaceFormat::FormatOptions _ret = self->options();
	return static_cast<int>(_ret);
}

int QSurfaceFormat_swapInterval(const QSurfaceFormat* self) {
	return self->swapInterval();
}

void QSurfaceFormat_setSwapInterval(QSurfaceFormat* self, int interval) {
	self->setSwapInterval(static_cast<int>(interval));
}

QColorSpace* QSurfaceFormat_colorSpace(const QSurfaceFormat* self) {
	const QColorSpace& _ret = self->colorSpace();
	// Cast returned reference into pointer
	return const_cast<QColorSpace*>(&_ret);
}

void QSurfaceFormat_setColorSpace(QSurfaceFormat* self, QColorSpace* colorSpace) {
	self->setColorSpace(*colorSpace);
}

void QSurfaceFormat_setColorSpaceWithColorSpace(QSurfaceFormat* self, int colorSpace) {
	self->setColorSpace(static_cast<QSurfaceFormat::ColorSpace>(colorSpace));
}

void QSurfaceFormat_setDefaultFormat(QSurfaceFormat* format) {
	QSurfaceFormat::setDefaultFormat(*format);
}

QSurfaceFormat* QSurfaceFormat_defaultFormat() {
	return new QSurfaceFormat(QSurfaceFormat::defaultFormat());
}

void QSurfaceFormat_setOption2(QSurfaceFormat* self, int option, bool on) {
	self->setOption(static_cast<QSurfaceFormat::FormatOption>(option), on);
}

void QSurfaceFormat_delete(QSurfaceFormat* self) {
	delete self;
}

class MiqtVirtualQBitmap final : public QBitmap {
public:

	MiqtVirtualQBitmap(): QBitmap() {}
	MiqtVirtualQBitmap(const QPixmap& param1): QBitmap(param1) {}
	MiqtVirtualQBitmap(int w, int h): QBitmap(w, h) {}
	MiqtVirtualQBitmap(const QSize& param1): QBitmap(param1) {}
	MiqtVirtualQBitmap(const QString& fileName): QBitmap(fileName) {}
	MiqtVirtualQBitmap(const QBitmap& param1): QBitmap(param1) {}
	MiqtVirtualQBitmap(const QString& fileName, const char* format): QBitmap(fileName, format) {}

	virtual ~MiqtVirtualQBitmap() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QBitmap::devType();
		}

		int callback_return_value = miqt_exec_callback_QBitmap_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QBitmap_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QBitmap::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QBitmap_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QBitmap_virtualbase_paintEngine(const void* self);

};

QBitmap* QBitmap_new() {
	return new (std::nothrow) MiqtVirtualQBitmap();
}

QBitmap* QBitmap_new2(QPixmap* param1) {
	return new (std::nothrow) MiqtVirtualQBitmap(*param1);
}

QBitmap* QBitmap_new3(int w, int h) {
	return new (std::nothrow) MiqtVirtualQBitmap(static_cast<int>(w), static_cast<int>(h));
}

QBitmap* QBitmap_new4(QSize* param1) {
	return new (std::nothrow) MiqtVirtualQBitmap(*param1);
}

QBitmap* QBitmap_new5(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQBitmap(fileName_QString);
}

QBitmap* QBitmap_new6(QBitmap* param1) {
	return new (std::nothrow) MiqtVirtualQBitmap(*param1);
}

QBitmap* QBitmap_new7(struct miqt_string fileName, const char* format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQBitmap(fileName_QString, format);
}

void QBitmap_virtbase(QBitmap* src, QPixmap** outptr_QPixmap) {
	*outptr_QPixmap = static_cast<QPixmap*>(src);
}

void QBitmap_swap(QBitmap* self, QBitmap* other) {
	self->swap(*other);
}

QVariant* QBitmap_ToQVariant(const QBitmap* self) {
	return new QVariant(self->operator QVariant());
}

void QBitmap_clear(QBitmap* self) {
	self->clear();
}

QBitmap* QBitmap_fromImage(QImage* image) {
	return new QBitmap(QBitmap::fromImage(*image));
}

QBitmap* QBitmap_fromData(QSize* size, const unsigned char* bits) {
	return new QBitmap(QBitmap::fromData(*size, bits));
}

QBitmap* QBitmap_fromPixmap(QPixmap* pixmap) {
	return new QBitmap(QBitmap::fromPixmap(*pixmap));
}

QBitmap* QBitmap_transformed(const QBitmap* self, QTransform* matrix) {
	return new QBitmap(self->transformed(*matrix));
}

QBitmap* QBitmap_fromImage2(QImage* image, int flags) {
	return new QBitmap(QBitmap::fromImage(*image, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

QBitmap* QBitmap_fromData2(QSize* size, const unsigned char* bits, int monoFormat) {
	return new QBitmap(QBitmap::fromData(*size, bits, static_cast<QImage::Format>(monoFormat)));
}

bool QBitmap_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = static_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QBitmap_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQBitmap*>(self)->QBitmap::devType();
}

bool QBitmap_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQBitmap* self_cast = static_cast<MiqtVirtualQBitmap*>( (QBitmap*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QBitmap_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQBitmap*>(self)->QBitmap::paintEngine();
}

void QBitmap_delete(QBitmap* self) {
	delete self;
}

QCursor* QCursor_new() {
	return new (std::nothrow) QCursor();
}

QCursor* QCursor_new2(int shape) {
	return new (std::nothrow) QCursor(static_cast<Qt::CursorShape>(shape));
}

QCursor* QCursor_new3(QBitmap* bitmap, QBitmap* mask) {
	return new (std::nothrow) QCursor(*bitmap, *mask);
}

QCursor* QCursor_new4(QPixmap* pixmap) {
	return new (std::nothrow) QCursor(*pixmap);
}

QCursor* QCursor_new5(QCursor* cursor) {
	return new (std::nothrow) QCursor(*cursor);
}

QCursor* QCursor_new6(QBitmap* bitmap, QBitmap* mask, int hotX) {
	return new (std::nothrow) QCursor(*bitmap, *mask, static_cast<int>(hotX));
}

QCursor* QCursor_new7(QBitmap* bitmap, QBitmap* mask, int hotX, int hotY) {
	return new (std::nothrow) QCursor(*bitmap, *mask, static_cast<int>(hotX), static_cast<int>(hotY));
}

QCursor* QCursor_new8(QPixmap* pixmap, int hotX) {
	return new (std::nothrow) QCursor(*pixmap, static_cast<int>(hotX));
}

QCursor* QCursor_new9(QPixmap* pixmap, int hotX, int hotY) {
	return new (std::nothrow) QCursor(*pixmap, static_cast<int>(hotX), static_cast<int>(hotY));
}

void QCursor_swap(QCursor* self, QCursor* other) {
	self->swap(*other);
}

QVariant* QCursor_ToQVariant(const QCursor* self) {
	return new QVariant(self->operator QVariant());
}

int QCursor_shape(const QCursor* self) {
	Qt::CursorShape _ret = self->shape();
	return static_cast<int>(_ret);
}

void QCursor_setShape(QCursor* self, int newShape) {
	self->setShape(static_cast<Qt::CursorShape>(newShape));
}

QPixmap* QCursor_pixmap(const QCursor* self) {
	return new QPixmap(self->pixmap());
}

QPoint* QCursor_hotSpot(const QCursor* self) {
	return new QPoint(self->hotSpot());
}

QPoint* QCursor_pos() {
	return new QPoint(QCursor::pos());
}

QPoint* QCursor_posWithScreen(QScreen* screen) {
	return new QPoint(QCursor::pos(screen));
}

void QCursor_setPos(int x, int y) {
	QCursor::setPos(static_cast<int>(x), static_cast<int>(y));
}

void QCursor_setPos2(QScreen* screen, int x, int y) {
	QCursor::setPos(screen, static_cast<int>(x), static_cast<int>(y));
}

void QCursor_setPosWithQPoint(QPoint* p) {
	QCursor::setPos(*p);
}

void QCursor_setPos3(QScreen* screen, QPoint* p) {
	QCursor::setPos(screen, *p);
}

void QCursor_delete(QCursor* self) {
	delete self;
}

class MiqtVirtualQWindow final : public QWindow {
public:

	MiqtVirtualQWindow(): QWindow() {}
	MiqtVirtualQWindow(QWindow* parent): QWindow(parent) {}
	MiqtVirtualQWindow(QScreen* screen): QWindow(screen) {}

	virtual ~MiqtVirtualQWindow() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__surfaceType = 0;

	// Subclass to allow providing a Go implementation
	virtual SurfaceType surfaceType() const override {
		if (handle__surfaceType == 0) {
			return QWindow::surfaceType();
		}

		int callback_return_value = miqt_exec_callback_QWindow_surfaceType(this, handle__surfaceType);
		return static_cast<QWindow::SurfaceType>(callback_return_value);
	}

	friend int QWindow_virtualbase_surfaceType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__format = 0;

	// Subclass to allow providing a Go implementation
	virtual QSurfaceFormat format() const override {
		if (handle__format == 0) {
			return QWindow::format();
		}

		QSurfaceFormat* callback_return_value = miqt_exec_callback_QWindow_format(this, handle__format);
		return *callback_return_value;
	}

	friend QSurfaceFormat* QWindow_virtualbase_format(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize size() const override {
		if (handle__size == 0) {
			return QWindow::size();
		}

		QSize* callback_return_value = miqt_exec_callback_QWindow_size(this, handle__size);
		return *callback_return_value;
	}

	friend QSize* QWindow_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__accessibleRoot = 0;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* accessibleRoot() const override {
		if (handle__accessibleRoot == 0) {
			return QWindow::accessibleRoot();
		}

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QWindow_accessibleRoot(this, handle__accessibleRoot);
		return callback_return_value;
	}

	friend QAccessibleInterface* QWindow_virtualbase_accessibleRoot(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusObject = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* focusObject() const override {
		if (handle__focusObject == 0) {
			return QWindow::focusObject();
		}

		QObject* callback_return_value = miqt_exec_callback_QWindow_focusObject(this, handle__focusObject);
		return callback_return_value;
	}

	friend QObject* QWindow_virtualbase_focusObject(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWindow::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QWindow_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QWindow_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWindow::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QWindow_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QWindow_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend void* QWindow_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision);
	friend QObject* QWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWindow* QWindow_new() {
	return new (std::nothrow) MiqtVirtualQWindow();
}

QWindow* QWindow_new2(QWindow* parent) {
	return new (std::nothrow) MiqtVirtualQWindow(parent);
}

QWindow* QWindow_new3(QScreen* screen) {
	return new (std::nothrow) MiqtVirtualQWindow(screen);
}

void QWindow_virtbase(QWindow* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWindow_metaObject(const QWindow* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QWindow_tr(const char* s) {
	QString _ret = QWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWindow_setSurfaceType(QWindow* self, int surfaceType) {
	self->setSurfaceType(static_cast<QWindow::SurfaceType>(surfaceType));
}

int QWindow_surfaceType(const QWindow* self) {
	return self->surfaceType();
}

bool QWindow_isVisible(const QWindow* self) {
	return self->isVisible();
}

int QWindow_visibility(const QWindow* self) {
	return self->visibility();
}

void QWindow_setVisibility(QWindow* self, int v) {
	self->setVisibility(static_cast<QWindow::Visibility>(v));
}

void QWindow_create(QWindow* self) {
	self->create();
}

uintptr_t QWindow_winId(const QWindow* self) {
	uintptr_t _ret = self->winId();
	return static_cast<uintptr_t>(_ret);
}

QWindow* QWindow_parent(const QWindow* self) {
	return self->parent();
}

void QWindow_setParent(QWindow* self, QWindow* parent) {
	self->setParent(parent);
}

bool QWindow_isTopLevel(const QWindow* self) {
	return self->isTopLevel();
}

bool QWindow_isModal(const QWindow* self) {
	return self->isModal();
}

int QWindow_modality(const QWindow* self) {
	Qt::WindowModality _ret = self->modality();
	return static_cast<int>(_ret);
}

void QWindow_setModality(QWindow* self, int modality) {
	self->setModality(static_cast<Qt::WindowModality>(modality));
}

void QWindow_setFormat(QWindow* self, QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QWindow_format(const QWindow* self) {
	return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QWindow_requestedFormat(const QWindow* self) {
	return new QSurfaceFormat(self->requestedFormat());
}

void QWindow_setFlags(QWindow* self, int flags) {
	self->setFlags(static_cast<QFlags<Qt::WindowType>>(flags));
}

int QWindow_flags(const QWindow* self) {
	Qt::WindowFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QWindow_setFlag(QWindow* self, int param1) {
	self->setFlag(static_cast<Qt::WindowType>(param1));
}

int QWindow_type(const QWindow* self) {
	Qt::WindowType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QWindow_title(const QWindow* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWindow_setOpacity(QWindow* self, double level) {
	self->setOpacity(static_cast<double>(level));
}

double QWindow_opacity(const QWindow* self) {
	double _ret = self->opacity();
	return static_cast<double>(_ret);
}

void QWindow_setMask(QWindow* self, QRegion* region) {
	self->setMask(*region);
}

QRegion* QWindow_mask(const QWindow* self) {
	return new QRegion(self->mask());
}

bool QWindow_isActive(const QWindow* self) {
	return self->isActive();
}

void QWindow_reportContentOrientationChange(QWindow* self, int orientation) {
	self->reportContentOrientationChange(static_cast<Qt::ScreenOrientation>(orientation));
}

int QWindow_contentOrientation(const QWindow* self) {
	Qt::ScreenOrientation _ret = self->contentOrientation();
	return static_cast<int>(_ret);
}

double QWindow_devicePixelRatio(const QWindow* self) {
	double _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
}

int QWindow_windowState(const QWindow* self) {
	Qt::WindowState _ret = self->windowState();
	return static_cast<int>(_ret);
}

int QWindow_windowStates(const QWindow* self) {
	Qt::WindowStates _ret = self->windowStates();
	return static_cast<int>(_ret);
}

void QWindow_setWindowState(QWindow* self, int state) {
	self->setWindowState(static_cast<Qt::WindowState>(state));
}

void QWindow_setWindowStates(QWindow* self, int states) {
	self->setWindowStates(static_cast<QFlags<Qt::WindowState>>(states));
}

void QWindow_setTransientParent(QWindow* self, QWindow* parent) {
	self->setTransientParent(parent);
}

QWindow* QWindow_transientParent(const QWindow* self) {
	return self->transientParent();
}

bool QWindow_isAncestorOf(const QWindow* self, QWindow* child) {
	return self->isAncestorOf(child);
}

bool QWindow_isExposed(const QWindow* self) {
	return self->isExposed();
}

int QWindow_minimumWidth(const QWindow* self) {
	return self->minimumWidth();
}

int QWindow_minimumHeight(const QWindow* self) {
	return self->minimumHeight();
}

int QWindow_maximumWidth(const QWindow* self) {
	return self->maximumWidth();
}

int QWindow_maximumHeight(const QWindow* self) {
	return self->maximumHeight();
}

QSize* QWindow_minimumSize(const QWindow* self) {
	return new QSize(self->minimumSize());
}

QSize* QWindow_maximumSize(const QWindow* self) {
	return new QSize(self->maximumSize());
}

QSize* QWindow_baseSize(const QWindow* self) {
	return new QSize(self->baseSize());
}

QSize* QWindow_sizeIncrement(const QWindow* self) {
	return new QSize(self->sizeIncrement());
}

void QWindow_setMinimumSize(QWindow* self, QSize* size) {
	self->setMinimumSize(*size);
}

void QWindow_setMaximumSize(QWindow* self, QSize* size) {
	self->setMaximumSize(*size);
}

void QWindow_setBaseSize(QWindow* self, QSize* size) {
	self->setBaseSize(*size);
}

void QWindow_setSizeIncrement(QWindow* self, QSize* size) {
	self->setSizeIncrement(*size);
}

QRect* QWindow_geometry(const QWindow* self) {
	return new QRect(self->geometry());
}

QMargins* QWindow_frameMargins(const QWindow* self) {
	return new QMargins(self->frameMargins());
}

QRect* QWindow_frameGeometry(const QWindow* self) {
	return new QRect(self->frameGeometry());
}

QPoint* QWindow_framePosition(const QWindow* self) {
	return new QPoint(self->framePosition());
}

void QWindow_setFramePosition(QWindow* self, QPoint* point) {
	self->setFramePosition(*point);
}

QMargins* QWindow_safeAreaMargins(const QWindow* self) {
	return new QMargins(self->safeAreaMargins());
}

int QWindow_width(const QWindow* self) {
	return self->width();
}

int QWindow_height(const QWindow* self) {
	return self->height();
}

int QWindow_x(const QWindow* self) {
	return self->x();
}

int QWindow_y(const QWindow* self) {
	return self->y();
}

QSize* QWindow_size(const QWindow* self) {
	return new QSize(self->size());
}

QPoint* QWindow_position(const QWindow* self) {
	return new QPoint(self->position());
}

void QWindow_setPosition(QWindow* self, QPoint* pt) {
	self->setPosition(*pt);
}

void QWindow_setPosition2(QWindow* self, int posx, int posy) {
	self->setPosition(static_cast<int>(posx), static_cast<int>(posy));
}

void QWindow_resize(QWindow* self, QSize* newSize) {
	self->resize(*newSize);
}

void QWindow_resize2(QWindow* self, int w, int h) {
	self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QWindow_setFilePath(QWindow* self, struct miqt_string filePath) {
	QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
	self->setFilePath(filePath_QString);
}

struct miqt_string QWindow_filePath(const QWindow* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWindow_setIcon(QWindow* self, QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QWindow_icon(const QWindow* self) {
	return new QIcon(self->icon());
}

void QWindow_destroy(QWindow* self) {
	self->destroy();
}

bool QWindow_setKeyboardGrabEnabled(QWindow* self, bool grab) {
	return self->setKeyboardGrabEnabled(grab);
}

bool QWindow_setMouseGrabEnabled(QWindow* self, bool grab) {
	return self->setMouseGrabEnabled(grab);
}

QScreen* QWindow_screen(const QWindow* self) {
	return self->screen();
}

void QWindow_setScreen(QWindow* self, QScreen* screen) {
	self->setScreen(screen);
}

QAccessibleInterface* QWindow_accessibleRoot(const QWindow* self) {
	return self->accessibleRoot();
}

QObject* QWindow_focusObject(const QWindow* self) {
	return self->focusObject();
}

QPointF* QWindow_mapToGlobal(const QWindow* self, QPointF* pos) {
	return new QPointF(self->mapToGlobal(*pos));
}

QPointF* QWindow_mapFromGlobal(const QWindow* self, QPointF* pos) {
	return new QPointF(self->mapFromGlobal(*pos));
}

QPoint* QWindow_mapToGlobalWithPos(const QWindow* self, QPoint* pos) {
	return new QPoint(self->mapToGlobal(*pos));
}

QPoint* QWindow_mapFromGlobalWithPos(const QWindow* self, QPoint* pos) {
	return new QPoint(self->mapFromGlobal(*pos));
}

QCursor* QWindow_cursor(const QWindow* self) {
	return new QCursor(self->cursor());
}

void QWindow_setCursor(QWindow* self, QCursor* cursor) {
	self->setCursor(*cursor);
}

void QWindow_unsetCursor(QWindow* self) {
	self->unsetCursor();
}

QWindow* QWindow_fromWinId(uintptr_t id) {
	return QWindow::fromWinId(static_cast<uintptr_t>(id));
}

void QWindow_requestActivate(QWindow* self) {
	self->requestActivate();
}

void QWindow_setVisible(QWindow* self, bool visible) {
	self->setVisible(visible);
}

void QWindow_show(QWindow* self) {
	self->show();
}

void QWindow_hide(QWindow* self) {
	self->hide();
}

void QWindow_showMinimized(QWindow* self) {
	self->showMinimized();
}

void QWindow_showMaximized(QWindow* self) {
	self->showMaximized();
}

void QWindow_showFullScreen(QWindow* self) {
	self->showFullScreen();
}

void QWindow_showNormal(QWindow* self) {
	self->showNormal();
}

bool QWindow_close(QWindow* self) {
	return self->close();
}

void QWindow_raise(QWindow* self) {
	self->raise();
}

void QWindow_lower(QWindow* self) {
	self->lower();
}

bool QWindow_startSystemResize(QWindow* self, int edges) {
	return self->startSystemResize(static_cast<QFlags<Qt::Edge>>(edges));
}

bool QWindow_startSystemMove(QWindow* self) {
	return self->startSystemMove();
}

void QWindow_setTitle(QWindow* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

void QWindow_setX(QWindow* self, int arg) {
	self->setX(static_cast<int>(arg));
}

void QWindow_setY(QWindow* self, int arg) {
	self->setY(static_cast<int>(arg));
}

void QWindow_setWidth(QWindow* self, int arg) {
	self->setWidth(static_cast<int>(arg));
}

void QWindow_setHeight(QWindow* self, int arg) {
	self->setHeight(static_cast<int>(arg));
}

void QWindow_setGeometry(QWindow* self, int posx, int posy, int w, int h) {
	self->setGeometry(static_cast<int>(posx), static_cast<int>(posy), static_cast<int>(w), static_cast<int>(h));
}

void QWindow_setGeometryWithRect(QWindow* self, QRect* rect) {
	self->setGeometry(*rect);
}

void QWindow_setMinimumWidth(QWindow* self, int w) {
	self->setMinimumWidth(static_cast<int>(w));
}

void QWindow_setMinimumHeight(QWindow* self, int h) {
	self->setMinimumHeight(static_cast<int>(h));
}

void QWindow_setMaximumWidth(QWindow* self, int w) {
	self->setMaximumWidth(static_cast<int>(w));
}

void QWindow_setMaximumHeight(QWindow* self, int h) {
	self->setMaximumHeight(static_cast<int>(h));
}

void QWindow_alert(QWindow* self, int msec) {
	self->alert(static_cast<int>(msec));
}

void QWindow_requestUpdate(QWindow* self) {
	self->requestUpdate();
}

void QWindow_screenChanged(QWindow* self, QScreen* screen) {
	self->screenChanged(screen);
}

void QWindow_connect_screenChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QScreen*)>(&QWindow::screenChanged), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QWindow_screenChanged(slot, sigval1);
	});
}

void QWindow_modalityChanged(QWindow* self, int modality) {
	self->modalityChanged(static_cast<Qt::WindowModality>(modality));
}

void QWindow_connect_modalityChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(Qt::WindowModality)>(&QWindow::modalityChanged), self, [=](Qt::WindowModality modality) {
		Qt::WindowModality modality_ret = modality;
		int sigval1 = static_cast<int>(modality_ret);
		miqt_exec_callback_QWindow_modalityChanged(slot, sigval1);
	});
}

void QWindow_flagsChanged(QWindow* self, int flags) {
	self->flagsChanged(static_cast<QFlags<Qt::WindowType>>(flags));
}

void QWindow_connect_flagsChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(Qt::WindowFlags)>(&QWindow::flagsChanged), self, [=](Qt::WindowFlags flags) {
		Qt::WindowFlags flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);
		miqt_exec_callback_QWindow_flagsChanged(slot, sigval1);
	});
}

void QWindow_windowStateChanged(QWindow* self, int windowState) {
	self->windowStateChanged(static_cast<Qt::WindowState>(windowState));
}

void QWindow_connect_windowStateChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(Qt::WindowState)>(&QWindow::windowStateChanged), self, [=](Qt::WindowState windowState) {
		Qt::WindowState windowState_ret = windowState;
		int sigval1 = static_cast<int>(windowState_ret);
		miqt_exec_callback_QWindow_windowStateChanged(slot, sigval1);
	});
}

void QWindow_windowTitleChanged(QWindow* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->windowTitleChanged(title_QString);
}

void QWindow_connect_windowTitleChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(const QString&)>(&QWindow::windowTitleChanged), self, [=](const QString& title) {
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWindow_windowTitleChanged(slot, sigval1);
	});
}

void QWindow_xChanged(QWindow* self, int arg) {
	self->xChanged(static_cast<int>(arg));
}

void QWindow_connect_xChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::xChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_xChanged(slot, sigval1);
	});
}

void QWindow_yChanged(QWindow* self, int arg) {
	self->yChanged(static_cast<int>(arg));
}

void QWindow_connect_yChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::yChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_yChanged(slot, sigval1);
	});
}

void QWindow_widthChanged(QWindow* self, int arg) {
	self->widthChanged(static_cast<int>(arg));
}

void QWindow_connect_widthChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::widthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_widthChanged(slot, sigval1);
	});
}

void QWindow_heightChanged(QWindow* self, int arg) {
	self->heightChanged(static_cast<int>(arg));
}

void QWindow_connect_heightChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::heightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_heightChanged(slot, sigval1);
	});
}

void QWindow_minimumWidthChanged(QWindow* self, int arg) {
	self->minimumWidthChanged(static_cast<int>(arg));
}

void QWindow_connect_minimumWidthChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::minimumWidthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_minimumWidthChanged(slot, sigval1);
	});
}

void QWindow_minimumHeightChanged(QWindow* self, int arg) {
	self->minimumHeightChanged(static_cast<int>(arg));
}

void QWindow_connect_minimumHeightChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::minimumHeightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_minimumHeightChanged(slot, sigval1);
	});
}

void QWindow_maximumWidthChanged(QWindow* self, int arg) {
	self->maximumWidthChanged(static_cast<int>(arg));
}

void QWindow_connect_maximumWidthChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::maximumWidthChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_maximumWidthChanged(slot, sigval1);
	});
}

void QWindow_maximumHeightChanged(QWindow* self, int arg) {
	self->maximumHeightChanged(static_cast<int>(arg));
}

void QWindow_connect_maximumHeightChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(int)>(&QWindow::maximumHeightChanged), self, [=](int arg) {
		int sigval1 = arg;
		miqt_exec_callback_QWindow_maximumHeightChanged(slot, sigval1);
	});
}

void QWindow_safeAreaMarginsChanged(QWindow* self, QMargins* arg) {
	self->safeAreaMarginsChanged(*arg);
}

void QWindow_connect_safeAreaMarginsChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QMargins)>(&QWindow::safeAreaMarginsChanged), self, [=](QMargins arg) {
		QMargins* sigval1 = new QMargins(arg);
		miqt_exec_callback_QWindow_safeAreaMarginsChanged(slot, sigval1);
	});
}

void QWindow_visibleChanged(QWindow* self, bool arg) {
	self->visibleChanged(arg);
}

void QWindow_connect_visibleChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(bool)>(&QWindow::visibleChanged), self, [=](bool arg) {
		bool sigval1 = arg;
		miqt_exec_callback_QWindow_visibleChanged(slot, sigval1);
	});
}

void QWindow_visibilityChanged(QWindow* self, int visibility) {
	self->visibilityChanged(static_cast<QWindow::Visibility>(visibility));
}

void QWindow_connect_visibilityChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QWindow::Visibility)>(&QWindow::visibilityChanged), self, [=](QWindow::Visibility visibility) {
		QWindow::Visibility visibility_ret = visibility;
		int sigval1 = static_cast<int>(visibility_ret);
		miqt_exec_callback_QWindow_visibilityChanged(slot, sigval1);
	});
}

void QWindow_activeChanged(QWindow* self) {
	self->activeChanged();
}

void QWindow_connect_activeChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)()>(&QWindow::activeChanged), self, [=]() {
		miqt_exec_callback_QWindow_activeChanged(slot);
	});
}

void QWindow_contentOrientationChanged(QWindow* self, int orientation) {
	self->contentOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QWindow_connect_contentOrientationChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(Qt::ScreenOrientation)>(&QWindow::contentOrientationChanged), self, [=](Qt::ScreenOrientation orientation) {
		Qt::ScreenOrientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		miqt_exec_callback_QWindow_contentOrientationChanged(slot, sigval1);
	});
}

void QWindow_focusObjectChanged(QWindow* self, QObject* object) {
	self->focusObjectChanged(object);
}

void QWindow_connect_focusObjectChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QObject*)>(&QWindow::focusObjectChanged), self, [=](QObject* object) {
		QObject* sigval1 = object;
		miqt_exec_callback_QWindow_focusObjectChanged(slot, sigval1);
	});
}

void QWindow_opacityChanged(QWindow* self, double opacity) {
	self->opacityChanged(static_cast<double>(opacity));
}

void QWindow_connect_opacityChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(qreal)>(&QWindow::opacityChanged), self, [=](qreal opacity) {
		double opacity_ret = opacity;
		double sigval1 = static_cast<double>(opacity_ret);
		miqt_exec_callback_QWindow_opacityChanged(slot, sigval1);
	});
}

void QWindow_transientParentChanged(QWindow* self, QWindow* transientParent) {
	self->transientParentChanged(transientParent);
}

void QWindow_connect_transientParentChanged(QWindow* self, intptr_t slot) {
	QWindow::connect(self, static_cast<void (QWindow::*)(QWindow*)>(&QWindow::transientParentChanged), self, [=](QWindow* transientParent) {
		QWindow* sigval1 = transientParent;
		miqt_exec_callback_QWindow_transientParentChanged(slot, sigval1);
	});
}

struct miqt_string QWindow_tr2(const char* s, const char* c) {
	QString _ret = QWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWindow_tr3(const char* s, const char* c, int n) {
	QString _ret = QWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWindow* QWindow_parentWithMode(const QWindow* self, int mode) {
	return self->parent(static_cast<QWindow::AncestorMode>(mode));
}

void QWindow_setFlag2(QWindow* self, int param1, bool on) {
	self->setFlag(static_cast<Qt::WindowType>(param1), on);
}

bool QWindow_isAncestorOf2(const QWindow* self, QWindow* child, int mode) {
	return self->isAncestorOf(child, static_cast<QWindow::AncestorMode>(mode));
}

bool QWindow_override_virtual_surfaceType(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__surfaceType = slot;
	return true;
}

int QWindow_virtualbase_surfaceType(const void* self) {
	return static_cast<const MiqtVirtualQWindow*>(self)->QWindow::surfaceType();
}

bool QWindow_override_virtual_format(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__format = slot;
	return true;
}

QSurfaceFormat* QWindow_virtualbase_format(const void* self) {
	return new QSurfaceFormat(static_cast<const MiqtVirtualQWindow*>(self)->QWindow::format());
}

bool QWindow_override_virtual_size(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = slot;
	return true;
}

QSize* QWindow_virtualbase_size(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQWindow*>(self)->QWindow::size());
}

bool QWindow_override_virtual_accessibleRoot(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__accessibleRoot = slot;
	return true;
}

QAccessibleInterface* QWindow_virtualbase_accessibleRoot(const void* self) {
	return static_cast<const MiqtVirtualQWindow*>(self)->QWindow::accessibleRoot();
}

bool QWindow_override_virtual_focusObject(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusObject = slot;
	return true;
}

QObject* QWindow_virtualbase_focusObject(const void* self) {
	return static_cast<const MiqtVirtualQWindow*>(self)->QWindow::focusObject();
}

bool QWindow_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QWindow_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQWindow*>(self)->QWindow::event(event);
}

bool QWindow_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWindow_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQWindow*>(self)->QWindow::eventFilter(watched, event);
}

void* QWindow_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->resolveInterface(name, static_cast<int>(revision));
}

QObject* QWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWindow* self_cast = static_cast<MiqtVirtualQWindow*>( (QWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QWindow_delete(QWindow* self) {
	delete self;
}

QBackingStore* QBackingStore_new(QWindow* window) {
	return new (std::nothrow) QBackingStore(window);
}

QWindow* QBackingStore_window(const QBackingStore* self) {
	return self->window();
}

QPaintDevice* QBackingStore_paintDevice(QBackingStore* self) {
	return self->paintDevice();
}

void QBackingStore_flush(QBackingStore* self, QRegion* region) {
	self->flush(*region);
}

void QBackingStore_resize(QBackingStore* self, QSize* size) {
	self->resize(*size);
}

QSize* QBackingStore_size(const QBackingStore* self) {
	return new QSize(self->size());
}

bool QBackingStore_scroll(QBackingStore* self, QRegion* area, int dx, int dy) {
	return self->scroll(*area, static_cast<int>(dx), static_cast<int>(dy));
}

void QBackingStore_beginPaint(QBackingStore* self, QRegion* param1) {
	self->beginPaint(*param1);
}

void QBackingStore_endPaint(QBackingStore* self) {
	self->endPaint();
}

void QBackingStore_setStaticContents(QBackingStore* self, QRegion* region) {
	self->setStaticContents(*region);
}

QRegion* QBackingStore_staticContents(const QBackingStore* self) {
	return new QRegion(self->staticContents());
}

bool QBackingStore_hasStaticContents(const QBackingStore* self) {
	return self->hasStaticContents();
}

void QBackingStore_flush2(QBackingStore* self, QRegion* region, QWindow* window) {
	self->flush(*region, window);
}

void QBackingStore_flush3(QBackingStore* self, QRegion* region, QWindow* window, QPoint* offset) {
	self->flush(*region, window, *offset);
}

void QBackingStore_delete(QBackingStore* self) {
	delete self;
}

void QClipboard_virtbase(QClipboard* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QClipboard_metaObject(const QClipboard* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QClipboard_tr(const char* s) {
	QString _ret = QClipboard::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QClipboard_clear(QClipboard* self) {
	self->clear();
}

bool QClipboard_supportsSelection(const QClipboard* self) {
	return self->supportsSelection();
}

bool QClipboard_supportsFindBuffer(const QClipboard* self) {
	return self->supportsFindBuffer();
}

bool QClipboard_ownsSelection(const QClipboard* self) {
	return self->ownsSelection();
}

bool QClipboard_ownsClipboard(const QClipboard* self) {
	return self->ownsClipboard();
}

bool QClipboard_ownsFindBuffer(const QClipboard* self) {
	return self->ownsFindBuffer();
}

struct miqt_string QClipboard_text(const QClipboard* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_textWithSubtype(const QClipboard* self, struct miqt_string subtype) {
	QString subtype_QString = QString::fromUtf8(subtype.data, subtype.len);
	QString _ret = self->text(subtype_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QClipboard_setText(QClipboard* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString);
}

QMimeData* QClipboard_mimeData(const QClipboard* self) {
	return (QMimeData*) self->mimeData();
}

void QClipboard_setMimeData(QClipboard* self, QMimeData* data) {
	self->setMimeData(data);
}

QImage* QClipboard_image(const QClipboard* self) {
	return new QImage(self->image());
}

QPixmap* QClipboard_pixmap(const QClipboard* self) {
	return new QPixmap(self->pixmap());
}

void QClipboard_setImage(QClipboard* self, QImage* param1) {
	self->setImage(*param1);
}

void QClipboard_setPixmap(QClipboard* self, QPixmap* param1) {
	self->setPixmap(*param1);
}

void QClipboard_changed(QClipboard* self, int mode) {
	self->changed(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_connect_changed(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)(QClipboard::Mode)>(&QClipboard::changed), self, [=](QClipboard::Mode mode) {
		QClipboard::Mode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QClipboard_changed(slot, sigval1);
	});
}

void QClipboard_selectionChanged(QClipboard* self) {
	self->selectionChanged();
}

void QClipboard_connect_selectionChanged(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::selectionChanged), self, [=]() {
		miqt_exec_callback_QClipboard_selectionChanged(slot);
	});
}

void QClipboard_findBufferChanged(QClipboard* self) {
	self->findBufferChanged();
}

void QClipboard_connect_findBufferChanged(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::findBufferChanged), self, [=]() {
		miqt_exec_callback_QClipboard_findBufferChanged(slot);
	});
}

void QClipboard_dataChanged(QClipboard* self) {
	self->dataChanged();
}

void QClipboard_connect_dataChanged(QClipboard* self, intptr_t slot) {
	QClipboard::connect(self, static_cast<void (QClipboard::*)()>(&QClipboard::dataChanged), self, [=]() {
		miqt_exec_callback_QClipboard_dataChanged(slot);
	});
}

struct miqt_string QClipboard_tr2(const char* s, const char* c) {
	QString _ret = QClipboard::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_tr3(const char* s, const char* c, int n) {
	QString _ret = QClipboard::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QClipboard_clearWithMode(QClipboard* self, int mode) {
	self->clear(static_cast<QClipboard::Mode>(mode));
}

struct miqt_string QClipboard_textWithMode(const QClipboard* self, int mode) {
	QString _ret = self->text(static_cast<QClipboard::Mode>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QClipboard_text2(const QClipboard* self, struct miqt_string subtype, int mode) {
	QString subtype_QString = QString::fromUtf8(subtype.data, subtype.len);
	QString _ret = self->text(subtype_QString, static_cast<QClipboard::Mode>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QClipboard_setText2(QClipboard* self, struct miqt_string param1, int mode) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString, static_cast<QClipboard::Mode>(mode));
}

QMimeData* QClipboard_mimeDataWithMode(const QClipboard* self, int mode) {
	return (QMimeData*) self->mimeData(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_setMimeData2(QClipboard* self, QMimeData* data, int mode) {
	self->setMimeData(data, static_cast<QClipboard::Mode>(mode));
}

QImage* QClipboard_imageWithMode(const QClipboard* self, int mode) {
	return new QImage(self->image(static_cast<QClipboard::Mode>(mode)));
}

QPixmap* QClipboard_pixmapWithMode(const QClipboard* self, int mode) {
	return new QPixmap(self->pixmap(static_cast<QClipboard::Mode>(mode)));
}

void QClipboard_setImage2(QClipboard* self, QImage* param1, int mode) {
	self->setImage(*param1, static_cast<QClipboard::Mode>(mode));
}

void QClipboard_setPixmap2(QClipboard* self, QPixmap* param1, int mode) {
	self->setPixmap(*param1, static_cast<QClipboard::Mode>(mode));
}

QColorTransform* QColorTransform_new() {
	return new (std::nothrow) QColorTransform();
}

QColorTransform* QColorTransform_new2(QColorTransform* colorTransform) {
	return new (std::nothrow) QColorTransform(*colorTransform);
}

void QColorTransform_swap(QColorTransform* self, QColorTransform* other) {
	self->swap(*other);
}

bool QColorTransform_isIdentity(const QColorTransform* self) {
	return self->isIdentity();
}

unsigned int QColorTransform_map(const QColorTransform* self, unsigned int argb) {
	unsigned int _ret = self->map(static_cast<unsigned int>(argb));
	return static_cast<unsigned int>(_ret);
}

QRgba64* QColorTransform_mapWithRgba64(const QColorTransform* self, QRgba64* rgba64) {
	return new QRgba64(self->map(*rgba64));
}

QColor* QColorTransform_mapWithColor(const QColorTransform* self, QColor* color) {
	return new QColor(self->map(*color));
}

void QColorTransform_delete(QColorTransform* self) {
	delete self;
}

QColorSpace* QColorSpace_new() {
	return new (std::nothrow) QColorSpace();
}

QColorSpace* QColorSpace_new2(int namedColorSpace) {
	return new (std::nothrow) QColorSpace(static_cast<QColorSpace::NamedColorSpace>(namedColorSpace));
}

QColorSpace* QColorSpace_new3(int primaries, int transferFunction) {
	return new (std::nothrow) QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction));
}

QColorSpace* QColorSpace_new4(int primaries, float gamma) {
	return new (std::nothrow) QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_new5(QColorSpace* colorSpace) {
	return new (std::nothrow) QColorSpace(*colorSpace);
}

QColorSpace* QColorSpace_new6(int primaries, int transferFunction, float gamma) {
	return new (std::nothrow) QColorSpace(static_cast<QColorSpace::Primaries>(primaries), static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

void QColorSpace_swap(QColorSpace* self, QColorSpace* colorSpace) {
	self->swap(*colorSpace);
}

int QColorSpace_transferFunction(const QColorSpace* self) {
	QColorSpace::TransferFunction _ret = self->transferFunction();
	return static_cast<int>(_ret);
}

float QColorSpace_gamma(const QColorSpace* self) {
	return self->gamma();
}

struct miqt_string QColorSpace_description(const QColorSpace* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColorSpace_setDescription(QColorSpace* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

void QColorSpace_setTransferFunction(QColorSpace* self, int transferFunction) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction));
}

void QColorSpace_setTransferFunctionWithTransferFunctionTable(QColorSpace* self, struct miqt_array /* of uint16_t */  transferFunctionTable) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	self->setTransferFunction(transferFunctionTable_QList);
}

void QColorSpace_setTransferFunctions(QColorSpace* self, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable) {
	QList<uint16_t> redTransferFunctionTable_QList;
	redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
	uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
	for(size_t i = 0; i < redTransferFunctionTable.len; ++i) {
		redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> greenTransferFunctionTable_QList;
	greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
	uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
	for(size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
		greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> blueTransferFunctionTable_QList;
	blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
	uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
	for(size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
		blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
	}
	self->setTransferFunctions(redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList);
}

QColorSpace* QColorSpace_withTransferFunction(const QColorSpace* self, int transferFunction) {
	return new QColorSpace(self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction)));
}

QColorSpace* QColorSpace_withTransferFunctionWithTransferFunctionTable(const QColorSpace* self, struct miqt_array /* of uint16_t */  transferFunctionTable) {
	QList<uint16_t> transferFunctionTable_QList;
	transferFunctionTable_QList.reserve(transferFunctionTable.len);
	uint16_t* transferFunctionTable_arr = static_cast<uint16_t*>(transferFunctionTable.data);
	for(size_t i = 0; i < transferFunctionTable.len; ++i) {
		transferFunctionTable_QList.push_back(static_cast<uint16_t>(transferFunctionTable_arr[i]));
	}
	return new QColorSpace(self->withTransferFunction(transferFunctionTable_QList));
}

QColorSpace* QColorSpace_withTransferFunctions(const QColorSpace* self, struct miqt_array /* of uint16_t */  redTransferFunctionTable, struct miqt_array /* of uint16_t */  greenTransferFunctionTable, struct miqt_array /* of uint16_t */  blueTransferFunctionTable) {
	QList<uint16_t> redTransferFunctionTable_QList;
	redTransferFunctionTable_QList.reserve(redTransferFunctionTable.len);
	uint16_t* redTransferFunctionTable_arr = static_cast<uint16_t*>(redTransferFunctionTable.data);
	for(size_t i = 0; i < redTransferFunctionTable.len; ++i) {
		redTransferFunctionTable_QList.push_back(static_cast<uint16_t>(redTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> greenTransferFunctionTable_QList;
	greenTransferFunctionTable_QList.reserve(greenTransferFunctionTable.len);
	uint16_t* greenTransferFunctionTable_arr = static_cast<uint16_t*>(greenTransferFunctionTable.data);
	for(size_t i = 0; i < greenTransferFunctionTable.len; ++i) {
		greenTransferFunctionTable_QList.push_back(static_cast<uint16_t>(greenTransferFunctionTable_arr[i]));
	}
	QList<uint16_t> blueTransferFunctionTable_QList;
	blueTransferFunctionTable_QList.reserve(blueTransferFunctionTable.len);
	uint16_t* blueTransferFunctionTable_arr = static_cast<uint16_t*>(blueTransferFunctionTable.data);
	for(size_t i = 0; i < blueTransferFunctionTable.len; ++i) {
		blueTransferFunctionTable_QList.push_back(static_cast<uint16_t>(blueTransferFunctionTable_arr[i]));
	}
	return new QColorSpace(self->withTransferFunctions(redTransferFunctionTable_QList, greenTransferFunctionTable_QList, blueTransferFunctionTable_QList));
}

void QColorSpace_setPrimaries(QColorSpace* self, int primariesId) {
	self->setPrimaries(static_cast<QColorSpace::Primaries>(primariesId));
}

void QColorSpace_setPrimaries2(QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint) {
	self->setPrimaries(*whitePoint, *redPoint, *greenPoint, *bluePoint);
}

void QColorSpace_setWhitePoint(QColorSpace* self, QPointF* whitePoint) {
	self->setWhitePoint(*whitePoint);
}

QPointF* QColorSpace_whitePoint(const QColorSpace* self) {
	return new QPointF(self->whitePoint());
}

int QColorSpace_transformModel(const QColorSpace* self) {
	QColorSpace::TransformModel _ret = self->transformModel();
	return static_cast<int>(_ret);
}

int QColorSpace_colorModel(const QColorSpace* self) {
	QColorSpace::ColorModel _ret = self->colorModel();
	return static_cast<int>(_ret);
}

void QColorSpace_detach(QColorSpace* self) {
	self->detach();
}

bool QColorSpace_isValid(const QColorSpace* self) {
	return self->isValid();
}

bool QColorSpace_isValidTarget(const QColorSpace* self) {
	return self->isValidTarget();
}

QColorSpace* QColorSpace_fromIccProfile(struct miqt_string iccProfile) {
	QByteArray iccProfile_QByteArray(iccProfile.data, iccProfile.len);
	return new QColorSpace(QColorSpace::fromIccProfile(iccProfile_QByteArray));
}

struct miqt_string QColorSpace_iccProfile(const QColorSpace* self) {
	QByteArray _qb = self->iccProfile();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QColorTransform* QColorSpace_transformationToColorSpace(const QColorSpace* self, QColorSpace* colorspace) {
	return new QColorTransform(self->transformationToColorSpace(*colorspace));
}

QVariant* QColorSpace_ToQVariant(const QColorSpace* self) {
	return new QVariant(self->operator QVariant());
}

void QColorSpace_setTransferFunction2(QColorSpace* self, int transferFunction, float gamma) {
	self->setTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma));
}

QColorSpace* QColorSpace_withTransferFunction2(const QColorSpace* self, int transferFunction, float gamma) {
	return new QColorSpace(self->withTransferFunction(static_cast<QColorSpace::TransferFunction>(transferFunction), static_cast<float>(gamma)));
}

void QColorSpace_delete(QColorSpace* self) {
	delete self;
}

class MiqtVirtualQDrag final : public QDrag {
public:

	MiqtVirtualQDrag(QObject* dragSource): QDrag(dragSource) {}

	virtual ~MiqtVirtualQDrag() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDrag::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDrag_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QDrag_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDrag::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDrag_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDrag_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QDrag_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDrag_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDrag_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDrag_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDrag* QDrag_new(QObject* dragSource) {
	return new (std::nothrow) MiqtVirtualQDrag(dragSource);
}

void QDrag_virtbase(QDrag* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDrag_metaObject(const QDrag* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QDrag_tr(const char* s) {
	QString _ret = QDrag::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDrag_setMimeData(QDrag* self, QMimeData* data) {
	self->setMimeData(data);
}

QMimeData* QDrag_mimeData(const QDrag* self) {
	return self->mimeData();
}

void QDrag_setPixmap(QDrag* self, QPixmap* pixmap) {
	self->setPixmap(*pixmap);
}

QPixmap* QDrag_pixmap(const QDrag* self) {
	return new QPixmap(self->pixmap());
}

void QDrag_setHotSpot(QDrag* self, QPoint* hotspot) {
	self->setHotSpot(*hotspot);
}

QPoint* QDrag_hotSpot(const QDrag* self) {
	return new QPoint(self->hotSpot());
}

QObject* QDrag_source(const QDrag* self) {
	return self->source();
}

QObject* QDrag_target(const QDrag* self) {
	return self->target();
}

int QDrag_exec(QDrag* self) {
	Qt::DropAction _ret = self->exec();
	return static_cast<int>(_ret);
}

int QDrag_exec2(QDrag* self, int supportedActions, int defaultAction) {
	Qt::DropAction _ret = self->exec(static_cast<QFlags<Qt::DropAction>>(supportedActions), static_cast<Qt::DropAction>(defaultAction));
	return static_cast<int>(_ret);
}

void QDrag_setDragCursor(QDrag* self, QPixmap* cursor, int action) {
	self->setDragCursor(*cursor, static_cast<Qt::DropAction>(action));
}

QPixmap* QDrag_dragCursor(const QDrag* self, int action) {
	return new QPixmap(self->dragCursor(static_cast<Qt::DropAction>(action)));
}

int QDrag_supportedActions(const QDrag* self) {
	Qt::DropActions _ret = self->supportedActions();
	return static_cast<int>(_ret);
}

int QDrag_defaultAction(const QDrag* self) {
	Qt::DropAction _ret = self->defaultAction();
	return static_cast<int>(_ret);
}

void QDrag_cancel() {
	QDrag::cancel();
}

void QDrag_actionChanged(QDrag* self, int action) {
	self->actionChanged(static_cast<Qt::DropAction>(action));
}

void QDrag_connect_actionChanged(QDrag* self, intptr_t slot) {
	QDrag::connect(self, static_cast<void (QDrag::*)(Qt::DropAction)>(&QDrag::actionChanged), self, [=](Qt::DropAction action) {
		Qt::DropAction action_ret = action;
		int sigval1 = static_cast<int>(action_ret);
		miqt_exec_callback_QDrag_actionChanged(slot, sigval1);
	});
}

void QDrag_targetChanged(QDrag* self, QObject* newTarget) {
	self->targetChanged(newTarget);
}

void QDrag_connect_targetChanged(QDrag* self, intptr_t slot) {
	QDrag::connect(self, static_cast<void (QDrag::*)(QObject*)>(&QDrag::targetChanged), self, [=](QObject* newTarget) {
		QObject* sigval1 = newTarget;
		miqt_exec_callback_QDrag_targetChanged(slot, sigval1);
	});
}

struct miqt_string QDrag_tr2(const char* s, const char* c) {
	QString _ret = QDrag::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDrag_tr3(const char* s, const char* c, int n) {
	QString _ret = QDrag::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDrag_execWithSupportedActions(QDrag* self, int supportedActions) {
	Qt::DropAction _ret = self->exec(static_cast<QFlags<Qt::DropAction>>(supportedActions));
	return static_cast<int>(_ret);
}

bool QDrag_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = static_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QDrag_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDrag*>(self)->QDrag::event(event);
}

bool QDrag_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDrag* self_cast = static_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDrag_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDrag*>(self)->QDrag::eventFilter(watched, event);
}

QObject* QDrag_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDrag* self_cast = static_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDrag_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDrag* self_cast = static_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDrag_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDrag* self_cast = static_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDrag_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDrag* self_cast = static_cast<MiqtVirtualQDrag*>( (QDrag*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDrag_delete(QDrag* self) {
	delete self;
}

class MiqtVirtualQFileSystemModel final : public QFileSystemModel {
public:

	MiqtVirtualQFileSystemModel(): QFileSystemModel() {}
	MiqtVirtualQFileSystemModel(QObject* parent): QFileSystemModel(parent) {}

	virtual ~MiqtVirtualQFileSystemModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QFileSystemModel::index(row, column, parent);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QFileSystemModel_index(this, handle__index, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QFileSystemModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__parent == 0) {
			return QFileSystemModel::parent(child);
		}

		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QFileSystemModel_parent(this, handle__parent, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QFileSystemModel_virtualbase_parent(const void* self, QModelIndex* child);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QFileSystemModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QFileSystemModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QFileSystemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__hasChildren == 0) {
			return QFileSystemModel::hasChildren(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_hasChildren(this, handle__hasChildren, sigval1);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QFileSystemModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_canFetchMore(this, handle__canFetchMore, sigval1);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QFileSystemModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QFileSystemModel_fetchMore(this, handle__fetchMore, sigval1);

	}

	friend void QFileSystemModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return QFileSystemModel::rowCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QFileSystemModel_rowCount(this, handle__rowCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QFileSystemModel_virtualbase_rowCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return QFileSystemModel::columnCount(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QFileSystemModel_columnCount(this, handle__columnCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QFileSystemModel_virtualbase_columnCount(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QFileSystemModel::data(index, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QFileSystemModel_data(this, handle__data, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QFileSystemModel_virtualbase_data(const void* self, QModelIndex* index, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QFileSystemModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_setData(this, handle__setData, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QFileSystemModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QFileSystemModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QFileSystemModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QFileSystemModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QFileSystemModel_flags(this, handle__flags, sigval1);
		return static_cast<QFlags<Qt::ItemFlag>>(callback_return_value);
	}

	friend int QFileSystemModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QFileSystemModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QFileSystemModel_sort(this, handle__sort, sigval1, sigval2);

	}

	friend void QFileSystemModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QFileSystemModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QFileSystemModel_mimeTypes(this, handle__mimeTypes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QFileSystemModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QFileSystemModel::mimeData(indexes);
		}

		const QModelIndexList& indexes_ret = indexes;
		// Convert QList<> from C++ memory to manually-managed C memory
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.length()));
		for (size_t i = 0, e = indexes_ret.length(); i < e; ++i) {
			indexes_arr[i] = new QModelIndex(indexes_ret[i]);
		}
		struct miqt_array indexes_out;
		indexes_out.len = indexes_ret.length();
		indexes_out.data = static_cast<void*>(indexes_arr);
		struct miqt_array /* of QModelIndex* */  sigval1 = indexes_out;
		QMimeData* callback_return_value = miqt_exec_callback_QFileSystemModel_mimeData(this, handle__mimeData, sigval1);
		return callback_return_value;
	}

	friend QMimeData* QFileSystemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QFileSystemModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QFileSystemModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QFileSystemModel_supportedDropActions(this, handle__supportedDropActions);
		return static_cast<QFlags<Qt::DropAction>>(callback_return_value);
	}

	friend int QFileSystemModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QFileSystemModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QFileSystemModel_roleNames(this, handle__roleNames);
		QHash<int, QByteArray> callback_return_value_QMap;
		callback_return_value_QMap.reserve(callback_return_value.len);
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		struct miqt_string* callback_return_value_varr = static_cast<struct miqt_string*>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QByteArray callback_return_value_varr_i_QByteArray(callback_return_value_varr[i].data, callback_return_value_varr[i].len);
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = callback_return_value_varr_i_QByteArray;
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to struct miqt_string */  QFileSystemModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QFileSystemModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QFileSystemModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QFileSystemModel_itemData(this, handle__itemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QFileSystemModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
			return QFileSystemModel::setItemData(index, roles);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QMap<int, QVariant>& roles_ret = roles;
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* roles_karr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
		QVariant** roles_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * roles_ret.size()));
		int roles_ctr = 0;
		for (auto roles_itr = roles_ret.keyValueBegin(); roles_itr != roles_ret.keyValueEnd(); ++roles_itr) {
			roles_karr[roles_ctr] = roles_itr->first;
			roles_varr[roles_ctr] = new QVariant(roles_itr->second);
			roles_ctr++;
		}
		struct miqt_map roles_out;
		roles_out.len = roles_ret.size();
		roles_out.keys = static_cast<void*>(roles_karr);
		roles_out.values = static_cast<void*>(roles_varr);
		struct miqt_map /* of int to QVariant* */  sigval2 = roles_out;
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_setItemData(this, handle__setItemData, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__clearItemData == 0) {
			return QFileSystemModel::clearItemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_clearItemData(this, handle__clearItemData, sigval1);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_clearItemData(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QFileSystemModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QFileSystemModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QFileSystemModel_supportedDragActions(this, handle__supportedDragActions);
		return static_cast<QFlags<Qt::DropAction>>(callback_return_value);
	}

	friend int QFileSystemModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QFileSystemModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QFileSystemModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QFileSystemModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QFileSystemModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QFileSystemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}

		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceRow;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QFileSystemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		}

		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceColumn;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QFileSystemModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QFileSystemModel_buddy(this, handle__buddy, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QFileSystemModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QFileSystemModel::match(start, role, value, hits, flags);
		}

		const QModelIndex& start_ret = start;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&start_ret);
		int sigval2 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = hits;
		Qt::MatchFlags flags_ret = flags;
		int sigval5 = static_cast<int>(flags_ret);
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QFileSystemModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QFileSystemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QFileSystemModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QFileSystemModel_span(this, handle__span, sigval1);
		return *callback_return_value;
	}

	friend QSize* QFileSystemModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__multiData = 0;

	// Subclass to allow providing a Go implementation
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (handle__multiData == 0) {
			QFileSystemModel::multiData(index, roleDataSpan);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelRoleDataSpan* sigval2 = new QModelRoleDataSpan(roleDataSpan);
		miqt_exec_callback_QFileSystemModel_multiData(this, handle__multiData, sigval1, sigval2);

	}

	friend void QFileSystemModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QFileSystemModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QFileSystemModel_submit(this, handle__submit);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QFileSystemModel::revert();
			return;
		}

		miqt_exec_callback_QFileSystemModel_revert(this, handle__revert);

	}

	friend void QFileSystemModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QFileSystemModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QFileSystemModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QFileSystemModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QFileSystemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QModelIndex* QFileSystemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column, uint64_t id);
	friend void QFileSystemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QFileSystemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QFileSystemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QFileSystemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QFileSystemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QFileSystemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QFileSystemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QFileSystemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QFileSystemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QFileSystemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QFileSystemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QFileSystemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QFileSystemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QFileSystemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QFileSystemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFileSystemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFileSystemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFileSystemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFileSystemModel* QFileSystemModel_new() {
	return new (std::nothrow) MiqtVirtualQFileSystemModel();
}

QFileSystemModel* QFileSystemModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQFileSystemModel(parent);
}

void QFileSystemModel_virtbase(QFileSystemModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QFileSystemModel_metaObject(const QFileSystemModel* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QFileSystemModel_tr(const char* s) {
	QString _ret = QFileSystemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileSystemModel_rootPathChanged(QFileSystemModel* self, struct miqt_string newPath) {
	QString newPath_QString = QString::fromUtf8(newPath.data, newPath.len);
	self->rootPathChanged(newPath_QString);
}

void QFileSystemModel_connect_rootPathChanged(QFileSystemModel* self, intptr_t slot) {
	QFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&)>(&QFileSystemModel::rootPathChanged), self, [=](const QString& newPath) {
		const QString newPath_ret = newPath;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray newPath_b = newPath_ret.toUtf8();
		struct miqt_string newPath_ms;
		newPath_ms.len = newPath_b.length();
		newPath_ms.data = static_cast<char*>(malloc(newPath_ms.len));
		memcpy(newPath_ms.data, newPath_b.data(), newPath_ms.len);
		struct miqt_string sigval1 = newPath_ms;
		miqt_exec_callback_QFileSystemModel_rootPathChanged(slot, sigval1);
	});
}

void QFileSystemModel_fileRenamed(QFileSystemModel* self, struct miqt_string path, struct miqt_string oldName, struct miqt_string newName) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	self->fileRenamed(path_QString, oldName_QString, newName_QString);
}

void QFileSystemModel_connect_fileRenamed(QFileSystemModel* self, intptr_t slot) {
	QFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&, const QString&, const QString&)>(&QFileSystemModel::fileRenamed), self, [=](const QString& path, const QString& oldName, const QString& newName) {
		const QString path_ret = path;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray path_b = path_ret.toUtf8();
		struct miqt_string path_ms;
		path_ms.len = path_b.length();
		path_ms.data = static_cast<char*>(malloc(path_ms.len));
		memcpy(path_ms.data, path_b.data(), path_ms.len);
		struct miqt_string sigval1 = path_ms;
		const QString oldName_ret = oldName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray oldName_b = oldName_ret.toUtf8();
		struct miqt_string oldName_ms;
		oldName_ms.len = oldName_b.length();
		oldName_ms.data = static_cast<char*>(malloc(oldName_ms.len));
		memcpy(oldName_ms.data, oldName_b.data(), oldName_ms.len);
		struct miqt_string sigval2 = oldName_ms;
		const QString newName_ret = newName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray newName_b = newName_ret.toUtf8();
		struct miqt_string newName_ms;
		newName_ms.len = newName_b.length();
		newName_ms.data = static_cast<char*>(malloc(newName_ms.len));
		memcpy(newName_ms.data, newName_b.data(), newName_ms.len);
		struct miqt_string sigval3 = newName_ms;
		miqt_exec_callback_QFileSystemModel_fileRenamed(slot, sigval1, sigval2, sigval3);
	});
}

void QFileSystemModel_directoryLoaded(QFileSystemModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->directoryLoaded(path_QString);
}

void QFileSystemModel_connect_directoryLoaded(QFileSystemModel* self, intptr_t slot) {
	QFileSystemModel::connect(self, static_cast<void (QFileSystemModel::*)(const QString&)>(&QFileSystemModel::directoryLoaded), self, [=](const QString& path) {
		const QString path_ret = path;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray path_b = path_ret.toUtf8();
		struct miqt_string path_ms;
		path_ms.len = path_b.length();
		path_ms.data = static_cast<char*>(malloc(path_ms.len));
		memcpy(path_ms.data, path_b.data(), path_ms.len);
		struct miqt_string sigval1 = path_ms;
		miqt_exec_callback_QFileSystemModel_directoryLoaded(slot, sigval1);
	});
}

QModelIndex* QFileSystemModel_index(const QFileSystemModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QFileSystemModel_indexWithPath(const QFileSystemModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString));
}

QModelIndex* QFileSystemModel_parent(const QFileSystemModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QFileSystemModel_sibling(const QFileSystemModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QFileSystemModel_hasChildren(const QFileSystemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

bool QFileSystemModel_canFetchMore(const QFileSystemModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

void QFileSystemModel_fetchMore(QFileSystemModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

int QFileSystemModel_rowCount(const QFileSystemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QFileSystemModel_columnCount(const QFileSystemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

QVariant* QFileSystemModel_myComputer(const QFileSystemModel* self) {
	return new QVariant(self->myComputer());
}

QVariant* QFileSystemModel_data(const QFileSystemModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QFileSystemModel_setData(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QFileSystemModel_headerData(const QFileSystemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

int QFileSystemModel_flags(const QFileSystemModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QFileSystemModel_sort(QFileSystemModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

struct miqt_array /* of struct miqt_string */  QFileSystemModel_mimeTypes(const QFileSystemModel* self) {
	QStringList _ret = self->mimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMimeData* QFileSystemModel_mimeData(const QFileSystemModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QFileSystemModel_dropMimeData(QFileSystemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QFileSystemModel_supportedDropActions(const QFileSystemModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_map /* of int to struct miqt_string */  QFileSystemModel_roleNames(const QFileSystemModel* self) {
	QHash<int, QByteArray> _ret = self->roleNames();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QByteArray _hashval_qb = _itr->second;
		struct miqt_string _hashval_ms;
		_hashval_ms.len = _hashval_qb.length();
		_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
		memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
		_varr[_ctr] = _hashval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

QModelIndex* QFileSystemModel_setRootPath(QFileSystemModel* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->setRootPath(path_QString));
}

struct miqt_string QFileSystemModel_rootPath(const QFileSystemModel* self) {
	QString _ret = self->rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QFileSystemModel_rootDirectory(const QFileSystemModel* self) {
	return new QDir(self->rootDirectory());
}

void QFileSystemModel_setIconProvider(QFileSystemModel* self, QAbstractFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QAbstractFileIconProvider* QFileSystemModel_iconProvider(const QFileSystemModel* self) {
	return self->iconProvider();
}

void QFileSystemModel_setFilter(QFileSystemModel* self, int filters) {
	self->setFilter(static_cast<QFlags<QDir::Filter>>(filters));
}

int QFileSystemModel_filter(const QFileSystemModel* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QFileSystemModel_setResolveSymlinks(QFileSystemModel* self, bool enable) {
	self->setResolveSymlinks(enable);
}

bool QFileSystemModel_resolveSymlinks(const QFileSystemModel* self) {
	return self->resolveSymlinks();
}

void QFileSystemModel_setReadOnly(QFileSystemModel* self, bool enable) {
	self->setReadOnly(enable);
}

bool QFileSystemModel_isReadOnly(const QFileSystemModel* self) {
	return self->isReadOnly();
}

void QFileSystemModel_setNameFilterDisables(QFileSystemModel* self, bool enable) {
	self->setNameFilterDisables(enable);
}

bool QFileSystemModel_nameFilterDisables(const QFileSystemModel* self) {
	return self->nameFilterDisables();
}

void QFileSystemModel_setNameFilters(QFileSystemModel* self, struct miqt_array /* of struct miqt_string */  filters) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	self->setNameFilters(filters_QList);
}

struct miqt_array /* of struct miqt_string */  QFileSystemModel_nameFilters(const QFileSystemModel* self) {
	QStringList _ret = self->nameFilters();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QFileSystemModel_setOption(QFileSystemModel* self, int option) {
	self->setOption(static_cast<QFileSystemModel::Option>(option));
}

bool QFileSystemModel_testOption(const QFileSystemModel* self, int option) {
	return self->testOption(static_cast<QFileSystemModel::Option>(option));
}

void QFileSystemModel_setOptions(QFileSystemModel* self, int options) {
	self->setOptions(static_cast<QFileSystemModel::Options>(options));
}

int QFileSystemModel_options(const QFileSystemModel* self) {
	return self->options();
}

struct miqt_string QFileSystemModel_filePath(const QFileSystemModel* self, QModelIndex* index) {
	QString _ret = self->filePath(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFileSystemModel_isDir(const QFileSystemModel* self, QModelIndex* index) {
	return self->isDir(*index);
}

long long QFileSystemModel_size(const QFileSystemModel* self, QModelIndex* index) {
	long long _ret = self->size(*index);
	return static_cast<long long>(_ret);
}

struct miqt_string QFileSystemModel_type(const QFileSystemModel* self, QModelIndex* index) {
	QString _ret = self->type(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QFileSystemModel_lastModified(const QFileSystemModel* self, QModelIndex* index) {
	return new QDateTime(self->lastModified(*index));
}

QDateTime* QFileSystemModel_lastModified2(const QFileSystemModel* self, QModelIndex* index, QTimeZone* tz) {
	return new QDateTime(self->lastModified(*index, *tz));
}

QModelIndex* QFileSystemModel_mkdir(QFileSystemModel* self, QModelIndex* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QModelIndex(self->mkdir(*parent, name_QString));
}

bool QFileSystemModel_rmdir(QFileSystemModel* self, QModelIndex* index) {
	return self->rmdir(*index);
}

struct miqt_string QFileSystemModel_fileName(const QFileSystemModel* self, QModelIndex* index) {
	QString _ret = self->fileName(*index);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QFileSystemModel_fileIcon(const QFileSystemModel* self, QModelIndex* index) {
	return new QIcon(self->fileIcon(*index));
}

int QFileSystemModel_permissions(const QFileSystemModel* self, QModelIndex* index) {
	QFile::Permissions _ret = self->permissions(*index);
	return static_cast<int>(_ret);
}

QFileInfo* QFileSystemModel_fileInfo(const QFileSystemModel* self, QModelIndex* index) {
	return new QFileInfo(self->fileInfo(*index));
}

bool QFileSystemModel_remove(QFileSystemModel* self, QModelIndex* index) {
	return self->remove(*index);
}

struct miqt_string QFileSystemModel_tr2(const char* s, const char* c) {
	QString _ret = QFileSystemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileSystemModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QFileSystemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QFileSystemModel_index2(const QFileSystemModel* self, struct miqt_string path, int column) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new QModelIndex(self->index(path_QString, static_cast<int>(column)));
}

QVariant* QFileSystemModel_myComputerWithRole(const QFileSystemModel* self, int role) {
	return new QVariant(self->myComputer(static_cast<int>(role)));
}

void QFileSystemModel_setOption2(QFileSystemModel* self, int option, bool on) {
	self->setOption(static_cast<QFileSystemModel::Option>(option), on);
}

bool QFileSystemModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = slot;
	return true;
}

QModelIndex* QFileSystemModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QFileSystemModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parent = slot;
	return true;
}

QModelIndex* QFileSystemModel_virtualbase_parent(const void* self, QModelIndex* child) {
	return new QModelIndex(static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::parent(*child));
}

bool QFileSystemModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QFileSystemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QFileSystemModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasChildren = slot;
	return true;
}

bool QFileSystemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::hasChildren(*parent);
}

bool QFileSystemModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QFileSystemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::canFetchMore(*parent);
}

bool QFileSystemModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = slot;
	return true;
}

void QFileSystemModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::fetchMore(*parent);
}

bool QFileSystemModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = slot;
	return true;
}

int QFileSystemModel_virtualbase_rowCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::rowCount(*parent);
}

bool QFileSystemModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = slot;
	return true;
}

int QFileSystemModel_virtualbase_columnCount(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::columnCount(*parent);
}

bool QFileSystemModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = slot;
	return true;
}

QVariant* QFileSystemModel_virtualbase_data(const void* self, QModelIndex* index, int role) {
	return new QVariant(static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::data(*index, static_cast<int>(role)));
}

bool QFileSystemModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::setData(*index, *value, static_cast<int>(role));
}

bool QFileSystemModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QFileSystemModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QFileSystemModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = slot;
	return true;
}

int QFileSystemModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QFileSystemModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = slot;
	return true;
}

void QFileSystemModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QFileSystemModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QFileSystemModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::mimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QFileSystemModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QFileSystemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::mimeData(indexes_QList);
}

bool QFileSystemModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QFileSystemModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QFileSystemModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QFileSystemModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QFileSystemModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::roleNames();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QByteArray _hashval_qb = _itr->second;
		struct miqt_string _hashval_ms;
		_hashval_ms.len = _hashval_qb.length();
		_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
		memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
		_varr[_ctr] = _hashval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QFileSystemModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QFileSystemModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QFileSystemModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::itemData(*index);
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QFileSystemModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::setItemData(*index, roles_QMap);
}

bool QFileSystemModel_override_virtual_clearItemData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clearItemData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_clearItemData(void* self, QModelIndex* index) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::clearItemData(*index);
}

bool QFileSystemModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QFileSystemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QFileSystemModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QFileSystemModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QFileSystemModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = slot;
	return true;
}

bool QFileSystemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QFileSystemModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = slot;
	return true;
}

bool QFileSystemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QFileSystemModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = slot;
	return true;
}

bool QFileSystemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QFileSystemModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = slot;
	return true;
}

bool QFileSystemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QFileSystemModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = slot;
	return true;
}

bool QFileSystemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QFileSystemModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = slot;
	return true;
}

bool QFileSystemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QFileSystemModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QFileSystemModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::buddy(*index));
}

bool QFileSystemModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QFileSystemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<QFlags<Qt::MatchFlag>>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QFileSystemModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = slot;
	return true;
}

QSize* QFileSystemModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::span(*index));
}

bool QFileSystemModel_override_virtual_multiData(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__multiData = slot;
	return true;
}

void QFileSystemModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	static_cast<const MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::multiData(*index, *roleDataSpan);
}

bool QFileSystemModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = slot;
	return true;
}

bool QFileSystemModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::submit();
}

bool QFileSystemModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = slot;
	return true;
}

void QFileSystemModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::revert();
}

bool QFileSystemModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QFileSystemModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::event(event);
}

bool QFileSystemModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QFileSystemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQFileSystemModel*>(self)->QFileSystemModel::eventFilter(watched, event);
}

QModelIndex* QFileSystemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column, uint64_t id) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column), static_cast<uint64_t>(id)));
}

void QFileSystemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList indexes_QList;
		indexes_QList.reserve(indexes.len);
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
		for(size_t i = 0; i < indexes.len; ++i) {
			indexes_QList.push_back(*(indexes_arr[i]));
		}
	self_cast->encodeData(indexes_QList, *stream);
}

bool QFileSystemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

void QFileSystemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QFileSystemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QFileSystemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QFileSystemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

bool QFileSystemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QFileSystemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

void QFileSystemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QFileSystemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QFileSystemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QFileSystemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

bool QFileSystemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QFileSystemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QFileSystemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QFileSystemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QFileSystemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QFileSystemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList from_QList;
		from_QList.reserve(from.len);
		QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
		for(size_t i = 0; i < from.len; ++i) {
			from_QList.push_back(*(from_arr[i]));
		}
		QModelIndexList to_QList;
		to_QList.reserve(to.len);
		QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
		for(size_t i = 0; i < to.len; ++i) {
			to_QList.push_back(*(to_arr[i]));
		}
	self_cast->changePersistentIndexList(from_QList, to_QList);
}

struct miqt_array /* of QModelIndex* */  QFileSystemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return {};
	}

	*_dynamic_cast_ok = true;
	QModelIndexList _ret = self_cast->persistentIndexList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QObject* QFileSystemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QFileSystemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QFileSystemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QFileSystemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFileSystemModel* self_cast = static_cast<MiqtVirtualQFileSystemModel*>( (QFileSystemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QFileSystemModel_delete(QFileSystemModel* self) {
	delete self;
}

QFontInfo* QFontInfo_new(QFont* param1) {
	return new (std::nothrow) QFontInfo(*param1);
}

QFontInfo* QFontInfo_new2(QFontInfo* param1) {
	return new (std::nothrow) QFontInfo(*param1);
}

void QFontInfo_swap(QFontInfo* self, QFontInfo* other) {
	self->swap(*other);
}

struct miqt_string QFontInfo_family(const QFontInfo* self) {
	QString _ret = self->family();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFontInfo_styleName(const QFontInfo* self) {
	QString _ret = self->styleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFontInfo_pixelSize(const QFontInfo* self) {
	return self->pixelSize();
}

int QFontInfo_pointSize(const QFontInfo* self) {
	return self->pointSize();
}

double QFontInfo_pointSizeF(const QFontInfo* self) {
	double _ret = self->pointSizeF();
	return static_cast<double>(_ret);
}

bool QFontInfo_italic(const QFontInfo* self) {
	return self->italic();
}

int QFontInfo_style(const QFontInfo* self) {
	QFont::Style _ret = self->style();
	return static_cast<int>(_ret);
}

int QFontInfo_weight(const QFontInfo* self) {
	return self->weight();
}

bool QFontInfo_bold(const QFontInfo* self) {
	return self->bold();
}

bool QFontInfo_underline(const QFontInfo* self) {
	return self->underline();
}

bool QFontInfo_overline(const QFontInfo* self) {
	return self->overline();
}

bool QFontInfo_strikeOut(const QFontInfo* self) {
	return self->strikeOut();
}

bool QFontInfo_fixedPitch(const QFontInfo* self) {
	return self->fixedPitch();
}

int QFontInfo_styleHint(const QFontInfo* self) {
	QFont::StyleHint _ret = self->styleHint();
	return static_cast<int>(_ret);
}

struct miqt_array /* of QFontVariableAxis* */  QFontInfo_variableAxes(const QFontInfo* self) {
	QList<QFontVariableAxis> _ret = self->variableAxes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QFontVariableAxis** _arr = static_cast<QFontVariableAxis**>(malloc(sizeof(QFontVariableAxis*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFontVariableAxis(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QFontInfo_legacyWeight(const QFontInfo* self) {
	return self->legacyWeight();
}

bool QFontInfo_exactMatch(const QFontInfo* self) {
	return self->exactMatch();
}

void QFontInfo_delete(QFontInfo* self) {
	delete self;
}

QFontMetrics* QFontMetrics_new(QFont* param1) {
	return new (std::nothrow) QFontMetrics(*param1);
}

QFontMetrics* QFontMetrics_new2(QFont* font, QPaintDevice* pd) {
	return new (std::nothrow) QFontMetrics(*font, pd);
}

QFontMetrics* QFontMetrics_new3(QFontMetrics* param1) {
	return new (std::nothrow) QFontMetrics(*param1);
}

void QFontMetrics_swap(QFontMetrics* self, QFontMetrics* other) {
	self->swap(*other);
}

int QFontMetrics_ascent(const QFontMetrics* self) {
	return self->ascent();
}

int QFontMetrics_capHeight(const QFontMetrics* self) {
	return self->capHeight();
}

int QFontMetrics_descent(const QFontMetrics* self) {
	return self->descent();
}

int QFontMetrics_height(const QFontMetrics* self) {
	return self->height();
}

int QFontMetrics_leading(const QFontMetrics* self) {
	return self->leading();
}

int QFontMetrics_lineSpacing(const QFontMetrics* self) {
	return self->lineSpacing();
}

int QFontMetrics_minLeftBearing(const QFontMetrics* self) {
	return self->minLeftBearing();
}

int QFontMetrics_minRightBearing(const QFontMetrics* self) {
	return self->minRightBearing();
}

int QFontMetrics_maxWidth(const QFontMetrics* self) {
	return self->maxWidth();
}

int QFontMetrics_xHeight(const QFontMetrics* self) {
	return self->xHeight();
}

int QFontMetrics_averageCharWidth(const QFontMetrics* self) {
	return self->averageCharWidth();
}

bool QFontMetrics_inFont(const QFontMetrics* self, QChar* param1) {
	return self->inFont(*param1);
}

bool QFontMetrics_inFontUcs4(const QFontMetrics* self, unsigned int ucs4) {
	return self->inFontUcs4(static_cast<unsigned int>(ucs4));
}

int QFontMetrics_leftBearing(const QFontMetrics* self, QChar* param1) {
	return self->leftBearing(*param1);
}

int QFontMetrics_rightBearing(const QFontMetrics* self, QChar* param1) {
	return self->rightBearing(*param1);
}

int QFontMetrics_horizontalAdvance(const QFontMetrics* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->horizontalAdvance(param1_QString);
}

int QFontMetrics_horizontalAdvance2(const QFontMetrics* self, struct miqt_string param1, QTextOption* textOption) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->horizontalAdvance(param1_QString, *textOption);
}

int QFontMetrics_horizontalAdvanceWithQChar(const QFontMetrics* self, QChar* param1) {
	return self->horizontalAdvance(*param1);
}

QRect* QFontMetrics_boundingRect(const QFontMetrics* self, QChar* param1) {
	return new QRect(self->boundingRect(*param1));
}

QRect* QFontMetrics_boundingRectWithText(const QFontMetrics* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(text_QString));
}

QRect* QFontMetrics_boundingRect2(const QFontMetrics* self, struct miqt_string text, QTextOption* textOption) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(text_QString, *textOption));
}

QRect* QFontMetrics_boundingRect3(const QFontMetrics* self, QRect* r, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(*r, static_cast<int>(flags), text_QString));
}

QRect* QFontMetrics_boundingRect4(const QFontMetrics* self, int x, int y, int w, int h, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString));
}

QSize* QFontMetrics_size(const QFontMetrics* self, int flags, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSize(self->size(static_cast<int>(flags), str_QString));
}

QRect* QFontMetrics_tightBoundingRect(const QFontMetrics* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->tightBoundingRect(text_QString));
}

QRect* QFontMetrics_tightBoundingRect2(const QFontMetrics* self, struct miqt_string text, QTextOption* textOption) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->tightBoundingRect(text_QString, *textOption));
}

struct miqt_string QFontMetrics_elidedText(const QFontMetrics* self, struct miqt_string text, int mode, int width) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<int>(width));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFontMetrics_underlinePos(const QFontMetrics* self) {
	return self->underlinePos();
}

int QFontMetrics_overlinePos(const QFontMetrics* self) {
	return self->overlinePos();
}

int QFontMetrics_strikeOutPos(const QFontMetrics* self) {
	return self->strikeOutPos();
}

int QFontMetrics_lineWidth(const QFontMetrics* self) {
	return self->lineWidth();
}

double QFontMetrics_fontDpi(const QFontMetrics* self) {
	double _ret = self->fontDpi();
	return static_cast<double>(_ret);
}

bool QFontMetrics_operatorNotEqual(const QFontMetrics* self, QFontMetrics* other) {
	return (*self != *other);
}

int QFontMetrics_horizontalAdvance3(const QFontMetrics* self, struct miqt_string param1, int len) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->horizontalAdvance(param1_QString, static_cast<int>(len));
}

QRect* QFontMetrics_boundingRect5(const QFontMetrics* self, QRect* r, int flags, struct miqt_string text, int tabstops) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops)));
}

QRect* QFontMetrics_boundingRect6(const QFontMetrics* self, QRect* r, int flags, struct miqt_string text, int tabstops, int* tabarray) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(*r, static_cast<int>(flags), text_QString, static_cast<int>(tabstops), tabarray));
}

QRect* QFontMetrics_boundingRect7(const QFontMetrics* self, int x, int y, int w, int h, int flags, struct miqt_string text, int tabstops) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops)));
}

QRect* QFontMetrics_boundingRect8(const QFontMetrics* self, int x, int y, int w, int h, int flags, struct miqt_string text, int tabstops, int* tabarray) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, static_cast<int>(tabstops), tabarray));
}

QSize* QFontMetrics_size2(const QFontMetrics* self, int flags, struct miqt_string str, int tabstops) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSize(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops)));
}

QSize* QFontMetrics_size3(const QFontMetrics* self, int flags, struct miqt_string str, int tabstops, int* tabarray) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSize(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), tabarray));
}

struct miqt_string QFontMetrics_elidedText2(const QFontMetrics* self, struct miqt_string text, int mode, int width, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<int>(width), static_cast<int>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontMetrics_delete(QFontMetrics* self) {
	delete self;
}

QFontMetricsF* QFontMetricsF_new(QFont* font) {
	return new (std::nothrow) QFontMetricsF(*font);
}

QFontMetricsF* QFontMetricsF_new2(QFont* font, QPaintDevice* pd) {
	return new (std::nothrow) QFontMetricsF(*font, pd);
}

QFontMetricsF* QFontMetricsF_new3(QFontMetrics* param1) {
	return new (std::nothrow) QFontMetricsF(*param1);
}

QFontMetricsF* QFontMetricsF_new4(QFontMetricsF* param1) {
	return new (std::nothrow) QFontMetricsF(*param1);
}

void QFontMetricsF_swap(QFontMetricsF* self, QFontMetricsF* other) {
	self->swap(*other);
}

double QFontMetricsF_ascent(const QFontMetricsF* self) {
	double _ret = self->ascent();
	return static_cast<double>(_ret);
}

double QFontMetricsF_capHeight(const QFontMetricsF* self) {
	double _ret = self->capHeight();
	return static_cast<double>(_ret);
}

double QFontMetricsF_descent(const QFontMetricsF* self) {
	double _ret = self->descent();
	return static_cast<double>(_ret);
}

double QFontMetricsF_height(const QFontMetricsF* self) {
	double _ret = self->height();
	return static_cast<double>(_ret);
}

double QFontMetricsF_leading(const QFontMetricsF* self) {
	double _ret = self->leading();
	return static_cast<double>(_ret);
}

double QFontMetricsF_lineSpacing(const QFontMetricsF* self) {
	double _ret = self->lineSpacing();
	return static_cast<double>(_ret);
}

double QFontMetricsF_minLeftBearing(const QFontMetricsF* self) {
	double _ret = self->minLeftBearing();
	return static_cast<double>(_ret);
}

double QFontMetricsF_minRightBearing(const QFontMetricsF* self) {
	double _ret = self->minRightBearing();
	return static_cast<double>(_ret);
}

double QFontMetricsF_maxWidth(const QFontMetricsF* self) {
	double _ret = self->maxWidth();
	return static_cast<double>(_ret);
}

double QFontMetricsF_xHeight(const QFontMetricsF* self) {
	double _ret = self->xHeight();
	return static_cast<double>(_ret);
}

double QFontMetricsF_averageCharWidth(const QFontMetricsF* self) {
	double _ret = self->averageCharWidth();
	return static_cast<double>(_ret);
}

bool QFontMetricsF_inFont(const QFontMetricsF* self, QChar* param1) {
	return self->inFont(*param1);
}

bool QFontMetricsF_inFontUcs4(const QFontMetricsF* self, unsigned int ucs4) {
	return self->inFontUcs4(static_cast<unsigned int>(ucs4));
}

double QFontMetricsF_leftBearing(const QFontMetricsF* self, QChar* param1) {
	double _ret = self->leftBearing(*param1);
	return static_cast<double>(_ret);
}

double QFontMetricsF_rightBearing(const QFontMetricsF* self, QChar* param1) {
	double _ret = self->rightBearing(*param1);
	return static_cast<double>(_ret);
}

double QFontMetricsF_horizontalAdvance(const QFontMetricsF* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	double _ret = self->horizontalAdvance(string_QString);
	return static_cast<double>(_ret);
}

double QFontMetricsF_horizontalAdvanceWithQChar(const QFontMetricsF* self, QChar* param1) {
	double _ret = self->horizontalAdvance(*param1);
	return static_cast<double>(_ret);
}

double QFontMetricsF_horizontalAdvance2(const QFontMetricsF* self, struct miqt_string string, QTextOption* textOption) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	double _ret = self->horizontalAdvance(string_QString, *textOption);
	return static_cast<double>(_ret);
}

QRectF* QFontMetricsF_boundingRect(const QFontMetricsF* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QRectF(self->boundingRect(string_QString));
}

QRectF* QFontMetricsF_boundingRect2(const QFontMetricsF* self, struct miqt_string text, QTextOption* textOption) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->boundingRect(text_QString, *textOption));
}

QRectF* QFontMetricsF_boundingRectWithQChar(const QFontMetricsF* self, QChar* param1) {
	return new QRectF(self->boundingRect(*param1));
}

QRectF* QFontMetricsF_boundingRect3(const QFontMetricsF* self, QRectF* r, int flags, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QRectF(self->boundingRect(*r, static_cast<int>(flags), string_QString));
}

QSizeF* QFontMetricsF_size(const QFontMetricsF* self, int flags, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSizeF(self->size(static_cast<int>(flags), str_QString));
}

QRectF* QFontMetricsF_tightBoundingRect(const QFontMetricsF* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->tightBoundingRect(text_QString));
}

QRectF* QFontMetricsF_tightBoundingRect2(const QFontMetricsF* self, struct miqt_string text, QTextOption* textOption) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->tightBoundingRect(text_QString, *textOption));
}

struct miqt_string QFontMetricsF_elidedText(const QFontMetricsF* self, struct miqt_string text, int mode, double width) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<double>(width));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QFontMetricsF_underlinePos(const QFontMetricsF* self) {
	double _ret = self->underlinePos();
	return static_cast<double>(_ret);
}

double QFontMetricsF_overlinePos(const QFontMetricsF* self) {
	double _ret = self->overlinePos();
	return static_cast<double>(_ret);
}

double QFontMetricsF_strikeOutPos(const QFontMetricsF* self) {
	double _ret = self->strikeOutPos();
	return static_cast<double>(_ret);
}

double QFontMetricsF_lineWidth(const QFontMetricsF* self) {
	double _ret = self->lineWidth();
	return static_cast<double>(_ret);
}

double QFontMetricsF_fontDpi(const QFontMetricsF* self) {
	double _ret = self->fontDpi();
	return static_cast<double>(_ret);
}

bool QFontMetricsF_operatorNotEqual(const QFontMetricsF* self, QFontMetricsF* other) {
	return (*self != *other);
}

double QFontMetricsF_horizontalAdvance3(const QFontMetricsF* self, struct miqt_string string, int length) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	double _ret = self->horizontalAdvance(string_QString, static_cast<int>(length));
	return static_cast<double>(_ret);
}

QRectF* QFontMetricsF_boundingRect4(const QFontMetricsF* self, QRectF* r, int flags, struct miqt_string string, int tabstops) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QRectF(self->boundingRect(*r, static_cast<int>(flags), string_QString, static_cast<int>(tabstops)));
}

QRectF* QFontMetricsF_boundingRect5(const QFontMetricsF* self, QRectF* r, int flags, struct miqt_string string, int tabstops, int* tabarray) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QRectF(self->boundingRect(*r, static_cast<int>(flags), string_QString, static_cast<int>(tabstops), tabarray));
}

QSizeF* QFontMetricsF_size2(const QFontMetricsF* self, int flags, struct miqt_string str, int tabstops) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSizeF(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops)));
}

QSizeF* QFontMetricsF_size3(const QFontMetricsF* self, int flags, struct miqt_string str, int tabstops, int* tabarray) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new QSizeF(self->size(static_cast<int>(flags), str_QString, static_cast<int>(tabstops), tabarray));
}

struct miqt_string QFontMetricsF_elidedText2(const QFontMetricsF* self, struct miqt_string text, int mode, double width, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString _ret = self->elidedText(text_QString, static_cast<Qt::TextElideMode>(mode), static_cast<double>(width), static_cast<int>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFontMetricsF_delete(QFontMetricsF* self) {
	delete self;
}

class MiqtVirtualQIconEngine final : public QIconEngine {
public:

	MiqtVirtualQIconEngine(): QIconEngine() {}

	virtual ~MiqtVirtualQIconEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QRect& rect, QIcon::Mode mode, QIcon::State state) override {
		if (handle__paint == 0) {
			return; // Pure virtual, there is no base we can call
		}

		QPainter* sigval1 = painter;
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&rect_ret);
		QIcon::Mode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval4 = static_cast<int>(state_ret);
		miqt_exec_callback_QIconEngine_paint(this, handle__paint, sigval1, sigval2, sigval3, sigval4);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actualSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize actualSize(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
		if (handle__actualSize == 0) {
			return QIconEngine::actualSize(size, mode, state);
		}

		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		QIcon::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		QSize* callback_return_value = miqt_exec_callback_QIconEngine_actualSize(this, handle__actualSize, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QSize* QIconEngine_virtualbase_actualSize(void* self, QSize* size, int mode, int state);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap pixmap(const QSize& size, QIcon::Mode mode, QIcon::State state) override {
		if (handle__pixmap == 0) {
			return QIconEngine::pixmap(size, mode, state);
		}

		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		QIcon::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		QPixmap* callback_return_value = miqt_exec_callback_QIconEngine_pixmap(this, handle__pixmap, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QPixmap* QIconEngine_virtualbase_pixmap(void* self, QSize* size, int mode, int state);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual void addPixmap(const QPixmap& pixmap, QIcon::Mode mode, QIcon::State state) override {
		if (handle__addPixmap == 0) {
			QIconEngine::addPixmap(pixmap, mode, state);
			return;
		}

		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval1 = const_cast<QPixmap*>(&pixmap_ret);
		QIcon::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		miqt_exec_callback_QIconEngine_addPixmap(this, handle__addPixmap, sigval1, sigval2, sigval3);

	}

	friend void QIconEngine_virtualbase_addPixmap(void* self, QPixmap* pixmap, int mode, int state);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addFile = 0;

	// Subclass to allow providing a Go implementation
	virtual void addFile(const QString& fileName, const QSize& size, QIcon::Mode mode, QIcon::State state) override {
		if (handle__addFile == 0) {
			QIconEngine::addFile(fileName, size, mode, state);
			return;
		}

		const QString fileName_ret = fileName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray fileName_b = fileName_ret.toUtf8();
		struct miqt_string fileName_ms;
		fileName_ms.len = fileName_b.length();
		fileName_ms.data = static_cast<char*>(malloc(fileName_ms.len));
		memcpy(fileName_ms.data, fileName_b.data(), fileName_ms.len);
		struct miqt_string sigval1 = fileName_ms;
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval2 = const_cast<QSize*>(&size_ret);
		QIcon::Mode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval4 = static_cast<int>(state_ret);
		miqt_exec_callback_QIconEngine_addFile(this, handle__addFile, sigval1, sigval2, sigval3, sigval4);

	}

	friend void QIconEngine_virtualbase_addFile(void* self, struct miqt_string fileName, QSize* size, int mode, int state);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__key = 0;

	// Subclass to allow providing a Go implementation
	virtual QString key() const override {
		if (handle__key == 0) {
			return QIconEngine::key();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QIconEngine_key(this, handle__key);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QIconEngine_virtualbase_key(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QIconEngine* clone() const override {
		if (handle__clone == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QIconEngine* callback_return_value = miqt_exec_callback_QIconEngine_clone(this, handle__clone);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__read = 0;

	// Subclass to allow providing a Go implementation
	virtual bool read(QDataStream& in) override {
		if (handle__read == 0) {
			return QIconEngine::read(in);
		}

		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;
		bool callback_return_value = miqt_exec_callback_QIconEngine_read(this, handle__read, sigval1);
		return callback_return_value;
	}

	friend bool QIconEngine_virtualbase_read(void* self, QDataStream* in);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__write = 0;

	// Subclass to allow providing a Go implementation
	virtual bool write(QDataStream& out) const override {
		if (handle__write == 0) {
			return QIconEngine::write(out);
		}

		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;
		bool callback_return_value = miqt_exec_callback_QIconEngine_write(this, handle__write, sigval1);
		return callback_return_value;
	}

	friend bool QIconEngine_virtualbase_write(const void* self, QDataStream* out);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__availableSizes = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QSize> availableSizes(QIcon::Mode mode, QIcon::State state) override {
		if (handle__availableSizes == 0) {
			return QIconEngine::availableSizes(mode, state);
		}

		QIcon::Mode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		struct miqt_array /* of QSize* */  callback_return_value = miqt_exec_callback_QIconEngine_availableSizes(this, handle__availableSizes, sigval1, sigval2);
		QList<QSize> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QSize** callback_return_value_arr = static_cast<QSize**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QSize* */  QIconEngine_virtualbase_availableSizes(void* self, int mode, int state);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__iconName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString iconName() override {
		if (handle__iconName == 0) {
			return QIconEngine::iconName();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QIconEngine_iconName(this, handle__iconName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QIconEngine_virtualbase_iconName(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isNull = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isNull() override {
		if (handle__isNull == 0) {
			return QIconEngine::isNull();
		}

		bool callback_return_value = miqt_exec_callback_QIconEngine_isNull(this, handle__isNull);
		return callback_return_value;
	}

	friend bool QIconEngine_virtualbase_isNull(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__scaledPixmap = 0;

	// Subclass to allow providing a Go implementation
	virtual QPixmap scaledPixmap(const QSize& size, QIcon::Mode mode, QIcon::State state, qreal scale) override {
		if (handle__scaledPixmap == 0) {
			return QIconEngine::scaledPixmap(size, mode, state, scale);
		}

		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		QIcon::Mode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		QIcon::State state_ret = state;
		int sigval3 = static_cast<int>(state_ret);
		double scale_ret = scale;
		double sigval4 = static_cast<double>(scale_ret);
		QPixmap* callback_return_value = miqt_exec_callback_QIconEngine_scaledPixmap(this, handle__scaledPixmap, sigval1, sigval2, sigval3, sigval4);
		return *callback_return_value;
	}

	friend QPixmap* QIconEngine_virtualbase_scaledPixmap(void* self, QSize* size, int mode, int state, double scale);

};

QIconEngine* QIconEngine_new() {
	return new (std::nothrow) MiqtVirtualQIconEngine();
}

void QIconEngine_paint(QIconEngine* self, QPainter* painter, QRect* rect, int mode, int state) {
	self->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

QSize* QIconEngine_actualSize(QIconEngine* self, QSize* size, int mode, int state) {
	return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIconEngine_pixmap(QIconEngine* self, QSize* size, int mode, int state) {
	return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

void QIconEngine_addPixmap(QIconEngine* self, QPixmap* pixmap, int mode, int state) {
	self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIconEngine_addFile(QIconEngine* self, struct miqt_string fileName, QSize* size, int mode, int state) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

struct miqt_string QIconEngine_key(const QIconEngine* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIconEngine* QIconEngine_clone(const QIconEngine* self) {
	return self->clone();
}

bool QIconEngine_read(QIconEngine* self, QDataStream* in) {
	return self->read(*in);
}

bool QIconEngine_write(const QIconEngine* self, QDataStream* out) {
	return self->write(*out);
}

struct miqt_array /* of QSize* */  QIconEngine_availableSizes(QIconEngine* self, int mode, int state) {
	QList<QSize> _ret = self->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QIconEngine_iconName(QIconEngine* self) {
	QString _ret = self->iconName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QIconEngine_isNull(QIconEngine* self) {
	return self->isNull();
}

QPixmap* QIconEngine_scaledPixmap(QIconEngine* self, QSize* size, int mode, int state, double scale) {
	return new QPixmap(self->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<double>(scale)));
}

bool QIconEngine_override_virtual_paint(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paint = slot;
	return true;
}

bool QIconEngine_override_virtual_actualSize(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actualSize = slot;
	return true;
}

QSize* QIconEngine_virtualbase_actualSize(void* self, QSize* size, int mode, int state) {
	return new QSize(static_cast<MiqtVirtualQIconEngine*>(self)->QIconEngine::actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

bool QIconEngine_override_virtual_pixmap(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pixmap = slot;
	return true;
}

QPixmap* QIconEngine_virtualbase_pixmap(void* self, QSize* size, int mode, int state) {
	return new QPixmap(static_cast<MiqtVirtualQIconEngine*>(self)->QIconEngine::pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

bool QIconEngine_override_virtual_addPixmap(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addPixmap = slot;
	return true;
}

void QIconEngine_virtualbase_addPixmap(void* self, QPixmap* pixmap, int mode, int state) {
	static_cast<MiqtVirtualQIconEngine*>(self)->QIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

bool QIconEngine_override_virtual_addFile(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addFile = slot;
	return true;
}

void QIconEngine_virtualbase_addFile(void* self, struct miqt_string fileName, QSize* size, int mode, int state) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	static_cast<MiqtVirtualQIconEngine*>(self)->QIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

bool QIconEngine_override_virtual_key(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__key = slot;
	return true;
}

struct miqt_string QIconEngine_virtualbase_key(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQIconEngine*>(self)->QIconEngine::key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QIconEngine_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

bool QIconEngine_override_virtual_read(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__read = slot;
	return true;
}

bool QIconEngine_virtualbase_read(void* self, QDataStream* in) {
	return static_cast<MiqtVirtualQIconEngine*>(self)->QIconEngine::read(*in);
}

bool QIconEngine_override_virtual_write(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__write = slot;
	return true;
}

bool QIconEngine_virtualbase_write(const void* self, QDataStream* out) {
	return static_cast<const MiqtVirtualQIconEngine*>(self)->QIconEngine::write(*out);
}

bool QIconEngine_override_virtual_availableSizes(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__availableSizes = slot;
	return true;
}

struct miqt_array /* of QSize* */  QIconEngine_virtualbase_availableSizes(void* self, int mode, int state) {
	QList<QSize> _ret = static_cast<MiqtVirtualQIconEngine*>(self)->QIconEngine::availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QIconEngine_override_virtual_iconName(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__iconName = slot;
	return true;
}

struct miqt_string QIconEngine_virtualbase_iconName(void* self) {
	QString _ret = static_cast<MiqtVirtualQIconEngine*>(self)->QIconEngine::iconName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QIconEngine_override_virtual_isNull(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isNull = slot;
	return true;
}

bool QIconEngine_virtualbase_isNull(void* self) {
	return static_cast<MiqtVirtualQIconEngine*>(self)->QIconEngine::isNull();
}

bool QIconEngine_override_virtual_scaledPixmap(void* self, intptr_t slot) {
	MiqtVirtualQIconEngine* self_cast = static_cast<MiqtVirtualQIconEngine*>( (QIconEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaledPixmap = slot;
	return true;
}

QPixmap* QIconEngine_virtualbase_scaledPixmap(void* self, QSize* size, int mode, int state, double scale) {
	return new QPixmap(static_cast<MiqtVirtualQIconEngine*>(self)->QIconEngine::scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<double>(scale)));
}

void QIconEngine_delete(QIconEngine* self) {
	delete self;
}

QImageReader* QImageReader_new() {
	return new (std::nothrow) QImageReader();
}

QImageReader* QImageReader_new2(QIODevice* device) {
	return new (std::nothrow) QImageReader(device);
}

QImageReader* QImageReader_new3(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) QImageReader(fileName_QString);
}

QImageReader* QImageReader_new4(QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	return new (std::nothrow) QImageReader(device, format_QByteArray);
}

QImageReader* QImageReader_new5(struct miqt_string fileName, struct miqt_string format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray format_QByteArray(format.data, format.len);
	return new (std::nothrow) QImageReader(fileName_QString, format_QByteArray);
}

struct miqt_string QImageReader_tr(const char* sourceText) {
	QString _ret = QImageReader::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageReader_setFormat(QImageReader* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

struct miqt_string QImageReader_format(const QImageReader* self) {
	QByteArray _qb = self->format();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QImageReader_setAutoDetectImageFormat(QImageReader* self, bool enabled) {
	self->setAutoDetectImageFormat(enabled);
}

bool QImageReader_autoDetectImageFormat(const QImageReader* self) {
	return self->autoDetectImageFormat();
}

void QImageReader_setDecideFormatFromContent(QImageReader* self, bool ignored) {
	self->setDecideFormatFromContent(ignored);
}

bool QImageReader_decideFormatFromContent(const QImageReader* self) {
	return self->decideFormatFromContent();
}

void QImageReader_setDevice(QImageReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QImageReader_device(const QImageReader* self) {
	return self->device();
}

void QImageReader_setFileName(QImageReader* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

struct miqt_string QImageReader_fileName(const QImageReader* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QImageReader_size(const QImageReader* self) {
	return new QSize(self->size());
}

int QImageReader_imageFormat(const QImageReader* self) {
	QImage::Format _ret = self->imageFormat();
	return static_cast<int>(_ret);
}

struct miqt_array /* of struct miqt_string */  QImageReader_textKeys(const QImageReader* self) {
	QStringList _ret = self->textKeys();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QImageReader_text(const QImageReader* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString _ret = self->text(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageReader_setClipRect(QImageReader* self, QRect* rect) {
	self->setClipRect(*rect);
}

QRect* QImageReader_clipRect(const QImageReader* self) {
	return new QRect(self->clipRect());
}

void QImageReader_setScaledSize(QImageReader* self, QSize* size) {
	self->setScaledSize(*size);
}

QSize* QImageReader_scaledSize(const QImageReader* self) {
	return new QSize(self->scaledSize());
}

void QImageReader_setQuality(QImageReader* self, int quality) {
	self->setQuality(static_cast<int>(quality));
}

int QImageReader_quality(const QImageReader* self) {
	return self->quality();
}

void QImageReader_setScaledClipRect(QImageReader* self, QRect* rect) {
	self->setScaledClipRect(*rect);
}

QRect* QImageReader_scaledClipRect(const QImageReader* self) {
	return new QRect(self->scaledClipRect());
}

void QImageReader_setBackgroundColor(QImageReader* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QColor* QImageReader_backgroundColor(const QImageReader* self) {
	return new QColor(self->backgroundColor());
}

bool QImageReader_supportsAnimation(const QImageReader* self) {
	return self->supportsAnimation();
}

int QImageReader_transformation(const QImageReader* self) {
	QImageIOHandler::Transformations _ret = self->transformation();
	return static_cast<int>(_ret);
}

void QImageReader_setAutoTransform(QImageReader* self, bool enabled) {
	self->setAutoTransform(enabled);
}

bool QImageReader_autoTransform(const QImageReader* self) {
	return self->autoTransform();
}

struct miqt_string QImageReader_subType(const QImageReader* self) {
	QByteArray _qb = self->subType();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QImageReader_supportedSubTypes(const QImageReader* self) {
	QList<QByteArray> _ret = self->supportedSubTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QImageReader_canRead(const QImageReader* self) {
	return self->canRead();
}

QImage* QImageReader_read(QImageReader* self) {
	return new QImage(self->read());
}

bool QImageReader_readWithImage(QImageReader* self, QImage* image) {
	return self->read(image);
}

bool QImageReader_jumpToNextImage(QImageReader* self) {
	return self->jumpToNextImage();
}

bool QImageReader_jumpToImage(QImageReader* self, int imageNumber) {
	return self->jumpToImage(static_cast<int>(imageNumber));
}

int QImageReader_loopCount(const QImageReader* self) {
	return self->loopCount();
}

int QImageReader_imageCount(const QImageReader* self) {
	return self->imageCount();
}

int QImageReader_nextImageDelay(const QImageReader* self) {
	return self->nextImageDelay();
}

int QImageReader_currentImageNumber(const QImageReader* self) {
	return self->currentImageNumber();
}

QRect* QImageReader_currentImageRect(const QImageReader* self) {
	return new QRect(self->currentImageRect());
}

int QImageReader_error(const QImageReader* self) {
	return self->error();
}

struct miqt_string QImageReader_errorString(const QImageReader* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImageReader_supportsOption(const QImageReader* self, int option) {
	return self->supportsOption(static_cast<QImageIOHandler::ImageOption>(option));
}

struct miqt_string QImageReader_imageFormatWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray _qb = QImageReader::imageFormat(fileName_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageReader_imageFormatWithDevice(QIODevice* device) {
	QByteArray _qb = QImageReader::imageFormat(device);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QImageReader_supportedImageFormats() {
	QList<QByteArray> _ret = QImageReader::supportedImageFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QImageReader_supportedMimeTypes() {
	QList<QByteArray> _ret = QImageReader::supportedMimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QImageReader_imageFormatsForMimeType(struct miqt_string mimeType) {
	QByteArray mimeType_QByteArray(mimeType.data, mimeType.len);
	QList<QByteArray> _ret = QImageReader::imageFormatsForMimeType(mimeType_QByteArray);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QImageReader_allocationLimit() {
	return QImageReader::allocationLimit();
}

void QImageReader_setAllocationLimit(int mbLimit) {
	QImageReader::setAllocationLimit(static_cast<int>(mbLimit));
}

struct miqt_string QImageReader_tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QImageReader::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageReader_tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QImageReader::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageReader_delete(QImageReader* self) {
	delete self;
}

QMatrix4x4* QMatrix4x4_new() {
	return new (std::nothrow) QMatrix4x4();
}

QMatrix4x4* QMatrix4x4_new2(int param1) {
	return new (std::nothrow) QMatrix4x4(static_cast<Qt::Initialization>(param1));
}

QMatrix4x4* QMatrix4x4_new3(const float* values) {
	return new (std::nothrow) QMatrix4x4(values);
}

QMatrix4x4* QMatrix4x4_new4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) {
	return new (std::nothrow) QMatrix4x4(static_cast<float>(m11), static_cast<float>(m12), static_cast<float>(m13), static_cast<float>(m14), static_cast<float>(m21), static_cast<float>(m22), static_cast<float>(m23), static_cast<float>(m24), static_cast<float>(m31), static_cast<float>(m32), static_cast<float>(m33), static_cast<float>(m34), static_cast<float>(m41), static_cast<float>(m42), static_cast<float>(m43), static_cast<float>(m44));
}

QMatrix4x4* QMatrix4x4_new5(const float* values, int cols, int rows) {
	return new (std::nothrow) QMatrix4x4(values, static_cast<int>(cols), static_cast<int>(rows));
}

QMatrix4x4* QMatrix4x4_new6(QTransform* transform) {
	return new (std::nothrow) QMatrix4x4(*transform);
}

QMatrix4x4* QMatrix4x4_new7(QMatrix4x4* param1) {
	return new (std::nothrow) QMatrix4x4(*param1);
}

QVector4D* QMatrix4x4_column(const QMatrix4x4* self, int index) {
	return new QVector4D(self->column(static_cast<int>(index)));
}

void QMatrix4x4_setColumn(QMatrix4x4* self, int index, QVector4D* value) {
	self->setColumn(static_cast<int>(index), *value);
}

QVector4D* QMatrix4x4_row(const QMatrix4x4* self, int index) {
	return new QVector4D(self->row(static_cast<int>(index)));
}

void QMatrix4x4_setRow(QMatrix4x4* self, int index, QVector4D* value) {
	self->setRow(static_cast<int>(index), *value);
}

bool QMatrix4x4_isAffine(const QMatrix4x4* self) {
	return self->isAffine();
}

bool QMatrix4x4_isIdentity(const QMatrix4x4* self) {
	return self->isIdentity();
}

void QMatrix4x4_setToIdentity(QMatrix4x4* self) {
	self->setToIdentity();
}

void QMatrix4x4_fill(QMatrix4x4* self, float value) {
	self->fill(static_cast<float>(value));
}

double QMatrix4x4_determinant(const QMatrix4x4* self) {
	return self->determinant();
}

QMatrix4x4* QMatrix4x4_inverted(const QMatrix4x4* self) {
	return new QMatrix4x4(self->inverted());
}

QMatrix4x4* QMatrix4x4_transposed(const QMatrix4x4* self) {
	return new QMatrix4x4(self->transposed());
}

QMatrix4x4* QMatrix4x4_operatorPlusAssign(QMatrix4x4* self, QMatrix4x4* other) {
	QMatrix4x4& _ret = self->operator+=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_operatorMinusAssign(QMatrix4x4* self, QMatrix4x4* other) {
	QMatrix4x4& _ret = self->operator-=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_operatorMultiplyAssign(QMatrix4x4* self, QMatrix4x4* other) {
	QMatrix4x4& _ret = self->operator*=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_operatorMultiplyAssignWithFactor(QMatrix4x4* self, float factor) {
	QMatrix4x4& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QMatrix4x4* QMatrix4x4_operatorDivideAssign(QMatrix4x4* self, float divisor) {
	QMatrix4x4& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

bool QMatrix4x4_operatorNotEqual(const QMatrix4x4* self, QMatrix4x4* other) {
	return (*self != *other);
}

void QMatrix4x4_scale(QMatrix4x4* self, QVector3D* vector) {
	self->scale(*vector);
}

void QMatrix4x4_translate(QMatrix4x4* self, QVector3D* vector) {
	self->translate(*vector);
}

void QMatrix4x4_rotate(QMatrix4x4* self, float angle, QVector3D* vector) {
	self->rotate(static_cast<float>(angle), *vector);
}

void QMatrix4x4_scale2(QMatrix4x4* self, float x, float y) {
	self->scale(static_cast<float>(x), static_cast<float>(y));
}

void QMatrix4x4_scale3(QMatrix4x4* self, float x, float y, float z) {
	self->scale(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void QMatrix4x4_scaleWithFactor(QMatrix4x4* self, float factor) {
	self->scale(static_cast<float>(factor));
}

void QMatrix4x4_translate2(QMatrix4x4* self, float x, float y) {
	self->translate(static_cast<float>(x), static_cast<float>(y));
}

void QMatrix4x4_translate3(QMatrix4x4* self, float x, float y, float z) {
	self->translate(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void QMatrix4x4_rotate2(QMatrix4x4* self, float angle, float x, float y) {
	self->rotate(static_cast<float>(angle), static_cast<float>(x), static_cast<float>(y));
}

void QMatrix4x4_rotateWithQuaternion(QMatrix4x4* self, QQuaternion* quaternion) {
	self->rotate(*quaternion);
}

void QMatrix4x4_ortho(QMatrix4x4* self, QRect* rect) {
	self->ortho(*rect);
}

void QMatrix4x4_orthoWithRect(QMatrix4x4* self, QRectF* rect) {
	self->ortho(*rect);
}

void QMatrix4x4_ortho2(QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
	self->ortho(static_cast<float>(left), static_cast<float>(right), static_cast<float>(bottom), static_cast<float>(top), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_frustum(QMatrix4x4* self, float left, float right, float bottom, float top, float nearPlane, float farPlane) {
	self->frustum(static_cast<float>(left), static_cast<float>(right), static_cast<float>(bottom), static_cast<float>(top), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_perspective(QMatrix4x4* self, float verticalAngle, float aspectRatio, float nearPlane, float farPlane) {
	self->perspective(static_cast<float>(verticalAngle), static_cast<float>(aspectRatio), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_lookAt(QMatrix4x4* self, QVector3D* eye, QVector3D* center, QVector3D* up) {
	self->lookAt(*eye, *center, *up);
}

void QMatrix4x4_viewport(QMatrix4x4* self, QRectF* rect) {
	self->viewport(*rect);
}

void QMatrix4x4_viewport2(QMatrix4x4* self, float left, float bottom, float width, float height) {
	self->viewport(static_cast<float>(left), static_cast<float>(bottom), static_cast<float>(width), static_cast<float>(height));
}

void QMatrix4x4_flipCoordinates(QMatrix4x4* self) {
	self->flipCoordinates();
}

void QMatrix4x4_copyDataTo(const QMatrix4x4* self, float* values) {
	self->copyDataTo(values);
}

QTransform* QMatrix4x4_toTransform(const QMatrix4x4* self) {
	return new QTransform(self->toTransform());
}

QTransform* QMatrix4x4_toTransformWithDistanceToPlane(const QMatrix4x4* self, float distanceToPlane) {
	return new QTransform(self->toTransform(static_cast<float>(distanceToPlane)));
}

QPoint* QMatrix4x4_map(const QMatrix4x4* self, QPoint* point) {
	return new QPoint(self->map(*point));
}

QPointF* QMatrix4x4_mapWithPoint(const QMatrix4x4* self, QPointF* point) {
	return new QPointF(self->map(*point));
}

QVector3D* QMatrix4x4_map2(const QMatrix4x4* self, QVector3D* point) {
	return new QVector3D(self->map(*point));
}

QVector3D* QMatrix4x4_mapVector(const QMatrix4x4* self, QVector3D* vector) {
	return new QVector3D(self->mapVector(*vector));
}

QVector4D* QMatrix4x4_map3(const QMatrix4x4* self, QVector4D* point) {
	return new QVector4D(self->map(*point));
}

QRect* QMatrix4x4_mapRect(const QMatrix4x4* self, QRect* rect) {
	return new QRect(self->mapRect(*rect));
}

QRectF* QMatrix4x4_mapRectWithRect(const QMatrix4x4* self, QRectF* rect) {
	return new QRectF(self->mapRect(*rect));
}

float* QMatrix4x4_data(QMatrix4x4* self) {
	return self->data();
}

const float* QMatrix4x4_data2(const QMatrix4x4* self) {
	return (const float*) self->data();
}

const float* QMatrix4x4_constData(const QMatrix4x4* self) {
	return (const float*) self->constData();
}

void QMatrix4x4_optimize(QMatrix4x4* self) {
	self->optimize();
}

QVariant* QMatrix4x4_ToQVariant(const QMatrix4x4* self) {
	return new QVariant(self->operator QVariant());
}

void QMatrix4x4_projectedRotate(QMatrix4x4* self, float angle, float x, float y, float z, float distanceToPlane) {
	self->projectedRotate(static_cast<float>(angle), static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(distanceToPlane));
}

void QMatrix4x4_projectedRotate2(QMatrix4x4* self, float angle, float x, float y, float z) {
	self->projectedRotate(static_cast<float>(angle), static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

int QMatrix4x4_flags(const QMatrix4x4* self) {
	return self->flags();
}

QMatrix4x4* QMatrix4x4_invertedWithInvertible(const QMatrix4x4* self, bool* invertible) {
	return new QMatrix4x4(self->inverted(invertible));
}

void QMatrix4x4_rotate3(QMatrix4x4* self, float angle, float x, float y, float z) {
	self->rotate(static_cast<float>(angle), static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

void QMatrix4x4_viewport3(QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane) {
	self->viewport(static_cast<float>(left), static_cast<float>(bottom), static_cast<float>(width), static_cast<float>(height), static_cast<float>(nearPlane));
}

void QMatrix4x4_viewport4(QMatrix4x4* self, float left, float bottom, float width, float height, float nearPlane, float farPlane) {
	self->viewport(static_cast<float>(left), static_cast<float>(bottom), static_cast<float>(width), static_cast<float>(height), static_cast<float>(nearPlane), static_cast<float>(farPlane));
}

void QMatrix4x4_delete(QMatrix4x4* self) {
	delete self;
}

class MiqtVirtualQMovie final : public QMovie {
public:

	MiqtVirtualQMovie(): QMovie() {}
	MiqtVirtualQMovie(QIODevice* device): QMovie(device) {}
	MiqtVirtualQMovie(const QString& fileName): QMovie(fileName) {}
	MiqtVirtualQMovie(QObject* parent): QMovie(parent) {}
	MiqtVirtualQMovie(QIODevice* device, const QByteArray& format): QMovie(device, format) {}
	MiqtVirtualQMovie(QIODevice* device, const QByteArray& format, QObject* parent): QMovie(device, format, parent) {}
	MiqtVirtualQMovie(const QString& fileName, const QByteArray& format): QMovie(fileName, format) {}
	MiqtVirtualQMovie(const QString& fileName, const QByteArray& format, QObject* parent): QMovie(fileName, format, parent) {}

	virtual ~MiqtVirtualQMovie() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMovie::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QMovie_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QMovie_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMovie::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QMovie_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QMovie_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QMovie_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMovie_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMovie_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMovie_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMovie* QMovie_new() {
	return new (std::nothrow) MiqtVirtualQMovie();
}

QMovie* QMovie_new2(QIODevice* device) {
	return new (std::nothrow) MiqtVirtualQMovie(device);
}

QMovie* QMovie_new3(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new (std::nothrow) MiqtVirtualQMovie(fileName_QString);
}

QMovie* QMovie_new4(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQMovie(parent);
}

QMovie* QMovie_new5(QIODevice* device, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	return new (std::nothrow) MiqtVirtualQMovie(device, format_QByteArray);
}

QMovie* QMovie_new6(QIODevice* device, struct miqt_string format, QObject* parent) {
	QByteArray format_QByteArray(format.data, format.len);
	return new (std::nothrow) MiqtVirtualQMovie(device, format_QByteArray, parent);
}

QMovie* QMovie_new7(struct miqt_string fileName, struct miqt_string format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray format_QByteArray(format.data, format.len);
	return new (std::nothrow) MiqtVirtualQMovie(fileName_QString, format_QByteArray);
}

QMovie* QMovie_new8(struct miqt_string fileName, struct miqt_string format, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray format_QByteArray(format.data, format.len);
	return new (std::nothrow) MiqtVirtualQMovie(fileName_QString, format_QByteArray, parent);
}

void QMovie_virtbase(QMovie* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMovie_metaObject(const QMovie* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QMovie_tr(const char* s) {
	QString _ret = QMovie::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QMovie_supportedFormats() {
	QList<QByteArray> _ret = QMovie::supportedFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QMovie_setDevice(QMovie* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QMovie_device(const QMovie* self) {
	return self->device();
}

void QMovie_setFileName(QMovie* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

struct miqt_string QMovie_fileName(const QMovie* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMovie_setFormat(QMovie* self, struct miqt_string format) {
	QByteArray format_QByteArray(format.data, format.len);
	self->setFormat(format_QByteArray);
}

struct miqt_string QMovie_format(const QMovie* self) {
	QByteArray _qb = self->format();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QMovie_setBackgroundColor(QMovie* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QColor* QMovie_backgroundColor(const QMovie* self) {
	return new QColor(self->backgroundColor());
}

int QMovie_state(const QMovie* self) {
	return self->state();
}

QRect* QMovie_frameRect(const QMovie* self) {
	return new QRect(self->frameRect());
}

QImage* QMovie_currentImage(const QMovie* self) {
	return new QImage(self->currentImage());
}

QPixmap* QMovie_currentPixmap(const QMovie* self) {
	return new QPixmap(self->currentPixmap());
}

bool QMovie_isValid(const QMovie* self) {
	return self->isValid();
}

int QMovie_lastError(const QMovie* self) {
	QImageReader::ImageReaderError _ret = self->lastError();
	return static_cast<int>(_ret);
}

struct miqt_string QMovie_lastErrorString(const QMovie* self) {
	QString _ret = self->lastErrorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMovie_jumpToFrame(QMovie* self, int frameNumber) {
	return self->jumpToFrame(static_cast<int>(frameNumber));
}

int QMovie_loopCount(const QMovie* self) {
	return self->loopCount();
}

int QMovie_frameCount(const QMovie* self) {
	return self->frameCount();
}

int QMovie_nextFrameDelay(const QMovie* self) {
	return self->nextFrameDelay();
}

int QMovie_currentFrameNumber(const QMovie* self) {
	return self->currentFrameNumber();
}

int QMovie_speed(const QMovie* self) {
	return self->speed();
}

QSize* QMovie_scaledSize(QMovie* self) {
	return new QSize(self->scaledSize());
}

void QMovie_setScaledSize(QMovie* self, QSize* size) {
	self->setScaledSize(*size);
}

int QMovie_cacheMode(const QMovie* self) {
	return self->cacheMode();
}

void QMovie_setCacheMode(QMovie* self, int mode) {
	self->setCacheMode(static_cast<QMovie::CacheMode>(mode));
}

void QMovie_started(QMovie* self) {
	self->started();
}

void QMovie_connect_started(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)()>(&QMovie::started), self, [=]() {
		miqt_exec_callback_QMovie_started(slot);
	});
}

void QMovie_resized(QMovie* self, QSize* size) {
	self->resized(*size);
}

void QMovie_connect_resized(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(const QSize&)>(&QMovie::resized), self, [=](const QSize& size) {
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		miqt_exec_callback_QMovie_resized(slot, sigval1);
	});
}

void QMovie_updated(QMovie* self, QRect* rect) {
	self->updated(*rect);
}

void QMovie_connect_updated(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(const QRect&)>(&QMovie::updated), self, [=](const QRect& rect) {
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		miqt_exec_callback_QMovie_updated(slot, sigval1);
	});
}

void QMovie_stateChanged(QMovie* self, int state) {
	self->stateChanged(static_cast<QMovie::MovieState>(state));
}

void QMovie_connect_stateChanged(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(QMovie::MovieState)>(&QMovie::stateChanged), self, [=](QMovie::MovieState state) {
		QMovie::MovieState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QMovie_stateChanged(slot, sigval1);
	});
}

void QMovie_error(QMovie* self, int error) {
	self->error(static_cast<QImageReader::ImageReaderError>(error));
}

void QMovie_connect_error(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(QImageReader::ImageReaderError)>(&QMovie::error), self, [=](QImageReader::ImageReaderError error) {
		QImageReader::ImageReaderError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QMovie_error(slot, sigval1);
	});
}

void QMovie_finished(QMovie* self) {
	self->finished();
}

void QMovie_connect_finished(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)()>(&QMovie::finished), self, [=]() {
		miqt_exec_callback_QMovie_finished(slot);
	});
}

void QMovie_frameChanged(QMovie* self, int frameNumber) {
	self->frameChanged(static_cast<int>(frameNumber));
}

void QMovie_connect_frameChanged(QMovie* self, intptr_t slot) {
	QMovie::connect(self, static_cast<void (QMovie::*)(int)>(&QMovie::frameChanged), self, [=](int frameNumber) {
		int sigval1 = frameNumber;
		miqt_exec_callback_QMovie_frameChanged(slot, sigval1);
	});
}

void QMovie_start(QMovie* self) {
	self->start();
}

bool QMovie_jumpToNextFrame(QMovie* self) {
	return self->jumpToNextFrame();
}

void QMovie_setPaused(QMovie* self, bool paused) {
	self->setPaused(paused);
}

void QMovie_stop(QMovie* self) {
	self->stop();
}

void QMovie_setSpeed(QMovie* self, int percentSpeed) {
	self->setSpeed(static_cast<int>(percentSpeed));
}

struct miqt_string QMovie_tr2(const char* s, const char* c) {
	QString _ret = QMovie::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMovie_tr3(const char* s, const char* c, int n) {
	QString _ret = QMovie::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMovie_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMovie* self_cast = static_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QMovie_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQMovie*>(self)->QMovie::event(event);
}

bool QMovie_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMovie* self_cast = static_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMovie_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQMovie*>(self)->QMovie::eventFilter(watched, event);
}

QObject* QMovie_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMovie* self_cast = static_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QMovie_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMovie* self_cast = static_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QMovie_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMovie* self_cast = static_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QMovie_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMovie* self_cast = static_cast<MiqtVirtualQMovie*>( (QMovie*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QMovie_delete(QMovie* self) {
	delete self;
}

QPageSize* QPageSize_new() {
	return new (std::nothrow) QPageSize();
}

QPageSize* QPageSize_new2(int pageSizeId) {
	return new (std::nothrow) QPageSize(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

QPageSize* QPageSize_new3(QSize* pointSize) {
	return new (std::nothrow) QPageSize(*pointSize);
}

QPageSize* QPageSize_new4(QSizeF* size, int units) {
	return new (std::nothrow) QPageSize(*size, static_cast<QPageSize::Unit>(units));
}

QPageSize* QPageSize_new5(QPageSize* other) {
	return new (std::nothrow) QPageSize(*other);
}

QPageSize* QPageSize_new6(QSize* pointSize, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QPageSize(*pointSize, name_QString);
}

QPageSize* QPageSize_new7(QSize* pointSize, struct miqt_string name, int matchPolicy) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QPageSize(*pointSize, name_QString, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

QPageSize* QPageSize_new8(QSizeF* size, int units, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QPageSize(*size, static_cast<QPageSize::Unit>(units), name_QString);
}

QPageSize* QPageSize_new9(QSizeF* size, int units, struct miqt_string name, int matchPolicy) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QPageSize(*size, static_cast<QPageSize::Unit>(units), name_QString, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

void QPageSize_swap(QPageSize* self, QPageSize* other) {
	self->swap(*other);
}

bool QPageSize_isEquivalentTo(const QPageSize* self, QPageSize* other) {
	return self->isEquivalentTo(*other);
}

bool QPageSize_isValid(const QPageSize* self) {
	return self->isValid();
}

struct miqt_string QPageSize_key(const QPageSize* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSize_name(const QPageSize* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPageSize_id(const QPageSize* self) {
	return self->id();
}

int QPageSize_windowsId(const QPageSize* self) {
	return self->windowsId();
}

QSizeF* QPageSize_definitionSize(const QPageSize* self) {
	return new QSizeF(self->definitionSize());
}

int QPageSize_definitionUnits(const QPageSize* self) {
	return self->definitionUnits();
}

QSizeF* QPageSize_size(const QPageSize* self, int units) {
	return new QSizeF(self->size(static_cast<QPageSize::Unit>(units)));
}

QSize* QPageSize_sizePoints(const QPageSize* self) {
	return new QSize(self->sizePoints());
}

QSize* QPageSize_sizePixels(const QPageSize* self, int resolution) {
	return new QSize(self->sizePixels(static_cast<int>(resolution)));
}

QRectF* QPageSize_rect(const QPageSize* self, int units) {
	return new QRectF(self->rect(static_cast<QPageSize::Unit>(units)));
}

QRect* QPageSize_rectPoints(const QPageSize* self) {
	return new QRect(self->rectPoints());
}

QRect* QPageSize_rectPixels(const QPageSize* self, int resolution) {
	return new QRect(self->rectPixels(static_cast<int>(resolution)));
}

struct miqt_string QPageSize_keyWithPageSizeId(int pageSizeId) {
	QString _ret = QPageSize::key(static_cast<QPageSize::PageSizeId>(pageSizeId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSize_nameWithPageSizeId(int pageSizeId) {
	QString _ret = QPageSize::name(static_cast<QPageSize::PageSizeId>(pageSizeId));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPageSize_idWithPointSize(QSize* pointSize) {
	return QPageSize::id(*pointSize);
}

int QPageSize_id2(QSizeF* size, int units) {
	return QPageSize::id(*size, static_cast<QPageSize::Unit>(units));
}

int QPageSize_idWithWindowsId(int windowsId) {
	return QPageSize::id(static_cast<int>(windowsId));
}

int QPageSize_windowsIdWithPageSizeId(int pageSizeId) {
	return QPageSize::windowsId(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

QSizeF* QPageSize_definitionSizeWithPageSizeId(int pageSizeId) {
	return new QSizeF(QPageSize::definitionSize(static_cast<QPageSize::PageSizeId>(pageSizeId)));
}

int QPageSize_definitionUnitsWithPageSizeId(int pageSizeId) {
	return QPageSize::definitionUnits(static_cast<QPageSize::PageSizeId>(pageSizeId));
}

QSizeF* QPageSize_size2(int pageSizeId, int units) {
	return new QSizeF(QPageSize::size(static_cast<QPageSize::PageSizeId>(pageSizeId), static_cast<QPageSize::Unit>(units)));
}

QSize* QPageSize_sizePointsWithPageSizeId(int pageSizeId) {
	return new QSize(QPageSize::sizePoints(static_cast<QPageSize::PageSizeId>(pageSizeId)));
}

QSize* QPageSize_sizePixels2(int pageSizeId, int resolution) {
	return new QSize(QPageSize::sizePixels(static_cast<QPageSize::PageSizeId>(pageSizeId), static_cast<int>(resolution)));
}

int QPageSize_id3(QSize* pointSize, int matchPolicy) {
	return QPageSize::id(*pointSize, static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

int QPageSize_id4(QSizeF* size, int units, int matchPolicy) {
	return QPageSize::id(*size, static_cast<QPageSize::Unit>(units), static_cast<QPageSize::SizeMatchPolicy>(matchPolicy));
}

void QPageSize_delete(QPageSize* self) {
	delete self;
}

QPageLayout* QPageLayout_new() {
	return new (std::nothrow) QPageLayout();
}

QPageLayout* QPageLayout_new2(QPageSize* pageSize, int orientation, QMarginsF* margins) {
	return new (std::nothrow) QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), *margins);
}

QPageLayout* QPageLayout_new3(QPageLayout* other) {
	return new (std::nothrow) QPageLayout(*other);
}

QPageLayout* QPageLayout_new4(QPageSize* pageSize, int orientation, QMarginsF* margins, int units) {
	return new (std::nothrow) QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), *margins, static_cast<QPageLayout::Unit>(units));
}

QPageLayout* QPageLayout_new5(QPageSize* pageSize, int orientation, QMarginsF* margins, int units, QMarginsF* minMargins) {
	return new (std::nothrow) QPageLayout(*pageSize, static_cast<QPageLayout::Orientation>(orientation), *margins, static_cast<QPageLayout::Unit>(units), *minMargins);
}

void QPageLayout_swap(QPageLayout* self, QPageLayout* other) {
	self->swap(*other);
}

bool QPageLayout_isEquivalentTo(const QPageLayout* self, QPageLayout* other) {
	return self->isEquivalentTo(*other);
}

bool QPageLayout_isValid(const QPageLayout* self) {
	return self->isValid();
}

void QPageLayout_setMode(QPageLayout* self, int mode) {
	self->setMode(static_cast<QPageLayout::Mode>(mode));
}

int QPageLayout_mode(const QPageLayout* self) {
	return self->mode();
}

void QPageLayout_setPageSize(QPageLayout* self, QPageSize* pageSize) {
	self->setPageSize(*pageSize);
}

QPageSize* QPageLayout_pageSize(const QPageLayout* self) {
	return new QPageSize(self->pageSize());
}

void QPageLayout_setOrientation(QPageLayout* self, int orientation) {
	self->setOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

int QPageLayout_orientation(const QPageLayout* self) {
	return self->orientation();
}

void QPageLayout_setUnits(QPageLayout* self, int units) {
	self->setUnits(static_cast<QPageLayout::Unit>(units));
}

int QPageLayout_units(const QPageLayout* self) {
	return self->units();
}

bool QPageLayout_setMargins(QPageLayout* self, QMarginsF* margins) {
	return self->setMargins(*margins);
}

bool QPageLayout_setLeftMargin(QPageLayout* self, double leftMargin) {
	return self->setLeftMargin(static_cast<double>(leftMargin));
}

bool QPageLayout_setRightMargin(QPageLayout* self, double rightMargin) {
	return self->setRightMargin(static_cast<double>(rightMargin));
}

bool QPageLayout_setTopMargin(QPageLayout* self, double topMargin) {
	return self->setTopMargin(static_cast<double>(topMargin));
}

bool QPageLayout_setBottomMargin(QPageLayout* self, double bottomMargin) {
	return self->setBottomMargin(static_cast<double>(bottomMargin));
}

QMarginsF* QPageLayout_margins(const QPageLayout* self) {
	return new QMarginsF(self->margins());
}

QMarginsF* QPageLayout_marginsWithUnits(const QPageLayout* self, int units) {
	return new QMarginsF(self->margins(static_cast<QPageLayout::Unit>(units)));
}

QMargins* QPageLayout_marginsPoints(const QPageLayout* self) {
	return new QMargins(self->marginsPoints());
}

QMargins* QPageLayout_marginsPixels(const QPageLayout* self, int resolution) {
	return new QMargins(self->marginsPixels(static_cast<int>(resolution)));
}

void QPageLayout_setMinimumMargins(QPageLayout* self, QMarginsF* minMargins) {
	self->setMinimumMargins(*minMargins);
}

QMarginsF* QPageLayout_minimumMargins(const QPageLayout* self) {
	return new QMarginsF(self->minimumMargins());
}

QMarginsF* QPageLayout_maximumMargins(const QPageLayout* self) {
	return new QMarginsF(self->maximumMargins());
}

QRectF* QPageLayout_fullRect(const QPageLayout* self) {
	return new QRectF(self->fullRect());
}

QRectF* QPageLayout_fullRectWithUnits(const QPageLayout* self, int units) {
	return new QRectF(self->fullRect(static_cast<QPageLayout::Unit>(units)));
}

QRect* QPageLayout_fullRectPoints(const QPageLayout* self) {
	return new QRect(self->fullRectPoints());
}

QRect* QPageLayout_fullRectPixels(const QPageLayout* self, int resolution) {
	return new QRect(self->fullRectPixels(static_cast<int>(resolution)));
}

QRectF* QPageLayout_paintRect(const QPageLayout* self) {
	return new QRectF(self->paintRect());
}

QRectF* QPageLayout_paintRectWithUnits(const QPageLayout* self, int units) {
	return new QRectF(self->paintRect(static_cast<QPageLayout::Unit>(units)));
}

QRect* QPageLayout_paintRectPoints(const QPageLayout* self) {
	return new QRect(self->paintRectPoints());
}

QRect* QPageLayout_paintRectPixels(const QPageLayout* self, int resolution) {
	return new QRect(self->paintRectPixels(static_cast<int>(resolution)));
}

void QPageLayout_setPageSize2(QPageLayout* self, QPageSize* pageSize, QMarginsF* minMargins) {
	self->setPageSize(*pageSize, *minMargins);
}

bool QPageLayout_setMargins2(QPageLayout* self, QMarginsF* margins, int outOfBoundsPolicy) {
	return self->setMargins(*margins, static_cast<QPageLayout::OutOfBoundsPolicy>(outOfBoundsPolicy));
}

bool QPageLayout_setLeftMargin2(QPageLayout* self, double leftMargin, int outOfBoundsPolicy) {
	return self->setLeftMargin(static_cast<double>(leftMargin), static_cast<QPageLayout::OutOfBoundsPolicy>(outOfBoundsPolicy));
}

bool QPageLayout_setRightMargin2(QPageLayout* self, double rightMargin, int outOfBoundsPolicy) {
	return self->setRightMargin(static_cast<double>(rightMargin), static_cast<QPageLayout::OutOfBoundsPolicy>(outOfBoundsPolicy));
}

bool QPageLayout_setTopMargin2(QPageLayout* self, double topMargin, int outOfBoundsPolicy) {
	return self->setTopMargin(static_cast<double>(topMargin), static_cast<QPageLayout::OutOfBoundsPolicy>(outOfBoundsPolicy));
}

bool QPageLayout_setBottomMargin2(QPageLayout* self, double bottomMargin, int outOfBoundsPolicy) {
	return self->setBottomMargin(static_cast<double>(bottomMargin), static_cast<QPageLayout::OutOfBoundsPolicy>(outOfBoundsPolicy));
}

void QPageLayout_delete(QPageLayout* self) {
	delete self;
}

QPageRanges* QPageRanges_new() {
	return new (std::nothrow) QPageRanges();
}

QPageRanges* QPageRanges_new2(QPageRanges* other) {
	return new (std::nothrow) QPageRanges(*other);
}

void QPageRanges_swap(QPageRanges* self, QPageRanges* other) {
	self->swap(*other);
}

void QPageRanges_addPage(QPageRanges* self, int pageNumber) {
	self->addPage(static_cast<int>(pageNumber));
}

void QPageRanges_addRange(QPageRanges* self, int from, int to) {
	self->addRange(static_cast<int>(from), static_cast<int>(to));
}

void QPageRanges_clear(QPageRanges* self) {
	self->clear();
}

struct miqt_string QPageRanges_toString(const QPageRanges* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPageRanges* QPageRanges_fromString(struct miqt_string ranges) {
	QString ranges_QString = QString::fromUtf8(ranges.data, ranges.len);
	return new QPageRanges(QPageRanges::fromString(ranges_QString));
}

bool QPageRanges_contains(const QPageRanges* self, int pageNumber) {
	return self->contains(static_cast<int>(pageNumber));
}

bool QPageRanges_isEmpty(const QPageRanges* self) {
	return self->isEmpty();
}

int QPageRanges_firstPage(const QPageRanges* self) {
	return self->firstPage();
}

int QPageRanges_lastPage(const QPageRanges* self) {
	return self->lastPage();
}

void QPageRanges_detach(QPageRanges* self) {
	self->detach();
}

void QPageRanges_delete(QPageRanges* self) {
	delete self;
}

void QPagedPaintDevice_virtbase(QPagedPaintDevice* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

bool QPagedPaintDevice_newPage(QPagedPaintDevice* self) {
	return self->newPage();
}

bool QPagedPaintDevice_setPageLayout(QPagedPaintDevice* self, QPageLayout* pageLayout) {
	return self->setPageLayout(*pageLayout);
}

bool QPagedPaintDevice_setPageSize(QPagedPaintDevice* self, QPageSize* pageSize) {
	return self->setPageSize(*pageSize);
}

bool QPagedPaintDevice_setPageOrientation(QPagedPaintDevice* self, int orientation) {
	return self->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

bool QPagedPaintDevice_setPageMargins(QPagedPaintDevice* self, QMarginsF* margins, int units) {
	return self->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

QPageLayout* QPagedPaintDevice_pageLayout(const QPagedPaintDevice* self) {
	return new QPageLayout(self->pageLayout());
}

void QPagedPaintDevice_setPageRanges(QPagedPaintDevice* self, QPageRanges* ranges) {
	self->setPageRanges(*ranges);
}

QPageRanges* QPagedPaintDevice_pageRanges(const QPagedPaintDevice* self) {
	return new QPageRanges(self->pageRanges());
}

void QPagedPaintDevice_delete(QPagedPaintDevice* self) {
	delete self;
}

QPainter* QPainter_new() {
	return new (std::nothrow) QPainter();
}

QPainter* QPainter_new2(QPaintDevice* param1) {
	return new (std::nothrow) QPainter(param1);
}

QPaintDevice* QPainter_device(const QPainter* self) {
	return self->device();
}

bool QPainter_begin(QPainter* self, QPaintDevice* param1) {
	return self->begin(param1);
}

bool QPainter_end(QPainter* self) {
	return self->end();
}

bool QPainter_isActive(const QPainter* self) {
	return self->isActive();
}

void QPainter_setCompositionMode(QPainter* self, int mode) {
	self->setCompositionMode(static_cast<QPainter::CompositionMode>(mode));
}

int QPainter_compositionMode(const QPainter* self) {
	return self->compositionMode();
}

QFont* QPainter_font(const QPainter* self) {
	const QFont& _ret = self->font();
	// Cast returned reference into pointer
	return const_cast<QFont*>(&_ret);
}

void QPainter_setFont(QPainter* self, QFont* f) {
	self->setFont(*f);
}

QFontMetrics* QPainter_fontMetrics(const QPainter* self) {
	return new QFontMetrics(self->fontMetrics());
}

QFontInfo* QPainter_fontInfo(const QPainter* self) {
	return new QFontInfo(self->fontInfo());
}

void QPainter_setPen(QPainter* self, QColor* color) {
	self->setPen(*color);
}

void QPainter_setPenWithPen(QPainter* self, QPen* pen) {
	self->setPen(*pen);
}

void QPainter_setPenWithStyle(QPainter* self, int style) {
	self->setPen(static_cast<Qt::PenStyle>(style));
}

QPen* QPainter_pen(const QPainter* self) {
	const QPen& _ret = self->pen();
	// Cast returned reference into pointer
	return const_cast<QPen*>(&_ret);
}

void QPainter_setBrush(QPainter* self, QBrush* brush) {
	self->setBrush(*brush);
}

void QPainter_setBrushWithStyle(QPainter* self, int style) {
	self->setBrush(static_cast<Qt::BrushStyle>(style));
}

void QPainter_setBrushWithColor(QPainter* self, QColor* color) {
	self->setBrush(*color);
}

void QPainter_setBrush2(QPainter* self, int color) {
	self->setBrush(static_cast<Qt::GlobalColor>(color));
}

QBrush* QPainter_brush(const QPainter* self) {
	const QBrush& _ret = self->brush();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

void QPainter_setBackgroundMode(QPainter* self, int mode) {
	self->setBackgroundMode(static_cast<Qt::BGMode>(mode));
}

int QPainter_backgroundMode(const QPainter* self) {
	Qt::BGMode _ret = self->backgroundMode();
	return static_cast<int>(_ret);
}

QPoint* QPainter_brushOrigin(const QPainter* self) {
	return new QPoint(self->brushOrigin());
}

QPointF* QPainter_brushOriginF(const QPainter* self) {
	return new QPointF(self->brushOriginF());
}

void QPainter_setBrushOrigin(QPainter* self, int x, int y) {
	self->setBrushOrigin(static_cast<int>(x), static_cast<int>(y));
}

void QPainter_setBrushOriginWithBrushOrigin(QPainter* self, QPoint* brushOrigin) {
	self->setBrushOrigin(*brushOrigin);
}

void QPainter_setBrushOrigin2(QPainter* self, QPointF* brushOrigin) {
	self->setBrushOrigin(*brushOrigin);
}

void QPainter_setBackground(QPainter* self, QBrush* bg) {
	self->setBackground(*bg);
}

QBrush* QPainter_background(const QPainter* self) {
	const QBrush& _ret = self->background();
	// Cast returned reference into pointer
	return const_cast<QBrush*>(&_ret);
}

double QPainter_opacity(const QPainter* self) {
	double _ret = self->opacity();
	return static_cast<double>(_ret);
}

void QPainter_setOpacity(QPainter* self, double opacity) {
	self->setOpacity(static_cast<double>(opacity));
}

QRegion* QPainter_clipRegion(const QPainter* self) {
	return new QRegion(self->clipRegion());
}

QPainterPath* QPainter_clipPath(const QPainter* self) {
	return new QPainterPath(self->clipPath());
}

void QPainter_setClipRect(QPainter* self, QRectF* param1) {
	self->setClipRect(*param1);
}

void QPainter_setClipRectWithQRect(QPainter* self, QRect* param1) {
	self->setClipRect(*param1);
}

void QPainter_setClipRect2(QPainter* self, int x, int y, int w, int h) {
	self->setClipRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_setClipRegion(QPainter* self, QRegion* param1) {
	self->setClipRegion(*param1);
}

void QPainter_setClipPath(QPainter* self, QPainterPath* path) {
	self->setClipPath(*path);
}

void QPainter_setClipping(QPainter* self, bool enable) {
	self->setClipping(enable);
}

bool QPainter_hasClipping(const QPainter* self) {
	return self->hasClipping();
}

QRectF* QPainter_clipBoundingRect(const QPainter* self) {
	return new QRectF(self->clipBoundingRect());
}

void QPainter_save(QPainter* self) {
	self->save();
}

void QPainter_restore(QPainter* self) {
	self->restore();
}

void QPainter_setTransform(QPainter* self, QTransform* transform) {
	self->setTransform(*transform);
}

QTransform* QPainter_transform(const QPainter* self) {
	const QTransform& _ret = self->transform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&_ret);
}

QTransform* QPainter_deviceTransform(const QPainter* self) {
	const QTransform& _ret = self->deviceTransform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&_ret);
}

void QPainter_resetTransform(QPainter* self) {
	self->resetTransform();
}

void QPainter_setWorldTransform(QPainter* self, QTransform* matrix) {
	self->setWorldTransform(*matrix);
}

QTransform* QPainter_worldTransform(const QPainter* self) {
	const QTransform& _ret = self->worldTransform();
	// Cast returned reference into pointer
	return const_cast<QTransform*>(&_ret);
}

QTransform* QPainter_combinedTransform(const QPainter* self) {
	return new QTransform(self->combinedTransform());
}

void QPainter_setWorldMatrixEnabled(QPainter* self, bool enabled) {
	self->setWorldMatrixEnabled(enabled);
}

bool QPainter_worldMatrixEnabled(const QPainter* self) {
	return self->worldMatrixEnabled();
}

void QPainter_scale(QPainter* self, double sx, double sy) {
	self->scale(static_cast<double>(sx), static_cast<double>(sy));
}

void QPainter_shear(QPainter* self, double sh, double sv) {
	self->shear(static_cast<double>(sh), static_cast<double>(sv));
}

void QPainter_rotate(QPainter* self, double a) {
	self->rotate(static_cast<double>(a));
}

void QPainter_translate(QPainter* self, QPointF* offset) {
	self->translate(*offset);
}

void QPainter_translateWithOffset(QPainter* self, QPoint* offset) {
	self->translate(*offset);
}

void QPainter_translate2(QPainter* self, double dx, double dy) {
	self->translate(static_cast<double>(dx), static_cast<double>(dy));
}

QRect* QPainter_window(const QPainter* self) {
	return new QRect(self->window());
}

void QPainter_setWindow(QPainter* self, QRect* window) {
	self->setWindow(*window);
}

void QPainter_setWindow2(QPainter* self, int x, int y, int w, int h) {
	self->setWindow(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

QRect* QPainter_viewport(const QPainter* self) {
	return new QRect(self->viewport());
}

void QPainter_setViewport(QPainter* self, QRect* viewport) {
	self->setViewport(*viewport);
}

void QPainter_setViewport2(QPainter* self, int x, int y, int w, int h) {
	self->setViewport(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_setViewTransformEnabled(QPainter* self, bool enable) {
	self->setViewTransformEnabled(enable);
}

bool QPainter_viewTransformEnabled(const QPainter* self) {
	return self->viewTransformEnabled();
}

void QPainter_strokePath(QPainter* self, QPainterPath* path, QPen* pen) {
	self->strokePath(*path, *pen);
}

void QPainter_fillPath(QPainter* self, QPainterPath* path, QBrush* brush) {
	self->fillPath(*path, *brush);
}

void QPainter_drawPath(QPainter* self, QPainterPath* path) {
	self->drawPath(*path);
}

void QPainter_drawPoint(QPainter* self, QPointF* pt) {
	self->drawPoint(*pt);
}

void QPainter_drawPointWithQPoint(QPainter* self, QPoint* p) {
	self->drawPoint(*p);
}

void QPainter_drawPoint2(QPainter* self, int x, int y) {
	self->drawPoint(static_cast<int>(x), static_cast<int>(y));
}

void QPainter_drawPoints(QPainter* self, QPointF* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPainter_drawPoints2(QPainter* self, QPoint* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPainter_drawLine(QPainter* self, QLineF* line) {
	self->drawLine(*line);
}

void QPainter_drawLineWithLine(QPainter* self, QLine* line) {
	self->drawLine(*line);
}

void QPainter_drawLine2(QPainter* self, int x1, int y1, int x2, int y2) {
	self->drawLine(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

void QPainter_drawLine3(QPainter* self, QPoint* p1, QPoint* p2) {
	self->drawLine(*p1, *p2);
}

void QPainter_drawLine4(QPainter* self, QPointF* p1, QPointF* p2) {
	self->drawLine(*p1, *p2);
}

void QPainter_drawLines(QPainter* self, QLineF* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPainter_drawLinesWithLines(QPainter* self, struct miqt_array /* of QLineF* */  lines) {
	QList<QLineF> lines_QList;
	lines_QList.reserve(lines.len);
	QLineF** lines_arr = static_cast<QLineF**>(lines.data);
	for(size_t i = 0; i < lines.len; ++i) {
		lines_QList.push_back(*(lines_arr[i]));
	}
	self->drawLines(lines_QList);
}

void QPainter_drawLines2(QPainter* self, QPointF* pointPairs, int lineCount) {
	self->drawLines(pointPairs, static_cast<int>(lineCount));
}

void QPainter_drawLinesWithPointPairs(QPainter* self, struct miqt_array /* of QPointF* */  pointPairs) {
	QList<QPointF> pointPairs_QList;
	pointPairs_QList.reserve(pointPairs.len);
	QPointF** pointPairs_arr = static_cast<QPointF**>(pointPairs.data);
	for(size_t i = 0; i < pointPairs.len; ++i) {
		pointPairs_QList.push_back(*(pointPairs_arr[i]));
	}
	self->drawLines(pointPairs_QList);
}

void QPainter_drawLines3(QPainter* self, QLine* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPainter_drawLines4(QPainter* self, struct miqt_array /* of QLine* */  lines) {
	QList<QLine> lines_QList;
	lines_QList.reserve(lines.len);
	QLine** lines_arr = static_cast<QLine**>(lines.data);
	for(size_t i = 0; i < lines.len; ++i) {
		lines_QList.push_back(*(lines_arr[i]));
	}
	self->drawLines(lines_QList);
}

void QPainter_drawLines5(QPainter* self, QPoint* pointPairs, int lineCount) {
	self->drawLines(pointPairs, static_cast<int>(lineCount));
}

void QPainter_drawLines6(QPainter* self, struct miqt_array /* of QPoint* */  pointPairs) {
	QList<QPoint> pointPairs_QList;
	pointPairs_QList.reserve(pointPairs.len);
	QPoint** pointPairs_arr = static_cast<QPoint**>(pointPairs.data);
	for(size_t i = 0; i < pointPairs.len; ++i) {
		pointPairs_QList.push_back(*(pointPairs_arr[i]));
	}
	self->drawLines(pointPairs_QList);
}

void QPainter_drawRect(QPainter* self, QRectF* rect) {
	self->drawRect(*rect);
}

void QPainter_drawRect2(QPainter* self, int x1, int y1, int w, int h) {
	self->drawRect(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_drawRectWithRect(QPainter* self, QRect* rect) {
	self->drawRect(*rect);
}

void QPainter_drawRects(QPainter* self, QRectF* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPainter_drawRectsWithRectangles(QPainter* self, struct miqt_array /* of QRectF* */  rectangles) {
	QList<QRectF> rectangles_QList;
	rectangles_QList.reserve(rectangles.len);
	QRectF** rectangles_arr = static_cast<QRectF**>(rectangles.data);
	for(size_t i = 0; i < rectangles.len; ++i) {
		rectangles_QList.push_back(*(rectangles_arr[i]));
	}
	self->drawRects(rectangles_QList);
}

void QPainter_drawRects2(QPainter* self, QRect* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPainter_drawRects3(QPainter* self, struct miqt_array /* of QRect* */  rectangles) {
	QList<QRect> rectangles_QList;
	rectangles_QList.reserve(rectangles.len);
	QRect** rectangles_arr = static_cast<QRect**>(rectangles.data);
	for(size_t i = 0; i < rectangles.len; ++i) {
		rectangles_QList.push_back(*(rectangles_arr[i]));
	}
	self->drawRects(rectangles_QList);
}

void QPainter_drawEllipse(QPainter* self, QRectF* r) {
	self->drawEllipse(*r);
}

void QPainter_drawEllipseWithQRect(QPainter* self, QRect* r) {
	self->drawEllipse(*r);
}

void QPainter_drawEllipse2(QPainter* self, int x, int y, int w, int h) {
	self->drawEllipse(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_drawEllipse3(QPainter* self, QPointF* center, double rx, double ry) {
	self->drawEllipse(*center, static_cast<double>(rx), static_cast<double>(ry));
}

void QPainter_drawEllipse4(QPainter* self, QPoint* center, int rx, int ry) {
	self->drawEllipse(*center, static_cast<int>(rx), static_cast<int>(ry));
}

void QPainter_drawPolyline(QPainter* self, QPointF* points, int pointCount) {
	self->drawPolyline(points, static_cast<int>(pointCount));
}

void QPainter_drawPolyline2(QPainter* self, QPoint* points, int pointCount) {
	self->drawPolyline(points, static_cast<int>(pointCount));
}

void QPainter_drawPolygon(QPainter* self, QPointF* points, int pointCount) {
	self->drawPolygon(points, static_cast<int>(pointCount));
}

void QPainter_drawPolygon2(QPainter* self, QPoint* points, int pointCount) {
	self->drawPolygon(points, static_cast<int>(pointCount));
}

void QPainter_drawConvexPolygon(QPainter* self, QPointF* points, int pointCount) {
	self->drawConvexPolygon(points, static_cast<int>(pointCount));
}

void QPainter_drawConvexPolygon2(QPainter* self, QPoint* points, int pointCount) {
	self->drawConvexPolygon(points, static_cast<int>(pointCount));
}

void QPainter_drawArc(QPainter* self, QRectF* rect, int a, int alen) {
	self->drawArc(*rect, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawArc2(QPainter* self, QRect* param1, int a, int alen) {
	self->drawArc(*param1, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawArc3(QPainter* self, int x, int y, int w, int h, int a, int alen) {
	self->drawArc(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawPie(QPainter* self, QRectF* rect, int a, int alen) {
	self->drawPie(*rect, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawPie2(QPainter* self, int x, int y, int w, int h, int a, int alen) {
	self->drawPie(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawPie3(QPainter* self, QRect* param1, int a, int alen) {
	self->drawPie(*param1, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawChord(QPainter* self, QRectF* rect, int a, int alen) {
	self->drawChord(*rect, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawChord2(QPainter* self, int x, int y, int w, int h, int a, int alen) {
	self->drawChord(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawChord3(QPainter* self, QRect* param1, int a, int alen) {
	self->drawChord(*param1, static_cast<int>(a), static_cast<int>(alen));
}

void QPainter_drawRoundedRect(QPainter* self, QRectF* rect, double xRadius, double yRadius) {
	self->drawRoundedRect(*rect, static_cast<double>(xRadius), static_cast<double>(yRadius));
}

void QPainter_drawRoundedRect2(QPainter* self, int x, int y, int w, int h, double xRadius, double yRadius) {
	self->drawRoundedRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<double>(xRadius), static_cast<double>(yRadius));
}

void QPainter_drawRoundedRect3(QPainter* self, QRect* rect, double xRadius, double yRadius) {
	self->drawRoundedRect(*rect, static_cast<double>(xRadius), static_cast<double>(yRadius));
}

void QPainter_drawTiledPixmap(QPainter* self, QRectF* rect, QPixmap* pm) {
	self->drawTiledPixmap(*rect, *pm);
}

void QPainter_drawTiledPixmap2(QPainter* self, int x, int y, int w, int h, QPixmap* param5) {
	self->drawTiledPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5);
}

void QPainter_drawTiledPixmap3(QPainter* self, QRect* param1, QPixmap* param2) {
	self->drawTiledPixmap(*param1, *param2);
}

void QPainter_drawPicture(QPainter* self, QPointF* p, QPicture* picture) {
	self->drawPicture(*p, *picture);
}

void QPainter_drawPicture2(QPainter* self, int x, int y, QPicture* picture) {
	self->drawPicture(static_cast<int>(x), static_cast<int>(y), *picture);
}

void QPainter_drawPicture3(QPainter* self, QPoint* p, QPicture* picture) {
	self->drawPicture(*p, *picture);
}

void QPainter_drawPixmap(QPainter* self, QRectF* targetRect, QPixmap* pixmap, QRectF* sourceRect) {
	self->drawPixmap(*targetRect, *pixmap, *sourceRect);
}

void QPainter_drawPixmap2(QPainter* self, QRect* targetRect, QPixmap* pixmap, QRect* sourceRect) {
	self->drawPixmap(*targetRect, *pixmap, *sourceRect);
}

void QPainter_drawPixmap3(QPainter* self, int x, int y, int w, int h, QPixmap* pm, int sx, int sy, int sw, int sh) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pm, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh));
}

void QPainter_drawPixmap4(QPainter* self, int x, int y, QPixmap* pm, int sx, int sy, int sw, int sh) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), *pm, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh));
}

void QPainter_drawPixmap5(QPainter* self, QPointF* p, QPixmap* pm, QRectF* sr) {
	self->drawPixmap(*p, *pm, *sr);
}

void QPainter_drawPixmap6(QPainter* self, QPoint* p, QPixmap* pm, QRect* sr) {
	self->drawPixmap(*p, *pm, *sr);
}

void QPainter_drawPixmap7(QPainter* self, QPointF* p, QPixmap* pm) {
	self->drawPixmap(*p, *pm);
}

void QPainter_drawPixmap8(QPainter* self, QPoint* p, QPixmap* pm) {
	self->drawPixmap(*p, *pm);
}

void QPainter_drawPixmap9(QPainter* self, int x, int y, QPixmap* pm) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), *pm);
}

void QPainter_drawPixmap10(QPainter* self, QRect* r, QPixmap* pm) {
	self->drawPixmap(*r, *pm);
}

void QPainter_drawPixmap11(QPainter* self, int x, int y, int w, int h, QPixmap* pm) {
	self->drawPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pm);
}

void QPainter_drawImage(QPainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect) {
	self->drawImage(*targetRect, *image, *sourceRect);
}

void QPainter_drawImage2(QPainter* self, QRect* targetRect, QImage* image, QRect* sourceRect) {
	self->drawImage(*targetRect, *image, *sourceRect);
}

void QPainter_drawImage3(QPainter* self, QPointF* p, QImage* image, QRectF* sr) {
	self->drawImage(*p, *image, *sr);
}

void QPainter_drawImage4(QPainter* self, QPoint* p, QImage* image, QRect* sr) {
	self->drawImage(*p, *image, *sr);
}

void QPainter_drawImage5(QPainter* self, QRectF* r, QImage* image) {
	self->drawImage(*r, *image);
}

void QPainter_drawImage6(QPainter* self, QRect* r, QImage* image) {
	self->drawImage(*r, *image);
}

void QPainter_drawImage7(QPainter* self, QPointF* p, QImage* image) {
	self->drawImage(*p, *image);
}

void QPainter_drawImage8(QPainter* self, QPoint* p, QImage* image) {
	self->drawImage(*p, *image);
}

void QPainter_drawImage9(QPainter* self, int x, int y, QImage* image) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image);
}

void QPainter_setLayoutDirection(QPainter* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QPainter_layoutDirection(const QPainter* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<int>(_ret);
}

void QPainter_drawGlyphRun(QPainter* self, QPointF* position, QGlyphRun* glyphRun) {
	self->drawGlyphRun(*position, *glyphRun);
}

void QPainter_drawStaticText(QPainter* self, QPointF* topLeftPosition, QStaticText* staticText) {
	self->drawStaticText(*topLeftPosition, *staticText);
}

void QPainter_drawStaticText2(QPainter* self, QPoint* topLeftPosition, QStaticText* staticText) {
	self->drawStaticText(*topLeftPosition, *staticText);
}

void QPainter_drawStaticText3(QPainter* self, int left, int top, QStaticText* staticText) {
	self->drawStaticText(static_cast<int>(left), static_cast<int>(top), *staticText);
}

void QPainter_drawText(QPainter* self, QPointF* p, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->drawText(*p, s_QString);
}

void QPainter_drawText2(QPainter* self, QPoint* p, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->drawText(*p, s_QString);
}

void QPainter_drawText3(QPainter* self, int x, int y, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->drawText(static_cast<int>(x), static_cast<int>(y), s_QString);
}

void QPainter_drawText4(QPainter* self, QPointF* p, struct miqt_string str, int tf, int justificationPadding) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	self->drawText(*p, str_QString, static_cast<int>(tf), static_cast<int>(justificationPadding));
}

void QPainter_drawText5(QPainter* self, QRectF* r, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, static_cast<int>(flags), text_QString);
}

void QPainter_drawText6(QPainter* self, QRect* r, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, static_cast<int>(flags), text_QString);
}

void QPainter_drawText7(QPainter* self, int x, int y, int w, int h, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString);
}

void QPainter_drawText8(QPainter* self, QRectF* r, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, text_QString);
}

QRectF* QPainter_boundingRect(QPainter* self, QRectF* rect, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->boundingRect(*rect, static_cast<int>(flags), text_QString));
}

QRect* QPainter_boundingRect2(QPainter* self, QRect* rect, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(*rect, static_cast<int>(flags), text_QString));
}

QRect* QPainter_boundingRect3(QPainter* self, int x, int y, int w, int h, int flags, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRect(self->boundingRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString));
}

QRectF* QPainter_boundingRect4(QPainter* self, QRectF* rect, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->boundingRect(*rect, text_QString));
}

void QPainter_drawTextItem(QPainter* self, QPointF* p, QTextItem* ti) {
	self->drawTextItem(*p, *ti);
}

void QPainter_drawTextItem2(QPainter* self, int x, int y, QTextItem* ti) {
	self->drawTextItem(static_cast<int>(x), static_cast<int>(y), *ti);
}

void QPainter_drawTextItem3(QPainter* self, QPoint* p, QTextItem* ti) {
	self->drawTextItem(*p, *ti);
}

void QPainter_fillRect(QPainter* self, QRectF* param1, QBrush* param2) {
	self->fillRect(*param1, *param2);
}

void QPainter_fillRect2(QPainter* self, int x, int y, int w, int h, QBrush* param5) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5);
}

void QPainter_fillRect3(QPainter* self, QRect* param1, QBrush* param2) {
	self->fillRect(*param1, *param2);
}

void QPainter_fillRect4(QPainter* self, QRectF* param1, QColor* color) {
	self->fillRect(*param1, *color);
}

void QPainter_fillRect5(QPainter* self, int x, int y, int w, int h, QColor* color) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *color);
}

void QPainter_fillRect6(QPainter* self, QRect* param1, QColor* color) {
	self->fillRect(*param1, *color);
}

void QPainter_fillRect7(QPainter* self, int x, int y, int w, int h, int c) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::GlobalColor>(c));
}

void QPainter_fillRect8(QPainter* self, QRect* r, int c) {
	self->fillRect(*r, static_cast<Qt::GlobalColor>(c));
}

void QPainter_fillRect9(QPainter* self, QRectF* r, int c) {
	self->fillRect(*r, static_cast<Qt::GlobalColor>(c));
}

void QPainter_fillRect10(QPainter* self, int x, int y, int w, int h, int style) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::BrushStyle>(style));
}

void QPainter_fillRect11(QPainter* self, QRect* r, int style) {
	self->fillRect(*r, static_cast<Qt::BrushStyle>(style));
}

void QPainter_fillRect12(QPainter* self, QRectF* r, int style) {
	self->fillRect(*r, static_cast<Qt::BrushStyle>(style));
}

void QPainter_fillRect13(QPainter* self, int x, int y, int w, int h, int preset) {
	self->fillRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<QGradient::Preset>(preset));
}

void QPainter_fillRect14(QPainter* self, QRect* r, int preset) {
	self->fillRect(*r, static_cast<QGradient::Preset>(preset));
}

void QPainter_fillRect15(QPainter* self, QRectF* r, int preset) {
	self->fillRect(*r, static_cast<QGradient::Preset>(preset));
}

void QPainter_eraseRect(QPainter* self, QRectF* param1) {
	self->eraseRect(*param1);
}

void QPainter_eraseRect2(QPainter* self, int x, int y, int w, int h) {
	self->eraseRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QPainter_eraseRectWithQRect(QPainter* self, QRect* param1) {
	self->eraseRect(*param1);
}

void QPainter_setRenderHint(QPainter* self, int hint) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QPainter_setRenderHints(QPainter* self, int hints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints));
}

int QPainter_renderHints(const QPainter* self) {
	return self->renderHints();
}

bool QPainter_testRenderHint(const QPainter* self, int hint) {
	return self->testRenderHint(static_cast<QPainter::RenderHint>(hint));
}

QPaintEngine* QPainter_paintEngine(const QPainter* self) {
	return self->paintEngine();
}

void QPainter_beginNativePainting(QPainter* self) {
	self->beginNativePainting();
}

void QPainter_endNativePainting(QPainter* self) {
	self->endNativePainting();
}

void QPainter_setClipRect3(QPainter* self, QRectF* param1, int op) {
	self->setClipRect(*param1, static_cast<Qt::ClipOperation>(op));
}

void QPainter_setClipRect4(QPainter* self, QRect* param1, int op) {
	self->setClipRect(*param1, static_cast<Qt::ClipOperation>(op));
}

void QPainter_setClipRect5(QPainter* self, int x, int y, int w, int h, int op) {
	self->setClipRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::ClipOperation>(op));
}

void QPainter_setClipRegion2(QPainter* self, QRegion* param1, int op) {
	self->setClipRegion(*param1, static_cast<Qt::ClipOperation>(op));
}

void QPainter_setClipPath2(QPainter* self, QPainterPath* path, int op) {
	self->setClipPath(*path, static_cast<Qt::ClipOperation>(op));
}

void QPainter_setTransform2(QPainter* self, QTransform* transform, bool combine) {
	self->setTransform(*transform, combine);
}

void QPainter_setWorldTransform2(QPainter* self, QTransform* matrix, bool combine) {
	self->setWorldTransform(*matrix, combine);
}

void QPainter_drawPolygon4(QPainter* self, QPointF* points, int pointCount, int fillRule) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<Qt::FillRule>(fillRule));
}

void QPainter_drawPolygon6(QPainter* self, QPoint* points, int pointCount, int fillRule) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<Qt::FillRule>(fillRule));
}

void QPainter_drawRoundedRect4(QPainter* self, QRectF* rect, double xRadius, double yRadius, int mode) {
	self->drawRoundedRect(*rect, static_cast<double>(xRadius), static_cast<double>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_drawRoundedRect5(QPainter* self, int x, int y, int w, int h, double xRadius, double yRadius, int mode) {
	self->drawRoundedRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<double>(xRadius), static_cast<double>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_drawRoundedRect6(QPainter* self, QRect* rect, double xRadius, double yRadius, int mode) {
	self->drawRoundedRect(*rect, static_cast<double>(xRadius), static_cast<double>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainter_drawTiledPixmap4(QPainter* self, QRectF* rect, QPixmap* pm, QPointF* offset) {
	self->drawTiledPixmap(*rect, *pm, *offset);
}

void QPainter_drawTiledPixmap5(QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx) {
	self->drawTiledPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5, static_cast<int>(sx));
}

void QPainter_drawTiledPixmap6(QPainter* self, int x, int y, int w, int h, QPixmap* param5, int sx, int sy) {
	self->drawTiledPixmap(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param5, static_cast<int>(sx), static_cast<int>(sy));
}

void QPainter_drawTiledPixmap7(QPainter* self, QRect* param1, QPixmap* param2, QPoint* param3) {
	self->drawTiledPixmap(*param1, *param2, *param3);
}

void QPainter_drawImage10(QPainter* self, QRectF* targetRect, QImage* image, QRectF* sourceRect, int flags) {
	self->drawImage(*targetRect, *image, *sourceRect, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

void QPainter_drawImage11(QPainter* self, QRect* targetRect, QImage* image, QRect* sourceRect, int flags) {
	self->drawImage(*targetRect, *image, *sourceRect, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

void QPainter_drawImage12(QPainter* self, QPointF* p, QImage* image, QRectF* sr, int flags) {
	self->drawImage(*p, *image, *sr, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

void QPainter_drawImage13(QPainter* self, QPoint* p, QImage* image, QRect* sr, int flags) {
	self->drawImage(*p, *image, *sr, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

void QPainter_drawImage14(QPainter* self, int x, int y, QImage* image, int sx) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx));
}

void QPainter_drawImage15(QPainter* self, int x, int y, QImage* image, int sx, int sy) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy));
}

void QPainter_drawImage16(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw));
}

void QPainter_drawImage17(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh));
}

void QPainter_drawImage18(QPainter* self, int x, int y, QImage* image, int sx, int sy, int sw, int sh, int flags) {
	self->drawImage(static_cast<int>(x), static_cast<int>(y), *image, static_cast<int>(sx), static_cast<int>(sy), static_cast<int>(sw), static_cast<int>(sh), static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

void QPainter_drawText9(QPainter* self, QRectF* r, int flags, struct miqt_string text, QRectF* br) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, static_cast<int>(flags), text_QString, br);
}

void QPainter_drawText10(QPainter* self, QRect* r, int flags, struct miqt_string text, QRect* br) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, static_cast<int>(flags), text_QString, br);
}

void QPainter_drawText11(QPainter* self, int x, int y, int w, int h, int flags, struct miqt_string text, QRect* br) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<int>(flags), text_QString, br);
}

void QPainter_drawText12(QPainter* self, QRectF* r, struct miqt_string text, QTextOption* o) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->drawText(*r, text_QString, *o);
}

QRectF* QPainter_boundingRect5(QPainter* self, QRectF* rect, struct miqt_string text, QTextOption* o) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QRectF(self->boundingRect(*rect, text_QString, *o));
}

void QPainter_setRenderHint2(QPainter* self, int hint, bool on) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(hint), on);
}

void QPainter_setRenderHints2(QPainter* self, int hints, bool on) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(hints), on);
}

void QPainter_delete(QPainter* self) {
	delete self;
}

QTextItem* QTextItem_new() {
	return new (std::nothrow) QTextItem();
}

QTextItem* QTextItem_new2(QTextItem* param1) {
	return new (std::nothrow) QTextItem(*param1);
}

double QTextItem_descent(const QTextItem* self) {
	double _ret = self->descent();
	return static_cast<double>(_ret);
}

double QTextItem_ascent(const QTextItem* self) {
	double _ret = self->ascent();
	return static_cast<double>(_ret);
}

double QTextItem_width(const QTextItem* self) {
	double _ret = self->width();
	return static_cast<double>(_ret);
}

struct miqt_string QTextItem_text(const QTextItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFont* QTextItem_font(const QTextItem* self) {
	return new QFont(self->font());
}

void QTextItem_delete(QTextItem* self) {
	delete self;
}

bool QPaintEngine_isActive(const QPaintEngine* self) {
	return self->isActive();
}

void QPaintEngine_setActive(QPaintEngine* self, bool newState) {
	self->setActive(newState);
}

bool QPaintEngine_begin(QPaintEngine* self, QPaintDevice* pdev) {
	return self->begin(pdev);
}

bool QPaintEngine_end(QPaintEngine* self) {
	return self->end();
}

void QPaintEngine_updateState(QPaintEngine* self, QPaintEngineState* state) {
	self->updateState(*state);
}

void QPaintEngine_drawRects(QPaintEngine* self, QRect* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPaintEngine_drawRects2(QPaintEngine* self, QRectF* rects, int rectCount) {
	self->drawRects(rects, static_cast<int>(rectCount));
}

void QPaintEngine_drawLines(QPaintEngine* self, QLine* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPaintEngine_drawLines2(QPaintEngine* self, QLineF* lines, int lineCount) {
	self->drawLines(lines, static_cast<int>(lineCount));
}

void QPaintEngine_drawEllipse(QPaintEngine* self, QRectF* r) {
	self->drawEllipse(*r);
}

void QPaintEngine_drawEllipseWithQRect(QPaintEngine* self, QRect* r) {
	self->drawEllipse(*r);
}

void QPaintEngine_drawPath(QPaintEngine* self, QPainterPath* path) {
	self->drawPath(*path);
}

void QPaintEngine_drawPoints(QPaintEngine* self, QPointF* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPaintEngine_drawPoints2(QPaintEngine* self, QPoint* points, int pointCount) {
	self->drawPoints(points, static_cast<int>(pointCount));
}

void QPaintEngine_drawPolygon(QPaintEngine* self, QPointF* points, int pointCount, int mode) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

void QPaintEngine_drawPolygon2(QPaintEngine* self, QPoint* points, int pointCount, int mode) {
	self->drawPolygon(points, static_cast<int>(pointCount), static_cast<QPaintEngine::PolygonDrawMode>(mode));
}

void QPaintEngine_drawPixmap(QPaintEngine* self, QRectF* r, QPixmap* pm, QRectF* sr) {
	self->drawPixmap(*r, *pm, *sr);
}

void QPaintEngine_drawTextItem(QPaintEngine* self, QPointF* p, QTextItem* textItem) {
	self->drawTextItem(*p, *textItem);
}

void QPaintEngine_drawTiledPixmap(QPaintEngine* self, QRectF* r, QPixmap* pixmap, QPointF* s) {
	self->drawTiledPixmap(*r, *pixmap, *s);
}

void QPaintEngine_drawImage(QPaintEngine* self, QRectF* r, QImage* pm, QRectF* sr, int flags) {
	self->drawImage(*r, *pm, *sr, static_cast<QFlags<Qt::ImageConversionFlag>>(flags));
}

void QPaintEngine_setPaintDevice(QPaintEngine* self, QPaintDevice* device) {
	self->setPaintDevice(device);
}

QPaintDevice* QPaintEngine_paintDevice(const QPaintEngine* self) {
	return self->paintDevice();
}

void QPaintEngine_setSystemClip(QPaintEngine* self, QRegion* baseClip) {
	self->setSystemClip(*baseClip);
}

QRegion* QPaintEngine_systemClip(const QPaintEngine* self) {
	return new QRegion(self->systemClip());
}

void QPaintEngine_setSystemRect(QPaintEngine* self, QRect* rect) {
	self->setSystemRect(*rect);
}

QRect* QPaintEngine_systemRect(const QPaintEngine* self) {
	return new QRect(self->systemRect());
}

QPoint* QPaintEngine_coordinateOffset(const QPaintEngine* self) {
	return new QPoint(self->coordinateOffset());
}

void QPaintEngine_fixNegRect(QPaintEngine* self, int* x, int* y, int* w, int* h) {
	self->fix_neg_rect(x, y, w, h);
}

bool QPaintEngine_testDirty(QPaintEngine* self, int df) {
	return self->testDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

void QPaintEngine_setDirty(QPaintEngine* self, int df) {
	self->setDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

void QPaintEngine_clearDirty(QPaintEngine* self, int df) {
	self->clearDirty(static_cast<QPaintEngine::DirtyFlags>(df));
}

bool QPaintEngine_hasFeature(const QPaintEngine* self, int feature) {
	return self->hasFeature(static_cast<QPaintEngine::PaintEngineFeatures>(feature));
}

QPainter* QPaintEngine_painter(const QPaintEngine* self) {
	return self->painter();
}

void QPaintEngine_syncState(QPaintEngine* self) {
	self->syncState();
}

bool QPaintEngine_isExtended(const QPaintEngine* self) {
	return self->isExtended();
}

QPixmap* QPaintEngine_createPixmap(QPaintEngine* self, QSize* size) {
	return new QPixmap(self->createPixmap(*size));
}

QPixmap* QPaintEngine_createPixmapFromImage(QPaintEngine* self, QImage* image, int flags) {
	return new QPixmap(self->createPixmapFromImage(*image, static_cast<QFlags<Qt::ImageConversionFlag>>(flags)));
}

void QPaintEngine_delete(QPaintEngine* self) {
	delete self;
}

int QPaintEngineState_state(const QPaintEngineState* self) {
	QPaintEngine::DirtyFlags _ret = self->state();
	return static_cast<int>(_ret);
}

QPen* QPaintEngineState_pen(const QPaintEngineState* self) {
	return new QPen(self->pen());
}

QBrush* QPaintEngineState_brush(const QPaintEngineState* self) {
	return new QBrush(self->brush());
}

QPointF* QPaintEngineState_brushOrigin(const QPaintEngineState* self) {
	return new QPointF(self->brushOrigin());
}

QBrush* QPaintEngineState_backgroundBrush(const QPaintEngineState* self) {
	return new QBrush(self->backgroundBrush());
}

int QPaintEngineState_backgroundMode(const QPaintEngineState* self) {
	Qt::BGMode _ret = self->backgroundMode();
	return static_cast<int>(_ret);
}

QFont* QPaintEngineState_font(const QPaintEngineState* self) {
	return new QFont(self->font());
}

QTransform* QPaintEngineState_transform(const QPaintEngineState* self) {
	return new QTransform(self->transform());
}

int QPaintEngineState_clipOperation(const QPaintEngineState* self) {
	Qt::ClipOperation _ret = self->clipOperation();
	return static_cast<int>(_ret);
}

QRegion* QPaintEngineState_clipRegion(const QPaintEngineState* self) {
	return new QRegion(self->clipRegion());
}

QPainterPath* QPaintEngineState_clipPath(const QPaintEngineState* self) {
	return new QPainterPath(self->clipPath());
}

bool QPaintEngineState_isClipEnabled(const QPaintEngineState* self) {
	return self->isClipEnabled();
}

int QPaintEngineState_renderHints(const QPaintEngineState* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

int QPaintEngineState_compositionMode(const QPaintEngineState* self) {
	QPainter::CompositionMode _ret = self->compositionMode();
	return static_cast<int>(_ret);
}

double QPaintEngineState_opacity(const QPaintEngineState* self) {
	double _ret = self->opacity();
	return static_cast<double>(_ret);
}

QPainter* QPaintEngineState_painter(const QPaintEngineState* self) {
	return self->painter();
}

bool QPaintEngineState_brushNeedsResolving(const QPaintEngineState* self) {
	return self->brushNeedsResolving();
}

bool QPaintEngineState_penNeedsResolving(const QPaintEngineState* self) {
	return self->penNeedsResolving();
}

void QPaintEngineState_delete(QPaintEngineState* self) {
	delete self;
}

QPainterPath* QPainterPath_new() {
	return new (std::nothrow) QPainterPath();
}

QPainterPath* QPainterPath_new2(QPointF* startPoint) {
	return new (std::nothrow) QPainterPath(*startPoint);
}

QPainterPath* QPainterPath_new3(QPainterPath* other) {
	return new (std::nothrow) QPainterPath(*other);
}

void QPainterPath_swap(QPainterPath* self, QPainterPath* other) {
	self->swap(*other);
}

void QPainterPath_clear(QPainterPath* self) {
	self->clear();
}

void QPainterPath_reserve(QPainterPath* self, int size) {
	self->reserve(static_cast<int>(size));
}

int QPainterPath_capacity(const QPainterPath* self) {
	return self->capacity();
}

void QPainterPath_closeSubpath(QPainterPath* self) {
	self->closeSubpath();
}

void QPainterPath_moveTo(QPainterPath* self, QPointF* p) {
	self->moveTo(*p);
}

void QPainterPath_moveTo2(QPainterPath* self, double x, double y) {
	self->moveTo(static_cast<double>(x), static_cast<double>(y));
}

void QPainterPath_lineTo(QPainterPath* self, QPointF* p) {
	self->lineTo(*p);
}

void QPainterPath_lineTo2(QPainterPath* self, double x, double y) {
	self->lineTo(static_cast<double>(x), static_cast<double>(y));
}

void QPainterPath_arcMoveTo(QPainterPath* self, QRectF* rect, double angle) {
	self->arcMoveTo(*rect, static_cast<double>(angle));
}

void QPainterPath_arcMoveTo2(QPainterPath* self, double x, double y, double w, double h, double angle) {
	self->arcMoveTo(static_cast<double>(x), static_cast<double>(y), static_cast<double>(w), static_cast<double>(h), static_cast<double>(angle));
}

void QPainterPath_arcTo(QPainterPath* self, QRectF* rect, double startAngle, double arcLength) {
	self->arcTo(*rect, static_cast<double>(startAngle), static_cast<double>(arcLength));
}

void QPainterPath_arcTo2(QPainterPath* self, double x, double y, double w, double h, double startAngle, double arcLength) {
	self->arcTo(static_cast<double>(x), static_cast<double>(y), static_cast<double>(w), static_cast<double>(h), static_cast<double>(startAngle), static_cast<double>(arcLength));
}

void QPainterPath_cubicTo(QPainterPath* self, QPointF* ctrlPt1, QPointF* ctrlPt2, QPointF* endPt) {
	self->cubicTo(*ctrlPt1, *ctrlPt2, *endPt);
}

void QPainterPath_cubicTo2(QPainterPath* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty) {
	self->cubicTo(static_cast<double>(ctrlPt1x), static_cast<double>(ctrlPt1y), static_cast<double>(ctrlPt2x), static_cast<double>(ctrlPt2y), static_cast<double>(endPtx), static_cast<double>(endPty));
}

void QPainterPath_quadTo(QPainterPath* self, QPointF* ctrlPt, QPointF* endPt) {
	self->quadTo(*ctrlPt, *endPt);
}

void QPainterPath_quadTo2(QPainterPath* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
	self->quadTo(static_cast<double>(ctrlPtx), static_cast<double>(ctrlPty), static_cast<double>(endPtx), static_cast<double>(endPty));
}

QPointF* QPainterPath_currentPosition(const QPainterPath* self) {
	return new QPointF(self->currentPosition());
}

void QPainterPath_addRect(QPainterPath* self, QRectF* rect) {
	self->addRect(*rect);
}

void QPainterPath_addRect2(QPainterPath* self, double x, double y, double w, double h) {
	self->addRect(static_cast<double>(x), static_cast<double>(y), static_cast<double>(w), static_cast<double>(h));
}

void QPainterPath_addEllipse(QPainterPath* self, QRectF* rect) {
	self->addEllipse(*rect);
}

void QPainterPath_addEllipse2(QPainterPath* self, double x, double y, double w, double h) {
	self->addEllipse(static_cast<double>(x), static_cast<double>(y), static_cast<double>(w), static_cast<double>(h));
}

void QPainterPath_addEllipse3(QPainterPath* self, QPointF* center, double rx, double ry) {
	self->addEllipse(*center, static_cast<double>(rx), static_cast<double>(ry));
}

void QPainterPath_addText(QPainterPath* self, QPointF* point, QFont* f, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addText(*point, *f, text_QString);
}

void QPainterPath_addText2(QPainterPath* self, double x, double y, QFont* f, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->addText(static_cast<double>(x), static_cast<double>(y), *f, text_QString);
}

void QPainterPath_addPath(QPainterPath* self, QPainterPath* path) {
	self->addPath(*path);
}

void QPainterPath_addRegion(QPainterPath* self, QRegion* region) {
	self->addRegion(*region);
}

void QPainterPath_addRoundedRect(QPainterPath* self, QRectF* rect, double xRadius, double yRadius) {
	self->addRoundedRect(*rect, static_cast<double>(xRadius), static_cast<double>(yRadius));
}

void QPainterPath_addRoundedRect2(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius) {
	self->addRoundedRect(static_cast<double>(x), static_cast<double>(y), static_cast<double>(w), static_cast<double>(h), static_cast<double>(xRadius), static_cast<double>(yRadius));
}

void QPainterPath_connectPath(QPainterPath* self, QPainterPath* path) {
	self->connectPath(*path);
}

bool QPainterPath_contains(const QPainterPath* self, QPointF* pt) {
	return self->contains(*pt);
}

bool QPainterPath_containsWithRect(const QPainterPath* self, QRectF* rect) {
	return self->contains(*rect);
}

bool QPainterPath_intersects(const QPainterPath* self, QRectF* rect) {
	return self->intersects(*rect);
}

void QPainterPath_translate(QPainterPath* self, double dx, double dy) {
	self->translate(static_cast<double>(dx), static_cast<double>(dy));
}

void QPainterPath_translateWithOffset(QPainterPath* self, QPointF* offset) {
	self->translate(*offset);
}

QPainterPath* QPainterPath_translated(const QPainterPath* self, double dx, double dy) {
	return new QPainterPath(self->translated(static_cast<double>(dx), static_cast<double>(dy)));
}

QPainterPath* QPainterPath_translatedWithOffset(const QPainterPath* self, QPointF* offset) {
	return new QPainterPath(self->translated(*offset));
}

QRectF* QPainterPath_boundingRect(const QPainterPath* self) {
	return new QRectF(self->boundingRect());
}

QRectF* QPainterPath_controlPointRect(const QPainterPath* self) {
	return new QRectF(self->controlPointRect());
}

int QPainterPath_fillRule(const QPainterPath* self) {
	Qt::FillRule _ret = self->fillRule();
	return static_cast<int>(_ret);
}

void QPainterPath_setFillRule(QPainterPath* self, int fillRule) {
	self->setFillRule(static_cast<Qt::FillRule>(fillRule));
}

bool QPainterPath_isEmpty(const QPainterPath* self) {
	return self->isEmpty();
}

QPainterPath* QPainterPath_toReversed(const QPainterPath* self) {
	return new QPainterPath(self->toReversed());
}

int QPainterPath_elementCount(const QPainterPath* self) {
	return self->elementCount();
}

void QPainterPath_setElementPositionAt(QPainterPath* self, int i, double x, double y) {
	self->setElementPositionAt(static_cast<int>(i), static_cast<double>(x), static_cast<double>(y));
}

bool QPainterPath_isCachingEnabled(const QPainterPath* self) {
	return self->isCachingEnabled();
}

void QPainterPath_setCachingEnabled(QPainterPath* self, bool enabled) {
	self->setCachingEnabled(enabled);
}

double QPainterPath_length(const QPainterPath* self) {
	double _ret = self->length();
	return static_cast<double>(_ret);
}

double QPainterPath_percentAtLength(const QPainterPath* self, double len) {
	double _ret = self->percentAtLength(static_cast<double>(len));
	return static_cast<double>(_ret);
}

QPointF* QPainterPath_pointAtPercent(const QPainterPath* self, double t) {
	return new QPointF(self->pointAtPercent(static_cast<double>(t)));
}

double QPainterPath_angleAtPercent(const QPainterPath* self, double t) {
	double _ret = self->angleAtPercent(static_cast<double>(t));
	return static_cast<double>(_ret);
}

double QPainterPath_slopeAtPercent(const QPainterPath* self, double t) {
	double _ret = self->slopeAtPercent(static_cast<double>(t));
	return static_cast<double>(_ret);
}

QPainterPath* QPainterPath_trimmed(const QPainterPath* self, double fromFraction, double toFraction) {
	return new QPainterPath(self->trimmed(static_cast<double>(fromFraction), static_cast<double>(toFraction)));
}

bool QPainterPath_intersectsWithQPainterPath(const QPainterPath* self, QPainterPath* p) {
	return self->intersects(*p);
}

bool QPainterPath_containsWithQPainterPath(const QPainterPath* self, QPainterPath* p) {
	return self->contains(*p);
}

QPainterPath* QPainterPath_united(const QPainterPath* self, QPainterPath* r) {
	return new QPainterPath(self->united(*r));
}

QPainterPath* QPainterPath_intersected(const QPainterPath* self, QPainterPath* r) {
	return new QPainterPath(self->intersected(*r));
}

QPainterPath* QPainterPath_subtracted(const QPainterPath* self, QPainterPath* r) {
	return new QPainterPath(self->subtracted(*r));
}

QPainterPath* QPainterPath_simplified(const QPainterPath* self) {
	return new QPainterPath(self->simplified());
}

bool QPainterPath_operatorNotEqual(const QPainterPath* self, QPainterPath* other) {
	return (*self != *other);
}

QPainterPath* QPainterPath_operatorBitwiseAnd(const QPainterPath* self, QPainterPath* other) {
	return new QPainterPath(self->operator&(*other));
}

QPainterPath* QPainterPath_operatorBitwiseOr(const QPainterPath* self, QPainterPath* other) {
	return new QPainterPath(self->operator|(*other));
}

QPainterPath* QPainterPath_operatorPlus(const QPainterPath* self, QPainterPath* other) {
	return new QPainterPath(self->operator+(*other));
}

QPainterPath* QPainterPath_operatorMinus(const QPainterPath* self, QPainterPath* other) {
	return new QPainterPath(self->operator-(*other));
}

void QPainterPath_operatorBitwiseAndAssign(QPainterPath* self, QPainterPath* other) {
	self->operator&=(*other);
}

void QPainterPath_operatorBitwiseOrAssign(QPainterPath* self, QPainterPath* other) {
	self->operator|=(*other);
}

QPainterPath* QPainterPath_operatorPlusAssign(QPainterPath* self, QPainterPath* other) {
	QPainterPath& _ret = self->operator+=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

QPainterPath* QPainterPath_operatorMinusAssign(QPainterPath* self, QPainterPath* other) {
	QPainterPath& _ret = self->operator-=(*other);
	// Cast returned reference into pointer
	return &_ret;
}

void QPainterPath_addRoundedRect3(QPainterPath* self, QRectF* rect, double xRadius, double yRadius, int mode) {
	self->addRoundedRect(*rect, static_cast<double>(xRadius), static_cast<double>(yRadius), static_cast<Qt::SizeMode>(mode));
}

void QPainterPath_addRoundedRect4(QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius, int mode) {
	self->addRoundedRect(static_cast<double>(x), static_cast<double>(y), static_cast<double>(w), static_cast<double>(h), static_cast<double>(xRadius), static_cast<double>(yRadius), static_cast<Qt::SizeMode>(mode));
}

QPainterPath* QPainterPath_trimmed2(const QPainterPath* self, double fromFraction, double toFraction, double offset) {
	return new QPainterPath(self->trimmed(static_cast<double>(fromFraction), static_cast<double>(toFraction), static_cast<double>(offset)));
}

void QPainterPath_delete(QPainterPath* self) {
	delete self;
}

class MiqtVirtualQPicture final : public QPicture {
public:

	MiqtVirtualQPicture(): QPicture() {}
	MiqtVirtualQPicture(const QPicture& param1): QPicture(param1) {}
	MiqtVirtualQPicture(int formatVersion): QPicture(formatVersion) {}

	virtual ~MiqtVirtualQPicture() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QPicture::devType();
		}

		int callback_return_value = miqt_exec_callback_QPicture_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QPicture_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setData(const char* data, uint size) override {
		if (handle__setData == 0) {
			QPicture::setData(data, size);
			return;
		}

		const char* sigval1 = (const char*) data;
		unsigned int size_ret = size;
		unsigned int sigval2 = static_cast<unsigned int>(size_ret);
		miqt_exec_callback_QPicture_setData(this, handle__setData, sigval1, sigval2);

	}

	friend void QPicture_virtualbase_setData(void* self, const char* data, unsigned int size);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QPicture::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QPicture_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QPicture_virtualbase_paintEngine(const void* self);

};

QPicture* QPicture_new() {
	return new (std::nothrow) MiqtVirtualQPicture();
}

QPicture* QPicture_new2(QPicture* param1) {
	return new (std::nothrow) MiqtVirtualQPicture(*param1);
}

QPicture* QPicture_new3(int formatVersion) {
	return new (std::nothrow) MiqtVirtualQPicture(static_cast<int>(formatVersion));
}

void QPicture_virtbase(QPicture* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

bool QPicture_isNull(const QPicture* self) {
	return self->isNull();
}

int QPicture_devType(const QPicture* self) {
	return self->devType();
}

unsigned int QPicture_size(const QPicture* self) {
	unsigned int _ret = self->size();
	return static_cast<unsigned int>(_ret);
}

const char* QPicture_data(const QPicture* self) {
	return (const char*) self->data();
}

void QPicture_setData(QPicture* self, const char* data, unsigned int size) {
	self->setData(data, static_cast<unsigned int>(size));
}

bool QPicture_play(QPicture* self, QPainter* p) {
	return self->play(p);
}

bool QPicture_load(QPicture* self, QIODevice* dev) {
	return self->load(dev);
}

bool QPicture_loadWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QPicture_save(QPicture* self, QIODevice* dev) {
	return self->save(dev);
}

bool QPicture_saveWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString);
}

QRect* QPicture_boundingRect(const QPicture* self) {
	return new QRect(self->boundingRect());
}

void QPicture_setBoundingRect(QPicture* self, QRect* r) {
	self->setBoundingRect(*r);
}

void QPicture_swap(QPicture* self, QPicture* other) {
	self->swap(*other);
}

void QPicture_detach(QPicture* self) {
	self->detach();
}

bool QPicture_isDetached(const QPicture* self) {
	return self->isDetached();
}

QPaintEngine* QPicture_paintEngine(const QPicture* self) {
	return self->paintEngine();
}

bool QPicture_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = static_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QPicture_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQPicture*>(self)->QPicture::devType();
}

bool QPicture_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = static_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = slot;
	return true;
}

void QPicture_virtualbase_setData(void* self, const char* data, unsigned int size) {
	static_cast<MiqtVirtualQPicture*>(self)->QPicture::setData(data, static_cast<unsigned int>(size));
}

bool QPicture_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPicture* self_cast = static_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QPicture_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQPicture*>(self)->QPicture::paintEngine();
}

void QPicture_delete(QPicture* self) {
	delete self;
}

QQuaternion* QQuaternion_new() {
	return new (std::nothrow) QQuaternion();
}

QQuaternion* QQuaternion_new2(int param1) {
	return new (std::nothrow) QQuaternion(static_cast<Qt::Initialization>(param1));
}

QQuaternion* QQuaternion_new3(float scalar, float xpos, float ypos, float zpos) {
	return new (std::nothrow) QQuaternion(static_cast<float>(scalar), static_cast<float>(xpos), static_cast<float>(ypos), static_cast<float>(zpos));
}

QQuaternion* QQuaternion_new4(float scalar, QVector3D* vector) {
	return new (std::nothrow) QQuaternion(static_cast<float>(scalar), *vector);
}

QQuaternion* QQuaternion_new5(QVector4D* vector) {
	return new (std::nothrow) QQuaternion(*vector);
}

QQuaternion* QQuaternion_new6(QQuaternion* param1) {
	return new (std::nothrow) QQuaternion(*param1);
}

bool QQuaternion_isNull(const QQuaternion* self) {
	return self->isNull();
}

bool QQuaternion_isIdentity(const QQuaternion* self) {
	return self->isIdentity();
}

QVector3D* QQuaternion_vector(const QQuaternion* self) {
	return new QVector3D(self->vector());
}

void QQuaternion_setVector(QQuaternion* self, QVector3D* vector) {
	self->setVector(*vector);
}

void QQuaternion_setVector2(QQuaternion* self, float x, float y, float z) {
	self->setVector(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
}

float QQuaternion_x(const QQuaternion* self) {
	return self->x();
}

float QQuaternion_y(const QQuaternion* self) {
	return self->y();
}

float QQuaternion_z(const QQuaternion* self) {
	return self->z();
}

float QQuaternion_scalar(const QQuaternion* self) {
	return self->scalar();
}

void QQuaternion_setX(QQuaternion* self, float x) {
	self->setX(static_cast<float>(x));
}

void QQuaternion_setY(QQuaternion* self, float y) {
	self->setY(static_cast<float>(y));
}

void QQuaternion_setZ(QQuaternion* self, float z) {
	self->setZ(static_cast<float>(z));
}

void QQuaternion_setScalar(QQuaternion* self, float scalar) {
	self->setScalar(static_cast<float>(scalar));
}

float QQuaternion_dotProduct(QQuaternion* q1, QQuaternion* q2) {
	return QQuaternion::dotProduct(*q1, *q2);
}

float QQuaternion_length(const QQuaternion* self) {
	return self->length();
}

float QQuaternion_lengthSquared(const QQuaternion* self) {
	return self->lengthSquared();
}

QQuaternion* QQuaternion_normalized(const QQuaternion* self) {
	return new QQuaternion(self->normalized());
}

void QQuaternion_normalize(QQuaternion* self) {
	self->normalize();
}

QQuaternion* QQuaternion_inverted(const QQuaternion* self) {
	return new QQuaternion(self->inverted());
}

QQuaternion* QQuaternion_conjugated(const QQuaternion* self) {
	return new QQuaternion(self->conjugated());
}

QVector3D* QQuaternion_rotatedVector(const QQuaternion* self, QVector3D* vector) {
	return new QVector3D(self->rotatedVector(*vector));
}

QQuaternion* QQuaternion_operatorPlusAssign(QQuaternion* self, QQuaternion* quaternion) {
	QQuaternion& _ret = self->operator+=(*quaternion);
	// Cast returned reference into pointer
	return &_ret;
}

QQuaternion* QQuaternion_operatorMinusAssign(QQuaternion* self, QQuaternion* quaternion) {
	QQuaternion& _ret = self->operator-=(*quaternion);
	// Cast returned reference into pointer
	return &_ret;
}

QQuaternion* QQuaternion_operatorMultiplyAssign(QQuaternion* self, float factor) {
	QQuaternion& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QQuaternion* QQuaternion_operatorMultiplyAssignWithQuaternion(QQuaternion* self, QQuaternion* quaternion) {
	QQuaternion& _ret = self->operator*=(*quaternion);
	// Cast returned reference into pointer
	return &_ret;
}

QQuaternion* QQuaternion_operatorDivideAssign(QQuaternion* self, float divisor) {
	QQuaternion& _ret = self->operator/=(static_cast<float>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QVector4D* QQuaternion_toVector4D(const QQuaternion* self) {
	return new QVector4D(self->toVector4D());
}

QVariant* QQuaternion_ToQVariant(const QQuaternion* self) {
	return new QVariant(self->operator QVariant());
}

void QQuaternion_getAxisAndAngle(const QQuaternion* self, QVector3D* axis, float* angle) {
	self->getAxisAndAngle(axis, angle);
}

QQuaternion* QQuaternion_fromAxisAndAngle(QVector3D* axis, float angle) {
	return new QQuaternion(QQuaternion::fromAxisAndAngle(*axis, static_cast<float>(angle)));
}

void QQuaternion_getAxisAndAngle2(const QQuaternion* self, float* x, float* y, float* z, float* angle) {
	self->getAxisAndAngle(x, y, z, angle);
}

QQuaternion* QQuaternion_fromAxisAndAngle2(float x, float y, float z, float angle) {
	return new QQuaternion(QQuaternion::fromAxisAndAngle(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(angle)));
}

void QQuaternion_getEulerAngles(const QQuaternion* self, float* pitch, float* yaw, float* roll) {
	self->getEulerAngles(pitch, yaw, roll);
}

void QQuaternion_getAxes(const QQuaternion* self, QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis) {
	self->getAxes(xAxis, yAxis, zAxis);
}

QQuaternion* QQuaternion_fromAxes(QVector3D* xAxis, QVector3D* yAxis, QVector3D* zAxis) {
	return new QQuaternion(QQuaternion::fromAxes(*xAxis, *yAxis, *zAxis));
}

QQuaternion* QQuaternion_fromDirection(QVector3D* direction, QVector3D* up) {
	return new QQuaternion(QQuaternion::fromDirection(*direction, *up));
}

QQuaternion* QQuaternion_rotationTo(QVector3D* from, QVector3D* to) {
	return new QQuaternion(QQuaternion::rotationTo(*from, *to));
}

QQuaternion* QQuaternion_slerp(QQuaternion* q1, QQuaternion* q2, float t) {
	return new QQuaternion(QQuaternion::slerp(*q1, *q2, static_cast<float>(t)));
}

QQuaternion* QQuaternion_nlerp(QQuaternion* q1, QQuaternion* q2, float t) {
	return new QQuaternion(QQuaternion::nlerp(*q1, *q2, static_cast<float>(t)));
}

void QQuaternion_delete(QQuaternion* self) {
	delete self;
}

void QSessionManager_virtbase(QSessionManager* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSessionManager_metaObject(const QSessionManager* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QSessionManager_tr(const char* s) {
	QString _ret = QSessionManager::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSessionManager_sessionId(const QSessionManager* self) {
	QString _ret = self->sessionId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSessionManager_sessionKey(const QSessionManager* self) {
	QString _ret = self->sessionKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSessionManager_allowsInteraction(QSessionManager* self) {
	return self->allowsInteraction();
}

bool QSessionManager_allowsErrorInteraction(QSessionManager* self) {
	return self->allowsErrorInteraction();
}

void QSessionManager_release(QSessionManager* self) {
	self->release();
}

void QSessionManager_cancel(QSessionManager* self) {
	self->cancel();
}

void QSessionManager_setRestartHint(QSessionManager* self, int restartHint) {
	self->setRestartHint(static_cast<QSessionManager::RestartHint>(restartHint));
}

int QSessionManager_restartHint(const QSessionManager* self) {
	return self->restartHint();
}

void QSessionManager_setRestartCommand(QSessionManager* self, struct miqt_array /* of struct miqt_string */  restartCommand) {
	QStringList restartCommand_QList;
	restartCommand_QList.reserve(restartCommand.len);
	struct miqt_string* restartCommand_arr = static_cast<struct miqt_string*>(restartCommand.data);
	for(size_t i = 0; i < restartCommand.len; ++i) {
		QString restartCommand_arr_i_QString = QString::fromUtf8(restartCommand_arr[i].data, restartCommand_arr[i].len);
		restartCommand_QList.push_back(restartCommand_arr_i_QString);
	}
	self->setRestartCommand(restartCommand_QList);
}

struct miqt_array /* of struct miqt_string */  QSessionManager_restartCommand(const QSessionManager* self) {
	QStringList _ret = self->restartCommand();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSessionManager_setDiscardCommand(QSessionManager* self, struct miqt_array /* of struct miqt_string */  discardCommand) {
	QStringList discardCommand_QList;
	discardCommand_QList.reserve(discardCommand.len);
	struct miqt_string* discardCommand_arr = static_cast<struct miqt_string*>(discardCommand.data);
	for(size_t i = 0; i < discardCommand.len; ++i) {
		QString discardCommand_arr_i_QString = QString::fromUtf8(discardCommand_arr[i].data, discardCommand_arr[i].len);
		discardCommand_QList.push_back(discardCommand_arr_i_QString);
	}
	self->setDiscardCommand(discardCommand_QList);
}

struct miqt_array /* of struct miqt_string */  QSessionManager_discardCommand(const QSessionManager* self) {
	QStringList _ret = self->discardCommand();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSessionManager_setManagerProperty(QSessionManager* self, struct miqt_string name, struct miqt_string value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->setManagerProperty(name_QString, value_QString);
}

void QSessionManager_setManagerProperty2(QSessionManager* self, struct miqt_string name, struct miqt_array /* of struct miqt_string */  value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QStringList value_QList;
	value_QList.reserve(value.len);
	struct miqt_string* value_arr = static_cast<struct miqt_string*>(value.data);
	for(size_t i = 0; i < value.len; ++i) {
		QString value_arr_i_QString = QString::fromUtf8(value_arr[i].data, value_arr[i].len);
		value_QList.push_back(value_arr_i_QString);
	}
	self->setManagerProperty(name_QString, value_QList);
}

bool QSessionManager_isPhase2(const QSessionManager* self) {
	return self->isPhase2();
}

void QSessionManager_requestPhase2(QSessionManager* self) {
	self->requestPhase2();
}

struct miqt_string QSessionManager_tr2(const char* s, const char* c) {
	QString _ret = QSessionManager::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSessionManager_tr3(const char* s, const char* c, int n) {
	QString _ret = QSessionManager::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

class MiqtVirtualQShortcut final : public QShortcut {
public:

	MiqtVirtualQShortcut(QObject* parent): QShortcut(parent) {}
	MiqtVirtualQShortcut(const QKeySequence& key, QObject* parent): QShortcut(key, parent) {}
	MiqtVirtualQShortcut(QKeySequence::StandardKey key, QObject* parent): QShortcut(key, parent) {}
	MiqtVirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member): QShortcut(key, parent, member) {}
	MiqtVirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember): QShortcut(key, parent, member, ambiguousMember) {}
	MiqtVirtualQShortcut(const QKeySequence& key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context): QShortcut(key, parent, member, ambiguousMember, context) {}
	MiqtVirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member): QShortcut(key, parent, member) {}
	MiqtVirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember): QShortcut(key, parent, member, ambiguousMember) {}
	MiqtVirtualQShortcut(QKeySequence::StandardKey key, QObject* parent, const char* member, const char* ambiguousMember, Qt::ShortcutContext context): QShortcut(key, parent, member, ambiguousMember, context) {}

	virtual ~MiqtVirtualQShortcut() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QShortcut::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QShortcut_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QShortcut_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QShortcut::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QShortcut_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QShortcut_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QShortcut_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QShortcut_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QShortcut_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QShortcut_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QShortcut* QShortcut_new(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQShortcut(parent);
}

QShortcut* QShortcut_new2(QKeySequence* key, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQShortcut(*key, parent);
}

QShortcut* QShortcut_new3(int key, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent);
}

QShortcut* QShortcut_new4(QKeySequence* key, QObject* parent, const char* member) {
	return new (std::nothrow) MiqtVirtualQShortcut(*key, parent, member);
}

QShortcut* QShortcut_new5(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember) {
	return new (std::nothrow) MiqtVirtualQShortcut(*key, parent, member, ambiguousMember);
}

QShortcut* QShortcut_new6(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember, int context) {
	return new (std::nothrow) MiqtVirtualQShortcut(*key, parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(context));
}

QShortcut* QShortcut_new7(int key, QObject* parent, const char* member) {
	return new (std::nothrow) MiqtVirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member);
}

QShortcut* QShortcut_new8(int key, QObject* parent, const char* member, const char* ambiguousMember) {
	return new (std::nothrow) MiqtVirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member, ambiguousMember);
}

QShortcut* QShortcut_new9(int key, QObject* parent, const char* member, const char* ambiguousMember, int context) {
	return new (std::nothrow) MiqtVirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(context));
}

void QShortcut_virtbase(QShortcut* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QShortcut_metaObject(const QShortcut* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QShortcut_tr(const char* s) {
	QString _ret = QShortcut::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QShortcut_setKey(QShortcut* self, QKeySequence* key) {
	self->setKey(*key);
}

QKeySequence* QShortcut_key(const QShortcut* self) {
	return new QKeySequence(self->key());
}

void QShortcut_setKeys(QShortcut* self, int key) {
	self->setKeys(static_cast<QKeySequence::StandardKey>(key));
}

void QShortcut_setKeysWithKeys(QShortcut* self, struct miqt_array /* of QKeySequence* */  keys) {
	QList<QKeySequence> keys_QList;
	keys_QList.reserve(keys.len);
	QKeySequence** keys_arr = static_cast<QKeySequence**>(keys.data);
	for(size_t i = 0; i < keys.len; ++i) {
		keys_QList.push_back(*(keys_arr[i]));
	}
	self->setKeys(keys_QList);
}

struct miqt_array /* of QKeySequence* */  QShortcut_keys(const QShortcut* self) {
	QList<QKeySequence> _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
	QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QKeySequence(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QShortcut_setEnabled(QShortcut* self, bool enable) {
	self->setEnabled(enable);
}

bool QShortcut_isEnabled(const QShortcut* self) {
	return self->isEnabled();
}

void QShortcut_setContext(QShortcut* self, int context) {
	self->setContext(static_cast<Qt::ShortcutContext>(context));
}

int QShortcut_context(const QShortcut* self) {
	Qt::ShortcutContext _ret = self->context();
	return static_cast<int>(_ret);
}

void QShortcut_setAutoRepeat(QShortcut* self, bool on) {
	self->setAutoRepeat(on);
}

bool QShortcut_autoRepeat(const QShortcut* self) {
	return self->autoRepeat();
}

int QShortcut_id(const QShortcut* self) {
	return self->id();
}

void QShortcut_setWhatsThis(QShortcut* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setWhatsThis(text_QString);
}

struct miqt_string QShortcut_whatsThis(const QShortcut* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QShortcut_activated(QShortcut* self) {
	self->activated();
}

void QShortcut_connect_activated(QShortcut* self, intptr_t slot) {
	QShortcut::connect(self, static_cast<void (QShortcut::*)()>(&QShortcut::activated), self, [=]() {
		miqt_exec_callback_QShortcut_activated(slot);
	});
}

void QShortcut_activatedAmbiguously(QShortcut* self) {
	self->activatedAmbiguously();
}

void QShortcut_connect_activatedAmbiguously(QShortcut* self, intptr_t slot) {
	QShortcut::connect(self, static_cast<void (QShortcut::*)()>(&QShortcut::activatedAmbiguously), self, [=]() {
		miqt_exec_callback_QShortcut_activatedAmbiguously(slot);
	});
}

struct miqt_string QShortcut_tr2(const char* s, const char* c) {
	QString _ret = QShortcut::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QShortcut_tr3(const char* s, const char* c, int n) {
	QString _ret = QShortcut::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QShortcut_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = static_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QShortcut_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQShortcut*>(self)->QShortcut::event(event);
}

bool QShortcut_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQShortcut* self_cast = static_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QShortcut_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQShortcut*>(self)->QShortcut::eventFilter(watched, event);
}

QObject* QShortcut_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQShortcut* self_cast = static_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QShortcut_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQShortcut* self_cast = static_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QShortcut_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQShortcut* self_cast = static_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QShortcut_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQShortcut* self_cast = static_cast<MiqtVirtualQShortcut*>( (QShortcut*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QShortcut_delete(QShortcut* self) {
	delete self;
}

QStaticText* QStaticText_new() {
	return new (std::nothrow) QStaticText();
}

QStaticText* QStaticText_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) QStaticText(text_QString);
}

QStaticText* QStaticText_new3(QStaticText* other) {
	return new (std::nothrow) QStaticText(*other);
}

void QStaticText_swap(QStaticText* self, QStaticText* other) {
	self->swap(*other);
}

void QStaticText_setText(QStaticText* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

struct miqt_string QStaticText_text(const QStaticText* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStaticText_setTextFormat(QStaticText* self, int textFormat) {
	self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

int QStaticText_textFormat(const QStaticText* self) {
	Qt::TextFormat _ret = self->textFormat();
	return static_cast<int>(_ret);
}

void QStaticText_setTextWidth(QStaticText* self, double textWidth) {
	self->setTextWidth(static_cast<double>(textWidth));
}

double QStaticText_textWidth(const QStaticText* self) {
	double _ret = self->textWidth();
	return static_cast<double>(_ret);
}

void QStaticText_setTextOption(QStaticText* self, QTextOption* textOption) {
	self->setTextOption(*textOption);
}

QTextOption* QStaticText_textOption(const QStaticText* self) {
	return new QTextOption(self->textOption());
}

QSizeF* QStaticText_size(const QStaticText* self) {
	return new QSizeF(self->size());
}

void QStaticText_prepare(QStaticText* self) {
	self->prepare();
}

void QStaticText_setPerformanceHint(QStaticText* self, int performanceHint) {
	self->setPerformanceHint(static_cast<QStaticText::PerformanceHint>(performanceHint));
}

int QStaticText_performanceHint(const QStaticText* self) {
	return self->performanceHint();
}

bool QStaticText_operatorNotEqual(const QStaticText* self, QStaticText* param1) {
	return (*self != *param1);
}

void QStaticText_prepareWithMatrix(QStaticText* self, QTransform* matrix) {
	self->prepare(*matrix);
}

void QStaticText_prepare2(QStaticText* self, QTransform* matrix, QFont* font) {
	self->prepare(*matrix, *font);
}

void QStaticText_delete(QStaticText* self) {
	delete self;
}

void QStyleHints_virtbase(QStyleHints* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QStyleHints_metaObject(const QStyleHints* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QStyleHints_tr(const char* s) {
	QString _ret = QStyleHints::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStyleHints_setMouseDoubleClickInterval(QStyleHints* self, int mouseDoubleClickInterval) {
	self->setMouseDoubleClickInterval(static_cast<int>(mouseDoubleClickInterval));
}

int QStyleHints_mouseDoubleClickInterval(const QStyleHints* self) {
	return self->mouseDoubleClickInterval();
}

int QStyleHints_mouseDoubleClickDistance(const QStyleHints* self) {
	return self->mouseDoubleClickDistance();
}

int QStyleHints_touchDoubleTapDistance(const QStyleHints* self) {
	return self->touchDoubleTapDistance();
}

void QStyleHints_setMousePressAndHoldInterval(QStyleHints* self, int mousePressAndHoldInterval) {
	self->setMousePressAndHoldInterval(static_cast<int>(mousePressAndHoldInterval));
}

int QStyleHints_mousePressAndHoldInterval(const QStyleHints* self) {
	return self->mousePressAndHoldInterval();
}

void QStyleHints_setStartDragDistance(QStyleHints* self, int startDragDistance) {
	self->setStartDragDistance(static_cast<int>(startDragDistance));
}

int QStyleHints_startDragDistance(const QStyleHints* self) {
	return self->startDragDistance();
}

void QStyleHints_setStartDragTime(QStyleHints* self, int startDragTime) {
	self->setStartDragTime(static_cast<int>(startDragTime));
}

int QStyleHints_startDragTime(const QStyleHints* self) {
	return self->startDragTime();
}

int QStyleHints_startDragVelocity(const QStyleHints* self) {
	return self->startDragVelocity();
}

void QStyleHints_setKeyboardInputInterval(QStyleHints* self, int keyboardInputInterval) {
	self->setKeyboardInputInterval(static_cast<int>(keyboardInputInterval));
}

int QStyleHints_keyboardInputInterval(const QStyleHints* self) {
	return self->keyboardInputInterval();
}

int QStyleHints_keyboardAutoRepeatRate(const QStyleHints* self) {
	return self->keyboardAutoRepeatRate();
}

double QStyleHints_keyboardAutoRepeatRateF(const QStyleHints* self) {
	double _ret = self->keyboardAutoRepeatRateF();
	return static_cast<double>(_ret);
}

void QStyleHints_setCursorFlashTime(QStyleHints* self, int cursorFlashTime) {
	self->setCursorFlashTime(static_cast<int>(cursorFlashTime));
}

int QStyleHints_cursorFlashTime(const QStyleHints* self) {
	return self->cursorFlashTime();
}

bool QStyleHints_showIsFullScreen(const QStyleHints* self) {
	return self->showIsFullScreen();
}

bool QStyleHints_showIsMaximized(const QStyleHints* self) {
	return self->showIsMaximized();
}

bool QStyleHints_showShortcutsInContextMenus(const QStyleHints* self) {
	return self->showShortcutsInContextMenus();
}

void QStyleHints_setShowShortcutsInContextMenus(QStyleHints* self, bool showShortcutsInContextMenus) {
	self->setShowShortcutsInContextMenus(showShortcutsInContextMenus);
}

int QStyleHints_contextMenuTrigger(const QStyleHints* self) {
	Qt::ContextMenuTrigger _ret = self->contextMenuTrigger();
	return static_cast<int>(_ret);
}

void QStyleHints_setContextMenuTrigger(QStyleHints* self, int contextMenuTrigger) {
	self->setContextMenuTrigger(static_cast<Qt::ContextMenuTrigger>(contextMenuTrigger));
}

bool QStyleHints_menuSelectionWraps(const QStyleHints* self) {
	return self->menuSelectionWraps();
}

int QStyleHints_passwordMaskDelay(const QStyleHints* self) {
	return self->passwordMaskDelay();
}

QChar* QStyleHints_passwordMaskCharacter(const QStyleHints* self) {
	return new QChar(self->passwordMaskCharacter());
}

double QStyleHints_fontSmoothingGamma(const QStyleHints* self) {
	double _ret = self->fontSmoothingGamma();
	return static_cast<double>(_ret);
}

bool QStyleHints_useRtlExtensions(const QStyleHints* self) {
	return self->useRtlExtensions();
}

bool QStyleHints_setFocusOnTouchRelease(const QStyleHints* self) {
	return self->setFocusOnTouchRelease();
}

int QStyleHints_tabFocusBehavior(const QStyleHints* self) {
	Qt::TabFocusBehavior _ret = self->tabFocusBehavior();
	return static_cast<int>(_ret);
}

void QStyleHints_setTabFocusBehavior(QStyleHints* self, int tabFocusBehavior) {
	self->setTabFocusBehavior(static_cast<Qt::TabFocusBehavior>(tabFocusBehavior));
}

bool QStyleHints_singleClickActivation(const QStyleHints* self) {
	return self->singleClickActivation();
}

bool QStyleHints_useHoverEffects(const QStyleHints* self) {
	return self->useHoverEffects();
}

void QStyleHints_setUseHoverEffects(QStyleHints* self, bool useHoverEffects) {
	self->setUseHoverEffects(useHoverEffects);
}

int QStyleHints_wheelScrollLines(const QStyleHints* self) {
	return self->wheelScrollLines();
}

void QStyleHints_setWheelScrollLines(QStyleHints* self, int scrollLines) {
	self->setWheelScrollLines(static_cast<int>(scrollLines));
}

void QStyleHints_setMouseQuickSelectionThreshold(QStyleHints* self, int threshold) {
	self->setMouseQuickSelectionThreshold(static_cast<int>(threshold));
}

int QStyleHints_mouseQuickSelectionThreshold(const QStyleHints* self) {
	return self->mouseQuickSelectionThreshold();
}

int QStyleHints_colorScheme(const QStyleHints* self) {
	Qt::ColorScheme _ret = self->colorScheme();
	return static_cast<int>(_ret);
}

void QStyleHints_setColorScheme(QStyleHints* self, int scheme) {
	self->setColorScheme(static_cast<Qt::ColorScheme>(scheme));
}

void QStyleHints_unsetColorScheme(QStyleHints* self) {
	self->unsetColorScheme();
}

void QStyleHints_cursorFlashTimeChanged(QStyleHints* self, int cursorFlashTime) {
	self->cursorFlashTimeChanged(static_cast<int>(cursorFlashTime));
}

void QStyleHints_connect_cursorFlashTimeChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::cursorFlashTimeChanged), self, [=](int cursorFlashTime) {
		int sigval1 = cursorFlashTime;
		miqt_exec_callback_QStyleHints_cursorFlashTimeChanged(slot, sigval1);
	});
}

void QStyleHints_keyboardInputIntervalChanged(QStyleHints* self, int keyboardInputInterval) {
	self->keyboardInputIntervalChanged(static_cast<int>(keyboardInputInterval));
}

void QStyleHints_connect_keyboardInputIntervalChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::keyboardInputIntervalChanged), self, [=](int keyboardInputInterval) {
		int sigval1 = keyboardInputInterval;
		miqt_exec_callback_QStyleHints_keyboardInputIntervalChanged(slot, sigval1);
	});
}

void QStyleHints_mouseDoubleClickIntervalChanged(QStyleHints* self, int mouseDoubleClickInterval) {
	self->mouseDoubleClickIntervalChanged(static_cast<int>(mouseDoubleClickInterval));
}

void QStyleHints_connect_mouseDoubleClickIntervalChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseDoubleClickIntervalChanged), self, [=](int mouseDoubleClickInterval) {
		int sigval1 = mouseDoubleClickInterval;
		miqt_exec_callback_QStyleHints_mouseDoubleClickIntervalChanged(slot, sigval1);
	});
}

void QStyleHints_mousePressAndHoldIntervalChanged(QStyleHints* self, int mousePressAndHoldInterval) {
	self->mousePressAndHoldIntervalChanged(static_cast<int>(mousePressAndHoldInterval));
}

void QStyleHints_connect_mousePressAndHoldIntervalChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mousePressAndHoldIntervalChanged), self, [=](int mousePressAndHoldInterval) {
		int sigval1 = mousePressAndHoldInterval;
		miqt_exec_callback_QStyleHints_mousePressAndHoldIntervalChanged(slot, sigval1);
	});
}

void QStyleHints_startDragDistanceChanged(QStyleHints* self, int startDragDistance) {
	self->startDragDistanceChanged(static_cast<int>(startDragDistance));
}

void QStyleHints_connect_startDragDistanceChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragDistanceChanged), self, [=](int startDragDistance) {
		int sigval1 = startDragDistance;
		miqt_exec_callback_QStyleHints_startDragDistanceChanged(slot, sigval1);
	});
}

void QStyleHints_startDragTimeChanged(QStyleHints* self, int startDragTime) {
	self->startDragTimeChanged(static_cast<int>(startDragTime));
}

void QStyleHints_connect_startDragTimeChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragTimeChanged), self, [=](int startDragTime) {
		int sigval1 = startDragTime;
		miqt_exec_callback_QStyleHints_startDragTimeChanged(slot, sigval1);
	});
}

void QStyleHints_tabFocusBehaviorChanged(QStyleHints* self, int tabFocusBehavior) {
	self->tabFocusBehaviorChanged(static_cast<Qt::TabFocusBehavior>(tabFocusBehavior));
}

void QStyleHints_connect_tabFocusBehaviorChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(Qt::TabFocusBehavior)>(&QStyleHints::tabFocusBehaviorChanged), self, [=](Qt::TabFocusBehavior tabFocusBehavior) {
		Qt::TabFocusBehavior tabFocusBehavior_ret = tabFocusBehavior;
		int sigval1 = static_cast<int>(tabFocusBehavior_ret);
		miqt_exec_callback_QStyleHints_tabFocusBehaviorChanged(slot, sigval1);
	});
}

void QStyleHints_useHoverEffectsChanged(QStyleHints* self, bool useHoverEffects) {
	self->useHoverEffectsChanged(useHoverEffects);
}

void QStyleHints_connect_useHoverEffectsChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(bool)>(&QStyleHints::useHoverEffectsChanged), self, [=](bool useHoverEffects) {
		bool sigval1 = useHoverEffects;
		miqt_exec_callback_QStyleHints_useHoverEffectsChanged(slot, sigval1);
	});
}

void QStyleHints_showShortcutsInContextMenusChanged(QStyleHints* self, bool param1) {
	self->showShortcutsInContextMenusChanged(param1);
}

void QStyleHints_connect_showShortcutsInContextMenusChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(bool)>(&QStyleHints::showShortcutsInContextMenusChanged), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QStyleHints_showShortcutsInContextMenusChanged(slot, sigval1);
	});
}

void QStyleHints_contextMenuTriggerChanged(QStyleHints* self, int contextMenuTrigger) {
	self->contextMenuTriggerChanged(static_cast<Qt::ContextMenuTrigger>(contextMenuTrigger));
}

void QStyleHints_connect_contextMenuTriggerChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(Qt::ContextMenuTrigger)>(&QStyleHints::contextMenuTriggerChanged), self, [=](Qt::ContextMenuTrigger contextMenuTrigger) {
		Qt::ContextMenuTrigger contextMenuTrigger_ret = contextMenuTrigger;
		int sigval1 = static_cast<int>(contextMenuTrigger_ret);
		miqt_exec_callback_QStyleHints_contextMenuTriggerChanged(slot, sigval1);
	});
}

void QStyleHints_wheelScrollLinesChanged(QStyleHints* self, int scrollLines) {
	self->wheelScrollLinesChanged(static_cast<int>(scrollLines));
}

void QStyleHints_connect_wheelScrollLinesChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::wheelScrollLinesChanged), self, [=](int scrollLines) {
		int sigval1 = scrollLines;
		miqt_exec_callback_QStyleHints_wheelScrollLinesChanged(slot, sigval1);
	});
}

void QStyleHints_mouseQuickSelectionThresholdChanged(QStyleHints* self, int threshold) {
	self->mouseQuickSelectionThresholdChanged(static_cast<int>(threshold));
}

void QStyleHints_connect_mouseQuickSelectionThresholdChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseQuickSelectionThresholdChanged), self, [=](int threshold) {
		int sigval1 = threshold;
		miqt_exec_callback_QStyleHints_mouseQuickSelectionThresholdChanged(slot, sigval1);
	});
}

void QStyleHints_colorSchemeChanged(QStyleHints* self, int colorScheme) {
	self->colorSchemeChanged(static_cast<Qt::ColorScheme>(colorScheme));
}

void QStyleHints_connect_colorSchemeChanged(QStyleHints* self, intptr_t slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(Qt::ColorScheme)>(&QStyleHints::colorSchemeChanged), self, [=](Qt::ColorScheme colorScheme) {
		Qt::ColorScheme colorScheme_ret = colorScheme;
		int sigval1 = static_cast<int>(colorScheme_ret);
		miqt_exec_callback_QStyleHints_colorSchemeChanged(slot, sigval1);
	});
}

struct miqt_string QStyleHints_tr2(const char* s, const char* c) {
	QString _ret = QStyleHints::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStyleHints_tr3(const char* s, const char* c, int n) {
	QString _ret = QStyleHints::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QStyleHints_delete(QStyleHints* self) {
	delete self;
}

void QTextObject_virtbase(QTextObject* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTextObject_metaObject(const QTextObject* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QTextObject_tr(const char* s) {
	QString _ret = QTextObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextFormat* QTextObject_format(const QTextObject* self) {
	return new QTextFormat(self->format());
}

int QTextObject_formatIndex(const QTextObject* self) {
	return self->formatIndex();
}

QTextDocument* QTextObject_document(const QTextObject* self) {
	return self->document();
}

int QTextObject_objectIndex(const QTextObject* self) {
	return self->objectIndex();
}

struct miqt_string QTextObject_tr2(const char* s, const char* c) {
	QString _ret = QTextObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextObject_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextFrameLayoutData_delete(QTextFrameLayoutData* self) {
	delete self;
}

class MiqtVirtualQTextFrame final : public QTextFrame {
public:

	MiqtVirtualQTextFrame(QTextDocument* doc): QTextFrame(doc) {}

	virtual ~MiqtVirtualQTextFrame() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTextFrame::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTextFrame_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QTextFrame_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTextFrame::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTextFrame_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTextFrame_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend void QTextFrame_protectedbase_setFormat(bool* _dynamic_cast_ok, void* self, QTextFormat* format);
	friend QObject* QTextFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTextFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTextFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTextFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTextFrame* QTextFrame_new(QTextDocument* doc) {
	return new (std::nothrow) MiqtVirtualQTextFrame(doc);
}

void QTextFrame_virtbase(QTextFrame* src, QTextObject** outptr_QTextObject) {
	*outptr_QTextObject = static_cast<QTextObject*>(src);
}

QMetaObject* QTextFrame_metaObject(const QTextFrame* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QTextFrame_tr(const char* s) {
	QString _ret = QTextFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextFrame_setFrameFormat(QTextFrame* self, QTextFrameFormat* format) {
	self->setFrameFormat(*format);
}

QTextFrameFormat* QTextFrame_frameFormat(const QTextFrame* self) {
	return new QTextFrameFormat(self->frameFormat());
}

QTextCursor* QTextFrame_firstCursorPosition(const QTextFrame* self) {
	return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextFrame_lastCursorPosition(const QTextFrame* self) {
	return new QTextCursor(self->lastCursorPosition());
}

int QTextFrame_firstPosition(const QTextFrame* self) {
	return self->firstPosition();
}

int QTextFrame_lastPosition(const QTextFrame* self) {
	return self->lastPosition();
}

QTextFrameLayoutData* QTextFrame_layoutData(const QTextFrame* self) {
	return self->layoutData();
}

void QTextFrame_setLayoutData(QTextFrame* self, QTextFrameLayoutData* data) {
	self->setLayoutData(data);
}

struct miqt_array /* of QTextFrame* */  QTextFrame_childFrames(const QTextFrame* self) {
	QList<QTextFrame *> _ret = self->childFrames();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextFrame** _arr = static_cast<QTextFrame**>(malloc(sizeof(QTextFrame*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QTextFrame* QTextFrame_parentFrame(const QTextFrame* self) {
	return self->parentFrame();
}

struct miqt_string QTextFrame_tr2(const char* s, const char* c) {
	QString _ret = QTextFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextFrame_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextFrame_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = static_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QTextFrame_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTextFrame*>(self)->QTextFrame::event(event);
}

bool QTextFrame_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextFrame* self_cast = static_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTextFrame_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTextFrame*>(self)->QTextFrame::eventFilter(watched, event);
}

void QTextFrame_protectedbase_setFormat(bool* _dynamic_cast_ok, void* self, QTextFormat* format) {
	MiqtVirtualQTextFrame* self_cast = static_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setFormat(*format);
}

QObject* QTextFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextFrame* self_cast = static_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTextFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextFrame* self_cast = static_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTextFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTextFrame* self_cast = static_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTextFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTextFrame* self_cast = static_cast<MiqtVirtualQTextFrame*>( (QTextFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTextFrame_delete(QTextFrame* self) {
	delete self;
}

void QTextBlockUserData_delete(QTextBlockUserData* self) {
	delete self;
}

QTextBlock* QTextBlock_new() {
	return new (std::nothrow) QTextBlock();
}

QTextBlock* QTextBlock_new2(QTextBlock* o) {
	return new (std::nothrow) QTextBlock(*o);
}

bool QTextBlock_isValid(const QTextBlock* self) {
	return self->isValid();
}

bool QTextBlock_operatorNotEqual(const QTextBlock* self, QTextBlock* o) {
	return (*self != *o);
}

bool QTextBlock_operatorLesser(const QTextBlock* self, QTextBlock* o) {
	return (*self < *o);
}

int QTextBlock_position(const QTextBlock* self) {
	return self->position();
}

int QTextBlock_length(const QTextBlock* self) {
	return self->length();
}

bool QTextBlock_contains(const QTextBlock* self, int position) {
	return self->contains(static_cast<int>(position));
}

QTextLayout* QTextBlock_layout(const QTextBlock* self) {
	return self->layout();
}

void QTextBlock_clearLayout(QTextBlock* self) {
	self->clearLayout();
}

QTextBlockFormat* QTextBlock_blockFormat(const QTextBlock* self) {
	return new QTextBlockFormat(self->blockFormat());
}

int QTextBlock_blockFormatIndex(const QTextBlock* self) {
	return self->blockFormatIndex();
}

QTextCharFormat* QTextBlock_charFormat(const QTextBlock* self) {
	return new QTextCharFormat(self->charFormat());
}

int QTextBlock_charFormatIndex(const QTextBlock* self) {
	return self->charFormatIndex();
}

int QTextBlock_textDirection(const QTextBlock* self) {
	Qt::LayoutDirection _ret = self->textDirection();
	return static_cast<int>(_ret);
}

struct miqt_string QTextBlock_text(const QTextBlock* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextDocument* QTextBlock_document(const QTextBlock* self) {
	return (QTextDocument*) self->document();
}

QTextList* QTextBlock_textList(const QTextBlock* self) {
	return self->textList();
}

QTextBlockUserData* QTextBlock_userData(const QTextBlock* self) {
	return self->userData();
}

void QTextBlock_setUserData(QTextBlock* self, QTextBlockUserData* data) {
	self->setUserData(data);
}

int QTextBlock_userState(const QTextBlock* self) {
	return self->userState();
}

void QTextBlock_setUserState(QTextBlock* self, int state) {
	self->setUserState(static_cast<int>(state));
}

int QTextBlock_revision(const QTextBlock* self) {
	return self->revision();
}

void QTextBlock_setRevision(QTextBlock* self, int rev) {
	self->setRevision(static_cast<int>(rev));
}

bool QTextBlock_isVisible(const QTextBlock* self) {
	return self->isVisible();
}

void QTextBlock_setVisible(QTextBlock* self, bool visible) {
	self->setVisible(visible);
}

int QTextBlock_blockNumber(const QTextBlock* self) {
	return self->blockNumber();
}

int QTextBlock_firstLineNumber(const QTextBlock* self) {
	return self->firstLineNumber();
}

void QTextBlock_setLineCount(QTextBlock* self, int count) {
	self->setLineCount(static_cast<int>(count));
}

int QTextBlock_lineCount(const QTextBlock* self) {
	return self->lineCount();
}

QTextBlock* QTextBlock_next(const QTextBlock* self) {
	return new QTextBlock(self->next());
}

QTextBlock* QTextBlock_previous(const QTextBlock* self) {
	return new QTextBlock(self->previous());
}

int QTextBlock_fragmentIndex(const QTextBlock* self) {
	return self->fragmentIndex();
}

void QTextBlock_delete(QTextBlock* self) {
	delete self;
}

QTextFragment* QTextFragment_new() {
	return new (std::nothrow) QTextFragment();
}

QTextFragment* QTextFragment_new2(QTextFragment* o) {
	return new (std::nothrow) QTextFragment(*o);
}

bool QTextFragment_isValid(const QTextFragment* self) {
	return self->isValid();
}

bool QTextFragment_operatorNotEqual(const QTextFragment* self, QTextFragment* o) {
	return (*self != *o);
}

bool QTextFragment_operatorLesser(const QTextFragment* self, QTextFragment* o) {
	return (*self < *o);
}

int QTextFragment_position(const QTextFragment* self) {
	return self->position();
}

int QTextFragment_length(const QTextFragment* self) {
	return self->length();
}

bool QTextFragment_contains(const QTextFragment* self, int position) {
	return self->contains(static_cast<int>(position));
}

QTextCharFormat* QTextFragment_charFormat(const QTextFragment* self) {
	return new QTextCharFormat(self->charFormat());
}

int QTextFragment_charFormatIndex(const QTextFragment* self) {
	return self->charFormatIndex();
}

struct miqt_string QTextFragment_text(const QTextFragment* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QGlyphRun* */  QTextFragment_glyphRuns(const QTextFragment* self) {
	QList<QGlyphRun> _ret = self->glyphRuns();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGlyphRun* */  QTextFragment_glyphRunsWithFrom(const QTextFragment* self, int from) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGlyphRun* */  QTextFragment_glyphRuns2(const QTextFragment* self, int from, int length) {
	QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QGlyphRun(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QTextFragment_delete(QTextFragment* self) {
	delete self;
}

QTextDocumentFragment* QTextDocumentFragment_new() {
	return new (std::nothrow) QTextDocumentFragment();
}

QTextDocumentFragment* QTextDocumentFragment_new2(QTextDocument* document) {
	return new (std::nothrow) QTextDocumentFragment(document);
}

QTextDocumentFragment* QTextDocumentFragment_new3(QTextCursor* range) {
	return new (std::nothrow) QTextDocumentFragment(*range);
}

QTextDocumentFragment* QTextDocumentFragment_new4(QTextDocumentFragment* rhs) {
	return new (std::nothrow) QTextDocumentFragment(*rhs);
}

bool QTextDocumentFragment_isEmpty(const QTextDocumentFragment* self) {
	return self->isEmpty();
}

struct miqt_string QTextDocumentFragment_toPlainText(const QTextDocumentFragment* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDocumentFragment_toRawText(const QTextDocumentFragment* self) {
	QString _ret = self->toRawText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDocumentFragment_toHtml(const QTextDocumentFragment* self) {
	QString _ret = self->toHtml();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDocumentFragment_toMarkdown(const QTextDocumentFragment* self) {
	QString _ret = self->toMarkdown();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextDocumentFragment* QTextDocumentFragment_fromPlainText(struct miqt_string plainText) {
	QString plainText_QString = QString::fromUtf8(plainText.data, plainText.len);
	return new QTextDocumentFragment(QTextDocumentFragment::fromPlainText(plainText_QString));
}

QTextDocumentFragment* QTextDocumentFragment_fromHtml(struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	return new QTextDocumentFragment(QTextDocumentFragment::fromHtml(html_QString));
}

QTextDocumentFragment* QTextDocumentFragment_fromMarkdown(struct miqt_string markdown) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	return new QTextDocumentFragment(QTextDocumentFragment::fromMarkdown(markdown_QString));
}

struct miqt_string QTextDocumentFragment_toMarkdownWithFeatures(const QTextDocumentFragment* self, int features) {
	QString _ret = self->toMarkdown(static_cast<QFlags<QTextDocument::MarkdownFeature>>(features));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextDocumentFragment* QTextDocumentFragment_fromHtml2(struct miqt_string html, QTextDocument* resourceProvider) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	return new QTextDocumentFragment(QTextDocumentFragment::fromHtml(html_QString, resourceProvider));
}

QTextDocumentFragment* QTextDocumentFragment_fromMarkdown2(struct miqt_string markdown, int features) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	return new QTextDocumentFragment(QTextDocumentFragment::fromMarkdown(markdown_QString, static_cast<QFlags<QTextDocument::MarkdownFeature>>(features)));
}

void QTextDocumentFragment_delete(QTextDocumentFragment* self) {
	delete self;
}

QTextList* QTextList_new(QTextDocument* doc) {
	return new (std::nothrow) QTextList(doc);
}

QMetaObject* QTextList_metaObject(const QTextList* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QTextList_tr(const char* s) {
	QString _ret = QTextList::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTextList_count(const QTextList* self) {
	return self->count();
}

QTextBlock* QTextList_item(const QTextList* self, int i) {
	return new QTextBlock(self->item(static_cast<int>(i)));
}

int QTextList_itemNumber(const QTextList* self, QTextBlock* param1) {
	return self->itemNumber(*param1);
}

struct miqt_string QTextList_itemText(const QTextList* self, QTextBlock* param1) {
	QString _ret = self->itemText(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextList_removeItem(QTextList* self, int i) {
	self->removeItem(static_cast<int>(i));
}

void QTextList_remove(QTextList* self, QTextBlock* param1) {
	self->remove(*param1);
}

void QTextList_add(QTextList* self, QTextBlock* block) {
	self->add(*block);
}

void QTextList_setFormat(QTextList* self, QTextListFormat* format) {
	self->setFormat(*format);
}

QTextListFormat* QTextList_format(const QTextList* self) {
	return new QTextListFormat(self->format());
}

struct miqt_string QTextList_tr2(const char* s, const char* c) {
	QString _ret = QTextList::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextList_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextList::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextList_delete(QTextList* self) {
	delete self;
}

QTextTableCell* QTextTableCell_new() {
	return new (std::nothrow) QTextTableCell();
}

QTextTableCell* QTextTableCell_new2(QTextTableCell* o) {
	return new (std::nothrow) QTextTableCell(*o);
}

void QTextTableCell_setFormat(QTextTableCell* self, QTextCharFormat* format) {
	self->setFormat(*format);
}

QTextCharFormat* QTextTableCell_format(const QTextTableCell* self) {
	return new QTextCharFormat(self->format());
}

int QTextTableCell_row(const QTextTableCell* self) {
	return self->row();
}

int QTextTableCell_column(const QTextTableCell* self) {
	return self->column();
}

int QTextTableCell_rowSpan(const QTextTableCell* self) {
	return self->rowSpan();
}

int QTextTableCell_columnSpan(const QTextTableCell* self) {
	return self->columnSpan();
}

bool QTextTableCell_isValid(const QTextTableCell* self) {
	return self->isValid();
}

QTextCursor* QTextTableCell_firstCursorPosition(const QTextTableCell* self) {
	return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextTableCell_lastCursorPosition(const QTextTableCell* self) {
	return new QTextCursor(self->lastCursorPosition());
}

int QTextTableCell_firstPosition(const QTextTableCell* self) {
	return self->firstPosition();
}

int QTextTableCell_lastPosition(const QTextTableCell* self) {
	return self->lastPosition();
}

bool QTextTableCell_operatorNotEqual(const QTextTableCell* self, QTextTableCell* other) {
	return (*self != *other);
}

int QTextTableCell_tableCellFormatIndex(const QTextTableCell* self) {
	return self->tableCellFormatIndex();
}

void QTextTableCell_delete(QTextTableCell* self) {
	delete self;
}

class MiqtVirtualQTextTable final : public QTextTable {
public:

	MiqtVirtualQTextTable(QTextDocument* doc): QTextTable(doc) {}

	virtual ~MiqtVirtualQTextTable() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTextTable::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTextTable_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QTextTable_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTextTable::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTextTable_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTextTable_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QTextTable_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTextTable_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTextTable_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTextTable_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTextTable* QTextTable_new(QTextDocument* doc) {
	return new (std::nothrow) MiqtVirtualQTextTable(doc);
}

void QTextTable_virtbase(QTextTable* src, QTextFrame** outptr_QTextFrame) {
	*outptr_QTextFrame = static_cast<QTextFrame*>(src);
}

QMetaObject* QTextTable_metaObject(const QTextTable* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QTextTable_tr(const char* s) {
	QString _ret = QTextTable::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextTable_resize(QTextTable* self, int rows, int cols) {
	self->resize(static_cast<int>(rows), static_cast<int>(cols));
}

void QTextTable_insertRows(QTextTable* self, int pos, int num) {
	self->insertRows(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_insertColumns(QTextTable* self, int pos, int num) {
	self->insertColumns(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_appendRows(QTextTable* self, int count) {
	self->appendRows(static_cast<int>(count));
}

void QTextTable_appendColumns(QTextTable* self, int count) {
	self->appendColumns(static_cast<int>(count));
}

void QTextTable_removeRows(QTextTable* self, int pos, int num) {
	self->removeRows(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_removeColumns(QTextTable* self, int pos, int num) {
	self->removeColumns(static_cast<int>(pos), static_cast<int>(num));
}

void QTextTable_mergeCells(QTextTable* self, int row, int col, int numRows, int numCols) {
	self->mergeCells(static_cast<int>(row), static_cast<int>(col), static_cast<int>(numRows), static_cast<int>(numCols));
}

void QTextTable_mergeCellsWithCursor(QTextTable* self, QTextCursor* cursor) {
	self->mergeCells(*cursor);
}

void QTextTable_splitCell(QTextTable* self, int row, int col, int numRows, int numCols) {
	self->splitCell(static_cast<int>(row), static_cast<int>(col), static_cast<int>(numRows), static_cast<int>(numCols));
}

int QTextTable_rows(const QTextTable* self) {
	return self->rows();
}

int QTextTable_columns(const QTextTable* self) {
	return self->columns();
}

QTextTableCell* QTextTable_cellAt(const QTextTable* self, int row, int col) {
	return new QTextTableCell(self->cellAt(static_cast<int>(row), static_cast<int>(col)));
}

QTextTableCell* QTextTable_cellAtWithPosition(const QTextTable* self, int position) {
	return new QTextTableCell(self->cellAt(static_cast<int>(position)));
}

QTextTableCell* QTextTable_cellAtWithQTextCursor(const QTextTable* self, QTextCursor* c) {
	return new QTextTableCell(self->cellAt(*c));
}

QTextCursor* QTextTable_rowStart(const QTextTable* self, QTextCursor* c) {
	return new QTextCursor(self->rowStart(*c));
}

QTextCursor* QTextTable_rowEnd(const QTextTable* self, QTextCursor* c) {
	return new QTextCursor(self->rowEnd(*c));
}

void QTextTable_setFormat(QTextTable* self, QTextTableFormat* format) {
	self->setFormat(*format);
}

QTextTableFormat* QTextTable_format(const QTextTable* self) {
	return new QTextTableFormat(self->format());
}

struct miqt_string QTextTable_tr2(const char* s, const char* c) {
	QString _ret = QTextTable::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextTable_tr3(const char* s, const char* c, int n) {
	QString _ret = QTextTable::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextTable_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = static_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QTextTable_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTextTable*>(self)->QTextTable::event(event);
}

bool QTextTable_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTextTable* self_cast = static_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTextTable_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTextTable*>(self)->QTextTable::eventFilter(watched, event);
}

QObject* QTextTable_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextTable* self_cast = static_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTextTable_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTextTable* self_cast = static_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTextTable_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTextTable* self_cast = static_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTextTable_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTextTable* self_cast = static_cast<MiqtVirtualQTextTable*>( (QTextTable*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTextTable_delete(QTextTable* self) {
	delete self;
}

class MiqtVirtualQUndoGroup final : public QUndoGroup {
public:

	MiqtVirtualQUndoGroup(): QUndoGroup() {}
	MiqtVirtualQUndoGroup(QObject* parent): QUndoGroup(parent) {}

	virtual ~MiqtVirtualQUndoGroup() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QUndoGroup::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QUndoGroup_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QUndoGroup_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QUndoGroup::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QUndoGroup_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QUndoGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QUndoGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QUndoGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QUndoGroup* QUndoGroup_new() {
	return new (std::nothrow) MiqtVirtualQUndoGroup();
}

QUndoGroup* QUndoGroup_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQUndoGroup(parent);
}

void QUndoGroup_virtbase(QUndoGroup* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QUndoGroup_metaObject(const QUndoGroup* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QUndoGroup_tr(const char* s) {
	QString _ret = QUndoGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoGroup_addStack(QUndoGroup* self, QUndoStack* stack) {
	self->addStack(stack);
}

void QUndoGroup_removeStack(QUndoGroup* self, QUndoStack* stack) {
	self->removeStack(stack);
}

struct miqt_array /* of QUndoStack* */  QUndoGroup_stacks(const QUndoGroup* self) {
	QList<QUndoStack *> _ret = self->stacks();
	// Convert QList<> from C++ memory to manually-managed C memory
	QUndoStack** _arr = static_cast<QUndoStack**>(malloc(sizeof(QUndoStack*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QUndoStack* QUndoGroup_activeStack(const QUndoGroup* self) {
	return self->activeStack();
}

QAction* QUndoGroup_createUndoAction(const QUndoGroup* self, QObject* parent) {
	return self->createUndoAction(parent);
}

QAction* QUndoGroup_createRedoAction(const QUndoGroup* self, QObject* parent) {
	return self->createRedoAction(parent);
}

bool QUndoGroup_canUndo(const QUndoGroup* self) {
	return self->canUndo();
}

bool QUndoGroup_canRedo(const QUndoGroup* self) {
	return self->canRedo();
}

struct miqt_string QUndoGroup_undoText(const QUndoGroup* self) {
	QString _ret = self->undoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoGroup_redoText(const QUndoGroup* self) {
	QString _ret = self->redoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUndoGroup_isClean(const QUndoGroup* self) {
	return self->isClean();
}

void QUndoGroup_undo(QUndoGroup* self) {
	self->undo();
}

void QUndoGroup_redo(QUndoGroup* self) {
	self->redo();
}

void QUndoGroup_setActiveStack(QUndoGroup* self, QUndoStack* stack) {
	self->setActiveStack(stack);
}

void QUndoGroup_activeStackChanged(QUndoGroup* self, QUndoStack* stack) {
	self->activeStackChanged(stack);
}

void QUndoGroup_connect_activeStackChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(QUndoStack*)>(&QUndoGroup::activeStackChanged), self, [=](QUndoStack* stack) {
		QUndoStack* sigval1 = stack;
		miqt_exec_callback_QUndoGroup_activeStackChanged(slot, sigval1);
	});
}

void QUndoGroup_indexChanged(QUndoGroup* self, int idx) {
	self->indexChanged(static_cast<int>(idx));
}

void QUndoGroup_connect_indexChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(int)>(&QUndoGroup::indexChanged), self, [=](int idx) {
		int sigval1 = idx;
		miqt_exec_callback_QUndoGroup_indexChanged(slot, sigval1);
	});
}

void QUndoGroup_cleanChanged(QUndoGroup* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoGroup_connect_cleanChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::cleanChanged), self, [=](bool clean) {
		bool sigval1 = clean;
		miqt_exec_callback_QUndoGroup_cleanChanged(slot, sigval1);
	});
}

void QUndoGroup_canUndoChanged(QUndoGroup* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoGroup_connect_canUndoChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::canUndoChanged), self, [=](bool canUndo) {
		bool sigval1 = canUndo;
		miqt_exec_callback_QUndoGroup_canUndoChanged(slot, sigval1);
	});
}

void QUndoGroup_canRedoChanged(QUndoGroup* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoGroup_connect_canRedoChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(bool)>(&QUndoGroup::canRedoChanged), self, [=](bool canRedo) {
		bool sigval1 = canRedo;
		miqt_exec_callback_QUndoGroup_canRedoChanged(slot, sigval1);
	});
}

void QUndoGroup_undoTextChanged(QUndoGroup* self, struct miqt_string undoText) {
	QString undoText_QString = QString::fromUtf8(undoText.data, undoText.len);
	self->undoTextChanged(undoText_QString);
}

void QUndoGroup_connect_undoTextChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(const QString&)>(&QUndoGroup::undoTextChanged), self, [=](const QString& undoText) {
		const QString undoText_ret = undoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray undoText_b = undoText_ret.toUtf8();
		struct miqt_string undoText_ms;
		undoText_ms.len = undoText_b.length();
		undoText_ms.data = static_cast<char*>(malloc(undoText_ms.len));
		memcpy(undoText_ms.data, undoText_b.data(), undoText_ms.len);
		struct miqt_string sigval1 = undoText_ms;
		miqt_exec_callback_QUndoGroup_undoTextChanged(slot, sigval1);
	});
}

void QUndoGroup_redoTextChanged(QUndoGroup* self, struct miqt_string redoText) {
	QString redoText_QString = QString::fromUtf8(redoText.data, redoText.len);
	self->redoTextChanged(redoText_QString);
}

void QUndoGroup_connect_redoTextChanged(QUndoGroup* self, intptr_t slot) {
	QUndoGroup::connect(self, static_cast<void (QUndoGroup::*)(const QString&)>(&QUndoGroup::redoTextChanged), self, [=](const QString& redoText) {
		const QString redoText_ret = redoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray redoText_b = redoText_ret.toUtf8();
		struct miqt_string redoText_ms;
		redoText_ms.len = redoText_b.length();
		redoText_ms.data = static_cast<char*>(malloc(redoText_ms.len));
		memcpy(redoText_ms.data, redoText_b.data(), redoText_ms.len);
		struct miqt_string sigval1 = redoText_ms;
		miqt_exec_callback_QUndoGroup_redoTextChanged(slot, sigval1);
	});
}

struct miqt_string QUndoGroup_tr2(const char* s, const char* c) {
	QString _ret = QUndoGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoGroup_tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QUndoGroup_createUndoAction2(const QUndoGroup* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoGroup_createRedoAction2(const QUndoGroup* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createRedoAction(parent, prefix_QString);
}

bool QUndoGroup_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQUndoGroup* self_cast = static_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QUndoGroup_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQUndoGroup*>(self)->QUndoGroup::event(event);
}

bool QUndoGroup_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQUndoGroup* self_cast = static_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QUndoGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQUndoGroup*>(self)->QUndoGroup::eventFilter(watched, event);
}

QObject* QUndoGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoGroup* self_cast = static_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QUndoGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoGroup* self_cast = static_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QUndoGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQUndoGroup* self_cast = static_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QUndoGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQUndoGroup* self_cast = static_cast<MiqtVirtualQUndoGroup*>( (QUndoGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QUndoGroup_delete(QUndoGroup* self) {
	delete self;
}

class MiqtVirtualQUndoCommand final : public QUndoCommand {
public:

	MiqtVirtualQUndoCommand(): QUndoCommand() {}
	MiqtVirtualQUndoCommand(const QString& text): QUndoCommand(text) {}
	MiqtVirtualQUndoCommand(QUndoCommand* parent): QUndoCommand(parent) {}
	MiqtVirtualQUndoCommand(const QString& text, QUndoCommand* parent): QUndoCommand(text, parent) {}

	virtual ~MiqtVirtualQUndoCommand() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__undo = 0;

	// Subclass to allow providing a Go implementation
	virtual void undo() override {
		if (handle__undo == 0) {
			QUndoCommand::undo();
			return;
		}

		miqt_exec_callback_QUndoCommand_undo(this, handle__undo);

	}

	friend void QUndoCommand_virtualbase_undo(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redo = 0;

	// Subclass to allow providing a Go implementation
	virtual void redo() override {
		if (handle__redo == 0) {
			QUndoCommand::redo();
			return;
		}

		miqt_exec_callback_QUndoCommand_redo(this, handle__redo);

	}

	friend void QUndoCommand_virtualbase_redo(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__id = 0;

	// Subclass to allow providing a Go implementation
	virtual int id() const override {
		if (handle__id == 0) {
			return QUndoCommand::id();
		}

		int callback_return_value = miqt_exec_callback_QUndoCommand_id(this, handle__id);
		return static_cast<int>(callback_return_value);
	}

	friend int QUndoCommand_virtualbase_id(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mergeWith = 0;

	// Subclass to allow providing a Go implementation
	virtual bool mergeWith(const QUndoCommand* other) override {
		if (handle__mergeWith == 0) {
			return QUndoCommand::mergeWith(other);
		}

		QUndoCommand* sigval1 = (QUndoCommand*) other;
		bool callback_return_value = miqt_exec_callback_QUndoCommand_mergeWith(this, handle__mergeWith, sigval1);
		return callback_return_value;
	}

	friend bool QUndoCommand_virtualbase_mergeWith(void* self, QUndoCommand* other);

};

QUndoCommand* QUndoCommand_new() {
	return new (std::nothrow) MiqtVirtualQUndoCommand();
}

QUndoCommand* QUndoCommand_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQUndoCommand(text_QString);
}

QUndoCommand* QUndoCommand_new3(QUndoCommand* parent) {
	return new (std::nothrow) MiqtVirtualQUndoCommand(parent);
}

QUndoCommand* QUndoCommand_new4(struct miqt_string text, QUndoCommand* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQUndoCommand(text_QString, parent);
}

void QUndoCommand_undo(QUndoCommand* self) {
	self->undo();
}

void QUndoCommand_redo(QUndoCommand* self) {
	self->redo();
}

struct miqt_string QUndoCommand_text(const QUndoCommand* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoCommand_actionText(const QUndoCommand* self) {
	QString _ret = self->actionText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoCommand_setText(QUndoCommand* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

bool QUndoCommand_isObsolete(const QUndoCommand* self) {
	return self->isObsolete();
}

void QUndoCommand_setObsolete(QUndoCommand* self, bool obsolete) {
	self->setObsolete(obsolete);
}

int QUndoCommand_id(const QUndoCommand* self) {
	return self->id();
}

bool QUndoCommand_mergeWith(QUndoCommand* self, QUndoCommand* other) {
	return self->mergeWith(other);
}

int QUndoCommand_childCount(const QUndoCommand* self) {
	return self->childCount();
}

QUndoCommand* QUndoCommand_child(const QUndoCommand* self, int index) {
	return (QUndoCommand*) self->child(static_cast<int>(index));
}

bool QUndoCommand_override_virtual_undo(void* self, intptr_t slot) {
	MiqtVirtualQUndoCommand* self_cast = static_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__undo = slot;
	return true;
}

void QUndoCommand_virtualbase_undo(void* self) {
	static_cast<MiqtVirtualQUndoCommand*>(self)->QUndoCommand::undo();
}

bool QUndoCommand_override_virtual_redo(void* self, intptr_t slot) {
	MiqtVirtualQUndoCommand* self_cast = static_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redo = slot;
	return true;
}

void QUndoCommand_virtualbase_redo(void* self) {
	static_cast<MiqtVirtualQUndoCommand*>(self)->QUndoCommand::redo();
}

bool QUndoCommand_override_virtual_id(void* self, intptr_t slot) {
	MiqtVirtualQUndoCommand* self_cast = static_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__id = slot;
	return true;
}

int QUndoCommand_virtualbase_id(const void* self) {
	return static_cast<const MiqtVirtualQUndoCommand*>(self)->QUndoCommand::id();
}

bool QUndoCommand_override_virtual_mergeWith(void* self, intptr_t slot) {
	MiqtVirtualQUndoCommand* self_cast = static_cast<MiqtVirtualQUndoCommand*>( (QUndoCommand*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mergeWith = slot;
	return true;
}

bool QUndoCommand_virtualbase_mergeWith(void* self, QUndoCommand* other) {
	return static_cast<MiqtVirtualQUndoCommand*>(self)->QUndoCommand::mergeWith(other);
}

void QUndoCommand_delete(QUndoCommand* self) {
	delete self;
}

class MiqtVirtualQUndoStack final : public QUndoStack {
public:

	MiqtVirtualQUndoStack(): QUndoStack() {}
	MiqtVirtualQUndoStack(QObject* parent): QUndoStack(parent) {}

	virtual ~MiqtVirtualQUndoStack() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QUndoStack::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QUndoStack_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QUndoStack_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QUndoStack::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QUndoStack_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QUndoStack_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QUndoStack_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoStack_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoStack_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QUndoStack_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QUndoStack* QUndoStack_new() {
	return new (std::nothrow) MiqtVirtualQUndoStack();
}

QUndoStack* QUndoStack_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQUndoStack(parent);
}

void QUndoStack_virtbase(QUndoStack* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QUndoStack_metaObject(const QUndoStack* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QUndoStack_tr(const char* s) {
	QString _ret = QUndoStack::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoStack_clear(QUndoStack* self) {
	self->clear();
}

void QUndoStack_push(QUndoStack* self, QUndoCommand* cmd) {
	self->push(cmd);
}

bool QUndoStack_canUndo(const QUndoStack* self) {
	return self->canUndo();
}

bool QUndoStack_canRedo(const QUndoStack* self) {
	return self->canRedo();
}

struct miqt_string QUndoStack_undoText(const QUndoStack* self) {
	QString _ret = self->undoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_redoText(const QUndoStack* self) {
	QString _ret = self->redoText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QUndoStack_count(const QUndoStack* self) {
	return self->count();
}

int QUndoStack_index(const QUndoStack* self) {
	return self->index();
}

struct miqt_string QUndoStack_text(const QUndoStack* self, int idx) {
	QString _ret = self->text(static_cast<int>(idx));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QUndoStack_createUndoAction(const QUndoStack* self, QObject* parent) {
	return self->createUndoAction(parent);
}

QAction* QUndoStack_createRedoAction(const QUndoStack* self, QObject* parent) {
	return self->createRedoAction(parent);
}

bool QUndoStack_isActive(const QUndoStack* self) {
	return self->isActive();
}

bool QUndoStack_isClean(const QUndoStack* self) {
	return self->isClean();
}

int QUndoStack_cleanIndex(const QUndoStack* self) {
	return self->cleanIndex();
}

void QUndoStack_beginMacro(QUndoStack* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->beginMacro(text_QString);
}

void QUndoStack_endMacro(QUndoStack* self) {
	self->endMacro();
}

void QUndoStack_setUndoLimit(QUndoStack* self, int limit) {
	self->setUndoLimit(static_cast<int>(limit));
}

int QUndoStack_undoLimit(const QUndoStack* self) {
	return self->undoLimit();
}

QUndoCommand* QUndoStack_command(const QUndoStack* self, int index) {
	return (QUndoCommand*) self->command(static_cast<int>(index));
}

void QUndoStack_setClean(QUndoStack* self) {
	self->setClean();
}

void QUndoStack_resetClean(QUndoStack* self) {
	self->resetClean();
}

void QUndoStack_setIndex(QUndoStack* self, int idx) {
	self->setIndex(static_cast<int>(idx));
}

void QUndoStack_undo(QUndoStack* self) {
	self->undo();
}

void QUndoStack_redo(QUndoStack* self) {
	self->redo();
}

void QUndoStack_setActive(QUndoStack* self) {
	self->setActive();
}

void QUndoStack_indexChanged(QUndoStack* self, int idx) {
	self->indexChanged(static_cast<int>(idx));
}

void QUndoStack_connect_indexChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(int)>(&QUndoStack::indexChanged), self, [=](int idx) {
		int sigval1 = idx;
		miqt_exec_callback_QUndoStack_indexChanged(slot, sigval1);
	});
}

void QUndoStack_cleanChanged(QUndoStack* self, bool clean) {
	self->cleanChanged(clean);
}

void QUndoStack_connect_cleanChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::cleanChanged), self, [=](bool clean) {
		bool sigval1 = clean;
		miqt_exec_callback_QUndoStack_cleanChanged(slot, sigval1);
	});
}

void QUndoStack_canUndoChanged(QUndoStack* self, bool canUndo) {
	self->canUndoChanged(canUndo);
}

void QUndoStack_connect_canUndoChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canUndoChanged), self, [=](bool canUndo) {
		bool sigval1 = canUndo;
		miqt_exec_callback_QUndoStack_canUndoChanged(slot, sigval1);
	});
}

void QUndoStack_canRedoChanged(QUndoStack* self, bool canRedo) {
	self->canRedoChanged(canRedo);
}

void QUndoStack_connect_canRedoChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(bool)>(&QUndoStack::canRedoChanged), self, [=](bool canRedo) {
		bool sigval1 = canRedo;
		miqt_exec_callback_QUndoStack_canRedoChanged(slot, sigval1);
	});
}

void QUndoStack_undoTextChanged(QUndoStack* self, struct miqt_string undoText) {
	QString undoText_QString = QString::fromUtf8(undoText.data, undoText.len);
	self->undoTextChanged(undoText_QString);
}

void QUndoStack_connect_undoTextChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::undoTextChanged), self, [=](const QString& undoText) {
		const QString undoText_ret = undoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray undoText_b = undoText_ret.toUtf8();
		struct miqt_string undoText_ms;
		undoText_ms.len = undoText_b.length();
		undoText_ms.data = static_cast<char*>(malloc(undoText_ms.len));
		memcpy(undoText_ms.data, undoText_b.data(), undoText_ms.len);
		struct miqt_string sigval1 = undoText_ms;
		miqt_exec_callback_QUndoStack_undoTextChanged(slot, sigval1);
	});
}

void QUndoStack_redoTextChanged(QUndoStack* self, struct miqt_string redoText) {
	QString redoText_QString = QString::fromUtf8(redoText.data, redoText.len);
	self->redoTextChanged(redoText_QString);
}

void QUndoStack_connect_redoTextChanged(QUndoStack* self, intptr_t slot) {
	QUndoStack::connect(self, static_cast<void (QUndoStack::*)(const QString&)>(&QUndoStack::redoTextChanged), self, [=](const QString& redoText) {
		const QString redoText_ret = redoText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray redoText_b = redoText_ret.toUtf8();
		struct miqt_string redoText_ms;
		redoText_ms.len = redoText_b.length();
		redoText_ms.data = static_cast<char*>(malloc(redoText_ms.len));
		memcpy(redoText_ms.data, redoText_b.data(), redoText_ms.len);
		struct miqt_string sigval1 = redoText_ms;
		miqt_exec_callback_QUndoStack_redoTextChanged(slot, sigval1);
	});
}

struct miqt_string QUndoStack_tr2(const char* s, const char* c) {
	QString _ret = QUndoStack::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoStack_tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoStack::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QUndoStack_createUndoAction2(const QUndoStack* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createUndoAction(parent, prefix_QString);
}

QAction* QUndoStack_createRedoAction2(const QUndoStack* self, QObject* parent, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->createRedoAction(parent, prefix_QString);
}

void QUndoStack_setActiveWithActive(QUndoStack* self, bool active) {
	self->setActive(active);
}

bool QUndoStack_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQUndoStack* self_cast = static_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QUndoStack_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQUndoStack*>(self)->QUndoStack::event(event);
}

bool QUndoStack_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQUndoStack* self_cast = static_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QUndoStack_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQUndoStack*>(self)->QUndoStack::eventFilter(watched, event);
}

QObject* QUndoStack_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoStack* self_cast = static_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QUndoStack_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoStack* self_cast = static_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QUndoStack_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQUndoStack* self_cast = static_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QUndoStack_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQUndoStack* self_cast = static_cast<MiqtVirtualQUndoStack*>( (QUndoStack*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QUndoStack_delete(QUndoStack* self) {
	delete self;
}

class MiqtVirtualQValidator final : public QValidator {
public:

	MiqtVirtualQValidator(): QValidator() {}
	MiqtVirtualQValidator(QObject* parent): QValidator(parent) {}

	virtual ~MiqtVirtualQValidator() override = default;

	virtual State validate(QString&, int&) const override { return Invalid; }

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fixup = 0;

	// Subclass to allow providing a Go implementation
	virtual void fixup(QString& param1) const override {
		if (handle__fixup == 0) {
			QValidator::fixup(param1);
			return;
		}

		QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QValidator_fixup(this, handle__fixup, sigval1);

	}

	friend void QValidator_virtualbase_fixup(const void* self, struct miqt_string param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QValidator::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QValidator_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QValidator_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QValidator::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QValidator_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QValidator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QValidator* QValidator_new() {
	return new (std::nothrow) MiqtVirtualQValidator();
}

QValidator* QValidator_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQValidator(parent);
}

void QValidator_virtbase(QValidator* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QValidator_metaObject(const QValidator* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QValidator_tr(const char* s) {
	QString _ret = QValidator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QValidator_setLocale(QValidator* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QValidator_locale(const QValidator* self) {
	return new QLocale(self->locale());
}

int QValidator_validate(const QValidator* self, struct miqt_string param1, int* param2) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QValidator::State _ret = self->validate(param1_QString, *param2);
	return static_cast<int>(_ret);
}

void QValidator_fixup(const QValidator* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->fixup(param1_QString);
}

void QValidator_changed(QValidator* self) {
	self->changed();
}

void QValidator_connect_changed(QValidator* self, intptr_t slot) {
	QValidator::connect(self, static_cast<void (QValidator::*)()>(&QValidator::changed), self, [=]() {
		miqt_exec_callback_QValidator_changed(slot);
	});
}

struct miqt_string QValidator_tr2(const char* s, const char* c) {
	QString _ret = QValidator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QValidator_tr3(const char* s, const char* c, int n) {
	QString _ret = QValidator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QValidator_override_virtual_fixup(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = static_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fixup = slot;
	return true;
}

void QValidator_virtualbase_fixup(const void* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	static_cast<const MiqtVirtualQValidator*>(self)->QValidator::fixup(param1_QString);
}

bool QValidator_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = static_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QValidator_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQValidator*>(self)->QValidator::event(event);
}

bool QValidator_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQValidator* self_cast = static_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QValidator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQValidator*>(self)->QValidator::eventFilter(watched, event);
}

QObject* QValidator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQValidator* self_cast = static_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QValidator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQValidator* self_cast = static_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QValidator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQValidator* self_cast = static_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QValidator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQValidator* self_cast = static_cast<MiqtVirtualQValidator*>( (QValidator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QValidator_delete(QValidator* self) {
	delete self;
}

