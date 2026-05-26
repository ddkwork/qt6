#include <QtCore>
#include "gen_QtCore.h"
#include <new>

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QObject_destroyed(intptr_t);
void miqt_exec_callback_QObject_destroyedWithQObject(intptr_t, QObject*);
bool miqt_exec_callback_QObject_event(QObject*, intptr_t, QEvent*);
bool miqt_exec_callback_QObject_eventFilter(QObject*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QEventLoop_event(QEventLoop*, intptr_t, QEvent*);
bool miqt_exec_callback_QEventLoop_eventFilter(QEventLoop*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock(intptr_t);
void miqt_exec_callback_QAbstractEventDispatcher_awake(intptr_t);
void miqt_exec_callback_QAbstractItemModel_dataChanged(intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QAbstractItemModel_headerDataChanged(intptr_t, int, int, int);
void miqt_exec_callback_QAbstractItemModel_layoutChanged(intptr_t);
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged(intptr_t);
void miqt_exec_callback_QAbstractItemModel_dataChanged2(intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QAbstractItemModel_layoutChangedWithParents(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ );
void miqt_exec_callback_QAbstractItemModel_layoutChanged2(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ , int);
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChangedWithParents(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ );
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged2(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ , int);
QModelIndex* miqt_exec_callback_QAbstractItemModel_index(const QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractItemModel_parent(const QAbstractItemModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractItemModel_sibling(const QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_rowCount(const QAbstractItemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_columnCount(const QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_hasChildren(const QAbstractItemModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QAbstractItemModel_data(const QAbstractItemModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QAbstractItemModel_setData(QAbstractItemModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QAbstractItemModel_headerData(const QAbstractItemModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QAbstractItemModel_setHeaderData(QAbstractItemModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractItemModel_itemData(const QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_setItemData(QAbstractItemModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QAbstractItemModel_clearItemData(QAbstractItemModel*, intptr_t, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractItemModel_mimeTypes(const QAbstractItemModel*, intptr_t);
QMimeData* miqt_exec_callback_QAbstractItemModel_mimeData(const QAbstractItemModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractItemModel_canDropMimeData(const QAbstractItemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_dropMimeData(QAbstractItemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_supportedDropActions(const QAbstractItemModel*, intptr_t);
int miqt_exec_callback_QAbstractItemModel_supportedDragActions(const QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_insertRows(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_insertColumns(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_removeRows(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_removeColumns(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_moveRows(QAbstractItemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractItemModel_moveColumns(QAbstractItemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractItemModel_fetchMore(QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_canFetchMore(const QAbstractItemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_flags(const QAbstractItemModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemModel_sort(QAbstractItemModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QAbstractItemModel_buddy(const QAbstractItemModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractItemModel_match(const QAbstractItemModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QAbstractItemModel_span(const QAbstractItemModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractItemModel_roleNames(const QAbstractItemModel*, intptr_t);
void miqt_exec_callback_QAbstractItemModel_multiData(const QAbstractItemModel*, intptr_t, QModelIndex*, QModelRoleDataSpan*);
bool miqt_exec_callback_QAbstractItemModel_submit(QAbstractItemModel*, intptr_t);
void miqt_exec_callback_QAbstractItemModel_revert(QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_event(QAbstractItemModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractItemModel_eventFilter(QAbstractItemModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractProxyModel_setSourceModel(QAbstractProxyModel*, intptr_t, QAbstractItemModel*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_mapToSource(const QAbstractProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_mapFromSource(const QAbstractProxyModel*, intptr_t, QModelIndex*);
QItemSelection* miqt_exec_callback_QAbstractProxyModel_mapSelectionToSource(const QAbstractProxyModel*, intptr_t, QItemSelection*);
QItemSelection* miqt_exec_callback_QAbstractProxyModel_mapSelectionFromSource(const QAbstractProxyModel*, intptr_t, QItemSelection*);
bool miqt_exec_callback_QAbstractProxyModel_submit(QAbstractProxyModel*, intptr_t);
void miqt_exec_callback_QAbstractProxyModel_revert(QAbstractProxyModel*, intptr_t);
QVariant* miqt_exec_callback_QAbstractProxyModel_data(const QAbstractProxyModel*, intptr_t, QModelIndex*, int);
QVariant* miqt_exec_callback_QAbstractProxyModel_headerData(const QAbstractProxyModel*, intptr_t, int, int, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractProxyModel_itemData(const QAbstractProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractProxyModel_flags(const QAbstractProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_setData(QAbstractProxyModel*, intptr_t, QModelIndex*, QVariant*, int);
bool miqt_exec_callback_QAbstractProxyModel_setItemData(QAbstractProxyModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QAbstractProxyModel_setHeaderData(QAbstractProxyModel*, intptr_t, int, int, QVariant*, int);
bool miqt_exec_callback_QAbstractProxyModel_clearItemData(QAbstractProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_buddy(const QAbstractProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_canFetchMore(const QAbstractProxyModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractProxyModel_fetchMore(QAbstractProxyModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractProxyModel_sort(QAbstractProxyModel*, intptr_t, int, int);
QSize* miqt_exec_callback_QAbstractProxyModel_span(const QAbstractProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_hasChildren(const QAbstractProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_sibling(const QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
QMimeData* miqt_exec_callback_QAbstractProxyModel_mimeData(const QAbstractProxyModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractProxyModel_canDropMimeData(const QAbstractProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_dropMimeData(QAbstractProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractProxyModel_mimeTypes(const QAbstractProxyModel*, intptr_t);
int miqt_exec_callback_QAbstractProxyModel_supportedDragActions(const QAbstractProxyModel*, intptr_t);
int miqt_exec_callback_QAbstractProxyModel_supportedDropActions(const QAbstractProxyModel*, intptr_t);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractProxyModel_roleNames(const QAbstractProxyModel*, intptr_t);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_index(const QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_parent(const QAbstractProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractProxyModel_rowCount(const QAbstractProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractProxyModel_columnCount(const QAbstractProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_insertRows(QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_insertColumns(QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_removeRows(QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_removeColumns(QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_moveRows(QAbstractProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractProxyModel_moveColumns(QAbstractProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractProxyModel_match(const QAbstractProxyModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
void miqt_exec_callback_QAbstractProxyModel_multiData(const QAbstractProxyModel*, intptr_t, QModelIndex*, QModelRoleDataSpan*);
bool miqt_exec_callback_QAbstractProxyModel_event(QAbstractProxyModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractProxyModel_eventFilter(QAbstractProxyModel*, intptr_t, QObject*, QEvent*);
QTimerEvent* miqt_exec_callback_QTimerEvent_clone(const QTimerEvent*, intptr_t);
void miqt_exec_callback_QTimerEvent_setAccepted(QTimerEvent*, intptr_t, bool);
void miqt_exec_callback_QCoreApplication_organizationNameChanged(intptr_t);
void miqt_exec_callback_QCoreApplication_organizationDomainChanged(intptr_t);
void miqt_exec_callback_QCoreApplication_applicationNameChanged(intptr_t);
void miqt_exec_callback_QCoreApplication_applicationVersionChanged(intptr_t);
bool miqt_exec_callback_QCoreApplication_notify(QCoreApplication*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QCoreApplication_event(QCoreApplication*, intptr_t, QEvent*);
bool miqt_exec_callback_QCoreApplication_eventFilter(QCoreApplication*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QIODevice_readyRead(intptr_t);
void miqt_exec_callback_QIODevice_channelReadyRead(intptr_t, int);
void miqt_exec_callback_QIODevice_bytesWritten(intptr_t, long long);
void miqt_exec_callback_QIODevice_channelBytesWritten(intptr_t, int, long long);
void miqt_exec_callback_QIODevice_aboutToClose(intptr_t);
void miqt_exec_callback_QIODevice_readChannelFinished(intptr_t);
bool miqt_exec_callback_QTimer_event(QTimer*, intptr_t, QEvent*);
bool miqt_exec_callback_QTimer_eventFilter(QTimer*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QThread_event(QThread*, intptr_t, QEvent*);
bool miqt_exec_callback_QThread_eventFilter(QThread*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QItemSelectionModel_selectionChanged(intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QItemSelectionModel_currentChanged(intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QItemSelectionModel_currentRowChanged(intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QItemSelectionModel_currentColumnChanged(intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QItemSelectionModel_modelChanged(intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QItemSelectionModel_setCurrentIndex(QItemSelectionModel*, intptr_t, QModelIndex*, int);
void miqt_exec_callback_QItemSelectionModel_select(QItemSelectionModel*, intptr_t, QModelIndex*, int);
void miqt_exec_callback_QItemSelectionModel_select2(QItemSelectionModel*, intptr_t, QItemSelection*, int);
void miqt_exec_callback_QItemSelectionModel_clear(QItemSelectionModel*, intptr_t);
void miqt_exec_callback_QItemSelectionModel_reset(QItemSelectionModel*, intptr_t);
void miqt_exec_callback_QItemSelectionModel_clearCurrentIndex(QItemSelectionModel*, intptr_t);
bool miqt_exec_callback_QItemSelectionModel_event(QItemSelectionModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QItemSelectionModel_eventFilter(QItemSelectionModel*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QMimeData_hasFormat(const QMimeData*, intptr_t, struct miqt_string);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QMimeData_formats(const QMimeData*, intptr_t);
bool miqt_exec_callback_QMimeData_event(QMimeData*, intptr_t, QEvent*);
bool miqt_exec_callback_QMimeData_eventFilter(QMimeData*, intptr_t, QObject*, QEvent*);
double miqt_exec_callback_QTimeLine_valueForTime(const QTimeLine*, intptr_t, int);
bool miqt_exec_callback_QTimeLine_event(QTimeLine*, intptr_t, QEvent*);
bool miqt_exec_callback_QTimeLine_eventFilter(QTimeLine*, intptr_t, QObject*, QEvent*);
struct miqt_string miqt_exec_callback_QTranslator_translate(const QTranslator*, intptr_t, const char*, const char*, const char*, int);
bool miqt_exec_callback_QTranslator_isEmpty(const QTranslator*, intptr_t);
bool miqt_exec_callback_QTranslator_event(QTranslator*, intptr_t, QEvent*);
bool miqt_exec_callback_QTranslator_eventFilter(QTranslator*, intptr_t, QObject*, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

QAtomicInt* QAtomicInt_new() {
	return new (std::nothrow) QAtomicInt();
}

QAtomicInt* QAtomicInt_new2(QAtomicInt* param1) {
	return new (std::nothrow) QAtomicInt(*param1);
}

QAtomicInt* QAtomicInt_new3(int value) {
	return new (std::nothrow) QAtomicInt(static_cast<int>(value));
}

void QAtomicInt_delete(QAtomicInt* self) {
	delete self;
}

QKeyCombination* QKeyCombination_new() {
	return new (std::nothrow) QKeyCombination();
}

QKeyCombination* QKeyCombination_new2(int modifiers) {
	return new (std::nothrow) QKeyCombination(static_cast<QFlags<Qt::Modifier>>(modifiers));
}

QKeyCombination* QKeyCombination_new3(int modifiers) {
	return new (std::nothrow) QKeyCombination(static_cast<QFlags<Qt::KeyboardModifier>>(modifiers));
}

QKeyCombination* QKeyCombination_new4(QKeyCombination* param1) {
	return new (std::nothrow) QKeyCombination(*param1);
}

QKeyCombination* QKeyCombination_new5(int key) {
	return new (std::nothrow) QKeyCombination(static_cast<Qt::Key>(key));
}

QKeyCombination* QKeyCombination_new6(int modifiers, int key) {
	return new (std::nothrow) QKeyCombination(static_cast<QFlags<Qt::Modifier>>(modifiers), static_cast<Qt::Key>(key));
}

QKeyCombination* QKeyCombination_new7(int modifiers, int key) {
	return new (std::nothrow) QKeyCombination(static_cast<QFlags<Qt::KeyboardModifier>>(modifiers), static_cast<Qt::Key>(key));
}

int QKeyCombination_keyboardModifiers(const QKeyCombination* self) {
	Qt::KeyboardModifiers _ret = self->keyboardModifiers();
	return static_cast<int>(_ret);
}

int QKeyCombination_key(const QKeyCombination* self) {
	Qt::Key _ret = self->key();
	return static_cast<int>(_ret);
}

QKeyCombination* QKeyCombination_fromCombined(int combined) {
	return new QKeyCombination(QKeyCombination::fromCombined(static_cast<int>(combined)));
}

int QKeyCombination_toCombined(const QKeyCombination* self) {
	return self->toCombined();
}

int QKeyCombination_ToInt(const QKeyCombination* self) {
	return self->operator int();
}

void QKeyCombination_delete(QKeyCombination* self) {
	delete self;
}

QGenericArgument* QGenericArgument_new() {
	return new (std::nothrow) QGenericArgument();
}

QGenericArgument* QGenericArgument_new2(QGenericArgument* param1) {
	return new (std::nothrow) QGenericArgument(*param1);
}

QGenericArgument* QGenericArgument_new3(const char* aName) {
	return new (std::nothrow) QGenericArgument(aName);
}

QGenericArgument* QGenericArgument_new4(const char* aName, const void* aData) {
	return new (std::nothrow) QGenericArgument(aName, aData);
}

void* QGenericArgument_data(const QGenericArgument* self) {
	return self->data();
}

const char* QGenericArgument_name(const QGenericArgument* self) {
	return (const char*) self->name();
}

void QGenericArgument_delete(QGenericArgument* self) {
	delete self;
}

QGenericReturnArgument* QGenericReturnArgument_new() {
	return new (std::nothrow) QGenericReturnArgument();
}

QGenericReturnArgument* QGenericReturnArgument_new2(QGenericReturnArgument* param1) {
	return new (std::nothrow) QGenericReturnArgument(*param1);
}

QGenericReturnArgument* QGenericReturnArgument_new3(const char* aName) {
	return new (std::nothrow) QGenericReturnArgument(aName);
}

QGenericReturnArgument* QGenericReturnArgument_new4(const char* aName, void* aData) {
	return new (std::nothrow) QGenericReturnArgument(aName, static_cast<void*>(aData));
}

void QGenericReturnArgument_virtbase(QGenericReturnArgument* src, QGenericArgument** outptr_QGenericArgument) {
	*outptr_QGenericArgument = static_cast<QGenericArgument*>(src);
}

void QGenericReturnArgument_delete(QGenericReturnArgument* self) {
	delete self;
}

QMetaObject* QMetaObject_new() {
	return new (std::nothrow) QMetaObject();
}

QMetaObject* QMetaObject_new2(QMetaObject* param1) {
	return new (std::nothrow) QMetaObject(*param1);
}

const char* QMetaObject_className(const QMetaObject* self) {
	return (const char*) self->className();
}

QMetaObject* QMetaObject_superClass(const QMetaObject* self) {
	return (QMetaObject*) self->superClass();
}

bool QMetaObject_inherits(const QMetaObject* self, QMetaObject* metaObject) {
	return self->inherits(metaObject);
}

QObject* QMetaObject_cast(const QMetaObject* self, QObject* obj) {
	return self->cast(obj);
}

QObject* QMetaObject_castWithObj(const QMetaObject* self, QObject* obj) {
	return (QObject*) self->cast(obj);
}

struct miqt_string QMetaObject_tr(const QMetaObject* self, const char* s, const char* c) {
	QString _ret = self->tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMetaType* QMetaObject_metaType(const QMetaObject* self) {
	return new QMetaType(self->metaType());
}

int QMetaObject_methodOffset(const QMetaObject* self) {
	return self->methodOffset();
}

int QMetaObject_enumeratorOffset(const QMetaObject* self) {
	return self->enumeratorOffset();
}

int QMetaObject_propertyOffset(const QMetaObject* self) {
	return self->propertyOffset();
}

int QMetaObject_classInfoOffset(const QMetaObject* self) {
	return self->classInfoOffset();
}

int QMetaObject_constructorCount(const QMetaObject* self) {
	return self->constructorCount();
}

int QMetaObject_methodCount(const QMetaObject* self) {
	return self->methodCount();
}

int QMetaObject_enumeratorCount(const QMetaObject* self) {
	return self->enumeratorCount();
}

int QMetaObject_propertyCount(const QMetaObject* self) {
	return self->propertyCount();
}

int QMetaObject_classInfoCount(const QMetaObject* self) {
	return self->classInfoCount();
}

int QMetaObject_indexOfConstructor(const QMetaObject* self, const char* constructor) {
	return self->indexOfConstructor(constructor);
}

int QMetaObject_indexOfMethod(const QMetaObject* self, const char* method) {
	return self->indexOfMethod(method);
}

int QMetaObject_indexOfSignal(const QMetaObject* self, const char* signal) {
	return self->indexOfSignal(signal);
}

int QMetaObject_indexOfSlot(const QMetaObject* self, const char* slot) {
	return self->indexOfSlot(slot);
}

int QMetaObject_indexOfEnumerator(const QMetaObject* self, const char* name) {
	return self->indexOfEnumerator(name);
}

int QMetaObject_indexOfProperty(const QMetaObject* self, const char* name) {
	return self->indexOfProperty(name);
}

int QMetaObject_indexOfClassInfo(const QMetaObject* self, const char* name) {
	return self->indexOfClassInfo(name);
}

QMetaMethod* QMetaObject_constructor(const QMetaObject* self, int index) {
	return new QMetaMethod(self->constructor(static_cast<int>(index)));
}

QMetaMethod* QMetaObject_method(const QMetaObject* self, int index) {
	return new QMetaMethod(self->method(static_cast<int>(index)));
}

QMetaEnum* QMetaObject_enumerator(const QMetaObject* self, int index) {
	return new QMetaEnum(self->enumerator(static_cast<int>(index)));
}

QMetaProperty* QMetaObject_property(const QMetaObject* self, int index) {
	return new QMetaProperty(self->property(static_cast<int>(index)));
}

QMetaClassInfo* QMetaObject_classInfo(const QMetaObject* self, int index) {
	return new QMetaClassInfo(self->classInfo(static_cast<int>(index)));
}

QMetaProperty* QMetaObject_userProperty(const QMetaObject* self) {
	return new QMetaProperty(self->userProperty());
}

bool QMetaObject_checkConnectArgs(const char* signal, const char* method) {
	return QMetaObject::checkConnectArgs(signal, method);
}

bool QMetaObject_checkConnectArgs2(QMetaMethod* signal, QMetaMethod* method) {
	return QMetaObject::checkConnectArgs(*signal, *method);
}

struct miqt_string QMetaObject_normalizedSignature(const char* method) {
	QByteArray _qb = QMetaObject::normalizedSignature(method);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaObject_normalizedType(const char* type) {
	QByteArray _qb = QMetaObject::normalizedType(type);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QMetaObject_disconnect(QObject* sender, int signal_index, QObject* receiver, int method_index) {
	return QMetaObject::disconnect(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index));
}

bool QMetaObject_disconnectOne(QObject* sender, int signal_index, QObject* receiver, int method_index) {
	return QMetaObject::disconnectOne(sender, static_cast<int>(signal_index), receiver, static_cast<int>(method_index));
}

void QMetaObject_connectSlotsByName(QObject* o) {
	QMetaObject::connectSlotsByName(o);
}

bool QMetaObject_invokeMethod(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret);
}

bool QMetaObject_invokeMethod2(QObject* obj, const char* member, QGenericReturnArgument* ret) {
	return QMetaObject::invokeMethod(obj, member, *ret);
}

bool QMetaObject_invokeMethod3(QObject* obj, const char* member, int type, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0);
}

bool QMetaObject_invokeMethod4(QObject* obj, const char* member, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, *val0);
}

QObject* QMetaObject_newInstance(const QMetaObject* self, QGenericArgument* val0) {
	return self->newInstance(*val0);
}

struct miqt_string QMetaObject_tr2(const QMetaObject* self, const char* s, const char* c, int n) {
	QString _ret = self->tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMetaObject_invokeMethod5(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0);
}

bool QMetaObject_invokeMethod6(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1);
}

bool QMetaObject_invokeMethod7(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2);
}

bool QMetaObject_invokeMethod8(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3);
}

bool QMetaObject_invokeMethod9(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_invokeMethod10(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_invokeMethod11(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_invokeMethod12(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_invokeMethod13(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_invokeMethod14(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(param3), *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaObject_invokeMethod15(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0);
}

bool QMetaObject_invokeMethod16(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1);
}

bool QMetaObject_invokeMethod17(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2);
}

bool QMetaObject_invokeMethod18(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3);
}

bool QMetaObject_invokeMethod19(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_invokeMethod20(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_invokeMethod21(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_invokeMethod22(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_invokeMethod23(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_invokeMethod24(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, *ret, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaObject_invokeMethod25(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1);
}

bool QMetaObject_invokeMethod26(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2);
}

bool QMetaObject_invokeMethod27(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3);
}

bool QMetaObject_invokeMethod28(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_invokeMethod29(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_invokeMethod30(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_invokeMethod31(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_invokeMethod32(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_invokeMethod33(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, static_cast<Qt::ConnectionType>(type), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaObject_invokeMethod34(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1);
}

bool QMetaObject_invokeMethod35(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2);
}

bool QMetaObject_invokeMethod36(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3);
}

bool QMetaObject_invokeMethod37(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaObject_invokeMethod38(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaObject_invokeMethod39(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaObject_invokeMethod40(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaObject_invokeMethod41(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaObject_invokeMethod42(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return QMetaObject::invokeMethod(obj, member, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

QObject* QMetaObject_newInstance2(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1) {
	return self->newInstance(*val0, *val1);
}

QObject* QMetaObject_newInstance3(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->newInstance(*val0, *val1, *val2);
}

QObject* QMetaObject_newInstance4(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->newInstance(*val0, *val1, *val2, *val3);
}

QObject* QMetaObject_newInstance5(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4);
}

QObject* QMetaObject_newInstance6(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5);
}

QObject* QMetaObject_newInstance7(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

QObject* QMetaObject_newInstance8(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

QObject* QMetaObject_newInstance9(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

QObject* QMetaObject_newInstance10(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->newInstance(*val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

void QMetaObject_delete(QMetaObject* self) {
	delete self;
}

QChar* QChar_new() {
	return new (std::nothrow) QChar();
}

QChar* QChar_new2(unsigned char c, unsigned char r) {
	return new (std::nothrow) QChar(static_cast<unsigned char>(c), static_cast<unsigned char>(r));
}

QChar* QChar_new3(QChar* param1) {
	return new (std::nothrow) QChar(*param1);
}

int QChar_category(const QChar* self) {
	return self->category();
}

int QChar_joiningType(const QChar* self) {
	return self->joiningType();
}

unsigned char QChar_combiningClass(const QChar* self) {
	return self->combiningClass();
}

QChar* QChar_mirroredChar(const QChar* self) {
	return new QChar(self->mirroredChar());
}

bool QChar_hasMirrored(const QChar* self) {
	return self->hasMirrored();
}

struct miqt_string QChar_decomposition(const QChar* self) {
	QString _ret = self->decomposition();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QChar_decompositionTag(const QChar* self) {
	return self->decompositionTag();
}

int QChar_digitValue(const QChar* self) {
	return self->digitValue();
}

QChar* QChar_toLower(const QChar* self) {
	return new QChar(self->toLower());
}

QChar* QChar_toUpper(const QChar* self) {
	return new QChar(self->toUpper());
}

QChar* QChar_toTitleCase(const QChar* self) {
	return new QChar(self->toTitleCase());
}

QChar* QChar_toCaseFolded(const QChar* self) {
	return new QChar(self->toCaseFolded());
}

int QChar_unicodeVersion(const QChar* self) {
	QChar::UnicodeVersion _ret = self->unicodeVersion();
	return static_cast<int>(_ret);
}

char QChar_toLatin1(const QChar* self) {
	return self->toLatin1();
}

QChar* QChar_fromLatin1(char c) {
	return new QChar(QChar::fromLatin1(static_cast<char>(c)));
}

bool QChar_isNull(const QChar* self) {
	return self->isNull();
}

bool QChar_isPrint(const QChar* self) {
	return self->isPrint();
}

bool QChar_isSpace(const QChar* self) {
	return self->isSpace();
}

bool QChar_isMark(const QChar* self) {
	return self->isMark();
}

bool QChar_isPunct(const QChar* self) {
	return self->isPunct();
}

bool QChar_isSymbol(const QChar* self) {
	return self->isSymbol();
}

bool QChar_isLetter(const QChar* self) {
	return self->isLetter();
}

bool QChar_isNumber(const QChar* self) {
	return self->isNumber();
}

bool QChar_isLetterOrNumber(const QChar* self) {
	return self->isLetterOrNumber();
}

bool QChar_isDigit(const QChar* self) {
	return self->isDigit();
}

bool QChar_isLower(const QChar* self) {
	return self->isLower();
}

bool QChar_isUpper(const QChar* self) {
	return self->isUpper();
}

bool QChar_isTitleCase(const QChar* self) {
	return self->isTitleCase();
}

bool QChar_isNonCharacter(const QChar* self) {
	return self->isNonCharacter();
}

bool QChar_isHighSurrogate(const QChar* self) {
	return self->isHighSurrogate();
}

bool QChar_isLowSurrogate(const QChar* self) {
	return self->isLowSurrogate();
}

bool QChar_isSurrogate(const QChar* self) {
	return self->isSurrogate();
}

unsigned char QChar_cell(const QChar* self) {
	unsigned char _ret = self->cell();
	return static_cast<unsigned char>(_ret);
}

unsigned char QChar_row(const QChar* self) {
	unsigned char _ret = self->row();
	return static_cast<unsigned char>(_ret);
}

void QChar_setCell(QChar* self, unsigned char acell) {
	self->setCell(static_cast<unsigned char>(acell));
}

void QChar_setRow(QChar* self, unsigned char arow) {
	self->setRow(static_cast<unsigned char>(arow));
}

int QChar_currentUnicodeVersion() {
	QChar::UnicodeVersion _ret = QChar::currentUnicodeVersion();
	return static_cast<int>(_ret);
}

void QChar_delete(QChar* self) {
	delete self;
}

QByteArray* QByteArray_new() {
	return new (std::nothrow) QByteArray();
}

QByteArray* QByteArray_new2(const char* param1) {
	return new (std::nothrow) QByteArray(param1);
}

QByteArray* QByteArray_new3(int64_t size, char c) {
	return new (std::nothrow) QByteArray((int64_t)(size), static_cast<char>(c));
}

QByteArray* QByteArray_new4(int64_t size, int param2) {
	return new (std::nothrow) QByteArray((int64_t)(size), static_cast<Qt::Initialization>(param2));
}

QByteArray* QByteArray_new5(struct miqt_string param1) {
	QByteArray param1_QByteArray(param1.data, param1.len);
	return new (std::nothrow) QByteArray(param1_QByteArray);
}

QByteArray* QByteArray_new6(const char* param1, int64_t size) {
	return new (std::nothrow) QByteArray(param1, (int64_t)(size));
}

void QByteArray_swap(QByteArray* self, struct miqt_string other) {
	QByteArray other_QByteArray(other.data, other.len);
	self->swap(other_QByteArray);
}

bool QByteArray_isEmpty(const QByteArray* self) {
	return self->isEmpty();
}

void QByteArray_resize(QByteArray* self, int64_t size) {
	self->resize((int64_t)(size));
}

void QByteArray_resize2(QByteArray* self, int64_t size, char c) {
	self->resize((int64_t)(size), static_cast<char>(c));
}

void QByteArray_resizeForOverwrite(QByteArray* self, int64_t size) {
	self->resizeForOverwrite((int64_t)(size));
}

struct miqt_string QByteArray_fill(QByteArray* self, char c) {
	QByteArray _qb = self->fill(static_cast<char>(c));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int64_t QByteArray_capacity(const QByteArray* self) {
	int64_t _ret = self->capacity();
	return static_cast<int64_t>(_ret);
}

void QByteArray_reserve(QByteArray* self, int64_t size) {
	self->reserve((int64_t)(size));
}

void QByteArray_squeeze(QByteArray* self) {
	self->squeeze();
}

const char* QByteArray_ToConstCharMultiply(const QByteArray* self) {
	return (const char*) self->operator const char *();
}

const void* QByteArray_ToConstVoidMultiply(const QByteArray* self) {
	return (const void*) self->operator const void *();
}

char* QByteArray_data(QByteArray* self) {
	return self->data();
}

const char* QByteArray_data2(const QByteArray* self) {
	return (const char*) self->data();
}

const char* QByteArray_constData(const QByteArray* self) {
	return (const char*) self->constData();
}

void QByteArray_detach(QByteArray* self) {
	self->detach();
}

bool QByteArray_isDetached(const QByteArray* self) {
	return self->isDetached();
}

bool QByteArray_isSharedWith(const QByteArray* self, struct miqt_string other) {
	QByteArray other_QByteArray(other.data, other.len);
	return self->isSharedWith(other_QByteArray);
}

void QByteArray_clear(QByteArray* self) {
	self->clear();
}

char QByteArray_at(const QByteArray* self, int64_t i) {
	return self->at((int64_t)(i));
}

char QByteArray_operatorSubscript(const QByteArray* self, int64_t i) {
	return self->operator[]((int64_t)(i));
}

char QByteArray_front(const QByteArray* self) {
	return self->front();
}

char QByteArray_back(const QByteArray* self) {
	return self->back();
}

int64_t QByteArray_indexOf(const QByteArray* self, char c) {
	int64_t _ret = self->indexOf(static_cast<char>(c));
	return static_cast<int64_t>(_ret);
}

int64_t QByteArray_lastIndexOf(const QByteArray* self, char c) {
	int64_t _ret = self->lastIndexOf(static_cast<char>(c));
	return static_cast<int64_t>(_ret);
}

bool QByteArray_contains(const QByteArray* self, char c) {
	return self->contains(static_cast<char>(c));
}

int64_t QByteArray_count(const QByteArray* self, char c) {
	int64_t _ret = self->count(static_cast<char>(c));
	return static_cast<int64_t>(_ret);
}

struct miqt_string QByteArray_left(const QByteArray* self, int64_t n) {
	QByteArray _qb = self->left((int64_t)(n));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_right(const QByteArray* self, int64_t n) {
	QByteArray _qb = self->right((int64_t)(n));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_mid(const QByteArray* self, int64_t index) {
	QByteArray _qb = self->mid((int64_t)(index));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_first(const QByteArray* self, int64_t n) {
	QByteArray _qb = self->first((int64_t)(n));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_last(const QByteArray* self, int64_t n) {
	QByteArray _qb = self->last((int64_t)(n));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_sliced(const QByteArray* self, int64_t pos) {
	QByteArray _qb = self->sliced((int64_t)(pos));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_sliced2(const QByteArray* self, int64_t pos, int64_t n) {
	QByteArray _qb = self->sliced((int64_t)(pos), (int64_t)(n));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_chopped(const QByteArray* self, int64_t len) {
	QByteArray _qb = self->chopped((int64_t)(len));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QByteArray_startsWith(const QByteArray* self, char c) {
	return self->startsWith(static_cast<char>(c));
}

bool QByteArray_endsWith(const QByteArray* self, char c) {
	return self->endsWith(static_cast<char>(c));
}

bool QByteArray_isUpper(const QByteArray* self) {
	return self->isUpper();
}

bool QByteArray_isLower(const QByteArray* self) {
	return self->isLower();
}

bool QByteArray_isValidUtf8(const QByteArray* self) {
	return self->isValidUtf8();
}

void QByteArray_truncate(QByteArray* self, int64_t pos) {
	self->truncate((int64_t)(pos));
}

void QByteArray_chop(QByteArray* self, int64_t n) {
	self->chop((int64_t)(n));
}

struct miqt_string QByteArray_slice(QByteArray* self, int64_t pos) {
	QByteArray _qb = self->slice((int64_t)(pos));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_slice2(QByteArray* self, int64_t pos, int64_t n) {
	QByteArray _qb = self->slice((int64_t)(pos), (int64_t)(n));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_toLower(const QByteArray* self) {
	QByteArray _qb = self->toLower();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_toUpper(const QByteArray* self) {
	QByteArray _qb = self->toUpper();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_trimmed(const QByteArray* self) {
	QByteArray _qb = self->trimmed();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_simplified(const QByteArray* self) {
	QByteArray _qb = self->simplified();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_leftJustified(const QByteArray* self, int64_t width) {
	QByteArray _qb = self->leftJustified((int64_t)(width));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_rightJustified(const QByteArray* self, int64_t width) {
	QByteArray _qb = self->rightJustified((int64_t)(width));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_prepend(QByteArray* self, char c) {
	QByteArray _qb = self->prepend(static_cast<char>(c));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_prepend2(QByteArray* self, int64_t count, char c) {
	QByteArray _qb = self->prepend((int64_t)(count), static_cast<char>(c));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_prependWithChar(QByteArray* self, const char* s) {
	QByteArray _qb = self->prepend(s);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_prepend3(QByteArray* self, const char* s, int64_t len) {
	QByteArray _qb = self->prepend(s, (int64_t)(len));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_prependWithQByteArray(QByteArray* self, struct miqt_string a) {
	QByteArray a_QByteArray(a.data, a.len);
	QByteArray _qb = self->prepend(a_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_append(QByteArray* self, char c) {
	QByteArray _qb = self->append(static_cast<char>(c));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_append2(QByteArray* self, int64_t count, char c) {
	QByteArray _qb = self->append((int64_t)(count), static_cast<char>(c));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_appendWithChar(QByteArray* self, const char* s) {
	QByteArray _qb = self->append(s);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_append3(QByteArray* self, const char* s, int64_t len) {
	QByteArray _qb = self->append(s, (int64_t)(len));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_appendWithQByteArray(QByteArray* self, struct miqt_string a) {
	QByteArray a_QByteArray(a.data, a.len);
	QByteArray _qb = self->append(a_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_assign(QByteArray* self, int64_t n, char c) {
	QByteArray _qb = self->assign((int64_t)(n), static_cast<char>(c));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_insert(QByteArray* self, int64_t i, const char* s) {
	QByteArray _qb = self->insert((int64_t)(i), s);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_insert2(QByteArray* self, int64_t i, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	QByteArray _qb = self->insert((int64_t)(i), data_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_insert3(QByteArray* self, int64_t i, int64_t count, char c) {
	QByteArray _qb = self->insert((int64_t)(i), (int64_t)(count), static_cast<char>(c));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_insert4(QByteArray* self, int64_t i, char c) {
	QByteArray _qb = self->insert((int64_t)(i), static_cast<char>(c));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_insert5(QByteArray* self, int64_t i, const char* s, int64_t len) {
	QByteArray _qb = self->insert((int64_t)(i), s, (int64_t)(len));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_remove(QByteArray* self, int64_t index, int64_t len) {
	QByteArray _qb = self->remove((int64_t)(index), (int64_t)(len));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_removeAt(QByteArray* self, int64_t pos) {
	QByteArray _qb = self->removeAt((int64_t)(pos));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_removeFirst(QByteArray* self) {
	QByteArray _qb = self->removeFirst();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_removeLast(QByteArray* self) {
	QByteArray _qb = self->removeLast();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_replace(QByteArray* self, int64_t index, int64_t len, const char* s, int64_t alen) {
	QByteArray _qb = self->replace((int64_t)(index), (int64_t)(len), s, (int64_t)(alen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_replace2(QByteArray* self, const char* before, int64_t bsize, const char* after, int64_t asize) {
	QByteArray _qb = self->replace(before, (int64_t)(bsize), after, (int64_t)(asize));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_replace3(QByteArray* self, char before, char after) {
	QByteArray _qb = self->replace(static_cast<char>(before), static_cast<char>(after));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_operatorPlusAssign(QByteArray* self, char c) {
	QByteArray _qb = self->operator+=(static_cast<char>(c));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_operatorPlusAssignWithChar(QByteArray* self, const char* s) {
	QByteArray _qb = self->operator+=(s);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_operatorPlusAssignWithQByteArray(QByteArray* self, struct miqt_string a) {
	QByteArray a_QByteArray(a.data, a.len);
	QByteArray _qb = self->operator+=(a_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QByteArray_split(const QByteArray* self, char sep) {
	QList<QByteArray> _ret = self->split(static_cast<char>(sep));
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

struct miqt_string QByteArray_repeated(const QByteArray* self, int64_t times) {
	QByteArray _qb = self->repeated((int64_t)(times));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

short QByteArray_toShort(const QByteArray* self) {
	return self->toShort();
}

unsigned short QByteArray_toUShort(const QByteArray* self) {
	unsigned short _ret = self->toUShort();
	return static_cast<unsigned short>(_ret);
}

int QByteArray_toInt(const QByteArray* self) {
	return self->toInt();
}

unsigned int QByteArray_toUInt(const QByteArray* self) {
	unsigned int _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

long QByteArray_toLong(const QByteArray* self) {
	return self->toLong();
}

unsigned long QByteArray_toULong(const QByteArray* self) {
	unsigned long _ret = self->toULong();
	return static_cast<unsigned long>(_ret);
}

long long QByteArray_toLongLong(const QByteArray* self) {
	long long _ret = self->toLongLong();
	return static_cast<long long>(_ret);
}

unsigned long long QByteArray_toULongLong(const QByteArray* self) {
	unsigned long long _ret = self->toULongLong();
	return static_cast<unsigned long long>(_ret);
}

float QByteArray_toFloat(const QByteArray* self) {
	return self->toFloat();
}

double QByteArray_toDouble(const QByteArray* self) {
	return self->toDouble();
}

struct miqt_string QByteArray_toBase64(const QByteArray* self) {
	QByteArray _qb = self->toBase64();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_toHex(const QByteArray* self) {
	QByteArray _qb = self->toHex();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_toPercentEncoding(const QByteArray* self) {
	QByteArray _qb = self->toPercentEncoding();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_percentDecoded(const QByteArray* self) {
	QByteArray _qb = self->percentDecoded();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum(QByteArray* self, short param1) {
	QByteArray _qb = self->setNum(static_cast<short>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNumWithUshort(QByteArray* self, unsigned short param1) {
	QByteArray _qb = self->setNum(static_cast<unsigned short>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNumWithInt(QByteArray* self, int param1) {
	QByteArray _qb = self->setNum(static_cast<int>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNumWithUint(QByteArray* self, unsigned int param1) {
	QByteArray _qb = self->setNum(static_cast<unsigned int>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNumWithLong(QByteArray* self, long param1) {
	QByteArray _qb = self->setNum(static_cast<long>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNumWithUlong(QByteArray* self, unsigned long param1) {
	QByteArray _qb = self->setNum(static_cast<unsigned long>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNumWithQlonglong(QByteArray* self, long long param1) {
	QByteArray _qb = self->setNum(static_cast<long long>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNumWithQulonglong(QByteArray* self, unsigned long long param1) {
	QByteArray _qb = self->setNum(static_cast<unsigned long long>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNumWithFloat(QByteArray* self, float param1) {
	QByteArray _qb = self->setNum(static_cast<float>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNumWithDouble(QByteArray* self, double param1) {
	QByteArray _qb = self->setNum(static_cast<double>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setRawData(QByteArray* self, const char* a, int64_t n) {
	QByteArray _qb = self->setRawData(a, (int64_t)(n));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_number(int param1) {
	QByteArray _qb = QByteArray::number(static_cast<int>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_numberWithUint(unsigned int param1) {
	QByteArray _qb = QByteArray::number(static_cast<unsigned int>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_numberWithLong(long param1) {
	QByteArray _qb = QByteArray::number(static_cast<long>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_numberWithUlong(unsigned long param1) {
	QByteArray _qb = QByteArray::number(static_cast<unsigned long>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_numberWithQlonglong(long long param1) {
	QByteArray _qb = QByteArray::number(static_cast<long long>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_numberWithQulonglong(unsigned long long param1) {
	QByteArray _qb = QByteArray::number(static_cast<unsigned long long>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_numberWithDouble(double param1) {
	QByteArray _qb = QByteArray::number(static_cast<double>(param1));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_fromRawData(const char* data, int64_t size) {
	QByteArray _qb = QByteArray::fromRawData(data, (int64_t)(size));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_fromBase64(struct miqt_string base64) {
	QByteArray base64_QByteArray(base64.data, base64.len);
	QByteArray _qb = QByteArray::fromBase64(base64_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_fromHex(struct miqt_string hexEncoded) {
	QByteArray hexEncoded_QByteArray(hexEncoded.data, hexEncoded.len);
	QByteArray _qb = QByteArray::fromHex(hexEncoded_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_fromPercentEncoding(struct miqt_string pctEncoded) {
	QByteArray pctEncoded_QByteArray(pctEncoded.data, pctEncoded.len);
	QByteArray _qb = QByteArray::fromPercentEncoding(pctEncoded_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QByteArray_pushBack(QByteArray* self, char c) {
	self->push_back(static_cast<char>(c));
}

void QByteArray_pushBackWithChar(QByteArray* self, const char* s) {
	self->push_back(s);
}

void QByteArray_pushBackWithQByteArray(QByteArray* self, struct miqt_string a) {
	QByteArray a_QByteArray(a.data, a.len);
	self->push_back(a_QByteArray);
}

void QByteArray_pushFront(QByteArray* self, char c) {
	self->push_front(static_cast<char>(c));
}

void QByteArray_pushFrontWithChar(QByteArray* self, const char* c) {
	self->push_front(c);
}

void QByteArray_pushFrontWithQByteArray(QByteArray* self, struct miqt_string a) {
	QByteArray a_QByteArray(a.data, a.len);
	self->push_front(a_QByteArray);
}

void QByteArray_shrinkToFit(QByteArray* self) {
	self->shrink_to_fit();
}

int64_t QByteArray_maxSize(const QByteArray* self) {
	int64_t _ret = self->max_size();
	return static_cast<int64_t>(_ret);
}

int64_t QByteArray_maxSize2() {
	int64_t _ret = QByteArray::maxSize();
	return static_cast<int64_t>(_ret);
}

int64_t QByteArray_size(const QByteArray* self) {
	int64_t _ret = self->size();
	return static_cast<int64_t>(_ret);
}

int64_t QByteArray_count2(const QByteArray* self) {
	int64_t _ret = self->count();
	return static_cast<int64_t>(_ret);
}

int64_t QByteArray_length(const QByteArray* self) {
	int64_t _ret = self->length();
	return static_cast<int64_t>(_ret);
}

bool QByteArray_isNull(const QByteArray* self) {
	return self->isNull();
}

struct miqt_string QByteArray_nullTerminated(const QByteArray* self) {
	QByteArray _qb = self->nullTerminated();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_nullTerminate(QByteArray* self) {
	QByteArray _qb = self->nullTerminate();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_fill2(QByteArray* self, char c, int64_t size) {
	QByteArray _qb = self->fill(static_cast<char>(c), (int64_t)(size));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int64_t QByteArray_indexOf2(const QByteArray* self, char c, int64_t from) {
	int64_t _ret = self->indexOf(static_cast<char>(c), (int64_t)(from));
	return static_cast<int64_t>(_ret);
}

int64_t QByteArray_lastIndexOf2(const QByteArray* self, char c, int64_t from) {
	int64_t _ret = self->lastIndexOf(static_cast<char>(c), (int64_t)(from));
	return static_cast<int64_t>(_ret);
}

struct miqt_string QByteArray_mid2(const QByteArray* self, int64_t index, int64_t len) {
	QByteArray _qb = self->mid((int64_t)(index), (int64_t)(len));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_leftJustified2(const QByteArray* self, int64_t width, char fill) {
	QByteArray _qb = self->leftJustified((int64_t)(width), static_cast<char>(fill));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_leftJustified3(const QByteArray* self, int64_t width, char fill, bool truncate) {
	QByteArray _qb = self->leftJustified((int64_t)(width), static_cast<char>(fill), truncate);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_rightJustified2(const QByteArray* self, int64_t width, char fill) {
	QByteArray _qb = self->rightJustified((int64_t)(width), static_cast<char>(fill));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_rightJustified3(const QByteArray* self, int64_t width, char fill, bool truncate) {
	QByteArray _qb = self->rightJustified((int64_t)(width), static_cast<char>(fill), truncate);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

short QByteArray_toShortWithOk(const QByteArray* self, bool* ok) {
	return self->toShort(ok);
}

short QByteArray_toShort2(const QByteArray* self, bool* ok, int base) {
	return self->toShort(ok, static_cast<int>(base));
}

unsigned short QByteArray_toUShortWithOk(const QByteArray* self, bool* ok) {
	unsigned short _ret = self->toUShort(ok);
	return static_cast<unsigned short>(_ret);
}

unsigned short QByteArray_toUShort2(const QByteArray* self, bool* ok, int base) {
	unsigned short _ret = self->toUShort(ok, static_cast<int>(base));
	return static_cast<unsigned short>(_ret);
}

int QByteArray_toIntWithOk(const QByteArray* self, bool* ok) {
	return self->toInt(ok);
}

int QByteArray_toInt2(const QByteArray* self, bool* ok, int base) {
	return self->toInt(ok, static_cast<int>(base));
}

unsigned int QByteArray_toUIntWithOk(const QByteArray* self, bool* ok) {
	unsigned int _ret = self->toUInt(ok);
	return static_cast<unsigned int>(_ret);
}

unsigned int QByteArray_toUInt2(const QByteArray* self, bool* ok, int base) {
	unsigned int _ret = self->toUInt(ok, static_cast<int>(base));
	return static_cast<unsigned int>(_ret);
}

long QByteArray_toLongWithOk(const QByteArray* self, bool* ok) {
	return self->toLong(ok);
}

long QByteArray_toLong2(const QByteArray* self, bool* ok, int base) {
	return self->toLong(ok, static_cast<int>(base));
}

unsigned long QByteArray_toULongWithOk(const QByteArray* self, bool* ok) {
	unsigned long _ret = self->toULong(ok);
	return static_cast<unsigned long>(_ret);
}

unsigned long QByteArray_toULong2(const QByteArray* self, bool* ok, int base) {
	unsigned long _ret = self->toULong(ok, static_cast<int>(base));
	return static_cast<unsigned long>(_ret);
}

long long QByteArray_toLongLongWithOk(const QByteArray* self, bool* ok) {
	long long _ret = self->toLongLong(ok);
	return static_cast<long long>(_ret);
}

long long QByteArray_toLongLong2(const QByteArray* self, bool* ok, int base) {
	long long _ret = self->toLongLong(ok, static_cast<int>(base));
	return static_cast<long long>(_ret);
}

unsigned long long QByteArray_toULongLongWithOk(const QByteArray* self, bool* ok) {
	unsigned long long _ret = self->toULongLong(ok);
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QByteArray_toULongLong2(const QByteArray* self, bool* ok, int base) {
	unsigned long long _ret = self->toULongLong(ok, static_cast<int>(base));
	return static_cast<unsigned long long>(_ret);
}

float QByteArray_toFloatWithOk(const QByteArray* self, bool* ok) {
	return self->toFloat(ok);
}

double QByteArray_toDoubleWithOk(const QByteArray* self, bool* ok) {
	return self->toDouble(ok);
}

struct miqt_string QByteArray_toBase64WithOptions(const QByteArray* self, int options) {
	QByteArray _qb = self->toBase64(static_cast<QFlags<QByteArray::Base64Option>>(options));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_toHexWithSeparator(const QByteArray* self, char separator) {
	QByteArray _qb = self->toHex(static_cast<char>(separator));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_toPercentEncodingWithExclude(const QByteArray* self, struct miqt_string exclude) {
	QByteArray exclude_QByteArray(exclude.data, exclude.len);
	QByteArray _qb = self->toPercentEncoding(exclude_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_toPercentEncoding2(const QByteArray* self, struct miqt_string exclude, struct miqt_string include) {
	QByteArray exclude_QByteArray(exclude.data, exclude.len);
	QByteArray include_QByteArray(include.data, include.len);
	QByteArray _qb = self->toPercentEncoding(exclude_QByteArray, include_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_toPercentEncoding3(const QByteArray* self, struct miqt_string exclude, struct miqt_string include, char percent) {
	QByteArray exclude_QByteArray(exclude.data, exclude.len);
	QByteArray include_QByteArray(include.data, include.len);
	QByteArray _qb = self->toPercentEncoding(exclude_QByteArray, include_QByteArray, static_cast<char>(percent));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_percentDecodedWithPercent(const QByteArray* self, char percent) {
	QByteArray _qb = self->percentDecoded(static_cast<char>(percent));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum2(QByteArray* self, short param1, int base) {
	QByteArray _qb = self->setNum(static_cast<short>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum3(QByteArray* self, unsigned short param1, int base) {
	QByteArray _qb = self->setNum(static_cast<unsigned short>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum4(QByteArray* self, int param1, int base) {
	QByteArray _qb = self->setNum(static_cast<int>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum5(QByteArray* self, unsigned int param1, int base) {
	QByteArray _qb = self->setNum(static_cast<unsigned int>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum6(QByteArray* self, long param1, int base) {
	QByteArray _qb = self->setNum(static_cast<long>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum7(QByteArray* self, unsigned long param1, int base) {
	QByteArray _qb = self->setNum(static_cast<unsigned long>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum8(QByteArray* self, long long param1, int base) {
	QByteArray _qb = self->setNum(static_cast<long long>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum9(QByteArray* self, unsigned long long param1, int base) {
	QByteArray _qb = self->setNum(static_cast<unsigned long long>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum10(QByteArray* self, float param1, char format) {
	QByteArray _qb = self->setNum(static_cast<float>(param1), static_cast<char>(format));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum11(QByteArray* self, float param1, char format, int precision) {
	QByteArray _qb = self->setNum(static_cast<float>(param1), static_cast<char>(format), static_cast<int>(precision));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum12(QByteArray* self, double param1, char format) {
	QByteArray _qb = self->setNum(static_cast<double>(param1), static_cast<char>(format));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_setNum13(QByteArray* self, double param1, char format, int precision) {
	QByteArray _qb = self->setNum(static_cast<double>(param1), static_cast<char>(format), static_cast<int>(precision));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_number2(int param1, int base) {
	QByteArray _qb = QByteArray::number(static_cast<int>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_number3(unsigned int param1, int base) {
	QByteArray _qb = QByteArray::number(static_cast<unsigned int>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_number4(long param1, int base) {
	QByteArray _qb = QByteArray::number(static_cast<long>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_number5(unsigned long param1, int base) {
	QByteArray _qb = QByteArray::number(static_cast<unsigned long>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_number6(long long param1, int base) {
	QByteArray _qb = QByteArray::number(static_cast<long long>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_number7(unsigned long long param1, int base) {
	QByteArray _qb = QByteArray::number(static_cast<unsigned long long>(param1), static_cast<int>(base));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_number8(double param1, char format) {
	QByteArray _qb = QByteArray::number(static_cast<double>(param1), static_cast<char>(format));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_number9(double param1, char format, int precision) {
	QByteArray _qb = QByteArray::number(static_cast<double>(param1), static_cast<char>(format), static_cast<int>(precision));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_fromBase642(struct miqt_string base64, int options) {
	QByteArray base64_QByteArray(base64.data, base64.len);
	QByteArray _qb = QByteArray::fromBase64(base64_QByteArray, static_cast<QFlags<QByteArray::Base64Option>>(options));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QByteArray_fromPercentEncoding2(struct miqt_string pctEncoded, char percent) {
	QByteArray pctEncoded_QByteArray(pctEncoded.data, pctEncoded.len);
	QByteArray _qb = QByteArray::fromPercentEncoding(pctEncoded_QByteArray, static_cast<char>(percent));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QByteArray_delete(QByteArray* self) {
	delete self;
}

QString* QString_new() {
	return new (std::nothrow) QString();
}

QString* QString_new2(QChar* unicode) {
	return new (std::nothrow) QString(unicode);
}

QString* QString_new3(QChar* c) {
	return new (std::nothrow) QString(*c);
}

QString* QString_new4(int64_t size, QChar* c) {
	return new (std::nothrow) QString((int64_t)(size), *c);
}

QString* QString_new5(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return new (std::nothrow) QString(param1_QString);
}

QString* QString_new6(int64_t size, int param2) {
	return new (std::nothrow) QString((int64_t)(size), static_cast<Qt::Initialization>(param2));
}

QString* QString_new7(QChar* unicode, int64_t size) {
	return new (std::nothrow) QString(unicode, (int64_t)(size));
}

void QString_swap(QString* self, struct miqt_string other) {
	QString other_QString = QString::fromUtf8(other.data, other.len);
	self->swap(other_QString);
}

int64_t QString_maxSize() {
	int64_t _ret = QString::maxSize();
	return static_cast<int64_t>(_ret);
}

int64_t QString_size(const QString* self) {
	int64_t _ret = self->size();
	return static_cast<int64_t>(_ret);
}

int64_t QString_count(const QString* self) {
	int64_t _ret = self->count();
	return static_cast<int64_t>(_ret);
}

int64_t QString_length(const QString* self) {
	int64_t _ret = self->length();
	return static_cast<int64_t>(_ret);
}

bool QString_isEmpty(const QString* self) {
	return self->isEmpty();
}

void QString_resize(QString* self, int64_t size) {
	self->resize((int64_t)(size));
}

void QString_resize2(QString* self, int64_t size, QChar* fillChar) {
	self->resize((int64_t)(size), *fillChar);
}

void QString_resizeForOverwrite(QString* self, int64_t size) {
	self->resizeForOverwrite((int64_t)(size));
}

struct miqt_string QString_fill(QString* self, QChar* c) {
	QString _ret = self->fill(*c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QString_truncate(QString* self, int64_t pos) {
	self->truncate((int64_t)(pos));
}

void QString_chop(QString* self, int64_t n) {
	self->chop((int64_t)(n));
}

struct miqt_string QString_slice(QString* self, int64_t pos) {
	QString _ret = self->slice((int64_t)(pos));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_slice2(QString* self, int64_t pos, int64_t n) {
	QString _ret = self->slice((int64_t)(pos), (int64_t)(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int64_t QString_capacity(const QString* self) {
	int64_t _ret = self->capacity();
	return static_cast<int64_t>(_ret);
}

void QString_reserve(QString* self, int64_t size) {
	self->reserve((int64_t)(size));
}

void QString_squeeze(QString* self) {
	self->squeeze();
}

QChar* QString_unicode(const QString* self) {
	return (QChar*) self->unicode();
}

QChar* QString_data(QString* self) {
	return self->data();
}

QChar* QString_data2(const QString* self) {
	return (QChar*) self->data();
}

QChar* QString_constData(const QString* self) {
	return (QChar*) self->constData();
}

void QString_detach(QString* self) {
	self->detach();
}

bool QString_isDetached(const QString* self) {
	return self->isDetached();
}

bool QString_isSharedWith(const QString* self, struct miqt_string other) {
	QString other_QString = QString::fromUtf8(other.data, other.len);
	return self->isSharedWith(other_QString);
}

void QString_clear(QString* self) {
	self->clear();
}

QChar* QString_at(const QString* self, int64_t i) {
	return new QChar(self->at((int64_t)(i)));
}

QChar* QString_operatorSubscript(const QString* self, int64_t i) {
	return new QChar(self->operator[]((int64_t)(i)));
}

QChar* QString_operatorSubscriptWithQsizetype(QString* self, int64_t i) {
	QChar& _ret = self->operator[]((int64_t)(i));
	// Cast returned reference into pointer
	return &_ret;
}

QChar* QString_front(const QString* self) {
	return new QChar(self->front());
}

QChar* QString_front2(QString* self) {
	QChar& _ret = self->front();
	// Cast returned reference into pointer
	return &_ret;
}

QChar* QString_back(const QString* self) {
	return new QChar(self->back());
}

QChar* QString_back2(QString* self) {
	QChar& _ret = self->back();
	// Cast returned reference into pointer
	return &_ret;
}

int64_t QString_indexOf(const QString* self, QChar* c) {
	int64_t _ret = self->indexOf(*c);
	return static_cast<int64_t>(_ret);
}

int64_t QString_indexOfWithQString(const QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	int64_t _ret = self->indexOf(s_QString);
	return static_cast<int64_t>(_ret);
}

int64_t QString_lastIndexOf(const QString* self, QChar* c) {
	int64_t _ret = self->lastIndexOf(*c);
	return static_cast<int64_t>(_ret);
}

int64_t QString_lastIndexOf2(const QString* self, QChar* c, int64_t from) {
	int64_t _ret = self->lastIndexOf(*c, (int64_t)(from));
	return static_cast<int64_t>(_ret);
}

int64_t QString_lastIndexOfWithQString(const QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	int64_t _ret = self->lastIndexOf(s_QString);
	return static_cast<int64_t>(_ret);
}

int64_t QString_lastIndexOf3(const QString* self, struct miqt_string s, int64_t from) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	int64_t _ret = self->lastIndexOf(s_QString, (int64_t)(from));
	return static_cast<int64_t>(_ret);
}

bool QString_contains(const QString* self, QChar* c) {
	return self->contains(*c);
}

bool QString_containsWithQString(const QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->contains(s_QString);
}

int64_t QString_countWithQChar(const QString* self, QChar* c) {
	int64_t _ret = self->count(*c);
	return static_cast<int64_t>(_ret);
}

int64_t QString_countWithQString(const QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	int64_t _ret = self->count(s_QString);
	return static_cast<int64_t>(_ret);
}

int64_t QString_indexOfWithRe(const QString* self, QRegularExpression* re) {
	int64_t _ret = self->indexOf(*re);
	return static_cast<int64_t>(_ret);
}

int64_t QString_lastIndexOf4(const QString* self, QRegularExpression* re, int64_t from) {
	int64_t _ret = self->lastIndexOf(*re, (int64_t)(from));
	return static_cast<int64_t>(_ret);
}

bool QString_containsWithRe(const QString* self, QRegularExpression* re) {
	return self->contains(*re);
}

int64_t QString_countWithRe(const QString* self, QRegularExpression* re) {
	int64_t _ret = self->count(*re);
	return static_cast<int64_t>(_ret);
}

struct miqt_string QString_section(const QString* self, QChar* sep, int64_t start) {
	QString _ret = self->section(*sep, (int64_t)(start));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_section2(const QString* self, struct miqt_string in_sep, int64_t start) {
	QString in_sep_QString = QString::fromUtf8(in_sep.data, in_sep.len);
	QString _ret = self->section(in_sep_QString, (int64_t)(start));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_section3(const QString* self, QRegularExpression* re, int64_t start) {
	QString _ret = self->section(*re, (int64_t)(start));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_left(const QString* self, int64_t n) {
	QString _ret = self->left((int64_t)(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_right(const QString* self, int64_t n) {
	QString _ret = self->right((int64_t)(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_mid(const QString* self, int64_t position) {
	QString _ret = self->mid((int64_t)(position));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_first(const QString* self, int64_t n) {
	QString _ret = self->first((int64_t)(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_last(const QString* self, int64_t n) {
	QString _ret = self->last((int64_t)(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_sliced(const QString* self, int64_t pos) {
	QString _ret = self->sliced((int64_t)(pos));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_sliced2(const QString* self, int64_t pos, int64_t n) {
	QString _ret = self->sliced((int64_t)(pos), (int64_t)(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_chopped(const QString* self, int64_t n) {
	QString _ret = self->chopped((int64_t)(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QString_startsWith(const QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->startsWith(s_QString);
}

bool QString_startsWithWithQChar(const QString* self, QChar* c) {
	return self->startsWith(*c);
}

bool QString_endsWith(const QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->endsWith(s_QString);
}

bool QString_endsWithWithQChar(const QString* self, QChar* c) {
	return self->endsWith(*c);
}

bool QString_isUpper(const QString* self) {
	return self->isUpper();
}

bool QString_isLower(const QString* self) {
	return self->isLower();
}

struct miqt_string QString_leftJustified(const QString* self, int64_t width) {
	QString _ret = self->leftJustified((int64_t)(width));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_rightJustified(const QString* self, int64_t width) {
	QString _ret = self->rightJustified((int64_t)(width));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_toLower(const QString* self) {
	QString _ret = self->toLower();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_toUpper(const QString* self) {
	QString _ret = self->toUpper();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_toCaseFolded(const QString* self) {
	QString _ret = self->toCaseFolded();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_trimmed(const QString* self) {
	QString _ret = self->trimmed();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_simplified(const QString* self) {
	QString _ret = self->simplified();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_toHtmlEscaped(const QString* self) {
	QString _ret = self->toHtmlEscaped();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_insert(QString* self, int64_t i, QChar* c) {
	QString _ret = self->insert((int64_t)(i), *c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_insert2(QString* self, int64_t i, QChar* uc, int64_t len) {
	QString _ret = self->insert((int64_t)(i), uc, (int64_t)(len));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_insert3(QString* self, int64_t i, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString _ret = self->insert((int64_t)(i), s_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_append(QString* self, QChar* c) {
	QString _ret = self->append(*c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_append2(QString* self, QChar* uc, int64_t len) {
	QString _ret = self->append(uc, (int64_t)(len));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_appendWithQString(QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString _ret = self->append(s_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_prepend(QString* self, QChar* c) {
	QString _ret = self->prepend(*c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_prepend2(QString* self, QChar* uc, int64_t len) {
	QString _ret = self->prepend(uc, (int64_t)(len));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_prependWithQString(QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString _ret = self->prepend(s_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_assign(QString* self, int64_t n, QChar* c) {
	QString _ret = self->assign((int64_t)(n), *c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_operatorPlusAssign(QString* self, QChar* c) {
	QString _ret = self->operator+=(*c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_operatorPlusAssignWithQString(QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString _ret = self->operator+=(s_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_remove(QString* self, int64_t i, int64_t len) {
	QString _ret = self->remove((int64_t)(i), (int64_t)(len));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_removeWithQChar(QString* self, QChar* c) {
	QString _ret = self->remove(*c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_removeWithQString(QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString _ret = self->remove(s_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_removeAt(QString* self, int64_t pos) {
	QString _ret = self->removeAt((int64_t)(pos));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_removeFirst(QString* self) {
	QString _ret = self->removeFirst();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_removeLast(QString* self) {
	QString _ret = self->removeLast();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace(QString* self, int64_t i, int64_t len, QChar* after) {
	QString _ret = self->replace((int64_t)(i), (int64_t)(len), *after);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace2(QString* self, int64_t i, int64_t len, QChar* s, int64_t slen) {
	QString _ret = self->replace((int64_t)(i), (int64_t)(len), s, (int64_t)(slen));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace3(QString* self, int64_t i, int64_t len, struct miqt_string after) {
	QString after_QString = QString::fromUtf8(after.data, after.len);
	QString _ret = self->replace((int64_t)(i), (int64_t)(len), after_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace4(QString* self, QChar* before, QChar* after) {
	QString _ret = self->replace(*before, *after);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace5(QString* self, QChar* before, int64_t blen, QChar* after, int64_t alen) {
	QString _ret = self->replace(before, (int64_t)(blen), after, (int64_t)(alen));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace6(QString* self, struct miqt_string before, struct miqt_string after) {
	QString before_QString = QString::fromUtf8(before.data, before.len);
	QString after_QString = QString::fromUtf8(after.data, after.len);
	QString _ret = self->replace(before_QString, after_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace7(QString* self, QChar* c, struct miqt_string after) {
	QString after_QString = QString::fromUtf8(after.data, after.len);
	QString _ret = self->replace(*c, after_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace8(QString* self, QRegularExpression* re, struct miqt_string after) {
	QString after_QString = QString::fromUtf8(after.data, after.len);
	QString _ret = self->replace(*re, after_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_removeWithRe(QString* self, QRegularExpression* re) {
	QString _ret = self->remove(*re);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QString_split(const QString* self, struct miqt_string sep) {
	QString sep_QString = QString::fromUtf8(sep.data, sep.len);
	QStringList _ret = self->split(sep_QString);
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

struct miqt_array /* of struct miqt_string */  QString_splitWithSep(const QString* self, QChar* sep) {
	QStringList _ret = self->split(*sep);
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

struct miqt_array /* of struct miqt_string */  QString_split2(const QString* self, QRegularExpression* sep) {
	QStringList _ret = self->split(*sep);
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

struct miqt_string QString_normalized(const QString* self, int mode) {
	QString _ret = self->normalized(static_cast<QString::NormalizationForm>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_repeated(const QString* self, int64_t times) {
	QString _ret = self->repeated((int64_t)(times));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_nullTerminated(const QString* self) {
	QString _ret = self->nullTerminated();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_nullTerminate(QString* self) {
	QString _ret = self->nullTerminate();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_toLatin1(const QString* self) {
	QByteArray _qb = self->toLatin1();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_toUtf8(const QString* self) {
	QByteArray _qb = self->toUtf8();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_toLocal8Bit(const QString* self) {
	QByteArray _qb = self->toLocal8Bit();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of unsigned int */  QString_toUcs4(const QString* self) {
	QList<uint> _ret = self->toUcs4();
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

struct miqt_string QString_fromLatin1(const char* str, int64_t size) {
	QString _ret = QString::fromLatin1(str, (int64_t)(size));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_fromUtf8(const char* utf8, int64_t size) {
	QString _ret = QString::fromUtf8(utf8, (int64_t)(size));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_fromLocal8Bit(const char* str, int64_t size) {
	QString _ret = QString::fromLocal8Bit(str, (int64_t)(size));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_fromRawData2(QChar* param1, int64_t size) {
	QString _ret = QString::fromRawData(param1, (int64_t)(size));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_fromUtf16WithStr(const unsigned short* str) {
	QString _ret = QString::fromUtf16(str);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_fromUcs4WithStr(const unsigned int* str) {
	QString _ret = QString::fromUcs4(str);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setRawData(QString* self, QChar* unicode, int64_t size) {
	QString _ret = self->setRawData(unicode, (int64_t)(size));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setUnicode(QString* self, QChar* unicode, int64_t size) {
	QString _ret = self->setUnicode(unicode, (int64_t)(size));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QString_compare(const QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->compare(s_QString);
}

int QString_compareWithCh(const QString* self, QChar* ch) {
	return self->compare(*ch);
}

int QString_compare2(struct miqt_string s1, struct miqt_string s2) {
	QString s1_QString = QString::fromUtf8(s1.data, s1.len);
	QString s2_QString = QString::fromUtf8(s2.data, s2.len);
	return QString::compare(s1_QString, s2_QString);
}

int QString_localeAwareCompare(const QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->localeAwareCompare(s_QString);
}

int QString_localeAwareCompare2(struct miqt_string s1, struct miqt_string s2) {
	QString s1_QString = QString::fromUtf8(s1.data, s1.len);
	QString s2_QString = QString::fromUtf8(s2.data, s2.len);
	return QString::localeAwareCompare(s1_QString, s2_QString);
}

short QString_toShort(const QString* self) {
	return self->toShort();
}

unsigned short QString_toUShort(const QString* self) {
	unsigned short _ret = self->toUShort();
	return static_cast<unsigned short>(_ret);
}

int QString_toInt(const QString* self) {
	return self->toInt();
}

unsigned int QString_toUInt(const QString* self) {
	unsigned int _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

long QString_toLong(const QString* self) {
	return self->toLong();
}

unsigned long QString_toULong(const QString* self) {
	unsigned long _ret = self->toULong();
	return static_cast<unsigned long>(_ret);
}

long long QString_toLongLong(const QString* self) {
	long long _ret = self->toLongLong();
	return static_cast<long long>(_ret);
}

unsigned long long QString_toULongLong(const QString* self) {
	unsigned long long _ret = self->toULongLong();
	return static_cast<unsigned long long>(_ret);
}

float QString_toFloat(const QString* self) {
	return self->toFloat();
}

double QString_toDouble(const QString* self) {
	return self->toDouble();
}

struct miqt_string QString_setNum(QString* self, short param1) {
	QString _ret = self->setNum(static_cast<short>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNumWithUshort(QString* self, unsigned short param1) {
	QString _ret = self->setNum(static_cast<unsigned short>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNumWithInt(QString* self, int param1) {
	QString _ret = self->setNum(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNumWithUint(QString* self, unsigned int param1) {
	QString _ret = self->setNum(static_cast<unsigned int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNumWithLong(QString* self, long param1) {
	QString _ret = self->setNum(static_cast<long>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNumWithUlong(QString* self, unsigned long param1) {
	QString _ret = self->setNum(static_cast<unsigned long>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNumWithQlonglong(QString* self, long long param1) {
	QString _ret = self->setNum(static_cast<long long>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNumWithQulonglong(QString* self, unsigned long long param1) {
	QString _ret = self->setNum(static_cast<unsigned long long>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNumWithFloat(QString* self, float param1) {
	QString _ret = self->setNum(static_cast<float>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNumWithDouble(QString* self, double param1) {
	QString _ret = self->setNum(static_cast<double>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_number(int param1) {
	QString _ret = QString::number(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_numberWithUint(unsigned int param1) {
	QString _ret = QString::number(static_cast<unsigned int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_numberWithLong(long param1) {
	QString _ret = QString::number(static_cast<long>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_numberWithUlong(unsigned long param1) {
	QString _ret = QString::number(static_cast<unsigned long>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_numberWithQlonglong(long long param1) {
	QString _ret = QString::number(static_cast<long long>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_numberWithQulonglong(unsigned long long param1) {
	QString _ret = QString::number(static_cast<unsigned long long>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_numberWithDouble(double param1) {
	QString _ret = QString::number(static_cast<double>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QString_pushBack(QString* self, QChar* c) {
	self->push_back(*c);
}

void QString_pushBackWithQString(QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->push_back(s_QString);
}

void QString_pushFront(QString* self, QChar* c) {
	self->push_front(*c);
}

void QString_pushFrontWithQString(QString* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->push_front(s_QString);
}

void QString_shrinkToFit(QString* self) {
	self->shrink_to_fit();
}

int64_t QString_maxSize2(const QString* self) {
	int64_t _ret = self->max_size();
	return static_cast<int64_t>(_ret);
}

bool QString_isNull(const QString* self) {
	return self->isNull();
}

bool QString_isRightToLeft(const QString* self) {
	return self->isRightToLeft();
}

bool QString_isValidUtf16(const QString* self) {
	return self->isValidUtf16();
}

struct miqt_string QString_fill2(QString* self, QChar* c, int64_t size) {
	QString _ret = self->fill(*c, (int64_t)(size));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int64_t QString_indexOf2(const QString* self, QChar* c, int64_t from) {
	int64_t _ret = self->indexOf(*c, (int64_t)(from));
	return static_cast<int64_t>(_ret);
}

int64_t QString_indexOf3(const QString* self, QChar* c, int64_t from, int cs) {
	int64_t _ret = self->indexOf(*c, (int64_t)(from), static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<int64_t>(_ret);
}

int64_t QString_indexOf4(const QString* self, struct miqt_string s, int64_t from) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	int64_t _ret = self->indexOf(s_QString, (int64_t)(from));
	return static_cast<int64_t>(_ret);
}

int64_t QString_indexOf5(const QString* self, struct miqt_string s, int64_t from, int cs) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	int64_t _ret = self->indexOf(s_QString, (int64_t)(from), static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<int64_t>(_ret);
}

int64_t QString_lastIndexOf5(const QString* self, QChar* c, int cs) {
	int64_t _ret = self->lastIndexOf(*c, static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<int64_t>(_ret);
}

int64_t QString_lastIndexOf6(const QString* self, QChar* c, int64_t from, int cs) {
	int64_t _ret = self->lastIndexOf(*c, (int64_t)(from), static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<int64_t>(_ret);
}

int64_t QString_lastIndexOf7(const QString* self, struct miqt_string s, int cs) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	int64_t _ret = self->lastIndexOf(s_QString, static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<int64_t>(_ret);
}

int64_t QString_lastIndexOf8(const QString* self, struct miqt_string s, int64_t from, int cs) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	int64_t _ret = self->lastIndexOf(s_QString, (int64_t)(from), static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<int64_t>(_ret);
}

bool QString_contains2(const QString* self, QChar* c, int cs) {
	return self->contains(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_contains3(const QString* self, struct miqt_string s, int cs) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->contains(s_QString, static_cast<Qt::CaseSensitivity>(cs));
}

int64_t QString_count2(const QString* self, QChar* c, int cs) {
	int64_t _ret = self->count(*c, static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<int64_t>(_ret);
}

int64_t QString_count3(const QString* self, struct miqt_string s, int cs) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	int64_t _ret = self->count(s_QString, static_cast<Qt::CaseSensitivity>(cs));
	return static_cast<int64_t>(_ret);
}

int64_t QString_indexOf6(const QString* self, QRegularExpression* re, int64_t from) {
	int64_t _ret = self->indexOf(*re, (int64_t)(from));
	return static_cast<int64_t>(_ret);
}

int64_t QString_indexOf7(const QString* self, QRegularExpression* re, int64_t from, QRegularExpressionMatch* rmatch) {
	int64_t _ret = self->indexOf(*re, (int64_t)(from), rmatch);
	return static_cast<int64_t>(_ret);
}

int64_t QString_lastIndexOf9(const QString* self, QRegularExpression* re, int64_t from, QRegularExpressionMatch* rmatch) {
	int64_t _ret = self->lastIndexOf(*re, (int64_t)(from), rmatch);
	return static_cast<int64_t>(_ret);
}

bool QString_contains4(const QString* self, QRegularExpression* re, QRegularExpressionMatch* rmatch) {
	return self->contains(*re, rmatch);
}

struct miqt_string QString_section4(const QString* self, QChar* sep, int64_t start, int64_t end) {
	QString _ret = self->section(*sep, (int64_t)(start), (int64_t)(end));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_section5(const QString* self, QChar* sep, int64_t start, int64_t end, int flags) {
	QString _ret = self->section(*sep, (int64_t)(start), (int64_t)(end), static_cast<QFlags<QString::SectionFlag>>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_section6(const QString* self, struct miqt_string in_sep, int64_t start, int64_t end) {
	QString in_sep_QString = QString::fromUtf8(in_sep.data, in_sep.len);
	QString _ret = self->section(in_sep_QString, (int64_t)(start), (int64_t)(end));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_section7(const QString* self, struct miqt_string in_sep, int64_t start, int64_t end, int flags) {
	QString in_sep_QString = QString::fromUtf8(in_sep.data, in_sep.len);
	QString _ret = self->section(in_sep_QString, (int64_t)(start), (int64_t)(end), static_cast<QFlags<QString::SectionFlag>>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_section8(const QString* self, QRegularExpression* re, int64_t start, int64_t end) {
	QString _ret = self->section(*re, (int64_t)(start), (int64_t)(end));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_section9(const QString* self, QRegularExpression* re, int64_t start, int64_t end, int flags) {
	QString _ret = self->section(*re, (int64_t)(start), (int64_t)(end), static_cast<QFlags<QString::SectionFlag>>(flags));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_mid2(const QString* self, int64_t position, int64_t n) {
	QString _ret = self->mid((int64_t)(position), (int64_t)(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QString_startsWith2(const QString* self, struct miqt_string s, int cs) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->startsWith(s_QString, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_startsWith3(const QString* self, QChar* c, int cs) {
	return self->startsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_endsWith2(const QString* self, struct miqt_string s, int cs) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->endsWith(s_QString, static_cast<Qt::CaseSensitivity>(cs));
}

bool QString_endsWith3(const QString* self, QChar* c, int cs) {
	return self->endsWith(*c, static_cast<Qt::CaseSensitivity>(cs));
}

struct miqt_string QString_leftJustified2(const QString* self, int64_t width, QChar* fill) {
	QString _ret = self->leftJustified((int64_t)(width), *fill);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_leftJustified3(const QString* self, int64_t width, QChar* fill, bool trunc) {
	QString _ret = self->leftJustified((int64_t)(width), *fill, trunc);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_rightJustified2(const QString* self, int64_t width, QChar* fill) {
	QString _ret = self->rightJustified((int64_t)(width), *fill);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_rightJustified3(const QString* self, int64_t width, QChar* fill, bool trunc) {
	QString _ret = self->rightJustified((int64_t)(width), *fill, trunc);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_remove2(QString* self, QChar* c, int cs) {
	QString _ret = self->remove(*c, static_cast<Qt::CaseSensitivity>(cs));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_remove3(QString* self, struct miqt_string s, int cs) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QString _ret = self->remove(s_QString, static_cast<Qt::CaseSensitivity>(cs));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace9(QString* self, QChar* before, QChar* after, int cs) {
	QString _ret = self->replace(*before, *after, static_cast<Qt::CaseSensitivity>(cs));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace10(QString* self, QChar* before, int64_t blen, QChar* after, int64_t alen, int cs) {
	QString _ret = self->replace(before, (int64_t)(blen), after, (int64_t)(alen), static_cast<Qt::CaseSensitivity>(cs));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace11(QString* self, struct miqt_string before, struct miqt_string after, int cs) {
	QString before_QString = QString::fromUtf8(before.data, before.len);
	QString after_QString = QString::fromUtf8(after.data, after.len);
	QString _ret = self->replace(before_QString, after_QString, static_cast<Qt::CaseSensitivity>(cs));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_replace12(QString* self, QChar* c, struct miqt_string after, int cs) {
	QString after_QString = QString::fromUtf8(after.data, after.len);
	QString _ret = self->replace(*c, after_QString, static_cast<Qt::CaseSensitivity>(cs));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QString_split3(const QString* self, struct miqt_string sep, int behavior) {
	QString sep_QString = QString::fromUtf8(sep.data, sep.len);
	QStringList _ret = self->split(sep_QString, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
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

struct miqt_array /* of struct miqt_string */  QString_split4(const QString* self, struct miqt_string sep, int behavior, int cs) {
	QString sep_QString = QString::fromUtf8(sep.data, sep.len);
	QStringList _ret = self->split(sep_QString, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior), static_cast<Qt::CaseSensitivity>(cs));
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

struct miqt_array /* of struct miqt_string */  QString_split5(const QString* self, QChar* sep, int behavior) {
	QStringList _ret = self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
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

struct miqt_array /* of struct miqt_string */  QString_split6(const QString* self, QChar* sep, int behavior, int cs) {
	QStringList _ret = self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior), static_cast<Qt::CaseSensitivity>(cs));
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

struct miqt_array /* of struct miqt_string */  QString_split7(const QString* self, QRegularExpression* sep, int behavior) {
	QStringList _ret = self->split(*sep, static_cast<QFlags<Qt::SplitBehaviorFlags>>(behavior));
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

struct miqt_string QString_normalized2(const QString* self, int mode, int version) {
	QString _ret = self->normalized(static_cast<QString::NormalizationForm>(mode), static_cast<QChar::UnicodeVersion>(version));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_fromUtf163(const unsigned short* str, int64_t size) {
	QString _ret = QString::fromUtf16(str, (int64_t)(size));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_fromUcs43(const unsigned int* str, int64_t size) {
	QString _ret = QString::fromUcs4(str, (int64_t)(size));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QString_compare3(const QString* self, struct miqt_string s, int cs) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->compare(s_QString, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_compare4(const QString* self, QChar* ch, int cs) {
	return self->compare(*ch, static_cast<Qt::CaseSensitivity>(cs));
}

int QString_compare5(struct miqt_string s1, struct miqt_string s2, int cs) {
	QString s1_QString = QString::fromUtf8(s1.data, s1.len);
	QString s2_QString = QString::fromUtf8(s2.data, s2.len);
	return QString::compare(s1_QString, s2_QString, static_cast<Qt::CaseSensitivity>(cs));
}

short QString_toShortWithOk(const QString* self, bool* ok) {
	return self->toShort(ok);
}

short QString_toShort2(const QString* self, bool* ok, int base) {
	return self->toShort(ok, static_cast<int>(base));
}

unsigned short QString_toUShortWithOk(const QString* self, bool* ok) {
	unsigned short _ret = self->toUShort(ok);
	return static_cast<unsigned short>(_ret);
}

unsigned short QString_toUShort2(const QString* self, bool* ok, int base) {
	unsigned short _ret = self->toUShort(ok, static_cast<int>(base));
	return static_cast<unsigned short>(_ret);
}

int QString_toIntWithOk(const QString* self, bool* ok) {
	return self->toInt(ok);
}

int QString_toInt2(const QString* self, bool* ok, int base) {
	return self->toInt(ok, static_cast<int>(base));
}

unsigned int QString_toUIntWithOk(const QString* self, bool* ok) {
	unsigned int _ret = self->toUInt(ok);
	return static_cast<unsigned int>(_ret);
}

unsigned int QString_toUInt2(const QString* self, bool* ok, int base) {
	unsigned int _ret = self->toUInt(ok, static_cast<int>(base));
	return static_cast<unsigned int>(_ret);
}

long QString_toLongWithOk(const QString* self, bool* ok) {
	return self->toLong(ok);
}

long QString_toLong2(const QString* self, bool* ok, int base) {
	return self->toLong(ok, static_cast<int>(base));
}

unsigned long QString_toULongWithOk(const QString* self, bool* ok) {
	unsigned long _ret = self->toULong(ok);
	return static_cast<unsigned long>(_ret);
}

unsigned long QString_toULong2(const QString* self, bool* ok, int base) {
	unsigned long _ret = self->toULong(ok, static_cast<int>(base));
	return static_cast<unsigned long>(_ret);
}

long long QString_toLongLongWithOk(const QString* self, bool* ok) {
	long long _ret = self->toLongLong(ok);
	return static_cast<long long>(_ret);
}

long long QString_toLongLong2(const QString* self, bool* ok, int base) {
	long long _ret = self->toLongLong(ok, static_cast<int>(base));
	return static_cast<long long>(_ret);
}

unsigned long long QString_toULongLongWithOk(const QString* self, bool* ok) {
	unsigned long long _ret = self->toULongLong(ok);
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QString_toULongLong2(const QString* self, bool* ok, int base) {
	unsigned long long _ret = self->toULongLong(ok, static_cast<int>(base));
	return static_cast<unsigned long long>(_ret);
}

float QString_toFloatWithOk(const QString* self, bool* ok) {
	return self->toFloat(ok);
}

double QString_toDoubleWithOk(const QString* self, bool* ok) {
	return self->toDouble(ok);
}

struct miqt_string QString_setNum2(QString* self, short param1, int base) {
	QString _ret = self->setNum(static_cast<short>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum3(QString* self, unsigned short param1, int base) {
	QString _ret = self->setNum(static_cast<unsigned short>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum4(QString* self, int param1, int base) {
	QString _ret = self->setNum(static_cast<int>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum5(QString* self, unsigned int param1, int base) {
	QString _ret = self->setNum(static_cast<unsigned int>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum6(QString* self, long param1, int base) {
	QString _ret = self->setNum(static_cast<long>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum7(QString* self, unsigned long param1, int base) {
	QString _ret = self->setNum(static_cast<unsigned long>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum8(QString* self, long long param1, int base) {
	QString _ret = self->setNum(static_cast<long long>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum9(QString* self, unsigned long long param1, int base) {
	QString _ret = self->setNum(static_cast<unsigned long long>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum10(QString* self, float param1, char format) {
	QString _ret = self->setNum(static_cast<float>(param1), static_cast<char>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum11(QString* self, float param1, char format, int precision) {
	QString _ret = self->setNum(static_cast<float>(param1), static_cast<char>(format), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum12(QString* self, double param1, char format) {
	QString _ret = self->setNum(static_cast<double>(param1), static_cast<char>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_setNum13(QString* self, double param1, char format, int precision) {
	QString _ret = self->setNum(static_cast<double>(param1), static_cast<char>(format), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_number2(int param1, int base) {
	QString _ret = QString::number(static_cast<int>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_number3(unsigned int param1, int base) {
	QString _ret = QString::number(static_cast<unsigned int>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_number4(long param1, int base) {
	QString _ret = QString::number(static_cast<long>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_number5(unsigned long param1, int base) {
	QString _ret = QString::number(static_cast<unsigned long>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_number6(long long param1, int base) {
	QString _ret = QString::number(static_cast<long long>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_number7(unsigned long long param1, int base) {
	QString _ret = QString::number(static_cast<unsigned long long>(param1), static_cast<int>(base));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_number8(double param1, char format) {
	QString _ret = QString::number(static_cast<double>(param1), static_cast<char>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QString_number9(double param1, char format, int precision) {
	QString _ret = QString::number(static_cast<double>(param1), static_cast<char>(format), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QString_delete(QString* self) {
	delete self;
}

QDataStream* QDataStream_new() {
	return new (std::nothrow) QDataStream();
}

QDataStream* QDataStream_new2(QIODevice* param1) {
	return new (std::nothrow) QDataStream(param1);
}

QDataStream* QDataStream_new3(struct miqt_string param1) {
	QByteArray param1_QByteArray(param1.data, param1.len);
	return new (std::nothrow) QDataStream(param1_QByteArray);
}

QIODevice* QDataStream_device(const QDataStream* self) {
	return self->device();
}

void QDataStream_setDevice(QDataStream* self, QIODevice* device) {
	self->setDevice(device);
}

bool QDataStream_atEnd(const QDataStream* self) {
	return self->atEnd();
}

void QDataStream_resetStatus(QDataStream* self) {
	self->resetStatus();
}

int QDataStream_floatingPointPrecision(const QDataStream* self) {
	QDataStream::FloatingPointPrecision _ret = self->floatingPointPrecision();
	return static_cast<int>(_ret);
}

void QDataStream_setFloatingPointPrecision(QDataStream* self, int precision) {
	self->setFloatingPointPrecision(static_cast<QDataStream::FloatingPointPrecision>(precision));
}

int QDataStream_byteOrder(const QDataStream* self) {
	QDataStream::ByteOrder _ret = self->byteOrder();
	return static_cast<int>(_ret);
}

void QDataStream_setByteOrder(QDataStream* self, int byteOrder) {
	self->setByteOrder(static_cast<QDataStream::ByteOrder>(byteOrder));
}

int QDataStream_version(const QDataStream* self) {
	return self->version();
}

void QDataStream_setVersion(QDataStream* self, int version) {
	self->setVersion(static_cast<int>(version));
}

void QDataStream_operatorShiftRight(QDataStream* self, char* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithQint8(QDataStream* self, signed char* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithQuint8(QDataStream* self, unsigned char* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithQint16(QDataStream* self, short* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithQuint16(QDataStream* self, unsigned short* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithQint32(QDataStream* self, int* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithQuint32(QDataStream* self, unsigned int* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithQint64(QDataStream* self, long long* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithQuint64(QDataStream* self, unsigned long long* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithBool(QDataStream* self, bool* i) {
	self->operator>>(*i);
}

void QDataStream_operatorShiftRightWithFloat(QDataStream* self, float* f) {
	self->operator>>(*f);
}

void QDataStream_operatorShiftRightWithDouble(QDataStream* self, double* f) {
	self->operator>>(*f);
}

void QDataStream_operatorShiftRightWithStr(QDataStream* self, char* str) {
	self->operator>>(str);
}

void QDataStream_operatorShiftLeft(QDataStream* self, char i) {
	self->operator<<(static_cast<char>(i));
}

void QDataStream_operatorShiftLeftWithQint8(QDataStream* self, signed char i) {
	self->operator<<(static_cast<signed char>(i));
}

void QDataStream_operatorShiftLeftWithQuint8(QDataStream* self, unsigned char i) {
	self->operator<<(static_cast<unsigned char>(i));
}

void QDataStream_operatorShiftLeftWithQint16(QDataStream* self, short i) {
	self->operator<<(static_cast<short>(i));
}

void QDataStream_operatorShiftLeftWithQuint16(QDataStream* self, unsigned short i) {
	self->operator<<(static_cast<unsigned short>(i));
}

void QDataStream_operatorShiftLeftWithQint32(QDataStream* self, int i) {
	self->operator<<(static_cast<int>(i));
}

void QDataStream_operatorShiftLeftWithQuint32(QDataStream* self, unsigned int i) {
	self->operator<<(static_cast<unsigned int>(i));
}

void QDataStream_operatorShiftLeftWithQint64(QDataStream* self, long long i) {
	self->operator<<(static_cast<long long>(i));
}

void QDataStream_operatorShiftLeftWithQuint64(QDataStream* self, unsigned long long i) {
	self->operator<<(static_cast<unsigned long long>(i));
}

void QDataStream_operatorShiftLeftWithFloat(QDataStream* self, float f) {
	self->operator<<(static_cast<float>(f));
}

void QDataStream_operatorShiftLeftWithDouble(QDataStream* self, double f) {
	self->operator<<(static_cast<double>(f));
}

void QDataStream_operatorShiftLeftWithStr(QDataStream* self, const char* str) {
	self->operator<<(str);
}

bool QDataStream_ToBool(const QDataStream* self) {
	return self->operator bool();
}

long long QDataStream_readRawData(QDataStream* self, char* param1, long long len) {
	long long _ret = self->readRawData(param1, static_cast<long long>(len));
	return static_cast<long long>(_ret);
}

void QDataStream_writeBytes(QDataStream* self, const char* param1, long long len) {
	self->writeBytes(param1, static_cast<long long>(len));
}

long long QDataStream_writeRawData(QDataStream* self, const char* param1, long long len) {
	long long _ret = self->writeRawData(param1, static_cast<long long>(len));
	return static_cast<long long>(_ret);
}

long long QDataStream_skipRawData(QDataStream* self, long long len) {
	long long _ret = self->skipRawData(static_cast<long long>(len));
	return static_cast<long long>(_ret);
}

void QDataStream_startTransaction(QDataStream* self) {
	self->startTransaction();
}

bool QDataStream_commitTransaction(QDataStream* self) {
	return self->commitTransaction();
}

void QDataStream_rollbackTransaction(QDataStream* self) {
	self->rollbackTransaction();
}

void QDataStream_abortTransaction(QDataStream* self) {
	self->abortTransaction();
}

bool QDataStream_isDeviceTransactionStarted(const QDataStream* self) {
	return self->isDeviceTransactionStarted();
}

void QDataStream_delete(QDataStream* self) {
	delete self;
}

QMetaType* QMetaType_new(int type) {
	return new (std::nothrow) QMetaType(static_cast<int>(type));
}

QMetaType* QMetaType_new2() {
	return new (std::nothrow) QMetaType();
}

QMetaType* QMetaType_new3(QMetaType* param1) {
	return new (std::nothrow) QMetaType(*param1);
}

void QMetaType_registerNormalizedTypedef(struct miqt_string normalizedTypeName, QMetaType* type) {
	QByteArray normalizedTypeName_QByteArray(normalizedTypeName.data, normalizedTypeName.len);
	QMetaType::registerNormalizedTypedef(normalizedTypeName_QByteArray, *type);
}

int QMetaType_type(const char* typeName) {
	return QMetaType::type(typeName);
}

int QMetaType_typeWithTypeName(struct miqt_string typeName) {
	QByteArray typeName_QByteArray(typeName.data, typeName.len);
	return QMetaType::type(typeName_QByteArray);
}

const char* QMetaType_typeName(int type) {
	return (const char*) QMetaType::typeName(static_cast<int>(type));
}

int QMetaType_sizeOf(int type) {
	return QMetaType::sizeOf(static_cast<int>(type));
}

int QMetaType_typeFlags(int type) {
	return QMetaType::typeFlags(static_cast<int>(type));
}

QMetaObject* QMetaType_metaObjectForType(int type) {
	return (QMetaObject*) QMetaType::metaObjectForType(static_cast<int>(type));
}

bool QMetaType_isRegistered(int type) {
	return QMetaType::isRegistered(static_cast<int>(type));
}

void QMetaType_registerType(const QMetaType* self) {
	self->registerType();
}

int QMetaType_id(const QMetaType* self) {
	return self->id();
}

int64_t QMetaType_sizeOf2(const QMetaType* self) {
	int64_t _ret = self->sizeOf();
	return static_cast<int64_t>(_ret);
}

int64_t QMetaType_alignOf(const QMetaType* self) {
	int64_t _ret = self->alignOf();
	return static_cast<int64_t>(_ret);
}

int QMetaType_flags(const QMetaType* self) {
	return self->flags();
}

QMetaObject* QMetaType_metaObject(const QMetaType* self) {
	return (QMetaObject*) self->metaObject();
}

const char* QMetaType_name(const QMetaType* self) {
	return (const char*) self->name();
}

bool QMetaType_isDefaultConstructible(const QMetaType* self) {
	return self->isDefaultConstructible();
}

bool QMetaType_isCopyConstructible(const QMetaType* self) {
	return self->isCopyConstructible();
}

bool QMetaType_isMoveConstructible(const QMetaType* self) {
	return self->isMoveConstructible();
}

bool QMetaType_isDestructible(const QMetaType* self) {
	return self->isDestructible();
}

bool QMetaType_isEqualityComparable(const QMetaType* self) {
	return self->isEqualityComparable();
}

bool QMetaType_isOrdered(const QMetaType* self) {
	return self->isOrdered();
}

bool QMetaType_hasRegisteredDataStreamOperators(const QMetaType* self) {
	return self->hasRegisteredDataStreamOperators();
}

QMetaType* QMetaType_underlyingType(const QMetaType* self) {
	return new QMetaType(self->underlyingType());
}

bool QMetaType_hasRegisteredDebugStreamOperator(const QMetaType* self) {
	return self->hasRegisteredDebugStreamOperator();
}

bool QMetaType_hasRegisteredDebugStreamOperatorWithTypeId(int typeId) {
	return QMetaType::hasRegisteredDebugStreamOperator(static_cast<int>(typeId));
}

bool QMetaType_canConvert(QMetaType* fromType, QMetaType* toType) {
	return QMetaType::canConvert(*fromType, *toType);
}

bool QMetaType_canView(QMetaType* fromType, QMetaType* toType) {
	return QMetaType::canView(*fromType, *toType);
}

bool QMetaType_hasRegisteredConverterFunction(QMetaType* fromType, QMetaType* toType) {
	return QMetaType::hasRegisteredConverterFunction(*fromType, *toType);
}

bool QMetaType_hasRegisteredMutableViewFunction(QMetaType* fromType, QMetaType* toType) {
	return QMetaType::hasRegisteredMutableViewFunction(*fromType, *toType);
}

void QMetaType_unregisterConverterFunction(QMetaType* from, QMetaType* to) {
	QMetaType::unregisterConverterFunction(*from, *to);
}

void QMetaType_unregisterMutableViewFunction(QMetaType* from, QMetaType* to) {
	QMetaType::unregisterMutableViewFunction(*from, *to);
}

void QMetaType_unregisterMetaType(QMetaType* type) {
	QMetaType::unregisterMetaType(*type);
}

int QMetaType_idWithInt(const QMetaType* self, int param1) {
	return self->id(static_cast<int>(param1));
}

void QMetaType_delete(QMetaType* self) {
	delete self;
}

QBindingStorage* QBindingStorage_new() {
	return new (std::nothrow) QBindingStorage();
}

bool QBindingStorage_isEmpty(QBindingStorage* self) {
	return self->isEmpty();
}

bool QBindingStorage_isValid(const QBindingStorage* self) {
	return self->isValid();
}

void QBindingStorage_registerDependency(const QBindingStorage* self, QUntypedPropertyData* data) {
	self->registerDependency(data);
}

void QBindingStorage_delete(QBindingStorage* self) {
	delete self;
}

class MiqtVirtualQObject final : public QObject {
public:

	MiqtVirtualQObject(): QObject() {}
	MiqtVirtualQObject(QObject* parent): QObject(parent) {}

	virtual ~MiqtVirtualQObject() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QObject::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QObject_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QObject_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QObject::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QObject_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QObject_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QObject_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QObject_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QObject_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QObject_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QObject* QObject_new() {
	return new (std::nothrow) MiqtVirtualQObject();
}

QObject* QObject_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQObject(parent);
}

QMetaObject* QObject_metaObject(const QObject* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QObject_tr(const char* s) {
	QString _ret = QObject::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QObject_event(QObject* self, QEvent* event) {
	return self->event(event);
}

bool QObject_eventFilter(QObject* self, QObject* watched, QEvent* event) {
	return self->eventFilter(watched, event);
}

struct miqt_string QObject_objectName(const QObject* self) {
	QString _ret = self->objectName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QObject_isWidgetType(const QObject* self) {
	return self->isWidgetType();
}

bool QObject_isWindowType(const QObject* self) {
	return self->isWindowType();
}

bool QObject_isQuickItemType(const QObject* self) {
	return self->isQuickItemType();
}

bool QObject_isQmlExposed(const QObject* self) {
	return self->isQmlExposed();
}

bool QObject_signalsBlocked(const QObject* self) {
	return self->signalsBlocked();
}

bool QObject_blockSignals(QObject* self, bool b) {
	return self->blockSignals(b);
}

QThread* QObject_thread(const QObject* self) {
	return self->thread();
}

int QObject_startTimer(QObject* self, int interval) {
	return self->startTimer(static_cast<int>(interval));
}

void QObject_killTimer(QObject* self, int id) {
	self->killTimer(static_cast<int>(id));
}

void QObject_killTimerWithId(QObject* self, int id) {
	self->killTimer(static_cast<Qt::TimerId>(id));
}

struct miqt_array /* of QObject* */  QObject_children(const QObject* self) {
	const QObjectList& _ret = self->children();
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

void QObject_setParent(QObject* self, QObject* parent) {
	self->setParent(parent);
}

void QObject_installEventFilter(QObject* self, QObject* filterObj) {
	self->installEventFilter(filterObj);
}

void QObject_removeEventFilter(QObject* self, QObject* obj) {
	self->removeEventFilter(obj);
}

bool QObject_disconnect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member) {
	return QObject::disconnect(sender, *signal, receiver, *member);
}

void QObject_dumpObjectTree(const QObject* self) {
	self->dumpObjectTree();
}

void QObject_dumpObjectInfo(const QObject* self) {
	self->dumpObjectInfo();
}

bool QObject_setProperty(QObject* self, const char* name, QVariant* value) {
	return self->setProperty(name, *value);
}

QVariant* QObject_property(const QObject* self, const char* name) {
	return new QVariant(self->property(name));
}

struct miqt_array /* of struct miqt_string */  QObject_dynamicPropertyNames(const QObject* self) {
	QList<QByteArray> _ret = self->dynamicPropertyNames();
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

QBindingStorage* QObject_bindingStorage(QObject* self) {
	return self->bindingStorage();
}

QBindingStorage* QObject_bindingStorage2(const QObject* self) {
	return (QBindingStorage*) self->bindingStorage();
}

void QObject_destroyed(QObject* self) {
	self->destroyed();
}

void QObject_connect_destroyed(QObject* self, intptr_t slot) {
	QObject::connect(self, static_cast<void (QObject::*)(QObject*)>(&QObject::destroyed), self, [=]() {
		miqt_exec_callback_QObject_destroyed(slot);
	});
}

QObject* QObject_parent(const QObject* self) {
	return self->parent();
}

bool QObject_inherits(const QObject* self, const char* classname) {
	return self->inherits(classname);
}

void QObject_deleteLater(QObject* self) {
	self->deleteLater();
}

struct miqt_string QObject_tr2(const char* s, const char* c) {
	QString _ret = QObject::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObject_tr3(const char* s, const char* c, int n) {
	QString _ret = QObject::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QObject_startTimer2(QObject* self, int interval, int timerType) {
	return self->startTimer(static_cast<int>(interval), static_cast<Qt::TimerType>(timerType));
}

void QObject_destroyedWithQObject(QObject* self, QObject* param1) {
	self->destroyed(param1);
}

void QObject_connect_destroyedWithQObject(QObject* self, intptr_t slot) {
	QObject::connect(self, static_cast<void (QObject::*)(QObject*)>(&QObject::destroyed), self, [=](QObject* param1) {
		QObject* sigval1 = param1;
		miqt_exec_callback_QObject_destroyedWithQObject(slot, sigval1);
	});
}

bool QObject_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQObject* self_cast = static_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QObject_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQObject*>(self)->QObject::event(event);
}

bool QObject_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQObject* self_cast = static_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QObject_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQObject*>(self)->QObject::eventFilter(watched, event);
}

QObject* QObject_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQObject* self_cast = static_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QObject_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQObject* self_cast = static_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QObject_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQObject* self_cast = static_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QObject_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQObject* self_cast = static_cast<MiqtVirtualQObject*>( (QObject*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QObject_delete(QObject* self) {
	delete self;
}

QDeadlineTimer* QDeadlineTimer_new() {
	return new (std::nothrow) QDeadlineTimer();
}

QDeadlineTimer* QDeadlineTimer_new2(int type_) {
	return new (std::nothrow) QDeadlineTimer(static_cast<Qt::TimerType>(type_));
}

QDeadlineTimer* QDeadlineTimer_new3(int param1) {
	return new (std::nothrow) QDeadlineTimer(static_cast<QDeadlineTimer::ForeverConstant>(param1));
}

QDeadlineTimer* QDeadlineTimer_new4(long long msecs) {
	return new (std::nothrow) QDeadlineTimer(static_cast<long long>(msecs));
}

QDeadlineTimer* QDeadlineTimer_new5(QDeadlineTimer* param1) {
	return new (std::nothrow) QDeadlineTimer(*param1);
}

QDeadlineTimer* QDeadlineTimer_new6(int param1, int type_) {
	return new (std::nothrow) QDeadlineTimer(static_cast<QDeadlineTimer::ForeverConstant>(param1), static_cast<Qt::TimerType>(type_));
}

QDeadlineTimer* QDeadlineTimer_new7(long long msecs, int type) {
	return new (std::nothrow) QDeadlineTimer(static_cast<long long>(msecs), static_cast<Qt::TimerType>(type));
}

void QDeadlineTimer_swap(QDeadlineTimer* self, QDeadlineTimer* other) {
	self->swap(*other);
}

bool QDeadlineTimer_isForever(const QDeadlineTimer* self) {
	return self->isForever();
}

bool QDeadlineTimer_hasExpired(const QDeadlineTimer* self) {
	return self->hasExpired();
}

int QDeadlineTimer_timerType(const QDeadlineTimer* self) {
	Qt::TimerType _ret = self->timerType();
	return static_cast<int>(_ret);
}

void QDeadlineTimer_setTimerType(QDeadlineTimer* self, int type) {
	self->setTimerType(static_cast<Qt::TimerType>(type));
}

long long QDeadlineTimer_remainingTime(const QDeadlineTimer* self) {
	long long _ret = self->remainingTime();
	return static_cast<long long>(_ret);
}

long long QDeadlineTimer_remainingTimeNSecs(const QDeadlineTimer* self) {
	long long _ret = self->remainingTimeNSecs();
	return static_cast<long long>(_ret);
}

void QDeadlineTimer_setRemainingTime(QDeadlineTimer* self, long long msecs) {
	self->setRemainingTime(static_cast<long long>(msecs));
}

void QDeadlineTimer_setPreciseRemainingTime(QDeadlineTimer* self, long long secs) {
	self->setPreciseRemainingTime(static_cast<long long>(secs));
}

long long QDeadlineTimer_deadline(const QDeadlineTimer* self) {
	long long _ret = self->deadline();
	return static_cast<long long>(_ret);
}

long long QDeadlineTimer_deadlineNSecs(const QDeadlineTimer* self) {
	long long _ret = self->deadlineNSecs();
	return static_cast<long long>(_ret);
}

void QDeadlineTimer_setDeadline(QDeadlineTimer* self, long long msecs) {
	self->setDeadline(static_cast<long long>(msecs));
}

void QDeadlineTimer_setPreciseDeadline(QDeadlineTimer* self, long long secs) {
	self->setPreciseDeadline(static_cast<long long>(secs));
}

QDeadlineTimer* QDeadlineTimer_addNSecs(QDeadlineTimer* dt, long long nsecs) {
	return new QDeadlineTimer(QDeadlineTimer::addNSecs(*dt, static_cast<long long>(nsecs)));
}

QDeadlineTimer* QDeadlineTimer_current() {
	return new QDeadlineTimer(QDeadlineTimer::current());
}

QDeadlineTimer* QDeadlineTimer_operatorPlusAssign(QDeadlineTimer* self, long long msecs) {
	QDeadlineTimer& _ret = self->operator+=(static_cast<long long>(msecs));
	// Cast returned reference into pointer
	return &_ret;
}

QDeadlineTimer* QDeadlineTimer_operatorMinusAssign(QDeadlineTimer* self, long long msecs) {
	QDeadlineTimer& _ret = self->operator-=(static_cast<long long>(msecs));
	// Cast returned reference into pointer
	return &_ret;
}

void QDeadlineTimer_setRemainingTime2(QDeadlineTimer* self, long long msecs, int type) {
	self->setRemainingTime(static_cast<long long>(msecs), static_cast<Qt::TimerType>(type));
}

void QDeadlineTimer_setPreciseRemainingTime2(QDeadlineTimer* self, long long secs, long long nsecs) {
	self->setPreciseRemainingTime(static_cast<long long>(secs), static_cast<long long>(nsecs));
}

void QDeadlineTimer_setPreciseRemainingTime3(QDeadlineTimer* self, long long secs, long long nsecs, int type) {
	self->setPreciseRemainingTime(static_cast<long long>(secs), static_cast<long long>(nsecs), static_cast<Qt::TimerType>(type));
}

void QDeadlineTimer_setDeadline2(QDeadlineTimer* self, long long msecs, int timerType) {
	self->setDeadline(static_cast<long long>(msecs), static_cast<Qt::TimerType>(timerType));
}

void QDeadlineTimer_setPreciseDeadline2(QDeadlineTimer* self, long long secs, long long nsecs) {
	self->setPreciseDeadline(static_cast<long long>(secs), static_cast<long long>(nsecs));
}

void QDeadlineTimer_setPreciseDeadline3(QDeadlineTimer* self, long long secs, long long nsecs, int type) {
	self->setPreciseDeadline(static_cast<long long>(secs), static_cast<long long>(nsecs), static_cast<Qt::TimerType>(type));
}

QDeadlineTimer* QDeadlineTimer_currentWithTimerType(int timerType) {
	return new QDeadlineTimer(QDeadlineTimer::current(static_cast<Qt::TimerType>(timerType)));
}

void QDeadlineTimer_delete(QDeadlineTimer* self) {
	delete self;
}

class MiqtVirtualQEventLoop final : public QEventLoop {
public:

	MiqtVirtualQEventLoop(): QEventLoop() {}
	MiqtVirtualQEventLoop(QObject* parent): QEventLoop(parent) {}

	virtual ~MiqtVirtualQEventLoop() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QEventLoop::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QEventLoop_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QEventLoop_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QEventLoop::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QEventLoop_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QEventLoop_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QEventLoop_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QEventLoop_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QEventLoop_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QEventLoop_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QEventLoop* QEventLoop_new() {
	return new (std::nothrow) MiqtVirtualQEventLoop();
}

QEventLoop* QEventLoop_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQEventLoop(parent);
}

void QEventLoop_virtbase(QEventLoop* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QEventLoop_metaObject(const QEventLoop* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QEventLoop_tr(const char* s) {
	QString _ret = QEventLoop::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QEventLoop_processEvents(QEventLoop* self) {
	return self->processEvents();
}

void QEventLoop_processEvents2(QEventLoop* self, int flags, int maximumTime) {
	self->processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags), static_cast<int>(maximumTime));
}

void QEventLoop_processEvents3(QEventLoop* self, int flags, QDeadlineTimer* deadline) {
	self->processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags), *deadline);
}

int QEventLoop_exec(QEventLoop* self) {
	return self->exec();
}

bool QEventLoop_isRunning(const QEventLoop* self) {
	return self->isRunning();
}

void QEventLoop_wakeUp(QEventLoop* self) {
	self->wakeUp();
}

bool QEventLoop_event(QEventLoop* self, QEvent* event) {
	return self->event(event);
}

void QEventLoop_exit(QEventLoop* self) {
	self->exit();
}

void QEventLoop_quit(QEventLoop* self) {
	self->quit();
}

struct miqt_string QEventLoop_tr2(const char* s, const char* c) {
	QString _ret = QEventLoop::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventLoop_tr3(const char* s, const char* c, int n) {
	QString _ret = QEventLoop::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QEventLoop_processEventsWithFlags(QEventLoop* self, int flags) {
	return self->processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags));
}

int QEventLoop_execWithFlags(QEventLoop* self, int flags) {
	return self->exec(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags));
}

void QEventLoop_exitWithReturnCode(QEventLoop* self, int returnCode) {
	self->exit(static_cast<int>(returnCode));
}

bool QEventLoop_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQEventLoop* self_cast = static_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QEventLoop_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQEventLoop*>(self)->QEventLoop::event(event);
}

bool QEventLoop_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQEventLoop* self_cast = static_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QEventLoop_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQEventLoop*>(self)->QEventLoop::eventFilter(watched, event);
}

QObject* QEventLoop_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQEventLoop* self_cast = static_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QEventLoop_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQEventLoop* self_cast = static_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QEventLoop_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQEventLoop* self_cast = static_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QEventLoop_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQEventLoop* self_cast = static_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QEventLoop_delete(QEventLoop* self) {
	delete self;
}

void QAbstractEventDispatcher_virtbase(QAbstractEventDispatcher* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractEventDispatcher_metaObject(const QAbstractEventDispatcher* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QAbstractEventDispatcher_tr(const char* s) {
	QString _ret = QAbstractEventDispatcher::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_instance() {
	return QAbstractEventDispatcher::instance();
}

bool QAbstractEventDispatcher_processEvents(QAbstractEventDispatcher* self, int flags) {
	return self->processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags));
}

void QAbstractEventDispatcher_registerSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
	self->registerSocketNotifier(notifier);
}

void QAbstractEventDispatcher_unregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier) {
	self->unregisterSocketNotifier(notifier);
}

int QAbstractEventDispatcher_registerTimer(QAbstractEventDispatcher* self, int interval, int timerType, QObject* object) {
	Qt::TimerId _ret = self->registerTimer(static_cast<QAbstractEventDispatcher::Duration>(interval), static_cast<Qt::TimerType>(timerType), object);
	return static_cast<int>(_ret);
}

int QAbstractEventDispatcher_registerTimer2(QAbstractEventDispatcher* self, long long interval, int timerType, QObject* object) {
	return self->registerTimer(static_cast<long long>(interval), static_cast<Qt::TimerType>(timerType), object);
}

void QAbstractEventDispatcher_registerTimer3(QAbstractEventDispatcher* self, int timerId, long long interval, int timerType, QObject* object) {
	self->registerTimer(static_cast<int>(timerId), static_cast<long long>(interval), static_cast<Qt::TimerType>(timerType), object);
}

bool QAbstractEventDispatcher_unregisterTimer(QAbstractEventDispatcher* self, int timerId) {
	return self->unregisterTimer(static_cast<int>(timerId));
}

bool QAbstractEventDispatcher_unregisterTimers(QAbstractEventDispatcher* self, QObject* object) {
	return self->unregisterTimers(object);
}

int QAbstractEventDispatcher_remainingTime(QAbstractEventDispatcher* self, int timerId) {
	return self->remainingTime(static_cast<int>(timerId));
}

void QAbstractEventDispatcher_registerTimer4(QAbstractEventDispatcher* self, int timerId, int interval, int timerType, QObject* object) {
	self->registerTimer(static_cast<Qt::TimerId>(timerId), static_cast<QAbstractEventDispatcher::Duration>(interval), static_cast<Qt::TimerType>(timerType), object);
}

bool QAbstractEventDispatcher_unregisterTimerWithTimerId(QAbstractEventDispatcher* self, int timerId) {
	return self->unregisterTimer(static_cast<Qt::TimerId>(timerId));
}

void QAbstractEventDispatcher_wakeUp(QAbstractEventDispatcher* self) {
	self->wakeUp();
}

void QAbstractEventDispatcher_interrupt(QAbstractEventDispatcher* self) {
	self->interrupt();
}

void QAbstractEventDispatcher_startingUp(QAbstractEventDispatcher* self) {
	self->startingUp();
}

void QAbstractEventDispatcher_closingDown(QAbstractEventDispatcher* self) {
	self->closingDown();
}

void QAbstractEventDispatcher_installNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
	self->installNativeEventFilter(filterObj);
}

void QAbstractEventDispatcher_removeNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj) {
	self->removeNativeEventFilter(filterObj);
}

void QAbstractEventDispatcher_aboutToBlock(QAbstractEventDispatcher* self) {
	self->aboutToBlock();
}

void QAbstractEventDispatcher_connect_aboutToBlock(QAbstractEventDispatcher* self, intptr_t slot) {
	QAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::aboutToBlock), self, [=]() {
		miqt_exec_callback_QAbstractEventDispatcher_aboutToBlock(slot);
	});
}

void QAbstractEventDispatcher_awake(QAbstractEventDispatcher* self) {
	self->awake();
}

void QAbstractEventDispatcher_connect_awake(QAbstractEventDispatcher* self, intptr_t slot) {
	QAbstractEventDispatcher::connect(self, static_cast<void (QAbstractEventDispatcher::*)()>(&QAbstractEventDispatcher::awake), self, [=]() {
		miqt_exec_callback_QAbstractEventDispatcher_awake(slot);
	});
}

struct miqt_string QAbstractEventDispatcher_tr2(const char* s, const char* c) {
	QString _ret = QAbstractEventDispatcher::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractEventDispatcher_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractEventDispatcher::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractEventDispatcher* QAbstractEventDispatcher_instanceWithThread(QThread* thread) {
	return QAbstractEventDispatcher::instance(thread);
}

void QAbstractEventDispatcher_delete(QAbstractEventDispatcher* self) {
	delete self;
}

QTextStream* QTextStream_new() {
	return new (std::nothrow) QTextStream();
}

QTextStream* QTextStream_new2(QIODevice* device) {
	return new (std::nothrow) QTextStream(device);
}

QTextStream* QTextStream_new3(struct miqt_string array) {
	QByteArray array_QByteArray(array.data, array.len);
	return new (std::nothrow) QTextStream(array_QByteArray);
}

void QTextStream_setEncoding(QTextStream* self, int encoding) {
	self->setEncoding(static_cast<QStringConverter::Encoding>(encoding));
}

int QTextStream_encoding(const QTextStream* self) {
	QStringConverter::Encoding _ret = self->encoding();
	return static_cast<int>(_ret);
}

void QTextStream_setAutoDetectUnicode(QTextStream* self, bool enabled) {
	self->setAutoDetectUnicode(enabled);
}

bool QTextStream_autoDetectUnicode(const QTextStream* self) {
	return self->autoDetectUnicode();
}

void QTextStream_setGenerateByteOrderMark(QTextStream* self, bool generate) {
	self->setGenerateByteOrderMark(generate);
}

bool QTextStream_generateByteOrderMark(const QTextStream* self) {
	return self->generateByteOrderMark();
}

void QTextStream_setLocale(QTextStream* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QTextStream_locale(const QTextStream* self) {
	return new QLocale(self->locale());
}

void QTextStream_setDevice(QTextStream* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QTextStream_device(const QTextStream* self) {
	return self->device();
}

struct miqt_string QTextStream_string(const QTextStream* self) {
	QString* _ret = self->string();
	// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret->toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextStream_resetStatus(QTextStream* self) {
	self->resetStatus();
}

bool QTextStream_atEnd(const QTextStream* self) {
	return self->atEnd();
}

void QTextStream_reset(QTextStream* self) {
	self->reset();
}

void QTextStream_flush(QTextStream* self) {
	self->flush();
}

bool QTextStream_seek(QTextStream* self, long long pos) {
	return self->seek(static_cast<long long>(pos));
}

long long QTextStream_pos(const QTextStream* self) {
	long long _ret = self->pos();
	return static_cast<long long>(_ret);
}

void QTextStream_skipWhiteSpace(QTextStream* self) {
	self->skipWhiteSpace();
}

struct miqt_string QTextStream_readLine(QTextStream* self) {
	QString _ret = self->readLine();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextStream_readAll(QTextStream* self) {
	QString _ret = self->readAll();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextStream_read(QTextStream* self, long long maxlen) {
	QString _ret = self->read(static_cast<long long>(maxlen));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextStream_setFieldAlignment(QTextStream* self, int alignment) {
	self->setFieldAlignment(static_cast<QTextStream::FieldAlignment>(alignment));
}

int QTextStream_fieldAlignment(const QTextStream* self) {
	QTextStream::FieldAlignment _ret = self->fieldAlignment();
	return static_cast<int>(_ret);
}

void QTextStream_setPadChar(QTextStream* self, QChar* ch) {
	self->setPadChar(*ch);
}

QChar* QTextStream_padChar(const QTextStream* self) {
	return new QChar(self->padChar());
}

void QTextStream_setFieldWidth(QTextStream* self, int width) {
	self->setFieldWidth(static_cast<int>(width));
}

int QTextStream_fieldWidth(const QTextStream* self) {
	return self->fieldWidth();
}

void QTextStream_setNumberFlags(QTextStream* self, int flags) {
	self->setNumberFlags(static_cast<QFlags<QTextStream::NumberFlag>>(flags));
}

int QTextStream_numberFlags(const QTextStream* self) {
	QFlags<QTextStream::NumberFlag> _ret = self->numberFlags();
	return static_cast<int>(_ret);
}

void QTextStream_setIntegerBase(QTextStream* self, int base) {
	self->setIntegerBase(static_cast<int>(base));
}

int QTextStream_integerBase(const QTextStream* self) {
	return self->integerBase();
}

void QTextStream_setRealNumberNotation(QTextStream* self, int notation) {
	self->setRealNumberNotation(static_cast<QTextStream::RealNumberNotation>(notation));
}

int QTextStream_realNumberNotation(const QTextStream* self) {
	QTextStream::RealNumberNotation _ret = self->realNumberNotation();
	return static_cast<int>(_ret);
}

void QTextStream_setRealNumberPrecision(QTextStream* self, int precision) {
	self->setRealNumberPrecision(static_cast<int>(precision));
}

int QTextStream_realNumberPrecision(const QTextStream* self) {
	return self->realNumberPrecision();
}

QTextStream* QTextStream_operatorShiftRight(QTextStream* self, QChar* ch) {
	QTextStream& _ret = self->operator>>(*ch);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithCh(QTextStream* self, char* ch) {
	QTextStream& _ret = self->operator>>(*ch);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithShort(QTextStream* self, short* i) {
	QTextStream& _ret = self->operator>>(*i);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithUnsignedshort(QTextStream* self, unsigned short* i) {
	QTextStream& _ret = self->operator>>(*i);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithInt(QTextStream* self, int* i) {
	QTextStream& _ret = self->operator>>(*i);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithUnsignedint(QTextStream* self, unsigned int* i) {
	QTextStream& _ret = self->operator>>(*i);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithLong(QTextStream* self, long* i) {
	QTextStream& _ret = self->operator>>(*i);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithUnsignedlong(QTextStream* self, unsigned long* i) {
	QTextStream& _ret = self->operator>>(*i);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithQlonglong(QTextStream* self, long long* i) {
	QTextStream& _ret = self->operator>>(*i);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithQulonglong(QTextStream* self, unsigned long long* i) {
	QTextStream& _ret = self->operator>>(*i);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithFloat(QTextStream* self, float* f) {
	QTextStream& _ret = self->operator>>(*f);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithDouble(QTextStream* self, double* f) {
	QTextStream& _ret = self->operator>>(*f);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithQString(QTextStream* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QTextStream& _ret = self->operator>>(s_QString);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithArray(QTextStream* self, struct miqt_string array) {
	QByteArray array_QByteArray(array.data, array.len);
	QTextStream& _ret = self->operator>>(array_QByteArray);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithChar(QTextStream* self, char* c) {
	QTextStream& _ret = self->operator>>(c);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeft(QTextStream* self, QChar* ch) {
	QTextStream& _ret = self->operator<<(*ch);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithCh(QTextStream* self, char ch) {
	QTextStream& _ret = self->operator<<(static_cast<char>(ch));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithShort(QTextStream* self, short i) {
	QTextStream& _ret = self->operator<<(static_cast<short>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithUnsignedshort(QTextStream* self, unsigned short i) {
	QTextStream& _ret = self->operator<<(static_cast<unsigned short>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithInt(QTextStream* self, int i) {
	QTextStream& _ret = self->operator<<(static_cast<int>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithUnsignedint(QTextStream* self, unsigned int i) {
	QTextStream& _ret = self->operator<<(static_cast<unsigned int>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithLong(QTextStream* self, long i) {
	QTextStream& _ret = self->operator<<(static_cast<long>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithUnsignedlong(QTextStream* self, unsigned long i) {
	QTextStream& _ret = self->operator<<(static_cast<unsigned long>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithQlonglong(QTextStream* self, long long i) {
	QTextStream& _ret = self->operator<<(static_cast<long long>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithQulonglong(QTextStream* self, unsigned long long i) {
	QTextStream& _ret = self->operator<<(static_cast<unsigned long long>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithFloat(QTextStream* self, float f) {
	QTextStream& _ret = self->operator<<(static_cast<float>(f));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithDouble(QTextStream* self, double f) {
	QTextStream& _ret = self->operator<<(static_cast<double>(f));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithQString(QTextStream* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QTextStream& _ret = self->operator<<(s_QString);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithArray(QTextStream* self, struct miqt_string array) {
	QByteArray array_QByteArray(array.data, array.len);
	QTextStream& _ret = self->operator<<(array_QByteArray);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithChar(QTextStream* self, const char* c) {
	QTextStream& _ret = self->operator<<(c);
	// Cast returned reference into pointer
	return &_ret;
}

bool QTextStream_ToBool(const QTextStream* self) {
	return self->operator bool();
}

struct miqt_string QTextStream_readLineWithMaxlen(QTextStream* self, long long maxlen) {
	QString _ret = self->readLine(static_cast<long long>(maxlen));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextStream_delete(QTextStream* self) {
	delete self;
}

QTextStreamManipulator* QTextStreamManipulator_new(QTextStreamManipulator* param1) {
	return new (std::nothrow) QTextStreamManipulator(*param1);
}

void QTextStreamManipulator_exec(QTextStreamManipulator* self, QTextStream* s) {
	self->exec(*s);
}

void QTextStreamManipulator_delete(QTextStreamManipulator* self) {
	delete self;
}

QDebug* QDebug_new(QIODevice* device) {
	return new (std::nothrow) QDebug(device);
}

QDebug* QDebug_new2(QDebug* o) {
	return new (std::nothrow) QDebug(*o);
}

void QDebug_swap(QDebug* self, QDebug* other) {
	self->swap(*other);
}

QDebug* QDebug_resetFormat(QDebug* self) {
	QDebug& _ret = self->resetFormat();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_space(QDebug* self) {
	QDebug& _ret = self->space();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_nospace(QDebug* self) {
	QDebug& _ret = self->nospace();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_maybeSpace(QDebug* self) {
	QDebug& _ret = self->maybeSpace();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_verbosity(QDebug* self, int verbosityLevel) {
	QDebug& _ret = self->verbosity(static_cast<int>(verbosityLevel));
	// Cast returned reference into pointer
	return &_ret;
}

int QDebug_verbosity2(const QDebug* self) {
	return self->verbosity();
}

void QDebug_setVerbosity(QDebug* self, int verbosityLevel) {
	self->setVerbosity(static_cast<int>(verbosityLevel));
}

bool QDebug_autoInsertSpaces(const QDebug* self) {
	return self->autoInsertSpaces();
}

void QDebug_setAutoInsertSpaces(QDebug* self, bool b) {
	self->setAutoInsertSpaces(b);
}

bool QDebug_quoteStrings(const QDebug* self) {
	return self->quoteStrings();
}

void QDebug_setQuoteStrings(QDebug* self, bool b) {
	self->setQuoteStrings(b);
}

QDebug* QDebug_quote(QDebug* self) {
	QDebug& _ret = self->quote();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_noquote(QDebug* self) {
	QDebug& _ret = self->noquote();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_maybeQuote(QDebug* self) {
	QDebug& _ret = self->maybeQuote();
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeft(QDebug* self, QChar* t) {
	QDebug& _ret = self->operator<<(*t);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithBool(QDebug* self, bool t) {
	QDebug& _ret = self->operator<<(t);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithChar(QDebug* self, char t) {
	QDebug& _ret = self->operator<<(static_cast<char>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithShort(QDebug* self, short t) {
	QDebug& _ret = self->operator<<(static_cast<short>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithUnsignedshort(QDebug* self, unsigned short t) {
	QDebug& _ret = self->operator<<(static_cast<unsigned short>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithInt(QDebug* self, int t) {
	QDebug& _ret = self->operator<<(static_cast<int>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithUnsignedint(QDebug* self, unsigned int t) {
	QDebug& _ret = self->operator<<(static_cast<unsigned int>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithLong(QDebug* self, long t) {
	QDebug& _ret = self->operator<<(static_cast<long>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithUnsignedlong(QDebug* self, unsigned long t) {
	QDebug& _ret = self->operator<<(static_cast<unsigned long>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithQint64(QDebug* self, long long t) {
	QDebug& _ret = self->operator<<(static_cast<long long>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithQuint64(QDebug* self, unsigned long long t) {
	QDebug& _ret = self->operator<<(static_cast<unsigned long long>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithFloat(QDebug* self, float t) {
	QDebug& _ret = self->operator<<(static_cast<float>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithDouble(QDebug* self, double t) {
	QDebug& _ret = self->operator<<(static_cast<double>(t));
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeft2(QDebug* self, const char* t) {
	QDebug& _ret = self->operator<<(t);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithQString(QDebug* self, struct miqt_string t) {
	QString t_QString = QString::fromUtf8(t.data, t.len);
	QDebug& _ret = self->operator<<(t_QString);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithQByteArray(QDebug* self, struct miqt_string t) {
	QByteArray t_QByteArray(t.data, t.len);
	QDebug& _ret = self->operator<<(t_QByteArray);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_operatorShiftLeftWithQTextStreamManipulator(QDebug* self, QTextStreamManipulator* m) {
	QDebug& _ret = self->operator<<(*m);
	// Cast returned reference into pointer
	return &_ret;
}

QDebug* QDebug_maybeQuoteWithChar(QDebug* self, char c) {
	QDebug& _ret = self->maybeQuote(static_cast<char>(c));
	// Cast returned reference into pointer
	return &_ret;
}

void QDebug_delete(QDebug* self) {
	delete self;
}

QVariant* QVariant_new() {
	return new (std::nothrow) QVariant();
}

QVariant* QVariant_new2(QMetaType* type) {
	return new (std::nothrow) QVariant(*type);
}

QVariant* QVariant_new3(QVariant* other) {
	return new (std::nothrow) QVariant(*other);
}

QVariant* QVariant_new4(int i) {
	return new (std::nothrow) QVariant(static_cast<int>(i));
}

QVariant* QVariant_new5(unsigned int ui) {
	return new (std::nothrow) QVariant(static_cast<unsigned int>(ui));
}

QVariant* QVariant_new6(long long ll) {
	return new (std::nothrow) QVariant(static_cast<long long>(ll));
}

QVariant* QVariant_new7(unsigned long long ull) {
	return new (std::nothrow) QVariant(static_cast<unsigned long long>(ull));
}

QVariant* QVariant_new8(bool b) {
	return new (std::nothrow) QVariant(b);
}

QVariant* QVariant_new9(double d) {
	return new (std::nothrow) QVariant(static_cast<double>(d));
}

QVariant* QVariant_new10(float f) {
	return new (std::nothrow) QVariant(static_cast<float>(f));
}

QVariant* QVariant_new11(QChar* qchar) {
	return new (std::nothrow) QVariant(*qchar);
}

QVariant* QVariant_new12(QDate* date) {
	return new (std::nothrow) QVariant(*date);
}

QVariant* QVariant_new13(QTime* time) {
	return new (std::nothrow) QVariant(*time);
}

QVariant* QVariant_new14(QBitArray* bitarray) {
	return new (std::nothrow) QVariant(*bitarray);
}

QVariant* QVariant_new15(struct miqt_string bytearray) {
	QByteArray bytearray_QByteArray(bytearray.data, bytearray.len);
	return new (std::nothrow) QVariant(bytearray_QByteArray);
}

QVariant* QVariant_new16(QDateTime* datetime) {
	return new (std::nothrow) QVariant(*datetime);
}

QVariant* QVariant_new17(struct miqt_map /* of struct miqt_string to QVariant* */  hash) {
	QHash<QString, QVariant> hash_QMap;
	hash_QMap.reserve(hash.len);
	struct miqt_string* hash_karr = static_cast<struct miqt_string*>(hash.keys);
	QVariant** hash_varr = static_cast<QVariant**>(hash.values);
	for(size_t i = 0; i < hash.len; ++i) {
		QString hash_karr_i_QString = QString::fromUtf8(hash_karr[i].data, hash_karr[i].len);
		hash_QMap[hash_karr_i_QString] = *(hash_varr[i]);
	}
	return new (std::nothrow) QVariant(hash_QMap);
}

QVariant* QVariant_new18(QJsonArray* jsonArray) {
	return new (std::nothrow) QVariant(*jsonArray);
}

QVariant* QVariant_new19(QJsonObject* jsonObject) {
	return new (std::nothrow) QVariant(*jsonObject);
}

QVariant* QVariant_new20(QLocale* locale) {
	return new (std::nothrow) QVariant(*locale);
}

QVariant* QVariant_new21(struct miqt_map /* of struct miqt_string to QVariant* */  map) {
	QMap<QString, QVariant> map_QMap;
	struct miqt_string* map_karr = static_cast<struct miqt_string*>(map.keys);
	QVariant** map_varr = static_cast<QVariant**>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
		map_QMap[map_karr_i_QString] = *(map_varr[i]);
	}
	return new (std::nothrow) QVariant(map_QMap);
}

QVariant* QVariant_new22(QRegularExpression* re) {
	return new (std::nothrow) QVariant(*re);
}

QVariant* QVariant_new23(struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new (std::nothrow) QVariant(string_QString);
}

QVariant* QVariant_new24(struct miqt_array /* of struct miqt_string */  stringlist) {
	QStringList stringlist_QList;
	stringlist_QList.reserve(stringlist.len);
	struct miqt_string* stringlist_arr = static_cast<struct miqt_string*>(stringlist.data);
	for(size_t i = 0; i < stringlist.len; ++i) {
		QString stringlist_arr_i_QString = QString::fromUtf8(stringlist_arr[i].data, stringlist_arr[i].len);
		stringlist_QList.push_back(stringlist_arr_i_QString);
	}
	return new (std::nothrow) QVariant(stringlist_QList);
}

QVariant* QVariant_new25(QUrl* url) {
	return new (std::nothrow) QVariant(*url);
}

QVariant* QVariant_new26(QJsonValue* jsonValue) {
	return new (std::nothrow) QVariant(*jsonValue);
}

QVariant* QVariant_new27(QModelIndex* modelIndex) {
	return new (std::nothrow) QVariant(*modelIndex);
}

QVariant* QVariant_new28(QUuid* uuid) {
	return new (std::nothrow) QVariant(*uuid);
}

QVariant* QVariant_new29(QSize* size) {
	return new (std::nothrow) QVariant(*size);
}

QVariant* QVariant_new30(QSizeF* size) {
	return new (std::nothrow) QVariant(*size);
}

QVariant* QVariant_new31(QPoint* pt) {
	return new (std::nothrow) QVariant(*pt);
}

QVariant* QVariant_new32(QPointF* pt) {
	return new (std::nothrow) QVariant(*pt);
}

QVariant* QVariant_new33(QLine* line) {
	return new (std::nothrow) QVariant(*line);
}

QVariant* QVariant_new34(QLineF* line) {
	return new (std::nothrow) QVariant(*line);
}

QVariant* QVariant_new35(QRect* rect) {
	return new (std::nothrow) QVariant(*rect);
}

QVariant* QVariant_new36(QRectF* rect) {
	return new (std::nothrow) QVariant(*rect);
}

QVariant* QVariant_new37(QEasingCurve* easing) {
	return new (std::nothrow) QVariant(*easing);
}

QVariant* QVariant_new38(QJsonDocument* jsonDocument) {
	return new (std::nothrow) QVariant(*jsonDocument);
}

QVariant* QVariant_new39(QPersistentModelIndex* modelIndex) {
	return new (std::nothrow) QVariant(*modelIndex);
}

QVariant* QVariant_new40(QMetaType* type, const void* copy) {
	return new (std::nothrow) QVariant(*type, copy);
}

QVariant* QVariant_new41(struct miqt_array /* of QVariant* */  list) {
	QList<QVariant> list_QList;
	list_QList.reserve(list.len);
	QVariant** list_arr = static_cast<QVariant**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	return new (std::nothrow) QVariant(list_QList);
}

void QVariant_swap(QVariant* self, QVariant* other) {
	self->swap(*other);
}

int QVariant_userType(const QVariant* self) {
	return self->userType();
}

int QVariant_typeId(const QVariant* self) {
	return self->typeId();
}

const char* QVariant_typeName(const QVariant* self) {
	return (const char*) self->typeName();
}

QMetaType* QVariant_metaType(const QVariant* self) {
	return new QMetaType(self->metaType());
}

bool QVariant_canConvert(const QVariant* self, QMetaType* targetType) {
	return self->canConvert(*targetType);
}

bool QVariant_convert(QVariant* self, QMetaType* type) {
	return self->convert(*type);
}

bool QVariant_canView(const QVariant* self, QMetaType* targetType) {
	return self->canView(*targetType);
}

bool QVariant_canConvertWithTargetTypeId(const QVariant* self, int targetTypeId) {
	return self->canConvert(static_cast<int>(targetTypeId));
}

bool QVariant_convertWithTargetTypeId(QVariant* self, int targetTypeId) {
	return self->convert(static_cast<int>(targetTypeId));
}

bool QVariant_isValid(const QVariant* self) {
	return self->isValid();
}

bool QVariant_isNull(const QVariant* self) {
	return self->isNull();
}

void QVariant_clear(QVariant* self) {
	self->clear();
}

void QVariant_detach(QVariant* self) {
	self->detach();
}

bool QVariant_isDetached(const QVariant* self) {
	return self->isDetached();
}

int QVariant_toInt(const QVariant* self) {
	return self->toInt();
}

unsigned int QVariant_toUInt(const QVariant* self) {
	unsigned int _ret = self->toUInt();
	return static_cast<unsigned int>(_ret);
}

long long QVariant_toLongLong(const QVariant* self) {
	long long _ret = self->toLongLong();
	return static_cast<long long>(_ret);
}

unsigned long long QVariant_toULongLong(const QVariant* self) {
	unsigned long long _ret = self->toULongLong();
	return static_cast<unsigned long long>(_ret);
}

bool QVariant_toBool(const QVariant* self) {
	return self->toBool();
}

double QVariant_toDouble(const QVariant* self) {
	return self->toDouble();
}

float QVariant_toFloat(const QVariant* self) {
	return self->toFloat();
}

double QVariant_toReal(const QVariant* self) {
	double _ret = self->toReal();
	return static_cast<double>(_ret);
}

struct miqt_string QVariant_toByteArray(const QVariant* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QBitArray* QVariant_toBitArray(const QVariant* self) {
	return new QBitArray(self->toBitArray());
}

struct miqt_string QVariant_toString(const QVariant* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QVariant_toStringList(const QVariant* self) {
	QStringList _ret = self->toStringList();
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

QChar* QVariant_toChar(const QVariant* self) {
	return new QChar(self->toChar());
}

QDate* QVariant_toDate(const QVariant* self) {
	return new QDate(self->toDate());
}

QTime* QVariant_toTime(const QVariant* self) {
	return new QTime(self->toTime());
}

QDateTime* QVariant_toDateTime(const QVariant* self) {
	return new QDateTime(self->toDateTime());
}

struct miqt_array /* of QVariant* */  QVariant_toList(const QVariant* self) {
	QList<QVariant> _ret = self->toList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QVariant(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_toMap(const QVariant* self) {
	QMap<QString, QVariant> _ret = self->toMap();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_toHash(const QVariant* self) {
	QHash<QString, QVariant> _ret = self->toHash();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _hashkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _hashkey_b = _hashkey_ret.toUtf8();
		struct miqt_string _hashkey_ms;
		_hashkey_ms.len = _hashkey_b.length();
		_hashkey_ms.data = static_cast<char*>(malloc(_hashkey_ms.len));
		memcpy(_hashkey_ms.data, _hashkey_b.data(), _hashkey_ms.len);
		_karr[_ctr] = _hashkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

QPoint* QVariant_toPoint(const QVariant* self) {
	return new QPoint(self->toPoint());
}

QPointF* QVariant_toPointF(const QVariant* self) {
	return new QPointF(self->toPointF());
}

QRect* QVariant_toRect(const QVariant* self) {
	return new QRect(self->toRect());
}

QSize* QVariant_toSize(const QVariant* self) {
	return new QSize(self->toSize());
}

QSizeF* QVariant_toSizeF(const QVariant* self) {
	return new QSizeF(self->toSizeF());
}

QLine* QVariant_toLine(const QVariant* self) {
	return new QLine(self->toLine());
}

QLineF* QVariant_toLineF(const QVariant* self) {
	return new QLineF(self->toLineF());
}

QRectF* QVariant_toRectF(const QVariant* self) {
	return new QRectF(self->toRectF());
}

QLocale* QVariant_toLocale(const QVariant* self) {
	return new QLocale(self->toLocale());
}

QRegularExpression* QVariant_toRegularExpression(const QVariant* self) {
	return new QRegularExpression(self->toRegularExpression());
}

QEasingCurve* QVariant_toEasingCurve(const QVariant* self) {
	return new QEasingCurve(self->toEasingCurve());
}

QUuid* QVariant_toUuid(const QVariant* self) {
	return new QUuid(self->toUuid());
}

QUrl* QVariant_toUrl(const QVariant* self) {
	return new QUrl(self->toUrl());
}

QJsonValue* QVariant_toJsonValue(const QVariant* self) {
	return new QJsonValue(self->toJsonValue());
}

QJsonObject* QVariant_toJsonObject(const QVariant* self) {
	return new QJsonObject(self->toJsonObject());
}

QJsonArray* QVariant_toJsonArray(const QVariant* self) {
	return new QJsonArray(self->toJsonArray());
}

QJsonDocument* QVariant_toJsonDocument(const QVariant* self) {
	return new QJsonDocument(self->toJsonDocument());
}

QModelIndex* QVariant_toModelIndex(const QVariant* self) {
	return new QModelIndex(self->toModelIndex());
}

QPersistentModelIndex* QVariant_toPersistentModelIndex(const QVariant* self) {
	return new QPersistentModelIndex(self->toPersistentModelIndex());
}

void QVariant_load(QVariant* self, QDataStream* ds) {
	self->load(*ds);
}

void QVariant_save(const QVariant* self, QDataStream* ds) {
	self->save(*ds);
}

const char* QVariant_typeToName(int typeId) {
	return (const char*) QVariant::typeToName(static_cast<int>(typeId));
}

void* QVariant_data(QVariant* self) {
	return self->data();
}

const void* QVariant_constData(const QVariant* self) {
	return (const void*) self->constData();
}

const void* QVariant_data2(const QVariant* self) {
	return (const void*) self->data();
}

void QVariant_setValue(QVariant* self, QVariant* avalue) {
	self->setValue(*avalue);
}

int QVariant_toIntWithOk(const QVariant* self, bool* ok) {
	return self->toInt(ok);
}

unsigned int QVariant_toUIntWithOk(const QVariant* self, bool* ok) {
	unsigned int _ret = self->toUInt(ok);
	return static_cast<unsigned int>(_ret);
}

long long QVariant_toLongLongWithOk(const QVariant* self, bool* ok) {
	long long _ret = self->toLongLong(ok);
	return static_cast<long long>(_ret);
}

unsigned long long QVariant_toULongLongWithOk(const QVariant* self, bool* ok) {
	unsigned long long _ret = self->toULongLong(ok);
	return static_cast<unsigned long long>(_ret);
}

double QVariant_toDoubleWithOk(const QVariant* self, bool* ok) {
	return self->toDouble(ok);
}

float QVariant_toFloatWithOk(const QVariant* self, bool* ok) {
	return self->toFloat(ok);
}

double QVariant_toRealWithOk(const QVariant* self, bool* ok) {
	double _ret = self->toReal(ok);
	return static_cast<double>(_ret);
}

void QVariant_delete(QVariant* self) {
	delete self;
}

QModelRoleData* QModelRoleData_new(int role) {
	return new (std::nothrow) QModelRoleData(static_cast<int>(role));
}

QModelRoleData* QModelRoleData_new2(QModelRoleData* param1) {
	return new (std::nothrow) QModelRoleData(*param1);
}

int QModelRoleData_role(const QModelRoleData* self) {
	return self->role();
}

QVariant* QModelRoleData_data(QModelRoleData* self) {
	QVariant& _ret = self->data();
	// Cast returned reference into pointer
	return &_ret;
}

QVariant* QModelRoleData_data2(const QModelRoleData* self) {
	const QVariant& _ret = self->data();
	// Cast returned reference into pointer
	return const_cast<QVariant*>(&_ret);
}

void QModelRoleData_clearData(QModelRoleData* self) {
	self->clearData();
}

void QModelRoleData_delete(QModelRoleData* self) {
	delete self;
}

QModelRoleDataSpan* QModelRoleDataSpan_new() {
	return new (std::nothrow) QModelRoleDataSpan();
}

QModelRoleDataSpan* QModelRoleDataSpan_new2(QModelRoleData* modelRoleData) {
	return new (std::nothrow) QModelRoleDataSpan(*modelRoleData);
}

QModelRoleDataSpan* QModelRoleDataSpan_new3(QModelRoleData* modelRoleData, int64_t len) {
	return new (std::nothrow) QModelRoleDataSpan(modelRoleData, (int64_t)(len));
}

QModelRoleDataSpan* QModelRoleDataSpan_new4(QModelRoleDataSpan* param1) {
	return new (std::nothrow) QModelRoleDataSpan(*param1);
}

int64_t QModelRoleDataSpan_size(const QModelRoleDataSpan* self) {
	int64_t _ret = self->size();
	return static_cast<int64_t>(_ret);
}

int64_t QModelRoleDataSpan_length(const QModelRoleDataSpan* self) {
	int64_t _ret = self->length();
	return static_cast<int64_t>(_ret);
}

QModelRoleData* QModelRoleDataSpan_data(const QModelRoleDataSpan* self) {
	return self->data();
}

QModelRoleData* QModelRoleDataSpan_begin(const QModelRoleDataSpan* self) {
	return self->begin();
}

QModelRoleData* QModelRoleDataSpan_end(const QModelRoleDataSpan* self) {
	return self->end();
}

QModelRoleData* QModelRoleDataSpan_operatorSubscript(const QModelRoleDataSpan* self, int64_t index) {
	QModelRoleData& _ret = self->operator[]((int64_t)(index));
	// Cast returned reference into pointer
	return &_ret;
}

QVariant* QModelRoleDataSpan_dataForRole(const QModelRoleDataSpan* self, int role) {
	return self->dataForRole(static_cast<int>(role));
}

void QModelRoleDataSpan_delete(QModelRoleDataSpan* self) {
	delete self;
}

QModelIndex* QModelIndex_new() {
	return new (std::nothrow) QModelIndex();
}

QModelIndex* QModelIndex_new2(QModelIndex* param1) {
	return new (std::nothrow) QModelIndex(*param1);
}

int QModelIndex_row(const QModelIndex* self) {
	return self->row();
}

int QModelIndex_column(const QModelIndex* self) {
	return self->column();
}

uint64_t QModelIndex_internalId(const QModelIndex* self) {
	uint64_t _ret = self->internalId();
	return static_cast<uint64_t>(_ret);
}

void* QModelIndex_internalPointer(const QModelIndex* self) {
	return self->internalPointer();
}

const void* QModelIndex_constInternalPointer(const QModelIndex* self) {
	return (const void*) self->constInternalPointer();
}

QModelIndex* QModelIndex_parent(const QModelIndex* self) {
	return new QModelIndex(self->parent());
}

QModelIndex* QModelIndex_sibling(const QModelIndex* self, int row, int column) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QModelIndex_siblingAtColumn(const QModelIndex* self, int column) {
	return new QModelIndex(self->siblingAtColumn(static_cast<int>(column)));
}

QModelIndex* QModelIndex_siblingAtRow(const QModelIndex* self, int row) {
	return new QModelIndex(self->siblingAtRow(static_cast<int>(row)));
}

QVariant* QModelIndex_data(const QModelIndex* self) {
	return new QVariant(self->data());
}

void QModelIndex_multiData(const QModelIndex* self, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*roleDataSpan);
}

int QModelIndex_flags(const QModelIndex* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QAbstractItemModel* QModelIndex_model(const QModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QModelIndex_isValid(const QModelIndex* self) {
	return self->isValid();
}

QVariant* QModelIndex_dataWithRole(const QModelIndex* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QModelIndex_delete(QModelIndex* self) {
	delete self;
}

QPersistentModelIndex* QPersistentModelIndex_new() {
	return new (std::nothrow) QPersistentModelIndex();
}

QPersistentModelIndex* QPersistentModelIndex_new2(QModelIndex* index) {
	return new (std::nothrow) QPersistentModelIndex(*index);
}

QPersistentModelIndex* QPersistentModelIndex_new3(QPersistentModelIndex* other) {
	return new (std::nothrow) QPersistentModelIndex(*other);
}

void QPersistentModelIndex_swap(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->swap(*other);
}

QModelIndex* QPersistentModelIndex_ToQModelIndex(const QPersistentModelIndex* self) {
	return new QModelIndex(self->operator QModelIndex());
}

int QPersistentModelIndex_row(const QPersistentModelIndex* self) {
	return self->row();
}

int QPersistentModelIndex_column(const QPersistentModelIndex* self) {
	return self->column();
}

void* QPersistentModelIndex_internalPointer(const QPersistentModelIndex* self) {
	return self->internalPointer();
}

const void* QPersistentModelIndex_constInternalPointer(const QPersistentModelIndex* self) {
	return (const void*) self->constInternalPointer();
}

uint64_t QPersistentModelIndex_internalId(const QPersistentModelIndex* self) {
	uint64_t _ret = self->internalId();
	return static_cast<uint64_t>(_ret);
}

QModelIndex* QPersistentModelIndex_parent(const QPersistentModelIndex* self) {
	return new QModelIndex(self->parent());
}

QModelIndex* QPersistentModelIndex_sibling(const QPersistentModelIndex* self, int row, int column) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QVariant* QPersistentModelIndex_data(const QPersistentModelIndex* self) {
	return new QVariant(self->data());
}

void QPersistentModelIndex_multiData(const QPersistentModelIndex* self, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*roleDataSpan);
}

int QPersistentModelIndex_flags(const QPersistentModelIndex* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QAbstractItemModel* QPersistentModelIndex_model(const QPersistentModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QPersistentModelIndex_isValid(const QPersistentModelIndex* self) {
	return self->isValid();
}

QVariant* QPersistentModelIndex_dataWithRole(const QPersistentModelIndex* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QPersistentModelIndex_delete(QPersistentModelIndex* self) {
	delete self;
}

class MiqtVirtualQAbstractItemModel final : public QAbstractItemModel {
public:

	MiqtVirtualQAbstractItemModel(): QAbstractItemModel() {}
	MiqtVirtualQAbstractItemModel(QObject* parent): QAbstractItemModel(parent) {}

	virtual ~MiqtVirtualQAbstractItemModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_index(this, handle__index, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__parent == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_parent(this, handle__parent, sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QAbstractItemModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractItemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractItemModel_rowCount(this, handle__rowCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractItemModel_columnCount(this, handle__columnCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__hasChildren == 0) {
			return QAbstractItemModel::hasChildren(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_hasChildren(this, handle__hasChildren, sigval1);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (handle__data == 0) {
			return QVariant(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemModel_data(this, handle__data, sigval1, sigval2);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QAbstractItemModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_setData(this, handle__setData, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QAbstractItemModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QAbstractItemModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QAbstractItemModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QAbstractItemModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractItemModel_itemData(this, handle__itemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QAbstractItemModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
			return QAbstractItemModel::setItemData(index, roles);
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
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_setItemData(this, handle__setItemData, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__clearItemData == 0) {
			return QAbstractItemModel::clearItemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_clearItemData(this, handle__clearItemData, sigval1);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_clearItemData(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QAbstractItemModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractItemModel_mimeTypes(this, handle__mimeTypes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QAbstractItemModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QAbstractItemModel::mimeData(indexes);
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
		QMimeData* callback_return_value = miqt_exec_callback_QAbstractItemModel_mimeData(this, handle__mimeData, sigval1);
		return callback_return_value;
	}

	friend QMimeData* QAbstractItemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QAbstractItemModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QAbstractItemModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_supportedDropActions(this, handle__supportedDropActions);
		return static_cast<QFlags<Qt::DropAction>>(callback_return_value);
	}

	friend int QAbstractItemModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QAbstractItemModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_supportedDragActions(this, handle__supportedDragActions);
		return static_cast<QFlags<Qt::DropAction>>(callback_return_value);
	}

	friend int QAbstractItemModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QAbstractItemModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QAbstractItemModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QAbstractItemModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QAbstractItemModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QAbstractItemModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QAbstractItemModel_fetchMore(this, handle__fetchMore, sigval1);

	}

	friend void QAbstractItemModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QAbstractItemModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_canFetchMore(this, handle__canFetchMore, sigval1);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QAbstractItemModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QAbstractItemModel_flags(this, handle__flags, sigval1);
		return static_cast<QFlags<Qt::ItemFlag>>(callback_return_value);
	}

	friend int QAbstractItemModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QAbstractItemModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QAbstractItemModel_sort(this, handle__sort, sigval1, sigval2);

	}

	friend void QAbstractItemModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QAbstractItemModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_buddy(this, handle__buddy, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractItemModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QAbstractItemModel::match(start, role, value, hits, flags);
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
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractItemModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QAbstractItemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QAbstractItemModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QAbstractItemModel_span(this, handle__span, sigval1);
		return *callback_return_value;
	}

	friend QSize* QAbstractItemModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QAbstractItemModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractItemModel_roleNames(this, handle__roleNames);
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

	friend struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__multiData = 0;

	// Subclass to allow providing a Go implementation
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (handle__multiData == 0) {
			QAbstractItemModel::multiData(index, roleDataSpan);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelRoleDataSpan* sigval2 = new QModelRoleDataSpan(roleDataSpan);
		miqt_exec_callback_QAbstractItemModel_multiData(this, handle__multiData, sigval1, sigval2);

	}

	friend void QAbstractItemModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QAbstractItemModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_submit(this, handle__submit);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QAbstractItemModel::revert();
			return;
		}

		miqt_exec_callback_QAbstractItemModel_revert(this, handle__revert);

	}

	friend void QAbstractItemModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractItemModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractItemModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QModelIndex* QAbstractItemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column, uint64_t id);
	friend void QAbstractItemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QAbstractItemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QAbstractItemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractItemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QAbstractItemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractItemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QAbstractItemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QAbstractItemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QAbstractItemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QAbstractItemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractItemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractItemModel* QAbstractItemModel_new() {
	return new (std::nothrow) MiqtVirtualQAbstractItemModel();
}

QAbstractItemModel* QAbstractItemModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAbstractItemModel(parent);
}

void QAbstractItemModel_virtbase(QAbstractItemModel* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractItemModel_metaObject(const QAbstractItemModel* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QAbstractItemModel_tr(const char* s) {
	QString _ret = QAbstractItemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemModel_hasIndex(const QAbstractItemModel* self, int row, int column) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column));
}

QModelIndex* QAbstractItemModel_index(const QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractItemModel_parent(const QAbstractItemModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QAbstractItemModel_sibling(const QAbstractItemModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

int QAbstractItemModel_rowCount(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QAbstractItemModel_columnCount(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QAbstractItemModel_hasChildren(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QAbstractItemModel_data(const QAbstractItemModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QAbstractItemModel_setData(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QAbstractItemModel_headerData(const QAbstractItemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractItemModel_setHeaderData(QAbstractItemModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

struct miqt_map /* of int to QVariant* */  QAbstractItemModel_itemData(const QAbstractItemModel* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = self->itemData(*index);
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

bool QAbstractItemModel_setItemData(QAbstractItemModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

bool QAbstractItemModel_clearItemData(QAbstractItemModel* self, QModelIndex* index) {
	return self->clearItemData(*index);
}

struct miqt_array /* of struct miqt_string */  QAbstractItemModel_mimeTypes(const QAbstractItemModel* self) {
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

QMimeData* QAbstractItemModel_mimeData(const QAbstractItemModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QAbstractItemModel_canDropMimeData(const QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_dropMimeData(QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractItemModel_supportedDropActions(const QAbstractItemModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

int QAbstractItemModel_supportedDragActions(const QAbstractItemModel* self) {
	Qt::DropActions _ret = self->supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_insertRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_insertColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_removeRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_removeColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_moveRows(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_moveColumns(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_insertRow(QAbstractItemModel* self, int row) {
	return self->insertRow(static_cast<int>(row));
}

bool QAbstractItemModel_insertColumn(QAbstractItemModel* self, int column) {
	return self->insertColumn(static_cast<int>(column));
}

bool QAbstractItemModel_removeRow(QAbstractItemModel* self, int row) {
	return self->removeRow(static_cast<int>(row));
}

bool QAbstractItemModel_removeColumn(QAbstractItemModel* self, int column) {
	return self->removeColumn(static_cast<int>(column));
}

bool QAbstractItemModel_moveRow(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRow(*sourceParent, static_cast<int>(sourceRow), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_moveColumn(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumn(*sourceParent, static_cast<int>(sourceColumn), *destinationParent, static_cast<int>(destinationChild));
}

void QAbstractItemModel_fetchMore(QAbstractItemModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QAbstractItemModel_canFetchMore(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

int QAbstractItemModel_flags(const QAbstractItemModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QAbstractItemModel_sort(QAbstractItemModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QModelIndex* QAbstractItemModel_buddy(const QAbstractItemModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_match(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<QFlags<Qt::MatchFlag>>(flags));
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

QSize* QAbstractItemModel_span(const QAbstractItemModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_roleNames(const QAbstractItemModel* self) {
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

bool QAbstractItemModel_checkIndex(const QAbstractItemModel* self, QModelIndex* index) {
	return self->checkIndex(*index);
}

void QAbstractItemModel_multiData(const QAbstractItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	self->multiData(*index, *roleDataSpan);
}

void QAbstractItemModel_dataChanged(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight) {
	self->dataChanged(*topLeft, *bottomRight);
}

void QAbstractItemModel_connect_dataChanged(QAbstractItemModel* self, intptr_t slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QList<int>&)>(&QAbstractItemModel::dataChanged), self, [=](const QModelIndex& topLeft, const QModelIndex& bottomRight) {
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		miqt_exec_callback_QAbstractItemModel_dataChanged(slot, sigval1, sigval2);
	});
}

void QAbstractItemModel_headerDataChanged(QAbstractItemModel* self, int orientation, int first, int last) {
	self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_connect_headerDataChanged(QAbstractItemModel* self, intptr_t slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(Qt::Orientation, int, int)>(&QAbstractItemModel::headerDataChanged), self, [=](Qt::Orientation orientation, int first, int last) {
		Qt::Orientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_headerDataChanged(slot, sigval1, sigval2, sigval3);
	});
}

void QAbstractItemModel_layoutChanged(QAbstractItemModel* self) {
	self->layoutChanged();
}

void QAbstractItemModel_connect_layoutChanged(QAbstractItemModel* self, intptr_t slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [=]() {
		miqt_exec_callback_QAbstractItemModel_layoutChanged(slot);
	});
}

void QAbstractItemModel_layoutAboutToBeChanged(QAbstractItemModel* self) {
	self->layoutAboutToBeChanged();
}

void QAbstractItemModel_connect_layoutAboutToBeChanged(QAbstractItemModel* self, intptr_t slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [=]() {
		miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged(slot);
	});
}

bool QAbstractItemModel_submit(QAbstractItemModel* self) {
	return self->submit();
}

void QAbstractItemModel_revert(QAbstractItemModel* self) {
	self->revert();
}

struct miqt_string QAbstractItemModel_tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemModel_hasIndex2(const QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_insertRow2(QAbstractItemModel* self, int row, QModelIndex* parent) {
	return self->insertRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_insertColumn2(QAbstractItemModel* self, int column, QModelIndex* parent) {
	return self->insertColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_removeRow2(QAbstractItemModel* self, int row, QModelIndex* parent) {
	return self->removeRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_removeColumn2(QAbstractItemModel* self, int column, QModelIndex* parent) {
	return self->removeColumn(static_cast<int>(column), *parent);
}

void QAbstractItemModel_dataChanged2(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QList<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void QAbstractItemModel_connect_dataChanged2(QAbstractItemModel* self, intptr_t slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QList<int>&)>(&QAbstractItemModel::dataChanged), self, [=](const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) {
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		const QList<int>& roles_ret = roles;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
		for (size_t i = 0, e = roles_ret.length(); i < e; ++i) {
			roles_arr[i] = roles_ret[i];
		}
		struct miqt_array roles_out;
		roles_out.len = roles_ret.length();
		roles_out.data = static_cast<void*>(roles_arr);
		struct miqt_array /* of int */  sigval3 = roles_out;
		miqt_exec_callback_QAbstractItemModel_dataChanged2(slot, sigval1, sigval2, sigval3);
	});
}

void QAbstractItemModel_layoutChangedWithParents(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutChanged(parents_QList);
}

void QAbstractItemModel_connect_layoutChangedWithParents(QAbstractItemModel* self, intptr_t slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [=](const QList<QPersistentModelIndex>& parents) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		miqt_exec_callback_QAbstractItemModel_layoutChangedWithParents(slot, sigval1);
	});
}

void QAbstractItemModel_layoutChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_connect_layoutChanged2(QAbstractItemModel* self, intptr_t slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [=](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		QAbstractItemModel::LayoutChangeHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QAbstractItemModel_layoutChanged2(slot, sigval1, sigval2);
	});
}

void QAbstractItemModel_layoutAboutToBeChangedWithParents(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutAboutToBeChanged(parents_QList);
}

void QAbstractItemModel_connect_layoutAboutToBeChangedWithParents(QAbstractItemModel* self, intptr_t slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [=](const QList<QPersistentModelIndex>& parents) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChangedWithParents(slot, sigval1);
	});
}

void QAbstractItemModel_layoutAboutToBeChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutAboutToBeChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void QAbstractItemModel_connect_layoutAboutToBeChanged2(QAbstractItemModel* self, intptr_t slot) {
	QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [=](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		QAbstractItemModel::LayoutChangeHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged2(slot, sigval1, sigval2);
	});
}

bool QAbstractItemModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parent = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QAbstractItemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractItemModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasChildren = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::hasChildren(*parent);
}

bool QAbstractItemModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = slot;
	return true;
}

bool QAbstractItemModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::setData(*index, *value, static_cast<int>(role));
}

bool QAbstractItemModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QAbstractItemModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractItemModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QAbstractItemModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractItemModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::itemData(*index);
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

bool QAbstractItemModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::setItemData(*index, roles_QMap);
}

bool QAbstractItemModel_override_virtual_clearItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clearItemData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_clearItemData(void* self, QModelIndex* index) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::clearItemData(*index);
}

bool QAbstractItemModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractItemModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::mimeTypes();
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

bool QAbstractItemModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QAbstractItemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::mimeData(indexes_QList);
}

bool QAbstractItemModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QAbstractItemModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QAbstractItemModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = slot;
	return true;
}

void QAbstractItemModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::fetchMore(*parent);
}

bool QAbstractItemModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::canFetchMore(*parent);
}

bool QAbstractItemModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = slot;
	return true;
}

int QAbstractItemModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = slot;
	return true;
}

void QAbstractItemModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QAbstractItemModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QAbstractItemModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::buddy(*index));
}

bool QAbstractItemModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<QFlags<Qt::MatchFlag>>(flags));
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

bool QAbstractItemModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = slot;
	return true;
}

QSize* QAbstractItemModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::span(*index));
}

bool QAbstractItemModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::roleNames();
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

bool QAbstractItemModel_override_virtual_multiData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__multiData = slot;
	return true;
}

void QAbstractItemModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::multiData(*index, *roleDataSpan);
}

bool QAbstractItemModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::submit();
}

bool QAbstractItemModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = slot;
	return true;
}

void QAbstractItemModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::revert();
}

bool QAbstractItemModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::event(event);
}

bool QAbstractItemModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractItemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::eventFilter(watched, event);
}

QModelIndex* QAbstractItemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column, uint64_t id) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column), static_cast<uint64_t>(id)));
}

void QAbstractItemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
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

bool QAbstractItemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

void QAbstractItemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QAbstractItemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

bool QAbstractItemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QAbstractItemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

void QAbstractItemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QAbstractItemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

bool QAbstractItemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QAbstractItemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QAbstractItemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QAbstractItemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QAbstractItemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QAbstractItemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
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

QObject* QAbstractItemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAbstractItemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAbstractItemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAbstractItemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractItemModel* self_cast = static_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAbstractItemModel_delete(QAbstractItemModel* self) {
	delete self;
}

void QAbstractNativeEventFilter_delete(QAbstractNativeEventFilter* self) {
	delete self;
}

class MiqtVirtualQAbstractProxyModel final : public QAbstractProxyModel {
public:

	MiqtVirtualQAbstractProxyModel(): QAbstractProxyModel() {}
	MiqtVirtualQAbstractProxyModel(QObject* parent): QAbstractProxyModel(parent) {}

	virtual ~MiqtVirtualQAbstractProxyModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setSourceModel = 0;

	// Subclass to allow providing a Go implementation
	virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
		if (handle__setSourceModel == 0) {
			QAbstractProxyModel::setSourceModel(sourceModel);
			return;
		}

		QAbstractItemModel* sigval1 = sourceModel;
		miqt_exec_callback_QAbstractProxyModel_setSourceModel(this, handle__setSourceModel, sigval1);

	}

	friend void QAbstractProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* sourceModel);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (handle__mapToSource == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_mapToSource(this, handle__mapToSource, sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (handle__mapFromSource == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& sourceIndex_ret = sourceIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_mapFromSource(this, handle__mapFromSource, sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapSelectionToSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
		if (handle__mapSelectionToSource == 0) {
			return QAbstractProxyModel::mapSelectionToSource(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QItemSelection* callback_return_value = miqt_exec_callback_QAbstractProxyModel_mapSelectionToSource(this, handle__mapSelectionToSource, sigval1);
		return *callback_return_value;
	}

	friend QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mapSelectionFromSource = 0;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
		if (handle__mapSelectionFromSource == 0) {
			return QAbstractProxyModel::mapSelectionFromSource(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QItemSelection* callback_return_value = miqt_exec_callback_QAbstractProxyModel_mapSelectionFromSource(this, handle__mapSelectionFromSource, sigval1);
		return *callback_return_value;
	}

	friend QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__submit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (handle__submit == 0) {
			return QAbstractProxyModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_submit(this, handle__submit);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__revert = 0;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (handle__revert == 0) {
			QAbstractProxyModel::revert();
			return;
		}

		miqt_exec_callback_QAbstractProxyModel_revert(this, handle__revert);

	}

	friend void QAbstractProxyModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__data = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
		if (handle__data == 0) {
			return QAbstractProxyModel::data(proxyIndex, role);
		}

		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractProxyModel_data(this, handle__data, sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QAbstractProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__headerData = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (handle__headerData == 0) {
			return QAbstractProxyModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractProxyModel_headerData(this, handle__headerData, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QAbstractProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (handle__itemData == 0) {
			return QAbstractProxyModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_itemData(this, handle__itemData, sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__flags = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (handle__flags == 0) {
			return QAbstractProxyModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_flags(this, handle__flags, sigval1);
		return static_cast<QFlags<Qt::ItemFlag>>(callback_return_value);
	}

	friend int QAbstractProxyModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (handle__setData == 0) {
			return QAbstractProxyModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_setData(this, handle__setData, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (handle__setItemData == 0) {
			return QAbstractProxyModel::setItemData(index, roles);
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
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_setItemData(this, handle__setItemData, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setHeaderData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (handle__setHeaderData == 0) {
			return QAbstractProxyModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_setHeaderData(this, handle__setHeaderData, sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearItemData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool clearItemData(const QModelIndex& index) override {
		if (handle__clearItemData == 0) {
			return QAbstractProxyModel::clearItemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_clearItemData(this, handle__clearItemData, sigval1);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_clearItemData(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__buddy = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (handle__buddy == 0) {
			return QAbstractProxyModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_buddy(this, handle__buddy, sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractProxyModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canFetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (handle__canFetchMore == 0) {
			return QAbstractProxyModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_canFetchMore(this, handle__canFetchMore, sigval1);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fetchMore = 0;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (handle__fetchMore == 0) {
			QAbstractProxyModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QAbstractProxyModel_fetchMore(this, handle__fetchMore, sigval1);

	}

	friend void QAbstractProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sort = 0;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (handle__sort == 0) {
			QAbstractProxyModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QAbstractProxyModel_sort(this, handle__sort, sigval1, sigval2);

	}

	friend void QAbstractProxyModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__span = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (handle__span == 0) {
			return QAbstractProxyModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QAbstractProxyModel_span(this, handle__span, sigval1);
		return *callback_return_value;
	}

	friend QSize* QAbstractProxyModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasChildren = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (handle__hasChildren == 0) {
			return QAbstractProxyModel::hasChildren(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_hasChildren(this, handle__hasChildren, sigval1);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sibling = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (handle__sibling == 0) {
			return QAbstractProxyModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_sibling(this, handle__sibling, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (handle__mimeData == 0) {
			return QAbstractProxyModel::mimeData(indexes);
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
		QMimeData* callback_return_value = miqt_exec_callback_QAbstractProxyModel_mimeData(this, handle__mimeData, sigval1);
		return callback_return_value;
	}

	friend QMimeData* QAbstractProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canDropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (handle__canDropMimeData == 0) {
			return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_canDropMimeData(this, handle__canDropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropMimeData = 0;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (handle__dropMimeData == 0) {
			return QAbstractProxyModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_dropMimeData(this, handle__dropMimeData, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mimeTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (handle__mimeTypes == 0) {
			return QAbstractProxyModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_mimeTypes(this, handle__mimeTypes);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDragActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (handle__supportedDragActions == 0) {
			return QAbstractProxyModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_supportedDragActions(this, handle__supportedDragActions);
		return static_cast<QFlags<Qt::DropAction>>(callback_return_value);
	}

	friend int QAbstractProxyModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__supportedDropActions = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (handle__supportedDropActions == 0) {
			return QAbstractProxyModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_supportedDropActions(this, handle__supportedDropActions);
		return static_cast<QFlags<Qt::DropAction>>(callback_return_value);
	}

	friend int QAbstractProxyModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__roleNames = 0;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (handle__roleNames == 0) {
			return QAbstractProxyModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_roleNames(this, handle__roleNames);
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

	friend struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__index = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (handle__index == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_index(this, handle__index, sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parent = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (handle__parent == 0) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_parent(this, handle__parent, sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__rowCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (handle__rowCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_rowCount(this, handle__rowCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__columnCount = 0;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (handle__columnCount == 0) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_columnCount(this, handle__columnCount, sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (handle__insertRows == 0) {
			return QAbstractProxyModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_insertRows(this, handle__insertRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__insertColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__insertColumns == 0) {
			return QAbstractProxyModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_insertColumns(this, handle__insertColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (handle__removeRows == 0) {
			return QAbstractProxyModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_removeRows(this, handle__removeRows, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__removeColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (handle__removeColumns == 0) {
			return QAbstractProxyModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_removeColumns(this, handle__removeColumns, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveRows = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveRows == 0) {
			return QAbstractProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_moveRows(this, handle__moveRows, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveColumns = 0;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (handle__moveColumns == 0) {
			return QAbstractProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_moveColumns(this, handle__moveColumns, sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__match = 0;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (handle__match == 0) {
			return QAbstractProxyModel::match(start, role, value, hits, flags);
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
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_match(this, handle__match, sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__multiData = 0;

	// Subclass to allow providing a Go implementation
	virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
		if (handle__multiData == 0) {
			QAbstractProxyModel::multiData(index, roleDataSpan);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelRoleDataSpan* sigval2 = new QModelRoleDataSpan(roleDataSpan);
		miqt_exec_callback_QAbstractProxyModel_multiData(this, handle__multiData, sigval1, sigval2);

	}

	friend void QAbstractProxyModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAbstractProxyModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAbstractProxyModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QModelIndex* QAbstractProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column, uint64_t id);
	friend void QAbstractProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QAbstractProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QAbstractProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QAbstractProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QAbstractProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QAbstractProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QAbstractProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractProxyModel* QAbstractProxyModel_new() {
	return new (std::nothrow) MiqtVirtualQAbstractProxyModel();
}

QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAbstractProxyModel(parent);
}

void QAbstractProxyModel_virtbase(QAbstractProxyModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QAbstractProxyModel_metaObject(const QAbstractProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QAbstractProxyModel_tr(const char* s) {
	QString _ret = QAbstractProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractProxyModel_setSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QAbstractItemModel* QAbstractProxyModel_sourceModel(const QAbstractProxyModel* self) {
	return self->sourceModel();
}

QModelIndex* QAbstractProxyModel_mapToSource(const QAbstractProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QAbstractProxyModel_mapFromSource(const QAbstractProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QItemSelection* QAbstractProxyModel_mapSelectionToSource(const QAbstractProxyModel* self, QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionToSource(*selection));
}

QItemSelection* QAbstractProxyModel_mapSelectionFromSource(const QAbstractProxyModel* self, QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionFromSource(*selection));
}

bool QAbstractProxyModel_submit(QAbstractProxyModel* self) {
	return self->submit();
}

void QAbstractProxyModel_revert(QAbstractProxyModel* self) {
	self->revert();
}

QVariant* QAbstractProxyModel_data(const QAbstractProxyModel* self, QModelIndex* proxyIndex, int role) {
	return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
}

QVariant* QAbstractProxyModel_headerData(const QAbstractProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_itemData(const QAbstractProxyModel* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = self->itemData(*index);
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

int QAbstractProxyModel_flags(const QAbstractProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

bool QAbstractProxyModel_setData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QAbstractProxyModel_setItemData(QAbstractProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

bool QAbstractProxyModel_setHeaderData(QAbstractProxyModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QAbstractProxyModel_clearItemData(QAbstractProxyModel* self, QModelIndex* index) {
	return self->clearItemData(*index);
}

QModelIndex* QAbstractProxyModel_buddy(const QAbstractProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

bool QAbstractProxyModel_canFetchMore(const QAbstractProxyModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

void QAbstractProxyModel_fetchMore(QAbstractProxyModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

void QAbstractProxyModel_sort(QAbstractProxyModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QSize* QAbstractProxyModel_span(const QAbstractProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

bool QAbstractProxyModel_hasChildren(const QAbstractProxyModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QModelIndex* QAbstractProxyModel_sibling(const QAbstractProxyModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QMimeData* QAbstractProxyModel_mimeData(const QAbstractProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QAbstractProxyModel_canDropMimeData(const QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractProxyModel_dropMimeData(QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_mimeTypes(const QAbstractProxyModel* self) {
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

int QAbstractProxyModel_supportedDragActions(const QAbstractProxyModel* self) {
	Qt::DropActions _ret = self->supportedDragActions();
	return static_cast<int>(_ret);
}

int QAbstractProxyModel_supportedDropActions(const QAbstractProxyModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_roleNames(const QAbstractProxyModel* self) {
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

struct miqt_string QAbstractProxyModel_tr2(const char* s, const char* c) {
	QString _ret = QAbstractProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSourceModel = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* sourceModel) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::setSourceModel(sourceModel);
}

bool QAbstractProxyModel_override_virtual_mapToSource(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapToSource = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapFromSource = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_mapSelectionToSource(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapSelectionToSource = slot;
	return true;
}

QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection) {
	return new QItemSelection(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::mapSelectionToSource(*selection));
}

bool QAbstractProxyModel_override_virtual_mapSelectionFromSource(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapSelectionFromSource = slot;
	return true;
}

QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection) {
	return new QItemSelection(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::mapSelectionFromSource(*selection));
}

bool QAbstractProxyModel_override_virtual_submit(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::submit();
}

bool QAbstractProxyModel_override_virtual_revert(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::revert();
}

bool QAbstractProxyModel_override_virtual_data(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = slot;
	return true;
}

QVariant* QAbstractProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role) {
	return new QVariant(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::data(*proxyIndex, static_cast<int>(role)));
}

bool QAbstractProxyModel_override_virtual_headerData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = slot;
	return true;
}

QVariant* QAbstractProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractProxyModel_override_virtual_itemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = slot;
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::itemData(*index);
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

bool QAbstractProxyModel_override_virtual_flags(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = slot;
	return true;
}

int QAbstractProxyModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QAbstractProxyModel_override_virtual_setData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::setData(*index, *value, static_cast<int>(role));
}

bool QAbstractProxyModel_override_virtual_setItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::setItemData(*index, roles_QMap);
}

bool QAbstractProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QAbstractProxyModel_override_virtual_clearItemData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clearItemData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_clearItemData(void* self, QModelIndex* index) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::clearItemData(*index);
}

bool QAbstractProxyModel_override_virtual_buddy(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = slot;
	return true;
}

QModelIndex* QAbstractProxyModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::buddy(*index));
}

bool QAbstractProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::canFetchMore(*parent);
}

bool QAbstractProxyModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::fetchMore(*parent);
}

bool QAbstractProxyModel_override_virtual_sort(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QAbstractProxyModel_override_virtual_span(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = slot;
	return true;
}

QSize* QAbstractProxyModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::span(*index));
}

bool QAbstractProxyModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasChildren = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::hasChildren(*parent);
}

bool QAbstractProxyModel_override_virtual_sibling(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = slot;
	return true;
}

QModelIndex* QAbstractProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractProxyModel_override_virtual_mimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = slot;
	return true;
}

QMimeData* QAbstractProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::mimeData(indexes_QList);
}

bool QAbstractProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::mimeTypes();
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

bool QAbstractProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = slot;
	return true;
}

int QAbstractProxyModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = slot;
	return true;
}

int QAbstractProxyModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QAbstractProxyModel_override_virtual_roleNames(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = slot;
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::roleNames();
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

bool QAbstractProxyModel_override_virtual_index(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_parent(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parent = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_rowCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_columnCount(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = slot;
	return true;
}

bool QAbstractProxyModel_override_virtual_insertRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractProxyModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractProxyModel_override_virtual_removeRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractProxyModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractProxyModel_override_virtual_moveRows(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractProxyModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractProxyModel_override_virtual_match(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = slot;
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<QFlags<Qt::MatchFlag>>(flags));
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

bool QAbstractProxyModel_override_virtual_multiData(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__multiData = slot;
	return true;
}

void QAbstractProxyModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan) {
	static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::multiData(*index, *roleDataSpan);
}

bool QAbstractProxyModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::event(event);
}

bool QAbstractProxyModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAbstractProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::eventFilter(watched, event);
}

QModelIndex* QAbstractProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column, uint64_t id) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column), static_cast<uint64_t>(id)));
}

void QAbstractProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
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

bool QAbstractProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

void QAbstractProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QAbstractProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

bool QAbstractProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QAbstractProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

void QAbstractProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QAbstractProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

bool QAbstractProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QAbstractProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QAbstractProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QAbstractProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QAbstractProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QAbstractProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
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

QObject* QAbstractProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAbstractProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAbstractProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAbstractProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractProxyModel* self_cast = static_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAbstractProxyModel_delete(QAbstractProxyModel* self) {
	delete self;
}

QBasicTimer* QBasicTimer_new() {
	return new (std::nothrow) QBasicTimer();
}

void QBasicTimer_swap(QBasicTimer* self, QBasicTimer* other) {
	self->swap(*other);
}

bool QBasicTimer_isActive(const QBasicTimer* self) {
	return self->isActive();
}

int QBasicTimer_timerId(const QBasicTimer* self) {
	return self->timerId();
}

int QBasicTimer_id(const QBasicTimer* self) {
	Qt::TimerId _ret = self->id();
	return static_cast<int>(_ret);
}

void QBasicTimer_start(QBasicTimer* self, int msec, QObject* obj) {
	self->start(static_cast<int>(msec), obj);
}

void QBasicTimer_start2(QBasicTimer* self, int msec, int timerType, QObject* obj) {
	self->start(static_cast<int>(msec), static_cast<Qt::TimerType>(timerType), obj);
}

void QBasicTimer_start3(QBasicTimer* self, int duration, QObject* obj) {
	self->start(static_cast<QBasicTimer::Duration>(duration), obj);
}

void QBasicTimer_start4(QBasicTimer* self, int duration, int timerType, QObject* obj) {
	self->start(static_cast<QBasicTimer::Duration>(duration), static_cast<Qt::TimerType>(timerType), obj);
}

void QBasicTimer_stop(QBasicTimer* self) {
	self->stop();
}

void QBasicTimer_delete(QBasicTimer* self) {
	delete self;
}

bool QEvent_spontaneous(const QEvent* self) {
	return self->spontaneous();
}

void QEvent_setAccepted(QEvent* self, bool accepted) {
	self->setAccepted(accepted);
}

bool QEvent_isAccepted(const QEvent* self) {
	return self->isAccepted();
}

void QEvent_accept(QEvent* self) {
	self->accept();
}

void QEvent_ignore(QEvent* self) {
	self->ignore();
}

bool QEvent_isInputEvent(const QEvent* self) {
	return self->isInputEvent();
}

bool QEvent_isPointerEvent(const QEvent* self) {
	return self->isPointerEvent();
}

bool QEvent_isSinglePointEvent(const QEvent* self) {
	return self->isSinglePointEvent();
}

int QEvent_registerEventType() {
	return QEvent::registerEventType();
}

QEvent* QEvent_clone(const QEvent* self) {
	return self->clone();
}

int QEvent_registerEventTypeWithHint(int hint) {
	return QEvent::registerEventType(static_cast<int>(hint));
}

void QEvent_delete(QEvent* self) {
	delete self;
}

class MiqtVirtualQTimerEvent final : public QTimerEvent {
public:

	MiqtVirtualQTimerEvent(int timerId): QTimerEvent(timerId) {}
	MiqtVirtualQTimerEvent(Qt::TimerId timerId): QTimerEvent(timerId) {}

	virtual ~MiqtVirtualQTimerEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTimerEvent* clone() const override {
		if (handle__clone == 0) {
			return QTimerEvent::clone();
		}

		QTimerEvent* callback_return_value = miqt_exec_callback_QTimerEvent_clone(this, handle__clone);
		return callback_return_value;
	}

	friend QTimerEvent* QTimerEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QTimerEvent::setAccepted(accepted);
			return;
		}

		bool sigval1 = accepted;
		miqt_exec_callback_QTimerEvent_setAccepted(this, handle__setAccepted, sigval1);

	}

	friend void QTimerEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QTimerEvent* QTimerEvent_new(int timerId) {
	return new (std::nothrow) MiqtVirtualQTimerEvent(static_cast<int>(timerId));
}

QTimerEvent* QTimerEvent_new2(int timerId) {
	return new (std::nothrow) MiqtVirtualQTimerEvent(static_cast<Qt::TimerId>(timerId));
}

void QTimerEvent_virtbase(QTimerEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QTimerEvent* QTimerEvent_clone(const QTimerEvent* self) {
	return self->clone();
}

int QTimerEvent_timerId(const QTimerEvent* self) {
	return self->timerId();
}

int QTimerEvent_id(const QTimerEvent* self) {
	Qt::TimerId _ret = self->id();
	return static_cast<int>(_ret);
}

bool QTimerEvent_matches(const QTimerEvent* self, QBasicTimer* timer) {
	return self->matches(*timer);
}

bool QTimerEvent_override_virtual_clone(void* self, intptr_t slot) {
	MiqtVirtualQTimerEvent* self_cast = static_cast<MiqtVirtualQTimerEvent*>( (QTimerEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = slot;
	return true;
}

QTimerEvent* QTimerEvent_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQTimerEvent*>(self)->QTimerEvent::clone();
}

bool QTimerEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	MiqtVirtualQTimerEvent* self_cast = static_cast<MiqtVirtualQTimerEvent*>( (QTimerEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAccepted = slot;
	return true;
}

void QTimerEvent_virtualbase_setAccepted(void* self, bool accepted) {
	static_cast<MiqtVirtualQTimerEvent*>(self)->QTimerEvent::setAccepted(accepted);
}

void QTimerEvent_delete(QTimerEvent* self) {
	delete self;
}

void QChildEvent_virtbase(QChildEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QChildEvent* QChildEvent_clone(const QChildEvent* self) {
	return self->clone();
}

QObject* QChildEvent_child(const QChildEvent* self) {
	return self->child();
}

bool QChildEvent_added(const QChildEvent* self) {
	return self->added();
}

bool QChildEvent_polished(const QChildEvent* self) {
	return self->polished();
}

bool QChildEvent_removed(const QChildEvent* self) {
	return self->removed();
}

void QChildEvent_delete(QChildEvent* self) {
	delete self;
}

class MiqtVirtualQCoreApplication final : public QCoreApplication {
public:

	MiqtVirtualQCoreApplication(int& argc, char** argv): QCoreApplication(argc, argv) {}
	MiqtVirtualQCoreApplication(int& argc, char** argv, int param3): QCoreApplication(argc, argv, param3) {}

	virtual ~MiqtVirtualQCoreApplication() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__notify = 0;

	// Subclass to allow providing a Go implementation
	virtual bool notify(QObject* param1, QEvent* param2) override {
		if (handle__notify == 0) {
			return QCoreApplication::notify(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QCoreApplication_notify(this, handle__notify, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QCoreApplication_virtualbase_notify(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QCoreApplication::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QCoreApplication_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QCoreApplication_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCoreApplication::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QCoreApplication_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QCoreApplication_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend void* QCoreApplication_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision);
	friend QObject* QCoreApplication_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCoreApplication_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCoreApplication_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCoreApplication_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCoreApplication* QCoreApplication_new(int* argc, char** argv) {
	return new (std::nothrow) MiqtVirtualQCoreApplication(*argc, argv);
}

QCoreApplication* QCoreApplication_new2(int* argc, char** argv, int param3) {
	return new (std::nothrow) MiqtVirtualQCoreApplication(*argc, argv, static_cast<int>(param3));
}

void QCoreApplication_virtbase(QCoreApplication* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QCoreApplication_metaObject(const QCoreApplication* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QCoreApplication_tr(const char* s) {
	QString _ret = QCoreApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCoreApplication_arguments() {
	QStringList _ret = QCoreApplication::arguments();
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

void QCoreApplication_setAttribute(int attribute) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

bool QCoreApplication_testAttribute(int attribute) {
	return QCoreApplication::testAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

void QCoreApplication_setOrganizationDomain(struct miqt_string orgDomain) {
	QString orgDomain_QString = QString::fromUtf8(orgDomain.data, orgDomain.len);
	QCoreApplication::setOrganizationDomain(orgDomain_QString);
}

struct miqt_string QCoreApplication_organizationDomain() {
	QString _ret = QCoreApplication::organizationDomain();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setOrganizationName(struct miqt_string orgName) {
	QString orgName_QString = QString::fromUtf8(orgName.data, orgName.len);
	QCoreApplication::setOrganizationName(orgName_QString);
}

struct miqt_string QCoreApplication_organizationName() {
	QString _ret = QCoreApplication::organizationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setApplicationName(struct miqt_string application) {
	QString application_QString = QString::fromUtf8(application.data, application.len);
	QCoreApplication::setApplicationName(application_QString);
}

struct miqt_string QCoreApplication_applicationName() {
	QString _ret = QCoreApplication::applicationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setApplicationVersion(struct miqt_string version) {
	QString version_QString = QString::fromUtf8(version.data, version.len);
	QCoreApplication::setApplicationVersion(version_QString);
}

struct miqt_string QCoreApplication_applicationVersion() {
	QString _ret = QCoreApplication::applicationVersion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setSetuidAllowed(bool allow) {
	QCoreApplication::setSetuidAllowed(allow);
}

bool QCoreApplication_isSetuidAllowed() {
	return QCoreApplication::isSetuidAllowed();
}

QCoreApplication* QCoreApplication_instance() {
	return QCoreApplication::instance();
}

bool QCoreApplication_instanceExists() {
	return QCoreApplication::instanceExists();
}

int QCoreApplication_exec() {
	return QCoreApplication::exec();
}

void QCoreApplication_processEvents() {
	QCoreApplication::processEvents();
}

void QCoreApplication_processEvents2(int flags, int maxtime) {
	QCoreApplication::processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags), static_cast<int>(maxtime));
}

void QCoreApplication_processEvents3(int flags, QDeadlineTimer* deadline) {
	QCoreApplication::processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags), *deadline);
}

bool QCoreApplication_sendEvent(QObject* receiver, QEvent* event) {
	return QCoreApplication::sendEvent(receiver, event);
}

void QCoreApplication_postEvent(QObject* receiver, QEvent* event) {
	QCoreApplication::postEvent(receiver, event);
}

void QCoreApplication_sendPostedEvents() {
	QCoreApplication::sendPostedEvents();
}

void QCoreApplication_removePostedEvents(QObject* receiver) {
	QCoreApplication::removePostedEvents(receiver);
}

QAbstractEventDispatcher* QCoreApplication_eventDispatcher() {
	return QCoreApplication::eventDispatcher();
}

void QCoreApplication_setEventDispatcher(QAbstractEventDispatcher* eventDispatcher) {
	QCoreApplication::setEventDispatcher(eventDispatcher);
}

bool QCoreApplication_notify(QCoreApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

bool QCoreApplication_startingUp() {
	return QCoreApplication::startingUp();
}

bool QCoreApplication_closingDown() {
	return QCoreApplication::closingDown();
}

struct miqt_string QCoreApplication_applicationDirPath() {
	QString _ret = QCoreApplication::applicationDirPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_applicationFilePath() {
	QString _ret = QCoreApplication::applicationFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QCoreApplication_applicationPid() {
	long long _ret = QCoreApplication::applicationPid();
	return static_cast<long long>(_ret);
}

int QCoreApplication_checkPermission(QCoreApplication* self, QPermission* permission) {
	Qt::PermissionStatus _ret = self->checkPermission(*permission);
	return static_cast<int>(_ret);
}

void QCoreApplication_setLibraryPaths(struct miqt_array /* of struct miqt_string */  libraryPaths) {
	QStringList libraryPaths_QList;
	libraryPaths_QList.reserve(libraryPaths.len);
	struct miqt_string* libraryPaths_arr = static_cast<struct miqt_string*>(libraryPaths.data);
	for(size_t i = 0; i < libraryPaths.len; ++i) {
		QString libraryPaths_arr_i_QString = QString::fromUtf8(libraryPaths_arr[i].data, libraryPaths_arr[i].len);
		libraryPaths_QList.push_back(libraryPaths_arr_i_QString);
	}
	QCoreApplication::setLibraryPaths(libraryPaths_QList);
}

struct miqt_array /* of struct miqt_string */  QCoreApplication_libraryPaths() {
	QStringList _ret = QCoreApplication::libraryPaths();
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

void QCoreApplication_addLibraryPath(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QCoreApplication::addLibraryPath(param1_QString);
}

void QCoreApplication_removeLibraryPath(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QCoreApplication::removeLibraryPath(param1_QString);
}

bool QCoreApplication_installTranslator(QTranslator* messageFile) {
	return QCoreApplication::installTranslator(messageFile);
}

bool QCoreApplication_removeTranslator(QTranslator* messageFile) {
	return QCoreApplication::removeTranslator(messageFile);
}

struct miqt_string QCoreApplication_translate(const char* context, const char* key) {
	QString _ret = QCoreApplication::translate(context, key);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_installNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
	self->installNativeEventFilter(filterObj);
}

void QCoreApplication_removeNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
	self->removeNativeEventFilter(filterObj);
}

bool QCoreApplication_isQuitLockEnabled() {
	return QCoreApplication::isQuitLockEnabled();
}

void QCoreApplication_setQuitLockEnabled(bool enabled) {
	QCoreApplication::setQuitLockEnabled(enabled);
}

void QCoreApplication_quit() {
	QCoreApplication::quit();
}

void QCoreApplication_exit() {
	QCoreApplication::exit();
}

void QCoreApplication_organizationNameChanged(QCoreApplication* self) {
	self->organizationNameChanged();
}

void QCoreApplication_connect_organizationNameChanged(QCoreApplication* self, intptr_t slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationNameChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_organizationNameChanged(slot);
	});
}

void QCoreApplication_organizationDomainChanged(QCoreApplication* self) {
	self->organizationDomainChanged();
}

void QCoreApplication_connect_organizationDomainChanged(QCoreApplication* self, intptr_t slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationDomainChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_organizationDomainChanged(slot);
	});
}

void QCoreApplication_applicationNameChanged(QCoreApplication* self) {
	self->applicationNameChanged();
}

void QCoreApplication_connect_applicationNameChanged(QCoreApplication* self, intptr_t slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationNameChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_applicationNameChanged(slot);
	});
}

void QCoreApplication_applicationVersionChanged(QCoreApplication* self) {
	self->applicationVersionChanged();
}

void QCoreApplication_connect_applicationVersionChanged(QCoreApplication* self, intptr_t slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationVersionChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_applicationVersionChanged(slot);
	});
}

struct miqt_string QCoreApplication_tr2(const char* s, const char* c) {
	QString _ret = QCoreApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_tr3(const char* s, const char* c, int n) {
	QString _ret = QCoreApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setAttribute2(int attribute, bool on) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute), on);
}

void QCoreApplication_processEventsWithFlags(int flags) {
	QCoreApplication::processEvents(static_cast<QFlags<QEventLoop::ProcessEventsFlag>>(flags));
}

void QCoreApplication_postEvent2(QObject* receiver, QEvent* event, int priority) {
	QCoreApplication::postEvent(receiver, event, static_cast<int>(priority));
}

void QCoreApplication_sendPostedEventsWithReceiver(QObject* receiver) {
	QCoreApplication::sendPostedEvents(receiver);
}

void QCoreApplication_sendPostedEvents2(QObject* receiver, int event_type) {
	QCoreApplication::sendPostedEvents(receiver, static_cast<int>(event_type));
}

void QCoreApplication_removePostedEvents2(QObject* receiver, int eventType) {
	QCoreApplication::removePostedEvents(receiver, static_cast<int>(eventType));
}

struct miqt_string QCoreApplication_translate2(const char* context, const char* key, const char* disambiguation) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_translate3(const char* context, const char* key, const char* disambiguation, int n) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_exitWithRetcode(int retcode) {
	QCoreApplication::exit(static_cast<int>(retcode));
}

bool QCoreApplication_override_virtual_notify(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = static_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__notify = slot;
	return true;
}

bool QCoreApplication_virtualbase_notify(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQCoreApplication*>(self)->QCoreApplication::notify(param1, param2);
}

bool QCoreApplication_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = static_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QCoreApplication_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQCoreApplication*>(self)->QCoreApplication::event(event);
}

bool QCoreApplication_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = static_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCoreApplication_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQCoreApplication*>(self)->QCoreApplication::eventFilter(watched, event);
}

void* QCoreApplication_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision) {
	MiqtVirtualQCoreApplication* self_cast = static_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->resolveInterface(name, static_cast<int>(revision));
}

QObject* QCoreApplication_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCoreApplication* self_cast = static_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QCoreApplication_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCoreApplication* self_cast = static_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QCoreApplication_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCoreApplication* self_cast = static_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QCoreApplication_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCoreApplication* self_cast = static_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QCoreApplication_delete(QCoreApplication* self) {
	delete self;
}

QBitArray* QBitArray_new() {
	return new (std::nothrow) QBitArray();
}

QBitArray* QBitArray_new2(int64_t size) {
	return new (std::nothrow) QBitArray((int64_t)(size));
}

QBitArray* QBitArray_new3(QBitArray* other) {
	return new (std::nothrow) QBitArray(*other);
}

QBitArray* QBitArray_new4(int64_t size, bool val) {
	return new (std::nothrow) QBitArray((int64_t)(size), val);
}

void QBitArray_swap(QBitArray* self, QBitArray* other) {
	self->swap(*other);
}

int64_t QBitArray_size(const QBitArray* self) {
	int64_t _ret = self->size();
	return static_cast<int64_t>(_ret);
}

int64_t QBitArray_count(const QBitArray* self) {
	int64_t _ret = self->count();
	return static_cast<int64_t>(_ret);
}

int64_t QBitArray_countWithOn(const QBitArray* self, bool on) {
	int64_t _ret = self->count(on);
	return static_cast<int64_t>(_ret);
}

bool QBitArray_isEmpty(const QBitArray* self) {
	return self->isEmpty();
}

bool QBitArray_isNull(const QBitArray* self) {
	return self->isNull();
}

void QBitArray_resize(QBitArray* self, int64_t size) {
	self->resize((int64_t)(size));
}

void QBitArray_detach(QBitArray* self) {
	self->detach();
}

bool QBitArray_isDetached(const QBitArray* self) {
	return self->isDetached();
}

void QBitArray_clear(QBitArray* self) {
	self->clear();
}

bool QBitArray_testBit(const QBitArray* self, int64_t i) {
	return self->testBit((int64_t)(i));
}

void QBitArray_setBit(QBitArray* self, int64_t i) {
	self->setBit((int64_t)(i));
}

void QBitArray_setBit2(QBitArray* self, int64_t i, bool val) {
	self->setBit((int64_t)(i), val);
}

void QBitArray_clearBit(QBitArray* self, int64_t i) {
	self->clearBit((int64_t)(i));
}

bool QBitArray_toggleBit(QBitArray* self, int64_t i) {
	return self->toggleBit((int64_t)(i));
}

bool QBitArray_at(const QBitArray* self, int64_t i) {
	return self->at((int64_t)(i));
}

QBitRef* QBitArray_operatorSubscript(QBitArray* self, int64_t i) {
	return new QBitRef(self->operator[]((int64_t)(i)));
}

bool QBitArray_operatorSubscriptWithQsizetype(const QBitArray* self, int64_t i) {
	return self->operator[]((int64_t)(i));
}

void QBitArray_operatorBitwiseAndAssign(QBitArray* self, QBitArray* param1) {
	self->operator&=(*param1);
}

void QBitArray_operatorBitwiseOrAssign(QBitArray* self, QBitArray* param1) {
	self->operator|=(*param1);
}

void QBitArray_operatorBitwiseNotAssign(QBitArray* self, QBitArray* param1) {
	self->operator^=(*param1);
}

bool QBitArray_fill(QBitArray* self, bool aval) {
	return self->fill(aval);
}

void QBitArray_fill2(QBitArray* self, bool val, int64_t first, int64_t last) {
	self->fill(val, (int64_t)(first), (int64_t)(last));
}

void QBitArray_truncate(QBitArray* self, int64_t pos) {
	self->truncate((int64_t)(pos));
}

const char* QBitArray_bits(const QBitArray* self) {
	return (const char*) self->bits();
}

QBitArray* QBitArray_fromBits(const char* data, int64_t len) {
	return new QBitArray(QBitArray::fromBits(data, (int64_t)(len)));
}

unsigned int QBitArray_toUInt32(const QBitArray* self, int endianness) {
	unsigned int _ret = self->toUInt32(static_cast<QSysInfo::Endian>(endianness));
	return static_cast<unsigned int>(_ret);
}

bool QBitArray_fill3(QBitArray* self, bool aval, int64_t asize) {
	return self->fill(aval, (int64_t)(asize));
}

unsigned int QBitArray_toUInt322(const QBitArray* self, int endianness, bool* ok) {
	unsigned int _ret = self->toUInt32(static_cast<QSysInfo::Endian>(endianness), ok);
	return static_cast<unsigned int>(_ret);
}

void QBitArray_delete(QBitArray* self) {
	delete self;
}

QBitRef* QBitRef_new(QBitRef* param1) {
	return new (std::nothrow) QBitRef(*param1);
}

bool QBitRef_ToBool(const QBitRef* self) {
	return self->operator bool();
}

bool QBitRef_operatorNot(const QBitRef* self) {
	return self->operator!();
}

void QBitRef_delete(QBitRef* self) {
	delete self;
}

void QIODevice_virtbase(QIODevice* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QIODevice_metaObject(const QIODevice* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QIODevice_tr(const char* s) {
	QString _ret = QIODevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QIODevice_openMode(const QIODevice* self) {
	QIODeviceBase::OpenMode _ret = self->openMode();
	return static_cast<int>(_ret);
}

void QIODevice_setTextModeEnabled(QIODevice* self, bool enabled) {
	self->setTextModeEnabled(enabled);
}

bool QIODevice_isTextModeEnabled(const QIODevice* self) {
	return self->isTextModeEnabled();
}

bool QIODevice_isOpen(const QIODevice* self) {
	return self->isOpen();
}

bool QIODevice_isReadable(const QIODevice* self) {
	return self->isReadable();
}

bool QIODevice_isWritable(const QIODevice* self) {
	return self->isWritable();
}

bool QIODevice_isSequential(const QIODevice* self) {
	return self->isSequential();
}

int QIODevice_readChannelCount(const QIODevice* self) {
	return self->readChannelCount();
}

int QIODevice_writeChannelCount(const QIODevice* self) {
	return self->writeChannelCount();
}

int QIODevice_currentReadChannel(const QIODevice* self) {
	return self->currentReadChannel();
}

void QIODevice_setCurrentReadChannel(QIODevice* self, int channel) {
	self->setCurrentReadChannel(static_cast<int>(channel));
}

int QIODevice_currentWriteChannel(const QIODevice* self) {
	return self->currentWriteChannel();
}

void QIODevice_setCurrentWriteChannel(QIODevice* self, int channel) {
	self->setCurrentWriteChannel(static_cast<int>(channel));
}

bool QIODevice_open(QIODevice* self, int mode) {
	return self->open(static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(mode));
}

void QIODevice_close(QIODevice* self) {
	self->close();
}

long long QIODevice_pos(const QIODevice* self) {
	long long _ret = self->pos();
	return static_cast<long long>(_ret);
}

long long QIODevice_size(const QIODevice* self) {
	long long _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QIODevice_seek(QIODevice* self, long long pos) {
	return self->seek(static_cast<long long>(pos));
}

bool QIODevice_atEnd(const QIODevice* self) {
	return self->atEnd();
}

bool QIODevice_reset(QIODevice* self) {
	return self->reset();
}

long long QIODevice_bytesAvailable(const QIODevice* self) {
	long long _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QIODevice_bytesToWrite(const QIODevice* self) {
	long long _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

long long QIODevice_read(QIODevice* self, char* data, long long maxlen) {
	long long _ret = self->read(data, static_cast<long long>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_readWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->read(static_cast<long long>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_readAll(QIODevice* self) {
	QByteArray _qb = self->readAll();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long long QIODevice_readLine(QIODevice* self, char* data, long long maxlen) {
	long long _ret = self->readLine(data, static_cast<long long>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_readLine2(QIODevice* self) {
	QByteArray _qb = self->readLine();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QIODevice_canReadLine(const QIODevice* self) {
	return self->canReadLine();
}

void QIODevice_startTransaction(QIODevice* self) {
	self->startTransaction();
}

void QIODevice_commitTransaction(QIODevice* self) {
	self->commitTransaction();
}

void QIODevice_rollbackTransaction(QIODevice* self) {
	self->rollbackTransaction();
}

bool QIODevice_isTransactionStarted(const QIODevice* self) {
	return self->isTransactionStarted();
}

long long QIODevice_write(QIODevice* self, const char* data, long long len) {
	long long _ret = self->write(data, static_cast<long long>(len));
	return static_cast<long long>(_ret);
}

long long QIODevice_writeWithData(QIODevice* self, const char* data) {
	long long _ret = self->write(data);
	return static_cast<long long>(_ret);
}

long long QIODevice_write2(QIODevice* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	long long _ret = self->write(data_QByteArray);
	return static_cast<long long>(_ret);
}

long long QIODevice_peek(QIODevice* self, char* data, long long maxlen) {
	long long _ret = self->peek(data, static_cast<long long>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_peekWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->peek(static_cast<long long>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long long QIODevice_skip(QIODevice* self, long long maxSize) {
	long long _ret = self->skip(static_cast<long long>(maxSize));
	return static_cast<long long>(_ret);
}

bool QIODevice_waitForReadyRead(QIODevice* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QIODevice_waitForBytesWritten(QIODevice* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

void QIODevice_ungetChar(QIODevice* self, char c) {
	self->ungetChar(static_cast<char>(c));
}

bool QIODevice_putChar(QIODevice* self, char c) {
	return self->putChar(static_cast<char>(c));
}

bool QIODevice_getChar(QIODevice* self, char* c) {
	return self->getChar(c);
}

struct miqt_string QIODevice_errorString(const QIODevice* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIODevice_readyRead(QIODevice* self) {
	self->readyRead();
}

void QIODevice_connect_readyRead(QIODevice* self, intptr_t slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::readyRead), self, [=]() {
		miqt_exec_callback_QIODevice_readyRead(slot);
	});
}

void QIODevice_channelReadyRead(QIODevice* self, int channel) {
	self->channelReadyRead(static_cast<int>(channel));
}

void QIODevice_connect_channelReadyRead(QIODevice* self, intptr_t slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)(int)>(&QIODevice::channelReadyRead), self, [=](int channel) {
		int sigval1 = channel;
		miqt_exec_callback_QIODevice_channelReadyRead(slot, sigval1);
	});
}

void QIODevice_bytesWritten(QIODevice* self, long long bytes) {
	self->bytesWritten(static_cast<long long>(bytes));
}

void QIODevice_connect_bytesWritten(QIODevice* self, intptr_t slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)(qint64)>(&QIODevice::bytesWritten), self, [=](qint64 bytes) {
		long long bytes_ret = bytes;
		long long sigval1 = static_cast<long long>(bytes_ret);
		miqt_exec_callback_QIODevice_bytesWritten(slot, sigval1);
	});
}

void QIODevice_channelBytesWritten(QIODevice* self, int channel, long long bytes) {
	self->channelBytesWritten(static_cast<int>(channel), static_cast<long long>(bytes));
}

void QIODevice_connect_channelBytesWritten(QIODevice* self, intptr_t slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)(int, qint64)>(&QIODevice::channelBytesWritten), self, [=](int channel, qint64 bytes) {
		int sigval1 = channel;
		long long bytes_ret = bytes;
		long long sigval2 = static_cast<long long>(bytes_ret);
		miqt_exec_callback_QIODevice_channelBytesWritten(slot, sigval1, sigval2);
	});
}

void QIODevice_aboutToClose(QIODevice* self) {
	self->aboutToClose();
}

void QIODevice_connect_aboutToClose(QIODevice* self, intptr_t slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::aboutToClose), self, [=]() {
		miqt_exec_callback_QIODevice_aboutToClose(slot);
	});
}

void QIODevice_readChannelFinished(QIODevice* self) {
	self->readChannelFinished();
}

void QIODevice_connect_readChannelFinished(QIODevice* self, intptr_t slot) {
	QIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::readChannelFinished), self, [=]() {
		miqt_exec_callback_QIODevice_readChannelFinished(slot);
	});
}

struct miqt_string QIODevice_tr2(const char* s, const char* c) {
	QString _ret = QIODevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_tr3(const char* s, const char* c, int n) {
	QString _ret = QIODevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_readLineWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->readLine(static_cast<long long>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QIODevice_delete(QIODevice* self) {
	delete self;
}

QLocale* QLocale_new() {
	return new (std::nothrow) QLocale();
}

QLocale* QLocale_new2(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QLocale(name_QString);
}

QLocale* QLocale_new3(QLocale* other) {
	return new (std::nothrow) QLocale(*other);
}

void QLocale_swap(QLocale* self, QLocale* other) {
	self->swap(*other);
}

struct miqt_string QLocale_name(const QLocale* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_bcp47Name(const QLocale* self) {
	QString _ret = self->bcp47Name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_nativeLanguageName(const QLocale* self) {
	QString _ret = self->nativeLanguageName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_nativeTerritoryName(const QLocale* self) {
	QString _ret = self->nativeTerritoryName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_nativeCountryName(const QLocale* self) {
	QString _ret = self->nativeCountryName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

short QLocale_toShort(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toShort(s_QString);
}

unsigned short QLocale_toUShort(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	unsigned short _ret = self->toUShort(s_QString);
	return static_cast<unsigned short>(_ret);
}

int QLocale_toInt(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toInt(s_QString);
}

unsigned int QLocale_toUInt(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	unsigned int _ret = self->toUInt(s_QString);
	return static_cast<unsigned int>(_ret);
}

long QLocale_toLong(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toLong(s_QString);
}

unsigned long QLocale_toULong(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	unsigned long _ret = self->toULong(s_QString);
	return static_cast<unsigned long>(_ret);
}

long long QLocale_toLongLong(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	long long _ret = self->toLongLong(s_QString);
	return static_cast<long long>(_ret);
}

unsigned long long QLocale_toULongLong(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	unsigned long long _ret = self->toULongLong(s_QString);
	return static_cast<unsigned long long>(_ret);
}

float QLocale_toFloat(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toFloat(s_QString);
}

double QLocale_toDouble(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toDouble(s_QString);
}

struct miqt_string QLocale_toString(const QLocale* self, long long i) {
	QString _ret = self->toString(static_cast<long long>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithQulonglong(const QLocale* self, unsigned long long i) {
	QString _ret = self->toString(static_cast<unsigned long long>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithLong(const QLocale* self, long i) {
	QString _ret = self->toString(static_cast<long>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithUlong(const QLocale* self, unsigned long i) {
	QString _ret = self->toString(static_cast<unsigned long>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithShort(const QLocale* self, short i) {
	QString _ret = self->toString(static_cast<short>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithUshort(const QLocale* self, unsigned short i) {
	QString _ret = self->toString(static_cast<unsigned short>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithInt(const QLocale* self, int i) {
	QString _ret = self->toString(static_cast<int>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithUint(const QLocale* self, unsigned int i) {
	QString _ret = self->toString(static_cast<unsigned int>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithDouble(const QLocale* self, double f) {
	QString _ret = self->toString(static_cast<double>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithFloat(const QLocale* self, float f) {
	QString _ret = self->toString(static_cast<float>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString10(const QLocale* self, QDate* date, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(*date, format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString11(const QLocale* self, QTime* time, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(*time, format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString12(const QLocale* self, QDateTime* dateTime, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(*dateTime, format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithDate(const QLocale* self, QDate* date) {
	QString _ret = self->toString(*date);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithTime(const QLocale* self, QTime* time) {
	QString _ret = self->toString(*time);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithDateTime(const QLocale* self, QDateTime* dateTime) {
	QString _ret = self->toString(*dateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_dateFormat(const QLocale* self) {
	QString _ret = self->dateFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_timeFormat(const QLocale* self) {
	QString _ret = self->timeFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_dateTimeFormat(const QLocale* self) {
	QString _ret = self->dateTimeFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTime* QLocale_toTime(const QLocale* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QTime(self->toTime(string_QString));
}

QTime* QLocale_toTime2(const QLocale* self, struct miqt_string string, struct miqt_string format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QTime(self->toTime(string_QString, format_QString));
}

QDate* QLocale_toDate(const QLocale* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDate(self->toDate(string_QString));
}

QDate* QLocale_toDate2(const QLocale* self, struct miqt_string string, struct miqt_string format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(self->toDate(string_QString, format_QString));
}

QDateTime* QLocale_toDateTime(const QLocale* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDateTime(self->toDateTime(string_QString));
}

QDateTime* QLocale_toDateTime2(const QLocale* self, struct miqt_string string, struct miqt_string format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(self->toDateTime(string_QString, format_QString));
}

QDate* QLocale_toDate4(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(self->toDate(string_QString, format_QString, *cal));
}

QDateTime* QLocale_toDateTime4(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(self->toDateTime(string_QString, format_QString, *cal));
}

struct miqt_string QLocale_decimalPoint(const QLocale* self) {
	QString _ret = self->decimalPoint();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_groupSeparator(const QLocale* self) {
	QString _ret = self->groupSeparator();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_percent(const QLocale* self) {
	QString _ret = self->percent();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_zeroDigit(const QLocale* self) {
	QString _ret = self->zeroDigit();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_negativeSign(const QLocale* self) {
	QString _ret = self->negativeSign();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_positiveSign(const QLocale* self) {
	QString _ret = self->positiveSign();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_exponential(const QLocale* self) {
	QString _ret = self->exponential();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_monthName(const QLocale* self, int param1) {
	QString _ret = self->monthName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_standaloneMonthName(const QLocale* self, int param1) {
	QString _ret = self->standaloneMonthName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_dayName(const QLocale* self, int param1) {
	QString _ret = self->dayName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_standaloneDayName(const QLocale* self, int param1) {
	QString _ret = self->standaloneDayName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLocale_firstDayOfWeek(const QLocale* self) {
	Qt::DayOfWeek _ret = self->firstDayOfWeek();
	return static_cast<int>(_ret);
}

struct miqt_array /* of int */  QLocale_weekdays(const QLocale* self) {
	QList<Qt::DayOfWeek> _ret = self->weekdays();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		Qt::DayOfWeek _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QLocale_amText(const QLocale* self) {
	QString _ret = self->amText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_pmText(const QLocale* self) {
	QString _ret = self->pmText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLocale_measurementSystem(const QLocale* self) {
	return self->measurementSystem();
}

QLocale* QLocale_collation(const QLocale* self) {
	return new QLocale(self->collation());
}

int QLocale_textDirection(const QLocale* self) {
	Qt::LayoutDirection _ret = self->textDirection();
	return static_cast<int>(_ret);
}

struct miqt_string QLocale_toUpper(const QLocale* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = self->toUpper(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toLower(const QLocale* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = self->toLower(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_currencySymbol(const QLocale* self) {
	QString _ret = self->currencySymbol();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString(const QLocale* self, long long param1) {
	QString _ret = self->toCurrencyString(static_cast<long long>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithQulonglong(const QLocale* self, unsigned long long param1) {
	QString _ret = self->toCurrencyString(static_cast<unsigned long long>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithShort(const QLocale* self, short i) {
	QString _ret = self->toCurrencyString(static_cast<short>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithUshort(const QLocale* self, unsigned short i) {
	QString _ret = self->toCurrencyString(static_cast<unsigned short>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithInt(const QLocale* self, int i) {
	QString _ret = self->toCurrencyString(static_cast<int>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithUint(const QLocale* self, unsigned int i) {
	QString _ret = self->toCurrencyString(static_cast<unsigned int>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithDouble(const QLocale* self, double param1) {
	QString _ret = self->toCurrencyString(static_cast<double>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithFloat(const QLocale* self, float i) {
	QString _ret = self->toCurrencyString(static_cast<float>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_formattedDataSize(const QLocale* self, long long bytes) {
	QString _ret = self->formattedDataSize(static_cast<long long>(bytes));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QLocale_uiLanguages(const QLocale* self) {
	QStringList _ret = self->uiLanguages();
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

void QLocale_setDefault(QLocale* locale) {
	QLocale::setDefault(*locale);
}

QLocale* QLocale_c() {
	return new QLocale(QLocale::c());
}

QLocale* QLocale_system() {
	return new QLocale(QLocale::system());
}

void QLocale_setNumberOptions(QLocale* self, int options) {
	self->setNumberOptions(static_cast<QLocale::NumberOptions>(options));
}

int QLocale_numberOptions(const QLocale* self) {
	QLocale::NumberOptions _ret = self->numberOptions();
	return static_cast<int>(_ret);
}

struct miqt_string QLocale_quoteString(const QLocale* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = self->quoteString(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_createSeparatedList(const QLocale* self, struct miqt_array /* of struct miqt_string */  strl) {
	QStringList strl_QList;
	strl_QList.reserve(strl.len);
	struct miqt_string* strl_arr = static_cast<struct miqt_string*>(strl.data);
	for(size_t i = 0; i < strl.len; ++i) {
		QString strl_arr_i_QString = QString::fromUtf8(strl_arr[i].data, strl_arr[i].len);
		strl_QList.push_back(strl_arr_i_QString);
	}
	QString _ret = self->createSeparatedList(strl_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_nameWithSeparator(const QLocale* self, int separator) {
	QString _ret = self->name(static_cast<QLocale::TagSeparator>(separator));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_bcp47NameWithSeparator(const QLocale* self, int separator) {
	QString _ret = self->bcp47Name(static_cast<QLocale::TagSeparator>(separator));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

short QLocale_toShort2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toShort(s_QString, ok);
}

unsigned short QLocale_toUShort2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	unsigned short _ret = self->toUShort(s_QString, ok);
	return static_cast<unsigned short>(_ret);
}

int QLocale_toInt2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toInt(s_QString, ok);
}

unsigned int QLocale_toUInt2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	unsigned int _ret = self->toUInt(s_QString, ok);
	return static_cast<unsigned int>(_ret);
}

long QLocale_toLong2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toLong(s_QString, ok);
}

unsigned long QLocale_toULong2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	unsigned long _ret = self->toULong(s_QString, ok);
	return static_cast<unsigned long>(_ret);
}

long long QLocale_toLongLong2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	long long _ret = self->toLongLong(s_QString, ok);
	return static_cast<long long>(_ret);
}

unsigned long long QLocale_toULongLong2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	unsigned long long _ret = self->toULongLong(s_QString, ok);
	return static_cast<unsigned long long>(_ret);
}

float QLocale_toFloat2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toFloat(s_QString, ok);
}

double QLocale_toDouble2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toDouble(s_QString, ok);
}

struct miqt_string QLocale_toString15(const QLocale* self, double f, char format) {
	QString _ret = self->toString(static_cast<double>(f), static_cast<char>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString16(const QLocale* self, double f, char format, int precision) {
	QString _ret = self->toString(static_cast<double>(f), static_cast<char>(format), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString17(const QLocale* self, float f, char format) {
	QString _ret = self->toString(static_cast<float>(f), static_cast<char>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString18(const QLocale* self, float f, char format, int precision) {
	QString _ret = self->toString(static_cast<float>(f), static_cast<char>(format), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDate* QLocale_toDate7(const QLocale* self, struct miqt_string string, struct miqt_string format, int baseYear) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(self->toDate(string_QString, format_QString, static_cast<int>(baseYear)));
}

QDateTime* QLocale_toDateTime7(const QLocale* self, struct miqt_string string, struct miqt_string format, int baseYear) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(self->toDateTime(string_QString, format_QString, static_cast<int>(baseYear)));
}

QDate* QLocale_toDate9(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal, int baseYear) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(self->toDate(string_QString, format_QString, *cal, static_cast<int>(baseYear)));
}

QDateTime* QLocale_toDateTime9(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal, int baseYear) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(self->toDateTime(string_QString, format_QString, *cal, static_cast<int>(baseYear)));
}

struct miqt_string QLocale_currencySymbolWithCurrencySymbolFormat(const QLocale* self, int param1) {
	QString _ret = self->currencySymbol(static_cast<QLocale::CurrencySymbolFormat>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString2(const QLocale* self, long long param1, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<long long>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString3(const QLocale* self, unsigned long long param1, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<unsigned long long>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString4(const QLocale* self, short i, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<short>(i), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString5(const QLocale* self, unsigned short i, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<unsigned short>(i), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString6(const QLocale* self, int i, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<int>(i), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString7(const QLocale* self, unsigned int i, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<unsigned int>(i), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString8(const QLocale* self, double param1, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<double>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString9(const QLocale* self, double param1, struct miqt_string symbol, int precision) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<double>(param1), symbol_QString, static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString10(const QLocale* self, float i, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<float>(i), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString11(const QLocale* self, float i, struct miqt_string symbol, int precision) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<float>(i), symbol_QString, static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_formattedDataSize2(const QLocale* self, long long bytes, int precision) {
	QString _ret = self->formattedDataSize(static_cast<long long>(bytes), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_formattedDataSize3(const QLocale* self, long long bytes, int precision, int format) {
	QString _ret = self->formattedDataSize(static_cast<long long>(bytes), static_cast<int>(precision), static_cast<QLocale::DataSizeFormats>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QLocale_uiLanguagesWithSeparator(const QLocale* self, int separator) {
	QStringList _ret = self->uiLanguages(static_cast<QLocale::TagSeparator>(separator));
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

struct miqt_string QLocale_quoteString2(const QLocale* self, struct miqt_string str, int style) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = self->quoteString(str_QString, static_cast<QLocale::QuotationStyle>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocale_delete(QLocale* self) {
	delete self;
}

QCalendar* QCalendar_new() {
	return new (std::nothrow) QCalendar();
}

QCalendar* QCalendar_new2(int system) {
	return new (std::nothrow) QCalendar(static_cast<QCalendar::System>(system));
}

QCalendar* QCalendar_new3(QCalendar* param1) {
	return new (std::nothrow) QCalendar(*param1);
}

bool QCalendar_isValid(const QCalendar* self) {
	return self->isValid();
}

int QCalendar_daysInMonth(const QCalendar* self, int month) {
	return self->daysInMonth(static_cast<int>(month));
}

int QCalendar_daysInYear(const QCalendar* self, int year) {
	return self->daysInYear(static_cast<int>(year));
}

int QCalendar_monthsInYear(const QCalendar* self, int year) {
	return self->monthsInYear(static_cast<int>(year));
}

bool QCalendar_isDateValid(const QCalendar* self, int year, int month, int day) {
	return self->isDateValid(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
}

bool QCalendar_isLeapYear(const QCalendar* self, int year) {
	return self->isLeapYear(static_cast<int>(year));
}

bool QCalendar_isGregorian(const QCalendar* self) {
	return self->isGregorian();
}

bool QCalendar_isLunar(const QCalendar* self) {
	return self->isLunar();
}

bool QCalendar_isLuniSolar(const QCalendar* self) {
	return self->isLuniSolar();
}

bool QCalendar_isSolar(const QCalendar* self) {
	return self->isSolar();
}

bool QCalendar_isProleptic(const QCalendar* self) {
	return self->isProleptic();
}

bool QCalendar_hasYearZero(const QCalendar* self) {
	return self->hasYearZero();
}

int QCalendar_maximumDaysInMonth(const QCalendar* self) {
	return self->maximumDaysInMonth();
}

int QCalendar_minimumDaysInMonth(const QCalendar* self) {
	return self->minimumDaysInMonth();
}

int QCalendar_maximumMonthsInYear(const QCalendar* self) {
	return self->maximumMonthsInYear();
}

struct miqt_string QCalendar_name(const QCalendar* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDate* QCalendar_dateFromParts(const QCalendar* self, int year, int month, int day) {
	return new QDate(self->dateFromParts(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day)));
}

int QCalendar_dayOfWeek(const QCalendar* self, QDate* date) {
	return self->dayOfWeek(*date);
}

struct miqt_string QCalendar_monthName(const QCalendar* self, QLocale* locale, int month) {
	QString _ret = self->monthName(*locale, static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_standaloneMonthName(const QCalendar* self, QLocale* locale, int month) {
	QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_weekDayName(const QCalendar* self, QLocale* locale, int day) {
	QString _ret = self->weekDayName(*locale, static_cast<int>(day));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_standaloneWeekDayName(const QCalendar* self, QLocale* locale, int day) {
	QString _ret = self->standaloneWeekDayName(*locale, static_cast<int>(day));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCalendar_availableCalendars() {
	QStringList _ret = QCalendar::availableCalendars();
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

int QCalendar_daysInMonth2(const QCalendar* self, int month, int year) {
	return self->daysInMonth(static_cast<int>(month), static_cast<int>(year));
}

struct miqt_string QCalendar_monthName2(const QCalendar* self, QLocale* locale, int month, int year) {
	QString _ret = self->monthName(*locale, static_cast<int>(month), static_cast<int>(year));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_monthName3(const QCalendar* self, QLocale* locale, int month, int year, int format) {
	QString _ret = self->monthName(*locale, static_cast<int>(month), static_cast<int>(year), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_standaloneMonthName2(const QCalendar* self, QLocale* locale, int month, int year) {
	QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month), static_cast<int>(year));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_standaloneMonthName3(const QCalendar* self, QLocale* locale, int month, int year, int format) {
	QString _ret = self->standaloneMonthName(*locale, static_cast<int>(month), static_cast<int>(year), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_weekDayName2(const QCalendar* self, QLocale* locale, int day, int format) {
	QString _ret = self->weekDayName(*locale, static_cast<int>(day), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCalendar_standaloneWeekDayName2(const QCalendar* self, QLocale* locale, int day, int format) {
	QString _ret = self->standaloneWeekDayName(*locale, static_cast<int>(day), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCalendar_delete(QCalendar* self) {
	delete self;
}

QDate* QDate_new() {
	return new (std::nothrow) QDate();
}

QDate* QDate_new2(int y, int m, int d) {
	return new (std::nothrow) QDate(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d));
}

QDate* QDate_new3(int y, int m, int d, QCalendar* cal) {
	return new (std::nothrow) QDate(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d), *cal);
}

QDate* QDate_new4(QDate* param1) {
	return new (std::nothrow) QDate(*param1);
}

bool QDate_isNull(const QDate* self) {
	return self->isNull();
}

bool QDate_isValid(const QDate* self) {
	return self->isValid();
}

int QDate_year(const QDate* self) {
	return self->year();
}

int QDate_month(const QDate* self) {
	return self->month();
}

int QDate_day(const QDate* self) {
	return self->day();
}

int QDate_dayOfWeek(const QDate* self) {
	return self->dayOfWeek();
}

int QDate_dayOfYear(const QDate* self) {
	return self->dayOfYear();
}

int QDate_daysInMonth(const QDate* self) {
	return self->daysInMonth();
}

int QDate_daysInYear(const QDate* self) {
	return self->daysInYear();
}

int QDate_weekNumber(const QDate* self) {
	return self->weekNumber();
}

int QDate_yearWithCal(const QDate* self, QCalendar* cal) {
	return self->year(*cal);
}

int QDate_monthWithCal(const QDate* self, QCalendar* cal) {
	return self->month(*cal);
}

int QDate_dayWithCal(const QDate* self, QCalendar* cal) {
	return self->day(*cal);
}

int QDate_dayOfWeekWithCal(const QDate* self, QCalendar* cal) {
	return self->dayOfWeek(*cal);
}

int QDate_dayOfYearWithCal(const QDate* self, QCalendar* cal) {
	return self->dayOfYear(*cal);
}

int QDate_daysInMonthWithCal(const QDate* self, QCalendar* cal) {
	return self->daysInMonth(*cal);
}

int QDate_daysInYearWithCal(const QDate* self, QCalendar* cal) {
	return self->daysInYear(*cal);
}

QDateTime* QDate_startOfDay(const QDate* self, int spec) {
	return new QDateTime(self->startOfDay(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDate_endOfDay(const QDate* self, int spec) {
	return new QDateTime(self->endOfDay(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDate_startOfDayWithZone(const QDate* self, QTimeZone* zone) {
	return new QDateTime(self->startOfDay(*zone));
}

QDateTime* QDate_endOfDayWithZone(const QDate* self, QTimeZone* zone) {
	return new QDateTime(self->endOfDay(*zone));
}

QDateTime* QDate_startOfDay2(const QDate* self) {
	return new QDateTime(self->startOfDay());
}

QDateTime* QDate_endOfDay2(const QDate* self) {
	return new QDateTime(self->endOfDay());
}

struct miqt_string QDate_toString(const QDate* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_toStringWithFormat(const QDate* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDate_toString2(const QDate* self, struct miqt_string format, QCalendar* cal) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(format_QString, *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDate_setDate(QDate* self, int year, int month, int day) {
	return self->setDate(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
}

bool QDate_setDate2(QDate* self, int year, int month, int day, QCalendar* cal) {
	return self->setDate(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day), *cal);
}

QDate* QDate_addDays(const QDate* self, long long days) {
	return new QDate(self->addDays(static_cast<long long>(days)));
}

QDate* QDate_addMonths(const QDate* self, int months) {
	return new QDate(self->addMonths(static_cast<int>(months)));
}

QDate* QDate_addYears(const QDate* self, int years) {
	return new QDate(self->addYears(static_cast<int>(years)));
}

QDate* QDate_addMonths2(const QDate* self, int months, QCalendar* cal) {
	return new QDate(self->addMonths(static_cast<int>(months), *cal));
}

QDate* QDate_addYears2(const QDate* self, int years, QCalendar* cal) {
	return new QDate(self->addYears(static_cast<int>(years), *cal));
}

long long QDate_daysTo(const QDate* self, QDate* d) {
	long long _ret = self->daysTo(*d);
	return static_cast<long long>(_ret);
}

QDate* QDate_currentDate() {
	return new QDate(QDate::currentDate());
}

QDate* QDate_fromString(struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDate(QDate::fromString(string_QString));
}

QDate* QDate_fromString2(struct miqt_string string, struct miqt_string format, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(QDate::fromString(string_QString, format_QString, *cal));
}

QDate* QDate_fromString3(struct miqt_string string, struct miqt_string format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(QDate::fromString(string_QString, format_QString));
}

QDate* QDate_fromString4(struct miqt_string string, struct miqt_string format, int baseYear, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(QDate::fromString(string_QString, format_QString, static_cast<int>(baseYear), *cal));
}

bool QDate_isValid2(int y, int m, int d) {
	return QDate::isValid(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d));
}

bool QDate_isLeapYear(int year) {
	return QDate::isLeapYear(static_cast<int>(year));
}

QDate* QDate_fromJulianDay(long long jd_) {
	return new QDate(QDate::fromJulianDay(static_cast<long long>(jd_)));
}

long long QDate_toJulianDay(const QDate* self) {
	long long _ret = self->toJulianDay();
	return static_cast<long long>(_ret);
}

int QDate_weekNumberWithYearNum(const QDate* self, int* yearNum) {
	return self->weekNumber(yearNum);
}

QDateTime* QDate_startOfDay3(const QDate* self, int spec, int offsetSeconds) {
	return new QDateTime(self->startOfDay(static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds)));
}

QDateTime* QDate_endOfDay3(const QDate* self, int spec, int offsetSeconds) {
	return new QDateTime(self->endOfDay(static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds)));
}

struct miqt_string QDate_toString3(const QDate* self, int format) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDate* QDate_fromString5(struct miqt_string string, int format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDate(QDate::fromString(string_QString, static_cast<Qt::DateFormat>(format)));
}

QDate* QDate_fromString6(struct miqt_string string, struct miqt_string format, int baseYear) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(QDate::fromString(string_QString, format_QString, static_cast<int>(baseYear)));
}

void QDate_delete(QDate* self) {
	delete self;
}

QTime* QTime_new() {
	return new (std::nothrow) QTime();
}

QTime* QTime_new2(int h, int m) {
	return new (std::nothrow) QTime(static_cast<int>(h), static_cast<int>(m));
}

QTime* QTime_new3(QTime* param1) {
	return new (std::nothrow) QTime(*param1);
}

QTime* QTime_new4(int h, int m, int s) {
	return new (std::nothrow) QTime(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s));
}

QTime* QTime_new5(int h, int m, int s, int ms) {
	return new (std::nothrow) QTime(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

bool QTime_isNull(const QTime* self) {
	return self->isNull();
}

bool QTime_isValid(const QTime* self) {
	return self->isValid();
}

int QTime_hour(const QTime* self) {
	return self->hour();
}

int QTime_minute(const QTime* self) {
	return self->minute();
}

int QTime_second(const QTime* self) {
	return self->second();
}

int QTime_msec(const QTime* self) {
	return self->msec();
}

struct miqt_string QTime_toString(const QTime* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTime_toStringWithFormat(const QTime* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTime_setHMS(QTime* self, int h, int m, int s) {
	return self->setHMS(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s));
}

QTime* QTime_addSecs(const QTime* self, int secs) {
	return new QTime(self->addSecs(static_cast<int>(secs)));
}

int QTime_secsTo(const QTime* self, QTime* t) {
	return self->secsTo(*t);
}

QTime* QTime_addMSecs(const QTime* self, int ms) {
	return new QTime(self->addMSecs(static_cast<int>(ms)));
}

int QTime_msecsTo(const QTime* self, QTime* t) {
	return self->msecsTo(*t);
}

QTime* QTime_fromMSecsSinceStartOfDay(int msecs) {
	return new QTime(QTime::fromMSecsSinceStartOfDay(static_cast<int>(msecs)));
}

int QTime_msecsSinceStartOfDay(const QTime* self) {
	return self->msecsSinceStartOfDay();
}

QTime* QTime_currentTime() {
	return new QTime(QTime::currentTime());
}

QTime* QTime_fromString(struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QTime(QTime::fromString(string_QString));
}

QTime* QTime_fromString2(struct miqt_string string, struct miqt_string format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QTime(QTime::fromString(string_QString, format_QString));
}

bool QTime_isValid2(int h, int m, int s) {
	return QTime::isValid(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s));
}

struct miqt_string QTime_toStringWithQtDateFormat(const QTime* self, int f) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTime_setHMS2(QTime* self, int h, int m, int s, int ms) {
	return self->setHMS(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

QTime* QTime_fromString3(struct miqt_string string, int format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QTime(QTime::fromString(string_QString, static_cast<Qt::DateFormat>(format)));
}

bool QTime_isValid3(int h, int m, int s, int ms) {
	return QTime::isValid(static_cast<int>(h), static_cast<int>(m), static_cast<int>(s), static_cast<int>(ms));
}

void QTime_delete(QTime* self) {
	delete self;
}

QDateTime* QDateTime_new() {
	return new (std::nothrow) QDateTime();
}

QDateTime* QDateTime_new2(QDate* date, QTime* time, int spec) {
	return new (std::nothrow) QDateTime(*date, *time, static_cast<Qt::TimeSpec>(spec));
}

QDateTime* QDateTime_new3(QDate* date, QTime* time, QTimeZone* timeZone) {
	return new (std::nothrow) QDateTime(*date, *time, *timeZone);
}

QDateTime* QDateTime_new4(QDate* date, QTime* time) {
	return new (std::nothrow) QDateTime(*date, *time);
}

QDateTime* QDateTime_new5(QDateTime* other) {
	return new (std::nothrow) QDateTime(*other);
}

QDateTime* QDateTime_new6(QDate* date, QTime* time, int spec, int offsetSeconds) {
	return new (std::nothrow) QDateTime(*date, *time, static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetSeconds));
}

QDateTime* QDateTime_new7(QDate* date, QTime* time, QTimeZone* timeZone, int resolve) {
	return new (std::nothrow) QDateTime(*date, *time, *timeZone, static_cast<QDateTime::TransitionResolution>(resolve));
}

QDateTime* QDateTime_new8(QDate* date, QTime* time, int resolve) {
	return new (std::nothrow) QDateTime(*date, *time, static_cast<QDateTime::TransitionResolution>(resolve));
}

void QDateTime_swap(QDateTime* self, QDateTime* other) {
	self->swap(*other);
}

bool QDateTime_isNull(const QDateTime* self) {
	return self->isNull();
}

bool QDateTime_isValid(const QDateTime* self) {
	return self->isValid();
}

QDate* QDateTime_date(const QDateTime* self) {
	return new QDate(self->date());
}

QTime* QDateTime_time(const QDateTime* self) {
	return new QTime(self->time());
}

int QDateTime_timeSpec(const QDateTime* self) {
	Qt::TimeSpec _ret = self->timeSpec();
	return static_cast<int>(_ret);
}

int QDateTime_offsetFromUtc(const QDateTime* self) {
	return self->offsetFromUtc();
}

QTimeZone* QDateTime_timeRepresentation(const QDateTime* self) {
	return new QTimeZone(self->timeRepresentation());
}

QTimeZone* QDateTime_timeZone(const QDateTime* self) {
	return new QTimeZone(self->timeZone());
}

struct miqt_string QDateTime_timeZoneAbbreviation(const QDateTime* self) {
	QString _ret = self->timeZoneAbbreviation();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDateTime_isDaylightTime(const QDateTime* self) {
	return self->isDaylightTime();
}

long long QDateTime_toMSecsSinceEpoch(const QDateTime* self) {
	long long _ret = self->toMSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

long long QDateTime_toSecsSinceEpoch(const QDateTime* self) {
	long long _ret = self->toSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

void QDateTime_setDate(QDateTime* self, QDate* date) {
	self->setDate(*date);
}

void QDateTime_setTime(QDateTime* self, QTime* time) {
	self->setTime(*time);
}

void QDateTime_setTimeSpec(QDateTime* self, int spec) {
	self->setTimeSpec(static_cast<Qt::TimeSpec>(spec));
}

void QDateTime_setOffsetFromUtc(QDateTime* self, int offsetSeconds) {
	self->setOffsetFromUtc(static_cast<int>(offsetSeconds));
}

void QDateTime_setTimeZone(QDateTime* self, QTimeZone* toZone) {
	self->setTimeZone(*toZone);
}

void QDateTime_setMSecsSinceEpoch(QDateTime* self, long long msecs) {
	self->setMSecsSinceEpoch(static_cast<long long>(msecs));
}

void QDateTime_setSecsSinceEpoch(QDateTime* self, long long secs) {
	self->setSecsSinceEpoch(static_cast<long long>(secs));
}

struct miqt_string QDateTime_toString(const QDateTime* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTime_toStringWithFormat(const QDateTime* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTime_toString2(const QDateTime* self, struct miqt_string format, QCalendar* cal) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(format_QString, *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QDateTime_addDays(const QDateTime* self, long long days) {
	return new QDateTime(self->addDays(static_cast<long long>(days)));
}

QDateTime* QDateTime_addMonths(const QDateTime* self, int months) {
	return new QDateTime(self->addMonths(static_cast<int>(months)));
}

QDateTime* QDateTime_addYears(const QDateTime* self, int years) {
	return new QDateTime(self->addYears(static_cast<int>(years)));
}

QDateTime* QDateTime_addSecs(const QDateTime* self, long long secs) {
	return new QDateTime(self->addSecs(static_cast<long long>(secs)));
}

QDateTime* QDateTime_addMSecs(const QDateTime* self, long long msecs) {
	return new QDateTime(self->addMSecs(static_cast<long long>(msecs)));
}

QDateTime* QDateTime_toTimeSpec(const QDateTime* self, int spec) {
	return new QDateTime(self->toTimeSpec(static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_toLocalTime(const QDateTime* self) {
	return new QDateTime(self->toLocalTime());
}

QDateTime* QDateTime_toUTC(const QDateTime* self) {
	return new QDateTime(self->toUTC());
}

QDateTime* QDateTime_toOffsetFromUtc(const QDateTime* self, int offsetSeconds) {
	return new QDateTime(self->toOffsetFromUtc(static_cast<int>(offsetSeconds)));
}

QDateTime* QDateTime_toTimeZone(const QDateTime* self, QTimeZone* toZone) {
	return new QDateTime(self->toTimeZone(*toZone));
}

long long QDateTime_daysTo(const QDateTime* self, QDateTime* param1) {
	long long _ret = self->daysTo(*param1);
	return static_cast<long long>(_ret);
}

long long QDateTime_secsTo(const QDateTime* self, QDateTime* param1) {
	long long _ret = self->secsTo(*param1);
	return static_cast<long long>(_ret);
}

long long QDateTime_msecsTo(const QDateTime* self, QDateTime* param1) {
	long long _ret = self->msecsTo(*param1);
	return static_cast<long long>(_ret);
}

QDateTime* QDateTime_currentDateTime(QTimeZone* zone) {
	return new QDateTime(QDateTime::currentDateTime(*zone));
}

QDateTime* QDateTime_currentDateTime2() {
	return new QDateTime(QDateTime::currentDateTime());
}

QDateTime* QDateTime_currentDateTimeUtc() {
	return new QDateTime(QDateTime::currentDateTimeUtc());
}

QDateTime* QDateTime_fromString(struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDateTime(QDateTime::fromString(string_QString));
}

QDateTime* QDateTime_fromString2(struct miqt_string string, struct miqt_string format, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(QDateTime::fromString(string_QString, format_QString, *cal));
}

QDateTime* QDateTime_fromString3(struct miqt_string string, struct miqt_string format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(QDateTime::fromString(string_QString, format_QString));
}

QDateTime* QDateTime_fromString4(struct miqt_string string, struct miqt_string format, int baseYear, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(QDateTime::fromString(string_QString, format_QString, static_cast<int>(baseYear), *cal));
}

QDateTime* QDateTime_fromMSecsSinceEpoch(long long msecs, int spec) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<long long>(msecs), static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_fromSecsSinceEpoch(long long secs, int spec) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<long long>(secs), static_cast<Qt::TimeSpec>(spec)));
}

QDateTime* QDateTime_fromMSecsSinceEpoch2(long long msecs, QTimeZone* timeZone) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<long long>(msecs), *timeZone));
}

QDateTime* QDateTime_fromSecsSinceEpoch2(long long secs, QTimeZone* timeZone) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<long long>(secs), *timeZone));
}

QDateTime* QDateTime_fromMSecsSinceEpochWithMsecs(long long msecs) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<long long>(msecs)));
}

QDateTime* QDateTime_fromSecsSinceEpochWithSecs(long long secs) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<long long>(secs)));
}

long long QDateTime_currentMSecsSinceEpoch() {
	long long _ret = QDateTime::currentMSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

long long QDateTime_currentSecsSinceEpoch() {
	long long _ret = QDateTime::currentSecsSinceEpoch();
	return static_cast<long long>(_ret);
}

void QDateTime_setDate2(QDateTime* self, QDate* date, int resolve) {
	self->setDate(*date, static_cast<QDateTime::TransitionResolution>(resolve));
}

void QDateTime_setTime2(QDateTime* self, QTime* time, int resolve) {
	self->setTime(*time, static_cast<QDateTime::TransitionResolution>(resolve));
}

void QDateTime_setTimeZone2(QDateTime* self, QTimeZone* toZone, int resolve) {
	self->setTimeZone(*toZone, static_cast<QDateTime::TransitionResolution>(resolve));
}

struct miqt_string QDateTime_toString3(const QDateTime* self, int format) {
	QString _ret = self->toString(static_cast<Qt::DateFormat>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDateTime* QDateTime_fromString5(struct miqt_string string, int format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDateTime(QDateTime::fromString(string_QString, static_cast<Qt::DateFormat>(format)));
}

QDateTime* QDateTime_fromString6(struct miqt_string string, struct miqt_string format, int baseYear) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(QDateTime::fromString(string_QString, format_QString, static_cast<int>(baseYear)));
}

QDateTime* QDateTime_fromMSecsSinceEpoch3(long long msecs, int spec, int offsetFromUtc) {
	return new QDateTime(QDateTime::fromMSecsSinceEpoch(static_cast<long long>(msecs), static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetFromUtc)));
}

QDateTime* QDateTime_fromSecsSinceEpoch3(long long secs, int spec, int offsetFromUtc) {
	return new QDateTime(QDateTime::fromSecsSinceEpoch(static_cast<long long>(secs), static_cast<Qt::TimeSpec>(spec), static_cast<int>(offsetFromUtc)));
}

void QDateTime_delete(QDateTime* self) {
	delete self;
}

QRegularExpression* QRegularExpression_new() {
	return new (std::nothrow) QRegularExpression();
}

QRegularExpression* QRegularExpression_new2(struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	return new (std::nothrow) QRegularExpression(pattern_QString);
}

QRegularExpression* QRegularExpression_new3(QRegularExpression* re) {
	return new (std::nothrow) QRegularExpression(*re);
}

QRegularExpression* QRegularExpression_new4(struct miqt_string pattern, int options) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	return new (std::nothrow) QRegularExpression(pattern_QString, static_cast<QRegularExpression::PatternOptions>(options));
}

int QRegularExpression_patternOptions(const QRegularExpression* self) {
	QRegularExpression::PatternOptions _ret = self->patternOptions();
	return static_cast<int>(_ret);
}

void QRegularExpression_setPatternOptions(QRegularExpression* self, int options) {
	self->setPatternOptions(static_cast<QRegularExpression::PatternOptions>(options));
}

void QRegularExpression_swap(QRegularExpression* self, QRegularExpression* other) {
	self->swap(*other);
}

struct miqt_string QRegularExpression_pattern(const QRegularExpression* self) {
	QString _ret = self->pattern();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRegularExpression_setPattern(QRegularExpression* self, struct miqt_string pattern) {
	QString pattern_QString = QString::fromUtf8(pattern.data, pattern.len);
	self->setPattern(pattern_QString);
}

bool QRegularExpression_isValid(const QRegularExpression* self) {
	return self->isValid();
}

int64_t QRegularExpression_patternErrorOffset(const QRegularExpression* self) {
	int64_t _ret = self->patternErrorOffset();
	return static_cast<int64_t>(_ret);
}

struct miqt_string QRegularExpression_errorString(const QRegularExpression* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRegularExpression_captureCount(const QRegularExpression* self) {
	return self->captureCount();
}

struct miqt_array /* of struct miqt_string */  QRegularExpression_namedCaptureGroups(const QRegularExpression* self) {
	QStringList _ret = self->namedCaptureGroups();
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

QRegularExpressionMatch* QRegularExpression_match(const QRegularExpression* self, struct miqt_string subject) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatch(self->match(subject_QString));
}

QRegularExpressionMatchIterator* QRegularExpression_globalMatch(const QRegularExpression* self, struct miqt_string subject) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatchIterator(self->globalMatch(subject_QString));
}

void QRegularExpression_optimize(const QRegularExpression* self) {
	self->optimize();
}

struct miqt_string QRegularExpression_escape(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = QRegularExpression::escape(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpression_wildcardToRegularExpression(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = QRegularExpression::wildcardToRegularExpression(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRegularExpression_anchoredPattern(struct miqt_string expression) {
	QString expression_QString = QString::fromUtf8(expression.data, expression.len);
	QString _ret = QRegularExpression::anchoredPattern(expression_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRegularExpressionMatch* QRegularExpression_match2(const QRegularExpression* self, struct miqt_string subject, int64_t offset) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatch(self->match(subject_QString, (int64_t)(offset)));
}

QRegularExpressionMatch* QRegularExpression_match3(const QRegularExpression* self, struct miqt_string subject, int64_t offset, int matchType) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatch(self->match(subject_QString, (int64_t)(offset), static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatch* QRegularExpression_match4(const QRegularExpression* self, struct miqt_string subject, int64_t offset, int matchType, int matchOptions) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatch(self->match(subject_QString, (int64_t)(offset), static_cast<QRegularExpression::MatchType>(matchType), static_cast<QRegularExpression::MatchOptions>(matchOptions)));
}

QRegularExpressionMatchIterator* QRegularExpression_globalMatch2(const QRegularExpression* self, struct miqt_string subject, int64_t offset) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatchIterator(self->globalMatch(subject_QString, (int64_t)(offset)));
}

QRegularExpressionMatchIterator* QRegularExpression_globalMatch3(const QRegularExpression* self, struct miqt_string subject, int64_t offset, int matchType) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatchIterator(self->globalMatch(subject_QString, (int64_t)(offset), static_cast<QRegularExpression::MatchType>(matchType)));
}

QRegularExpressionMatchIterator* QRegularExpression_globalMatch4(const QRegularExpression* self, struct miqt_string subject, int64_t offset, int matchType, int matchOptions) {
	QString subject_QString = QString::fromUtf8(subject.data, subject.len);
	return new QRegularExpressionMatchIterator(self->globalMatch(subject_QString, (int64_t)(offset), static_cast<QRegularExpression::MatchType>(matchType), static_cast<QRegularExpression::MatchOptions>(matchOptions)));
}

struct miqt_string QRegularExpression_wildcardToRegularExpression2(struct miqt_string str, int options) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = QRegularExpression::wildcardToRegularExpression(str_QString, static_cast<QRegularExpression::WildcardConversionOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRegularExpression_delete(QRegularExpression* self) {
	delete self;
}

QRegularExpressionMatch* QRegularExpressionMatch_new() {
	return new (std::nothrow) QRegularExpressionMatch();
}

QRegularExpressionMatch* QRegularExpressionMatch_new2(QRegularExpressionMatch* match) {
	return new (std::nothrow) QRegularExpressionMatch(*match);
}

void QRegularExpressionMatch_swap(QRegularExpressionMatch* self, QRegularExpressionMatch* other) {
	self->swap(*other);
}

QRegularExpression* QRegularExpressionMatch_regularExpression(const QRegularExpressionMatch* self) {
	return new QRegularExpression(self->regularExpression());
}

int QRegularExpressionMatch_matchType(const QRegularExpressionMatch* self) {
	QRegularExpression::MatchType _ret = self->matchType();
	return static_cast<int>(_ret);
}

int QRegularExpressionMatch_matchOptions(const QRegularExpressionMatch* self) {
	QRegularExpression::MatchOptions _ret = self->matchOptions();
	return static_cast<int>(_ret);
}

bool QRegularExpressionMatch_hasMatch(const QRegularExpressionMatch* self) {
	return self->hasMatch();
}

bool QRegularExpressionMatch_hasPartialMatch(const QRegularExpressionMatch* self) {
	return self->hasPartialMatch();
}

bool QRegularExpressionMatch_isValid(const QRegularExpressionMatch* self) {
	return self->isValid();
}

int QRegularExpressionMatch_lastCapturedIndex(const QRegularExpressionMatch* self) {
	return self->lastCapturedIndex();
}

bool QRegularExpressionMatch_hasCaptured(const QRegularExpressionMatch* self, int nth) {
	return self->hasCaptured(static_cast<int>(nth));
}

struct miqt_string QRegularExpressionMatch_captured(const QRegularExpressionMatch* self) {
	QString _ret = self->captured();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QRegularExpressionMatch_capturedTexts(const QRegularExpressionMatch* self) {
	QStringList _ret = self->capturedTexts();
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

int64_t QRegularExpressionMatch_capturedStart(const QRegularExpressionMatch* self) {
	int64_t _ret = self->capturedStart();
	return static_cast<int64_t>(_ret);
}

int64_t QRegularExpressionMatch_capturedLength(const QRegularExpressionMatch* self) {
	int64_t _ret = self->capturedLength();
	return static_cast<int64_t>(_ret);
}

int64_t QRegularExpressionMatch_capturedEnd(const QRegularExpressionMatch* self) {
	int64_t _ret = self->capturedEnd();
	return static_cast<int64_t>(_ret);
}

struct miqt_string QRegularExpressionMatch_capturedWithNth(const QRegularExpressionMatch* self, int nth) {
	QString _ret = self->captured(static_cast<int>(nth));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int64_t QRegularExpressionMatch_capturedStartWithNth(const QRegularExpressionMatch* self, int nth) {
	int64_t _ret = self->capturedStart(static_cast<int>(nth));
	return static_cast<int64_t>(_ret);
}

int64_t QRegularExpressionMatch_capturedLengthWithNth(const QRegularExpressionMatch* self, int nth) {
	int64_t _ret = self->capturedLength(static_cast<int>(nth));
	return static_cast<int64_t>(_ret);
}

int64_t QRegularExpressionMatch_capturedEndWithNth(const QRegularExpressionMatch* self, int nth) {
	int64_t _ret = self->capturedEnd(static_cast<int>(nth));
	return static_cast<int64_t>(_ret);
}

void QRegularExpressionMatch_delete(QRegularExpressionMatch* self) {
	delete self;
}

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new() {
	return new (std::nothrow) QRegularExpressionMatchIterator();
}

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new2(QRegularExpressionMatchIterator* iterator) {
	return new (std::nothrow) QRegularExpressionMatchIterator(*iterator);
}

void QRegularExpressionMatchIterator_swap(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* other) {
	self->swap(*other);
}

bool QRegularExpressionMatchIterator_isValid(const QRegularExpressionMatchIterator* self) {
	return self->isValid();
}

bool QRegularExpressionMatchIterator_hasNext(const QRegularExpressionMatchIterator* self) {
	return self->hasNext();
}

QRegularExpressionMatch* QRegularExpressionMatchIterator_next(QRegularExpressionMatchIterator* self) {
	return new QRegularExpressionMatch(self->next());
}

QRegularExpressionMatch* QRegularExpressionMatchIterator_peekNext(const QRegularExpressionMatchIterator* self) {
	return new QRegularExpressionMatch(self->peekNext());
}

QRegularExpression* QRegularExpressionMatchIterator_regularExpression(const QRegularExpressionMatchIterator* self) {
	return new QRegularExpression(self->regularExpression());
}

int QRegularExpressionMatchIterator_matchType(const QRegularExpressionMatchIterator* self) {
	QRegularExpression::MatchType _ret = self->matchType();
	return static_cast<int>(_ret);
}

int QRegularExpressionMatchIterator_matchOptions(const QRegularExpressionMatchIterator* self) {
	QRegularExpression::MatchOptions _ret = self->matchOptions();
	return static_cast<int>(_ret);
}

void QRegularExpressionMatchIterator_delete(QRegularExpressionMatchIterator* self) {
	delete self;
}

QUrl* QUrl_new() {
	return new (std::nothrow) QUrl();
}

QUrl* QUrl_new2(QUrl* copy) {
	return new (std::nothrow) QUrl(*copy);
}

QUrl* QUrl_new3(struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	return new (std::nothrow) QUrl(url_QString);
}

QUrl* QUrl_new4(struct miqt_string url, int mode) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	return new (std::nothrow) QUrl(url_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_swap(QUrl* self, QUrl* other) {
	self->swap(*other);
}

void QUrl_setUrl(QUrl* self, struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	self->setUrl(url_QString);
}

struct miqt_string QUrl_url(const QUrl* self) {
	QString _ret = self->url();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toString(const QUrl* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toDisplayString(const QUrl* self) {
	QString _ret = self->toDisplayString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QUrl_adjusted(const QUrl* self, int options) {
	return new QUrl(self->adjusted(static_cast<QUrl::FormattingOptions>(options)));
}

struct miqt_string QUrl_toEncoded(const QUrl* self) {
	QByteArray _qb = self->toEncoded();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QUrl* QUrl_fromUserInput(struct miqt_string userInput) {
	QString userInput_QString = QString::fromUtf8(userInput.data, userInput.len);
	return new QUrl(QUrl::fromUserInput(userInput_QString));
}

bool QUrl_isValid(const QUrl* self) {
	return self->isValid();
}

struct miqt_string QUrl_errorString(const QUrl* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUrl_isEmpty(const QUrl* self) {
	return self->isEmpty();
}

void QUrl_clear(QUrl* self) {
	self->clear();
}

void QUrl_setScheme(QUrl* self, struct miqt_string scheme) {
	QString scheme_QString = QString::fromUtf8(scheme.data, scheme.len);
	self->setScheme(scheme_QString);
}

struct miqt_string QUrl_scheme(const QUrl* self) {
	QString _ret = self->scheme();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setAuthority(QUrl* self, struct miqt_string authority) {
	QString authority_QString = QString::fromUtf8(authority.data, authority.len);
	self->setAuthority(authority_QString);
}

struct miqt_string QUrl_authority(const QUrl* self) {
	QString _ret = self->authority();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setUserInfo(QUrl* self, struct miqt_string userInfo) {
	QString userInfo_QString = QString::fromUtf8(userInfo.data, userInfo.len);
	self->setUserInfo(userInfo_QString);
}

struct miqt_string QUrl_userInfo(const QUrl* self) {
	QString _ret = self->userInfo();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setUserName(QUrl* self, struct miqt_string userName) {
	QString userName_QString = QString::fromUtf8(userName.data, userName.len);
	self->setUserName(userName_QString);
}

struct miqt_string QUrl_userName(const QUrl* self) {
	QString _ret = self->userName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setPassword(QUrl* self, struct miqt_string password) {
	QString password_QString = QString::fromUtf8(password.data, password.len);
	self->setPassword(password_QString);
}

struct miqt_string QUrl_password(const QUrl* self) {
	QString _ret = self->password();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setHost(QUrl* self, struct miqt_string host) {
	QString host_QString = QString::fromUtf8(host.data, host.len);
	self->setHost(host_QString);
}

struct miqt_string QUrl_host(const QUrl* self) {
	QString _ret = self->host();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setPort(QUrl* self, int port) {
	self->setPort(static_cast<int>(port));
}

int QUrl_port(const QUrl* self) {
	return self->port();
}

void QUrl_setPath(QUrl* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPath(path_QString);
}

struct miqt_string QUrl_path(const QUrl* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_fileName(const QUrl* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUrl_hasQuery(const QUrl* self) {
	return self->hasQuery();
}

void QUrl_setQuery(QUrl* self, struct miqt_string query) {
	QString query_QString = QString::fromUtf8(query.data, query.len);
	self->setQuery(query_QString);
}

void QUrl_setQueryWithQuery(QUrl* self, QUrlQuery* query) {
	self->setQuery(*query);
}

struct miqt_string QUrl_query(const QUrl* self) {
	QString _ret = self->query();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUrl_hasFragment(const QUrl* self) {
	return self->hasFragment();
}

struct miqt_string QUrl_fragment(const QUrl* self) {
	QString _ret = self->fragment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setFragment(QUrl* self, struct miqt_string fragment) {
	QString fragment_QString = QString::fromUtf8(fragment.data, fragment.len);
	self->setFragment(fragment_QString);
}

QUrl* QUrl_resolved(const QUrl* self, QUrl* relative) {
	return new QUrl(self->resolved(*relative));
}

bool QUrl_isRelative(const QUrl* self) {
	return self->isRelative();
}

bool QUrl_isParentOf(const QUrl* self, QUrl* url) {
	return self->isParentOf(*url);
}

bool QUrl_isLocalFile(const QUrl* self) {
	return self->isLocalFile();
}

QUrl* QUrl_fromLocalFile(struct miqt_string localfile) {
	QString localfile_QString = QString::fromUtf8(localfile.data, localfile.len);
	return new QUrl(QUrl::fromLocalFile(localfile_QString));
}

struct miqt_string QUrl_toLocalFile(const QUrl* self) {
	QString _ret = self->toLocalFile();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_detach(QUrl* self) {
	self->detach();
}

bool QUrl_isDetached(const QUrl* self) {
	return self->isDetached();
}

bool QUrl_matches(const QUrl* self, QUrl* url, int options) {
	return self->matches(*url, static_cast<QUrl::FormattingOptions>(options));
}

struct miqt_string QUrl_fromPercentEncoding(struct miqt_string param1) {
	QByteArray param1_QByteArray(param1.data, param1.len);
	QString _ret = QUrl::fromPercentEncoding(param1_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toPercentEncoding(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QByteArray _qb = QUrl::toPercentEncoding(param1_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_fromAce(struct miqt_string domain) {
	QByteArray domain_QByteArray(domain.data, domain.len);
	QString _ret = QUrl::fromAce(domain_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toAce(struct miqt_string domain) {
	QString domain_QString = QString::fromUtf8(domain.data, domain.len);
	QByteArray _qb = QUrl::toAce(domain_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QUrl_idnWhitelist() {
	QStringList _ret = QUrl::idnWhitelist();
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

struct miqt_array /* of struct miqt_string */  QUrl_toStringList(struct miqt_array /* of QUrl* */  uris) {
	QList<QUrl> uris_QList;
	uris_QList.reserve(uris.len);
	QUrl** uris_arr = static_cast<QUrl**>(uris.data);
	for(size_t i = 0; i < uris.len; ++i) {
		uris_QList.push_back(*(uris_arr[i]));
	}
	QStringList _ret = QUrl::toStringList(uris_QList);
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

struct miqt_array /* of QUrl* */  QUrl_fromStringList(struct miqt_array /* of struct miqt_string */  uris) {
	QStringList uris_QList;
	uris_QList.reserve(uris.len);
	struct miqt_string* uris_arr = static_cast<struct miqt_string*>(uris.data);
	for(size_t i = 0; i < uris.len; ++i) {
		QString uris_arr_i_QString = QString::fromUtf8(uris_arr[i].data, uris_arr[i].len);
		uris_QList.push_back(uris_arr_i_QString);
	}
	QList<QUrl> _ret = QUrl::fromStringList(uris_QList);
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QUrl_setIdnWhitelist(struct miqt_array /* of struct miqt_string */  idnWhitelist) {
	QStringList idnWhitelist_QList;
	idnWhitelist_QList.reserve(idnWhitelist.len);
	struct miqt_string* idnWhitelist_arr = static_cast<struct miqt_string*>(idnWhitelist.data);
	for(size_t i = 0; i < idnWhitelist.len; ++i) {
		QString idnWhitelist_arr_i_QString = QString::fromUtf8(idnWhitelist_arr[i].data, idnWhitelist_arr[i].len);
		idnWhitelist_QList.push_back(idnWhitelist_arr_i_QString);
	}
	QUrl::setIdnWhitelist(idnWhitelist_QList);
}

void QUrl_setUrl2(QUrl* self, struct miqt_string url, int mode) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	self->setUrl(url_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_urlWithOptions(const QUrl* self, int options) {
	QString _ret = self->url(static_cast<QUrl::FormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toStringWithOptions(const QUrl* self, int options) {
	QString _ret = self->toString(static_cast<QUrl::FormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toDisplayStringWithOptions(const QUrl* self, int options) {
	QString _ret = self->toDisplayString(static_cast<QUrl::FormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toEncodedWithOptions(const QUrl* self, int options) {
	QByteArray _qb = self->toEncoded(static_cast<QUrl::FormattingOptions>(options));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QUrl* QUrl_fromUserInput2(struct miqt_string userInput, struct miqt_string workingDirectory) {
	QString userInput_QString = QString::fromUtf8(userInput.data, userInput.len);
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
	return new QUrl(QUrl::fromUserInput(userInput_QString, workingDirectory_QString));
}

QUrl* QUrl_fromUserInput3(struct miqt_string userInput, struct miqt_string workingDirectory, int options) {
	QString userInput_QString = QString::fromUtf8(userInput.data, userInput.len);
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
	return new QUrl(QUrl::fromUserInput(userInput_QString, workingDirectory_QString, static_cast<QUrl::UserInputResolutionOptions>(options)));
}

void QUrl_setAuthority2(QUrl* self, struct miqt_string authority, int mode) {
	QString authority_QString = QString::fromUtf8(authority.data, authority.len);
	self->setAuthority(authority_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_authorityWithOptions(const QUrl* self, int options) {
	QString _ret = self->authority(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setUserInfo2(QUrl* self, struct miqt_string userInfo, int mode) {
	QString userInfo_QString = QString::fromUtf8(userInfo.data, userInfo.len);
	self->setUserInfo(userInfo_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_userInfoWithOptions(const QUrl* self, int options) {
	QString _ret = self->userInfo(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setUserName2(QUrl* self, struct miqt_string userName, int mode) {
	QString userName_QString = QString::fromUtf8(userName.data, userName.len);
	self->setUserName(userName_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_userNameWithOptions(const QUrl* self, int options) {
	QString _ret = self->userName(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setPassword2(QUrl* self, struct miqt_string password, int mode) {
	QString password_QString = QString::fromUtf8(password.data, password.len);
	self->setPassword(password_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_passwordWithComponentFormattingOptions(const QUrl* self, int param1) {
	QString _ret = self->password(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setHost2(QUrl* self, struct miqt_string host, int mode) {
	QString host_QString = QString::fromUtf8(host.data, host.len);
	self->setHost(host_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_hostWithComponentFormattingOptions(const QUrl* self, int param1) {
	QString _ret = self->host(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QUrl_portWithDefaultPort(const QUrl* self, int defaultPort) {
	return self->port(static_cast<int>(defaultPort));
}

void QUrl_setPath2(QUrl* self, struct miqt_string path, int mode) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPath(path_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_pathWithOptions(const QUrl* self, int options) {
	QString _ret = self->path(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_fileNameWithOptions(const QUrl* self, int options) {
	QString _ret = self->fileName(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setQuery2(QUrl* self, struct miqt_string query, int mode) {
	QString query_QString = QString::fromUtf8(query.data, query.len);
	self->setQuery(query_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_queryWithComponentFormattingOptions(const QUrl* self, int param1) {
	QString _ret = self->query(static_cast<QUrl::ComponentFormattingOptions>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_fragmentWithOptions(const QUrl* self, int options) {
	QString _ret = self->fragment(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrl_setFragment2(QUrl* self, struct miqt_string fragment, int mode) {
	QString fragment_QString = QString::fromUtf8(fragment.data, fragment.len);
	self->setFragment(fragment_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QUrl_toPercentEncoding2(struct miqt_string param1, struct miqt_string exclude) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QByteArray exclude_QByteArray(exclude.data, exclude.len);
	QByteArray _qb = QUrl::toPercentEncoding(param1_QString, exclude_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toPercentEncoding3(struct miqt_string param1, struct miqt_string exclude, struct miqt_string include) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QByteArray exclude_QByteArray(exclude.data, exclude.len);
	QByteArray include_QByteArray(include.data, include.len);
	QByteArray _qb = QUrl::toPercentEncoding(param1_QString, exclude_QByteArray, include_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_fromAce2(struct miqt_string domain, int options) {
	QByteArray domain_QByteArray(domain.data, domain.len);
	QString _ret = QUrl::fromAce(domain_QByteArray, static_cast<QUrl::AceProcessingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrl_toAce2(struct miqt_string domain, int options) {
	QString domain_QString = QString::fromUtf8(domain.data, domain.len);
	QByteArray _qb = QUrl::toAce(domain_QString, static_cast<QUrl::AceProcessingOptions>(options));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QUrl_toStringList2(struct miqt_array /* of QUrl* */  uris, int options) {
	QList<QUrl> uris_QList;
	uris_QList.reserve(uris.len);
	QUrl** uris_arr = static_cast<QUrl**>(uris.data);
	for(size_t i = 0; i < uris.len; ++i) {
		uris_QList.push_back(*(uris_arr[i]));
	}
	QStringList _ret = QUrl::toStringList(uris_QList, static_cast<QUrl::FormattingOptions>(options));
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

struct miqt_array /* of QUrl* */  QUrl_fromStringList2(struct miqt_array /* of struct miqt_string */  uris, int mode) {
	QStringList uris_QList;
	uris_QList.reserve(uris.len);
	struct miqt_string* uris_arr = static_cast<struct miqt_string*>(uris.data);
	for(size_t i = 0; i < uris.len; ++i) {
		QString uris_arr_i_QString = QString::fromUtf8(uris_arr[i].data, uris_arr[i].len);
		uris_QList.push_back(uris_arr_i_QString);
	}
	QList<QUrl> _ret = QUrl::fromStringList(uris_QList, static_cast<QUrl::ParsingMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QUrl_delete(QUrl* self) {
	delete self;
}

QUuid* QUuid_new() {
	return new (std::nothrow) QUuid();
}

QUuid* QUuid_new2(unsigned int l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8) {
	return new (std::nothrow) QUuid(static_cast<unsigned int>(l), static_cast<unsigned short>(w1), static_cast<unsigned short>(w2), static_cast<unsigned char>(b1), static_cast<unsigned char>(b2), static_cast<unsigned char>(b3), static_cast<unsigned char>(b4), static_cast<unsigned char>(b5), static_cast<unsigned char>(b6), static_cast<unsigned char>(b7), static_cast<unsigned char>(b8));
}

QUuid* QUuid_new3(QUuid* param1) {
	return new (std::nothrow) QUuid(*param1);
}

struct miqt_string QUuid_toString(const QUuid* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_toByteArray(const QUuid* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_toRfc4122(const QUuid* self) {
	QByteArray _qb = self->toRfc4122();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QUuid* QUuid_createUuid() {
	return new QUuid(QUuid::createUuid());
}

QUuid* QUuid_createUuidV7() {
	return new QUuid(QUuid::createUuidV7());
}

unsigned int QUuid_data1(const QUuid* self) {
	return self->data1;
}

void QUuid_setData1(QUuid* self, unsigned int data1) {
	self->data1 = static_cast<unsigned int>(data1);
}

unsigned short QUuid_data2(const QUuid* self) {
	return self->data2;
}

void QUuid_setData2(QUuid* self, unsigned short data2) {
	self->data2 = static_cast<unsigned short>(data2);
}

unsigned short QUuid_data3(const QUuid* self) {
	return self->data3;
}

void QUuid_setData3(QUuid* self, unsigned short data3) {
	self->data3 = static_cast<unsigned short>(data3);
}

struct miqt_string QUuid_toStringWithMode(const QUuid* self, int mode) {
	QString _ret = self->toString(static_cast<QUuid::StringFormat>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_toByteArrayWithMode(const QUuid* self, int mode) {
	QByteArray _qb = self->toByteArray(static_cast<QUuid::StringFormat>(mode));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QUuid_delete(QUuid* self) {
	delete self;
}

const char* QPropertyBindingSourceLocation_fileName(const QPropertyBindingSourceLocation* self) {
	return (const char*) self->fileName;
}

void QPropertyBindingSourceLocation_setFileName(QPropertyBindingSourceLocation* self, const char* fileName) {
	self->fileName = fileName;
}

const char* QPropertyBindingSourceLocation_functionName(const QPropertyBindingSourceLocation* self) {
	return (const char*) self->functionName;
}

void QPropertyBindingSourceLocation_setFunctionName(QPropertyBindingSourceLocation* self, const char* functionName) {
	self->functionName = functionName;
}

unsigned int QPropertyBindingSourceLocation_line(const QPropertyBindingSourceLocation* self) {
	return self->line;
}

void QPropertyBindingSourceLocation_setLine(QPropertyBindingSourceLocation* self, unsigned int line) {
	self->line = static_cast<unsigned int>(line);
}

unsigned int QPropertyBindingSourceLocation_column(const QPropertyBindingSourceLocation* self) {
	return self->column;
}

void QPropertyBindingSourceLocation_setColumn(QPropertyBindingSourceLocation* self, unsigned int column) {
	self->column = static_cast<unsigned int>(column);
}

void QPropertyBindingSourceLocation_delete(QPropertyBindingSourceLocation* self) {
	delete self;
}

QPropertyBindingError* QPropertyBindingError_new() {
	return new (std::nothrow) QPropertyBindingError();
}

QPropertyBindingError* QPropertyBindingError_new2(QPropertyBindingError* other) {
	return new (std::nothrow) QPropertyBindingError(*other);
}

bool QPropertyBindingError_hasError(const QPropertyBindingError* self) {
	return self->hasError();
}

struct miqt_string QPropertyBindingError_description(const QPropertyBindingError* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPropertyBindingError_delete(QPropertyBindingError* self) {
	delete self;
}

bool QUntypedPropertyBinding_isNull(const QUntypedPropertyBinding* self) {
	return self->isNull();
}

QMetaType* QUntypedPropertyBinding_valueMetaType(const QUntypedPropertyBinding* self) {
	return new QMetaType(self->valueMetaType());
}

void QUntypedPropertyBinding_delete(QUntypedPropertyBinding* self) {
	delete self;
}

QPropertyObserver* QPropertyObserver_new() {
	return new (std::nothrow) QPropertyObserver();
}

void QPropertyObserver_delete(QPropertyObserver* self) {
	delete self;
}

QUntypedBindable* QUntypedBindable_new() {
	return new (std::nothrow) QUntypedBindable();
}

QUntypedBindable* QUntypedBindable_new2(QUntypedBindable* param1) {
	return new (std::nothrow) QUntypedBindable(*param1);
}

bool QUntypedBindable_isValid(const QUntypedBindable* self) {
	return self->isValid();
}

bool QUntypedBindable_isBindable(const QUntypedBindable* self) {
	return self->isBindable();
}

bool QUntypedBindable_isReadOnly(const QUntypedBindable* self) {
	return self->isReadOnly();
}

bool QUntypedBindable_hasBinding(const QUntypedBindable* self) {
	return self->hasBinding();
}

QMetaType* QUntypedBindable_metaType(const QUntypedBindable* self) {
	return new QMetaType(self->metaType());
}

void QUntypedBindable_delete(QUntypedBindable* self) {
	delete self;
}

class MiqtVirtualQTimer final : public QTimer {
public:

	MiqtVirtualQTimer(): QTimer() {}
	MiqtVirtualQTimer(QObject* parent): QTimer(parent) {}

	virtual ~MiqtVirtualQTimer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTimer::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTimer_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QTimer_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTimer::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTimer_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTimer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QTimer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTimer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTimer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTimer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTimer* QTimer_new() {
	return new (std::nothrow) MiqtVirtualQTimer();
}

QTimer* QTimer_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQTimer(parent);
}

void QTimer_virtbase(QTimer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTimer_metaObject(const QTimer* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QTimer_tr(const char* s) {
	QString _ret = QTimer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTimer_isActive(const QTimer* self) {
	return self->isActive();
}

int QTimer_timerId(const QTimer* self) {
	return self->timerId();
}

int QTimer_id(const QTimer* self) {
	Qt::TimerId _ret = self->id();
	return static_cast<int>(_ret);
}

void QTimer_setInterval(QTimer* self, int msec) {
	self->setInterval(static_cast<int>(msec));
}

int QTimer_interval(const QTimer* self) {
	return self->interval();
}

int QTimer_remainingTime(const QTimer* self) {
	return self->remainingTime();
}

void QTimer_setTimerType(QTimer* self, int atype) {
	self->setTimerType(static_cast<Qt::TimerType>(atype));
}

int QTimer_timerType(const QTimer* self) {
	Qt::TimerType _ret = self->timerType();
	return static_cast<int>(_ret);
}

void QTimer_setSingleShot(QTimer* self, bool singleShot) {
	self->setSingleShot(singleShot);
}

bool QTimer_isSingleShot(const QTimer* self) {
	return self->isSingleShot();
}

void QTimer_start(QTimer* self, int msec) {
	self->start(static_cast<int>(msec));
}

void QTimer_start2(QTimer* self) {
	self->start();
}

void QTimer_stop(QTimer* self) {
	self->stop();
}

struct miqt_string QTimer_tr2(const char* s, const char* c) {
	QString _ret = QTimer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimer_tr3(const char* s, const char* c, int n) {
	QString _ret = QTimer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTimer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = static_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QTimer_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTimer*>(self)->QTimer::event(event);
}

bool QTimer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTimer* self_cast = static_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTimer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTimer*>(self)->QTimer::eventFilter(watched, event);
}

QObject* QTimer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimer* self_cast = static_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTimer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimer* self_cast = static_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTimer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTimer* self_cast = static_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTimer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTimer* self_cast = static_cast<MiqtVirtualQTimer*>( (QTimer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTimer_delete(QTimer* self) {
	delete self;
}

void QFileDevice_virtbase(QFileDevice* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QFileDevice_metaObject(const QFileDevice* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QFileDevice_tr(const char* s) {
	QString _ret = QFileDevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QFileDevice_error(const QFileDevice* self) {
	return self->error();
}

void QFileDevice_unsetError(QFileDevice* self) {
	self->unsetError();
}

void QFileDevice_close(QFileDevice* self) {
	self->close();
}

bool QFileDevice_isSequential(const QFileDevice* self) {
	return self->isSequential();
}

int QFileDevice_handle(const QFileDevice* self) {
	return self->handle();
}

struct miqt_string QFileDevice_fileName(const QFileDevice* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QFileDevice_pos(const QFileDevice* self) {
	long long _ret = self->pos();
	return static_cast<long long>(_ret);
}

bool QFileDevice_seek(QFileDevice* self, long long offset) {
	return self->seek(static_cast<long long>(offset));
}

bool QFileDevice_atEnd(const QFileDevice* self) {
	return self->atEnd();
}

bool QFileDevice_flush(QFileDevice* self) {
	return self->flush();
}

long long QFileDevice_size(const QFileDevice* self) {
	long long _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QFileDevice_resize(QFileDevice* self, long long sz) {
	return self->resize(static_cast<long long>(sz));
}

int QFileDevice_permissions(const QFileDevice* self) {
	QFileDevice::Permissions _ret = self->permissions();
	return static_cast<int>(_ret);
}

bool QFileDevice_setPermissions(QFileDevice* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

QDateTime* QFileDevice_fileTime(const QFileDevice* self, int time) {
	return new QDateTime(self->fileTime(static_cast<QFileDevice::FileTime>(time)));
}

bool QFileDevice_setFileTime(QFileDevice* self, QDateTime* newDate, int fileTime) {
	return self->setFileTime(*newDate, static_cast<QFileDevice::FileTime>(fileTime));
}

struct miqt_string QFileDevice_tr2(const char* s, const char* c) {
	QString _ret = QFileDevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileDevice_tr3(const char* s, const char* c, int n) {
	QString _ret = QFileDevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFileDevice_delete(QFileDevice* self) {
	delete self;
}

QTimeZone* QTimeZone_new() {
	return new (std::nothrow) QTimeZone();
}

QTimeZone* QTimeZone_new2(int offsetSeconds) {
	return new (std::nothrow) QTimeZone(static_cast<int>(offsetSeconds));
}

QTimeZone* QTimeZone_new3(struct miqt_string ianaId) {
	QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
	return new (std::nothrow) QTimeZone(ianaId_QByteArray);
}

QTimeZone* QTimeZone_new4(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation) {
	QByteArray zoneId_QByteArray(zoneId.data, zoneId.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString abbreviation_QString = QString::fromUtf8(abbreviation.data, abbreviation.len);
	return new (std::nothrow) QTimeZone(zoneId_QByteArray, static_cast<int>(offsetSeconds), name_QString, abbreviation_QString);
}

QTimeZone* QTimeZone_new5(QTimeZone* other) {
	return new (std::nothrow) QTimeZone(*other);
}

void QTimeZone_swap(QTimeZone* self, QTimeZone* other) {
	self->swap(*other);
}

bool QTimeZone_isValid(const QTimeZone* self) {
	return self->isValid();
}

QTimeZone* QTimeZone_fromSecondsAheadOfUtc(int offset) {
	return new QTimeZone(QTimeZone::fromSecondsAheadOfUtc(static_cast<int>(offset)));
}

int QTimeZone_timeSpec(const QTimeZone* self) {
	Qt::TimeSpec _ret = self->timeSpec();
	return static_cast<int>(_ret);
}

int QTimeZone_fixedSecondsAheadOfUtc(const QTimeZone* self) {
	return self->fixedSecondsAheadOfUtc();
}

bool QTimeZone_isUtcOrFixedOffset(int spec) {
	return QTimeZone::isUtcOrFixedOffset(static_cast<Qt::TimeSpec>(spec));
}

bool QTimeZone_isUtcOrFixedOffset2(const QTimeZone* self) {
	return self->isUtcOrFixedOffset();
}

QTimeZone* QTimeZone_asBackendZone(const QTimeZone* self) {
	return new QTimeZone(self->asBackendZone());
}

struct miqt_string QTimeZone_id(const QTimeZone* self) {
	QByteArray _qb = self->id();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QTimeZone_country(const QTimeZone* self) {
	QLocale::Territory _ret = self->country();
	return static_cast<int>(_ret);
}

struct miqt_string QTimeZone_comment(const QTimeZone* self) {
	QString _ret = self->comment();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName(const QTimeZone* self, QDateTime* atDateTime) {
	QString _ret = self->displayName(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayNameWithTimeType(const QTimeZone* self, int timeType) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_abbreviation(const QTimeZone* self, QDateTime* atDateTime) {
	QString _ret = self->abbreviation(*atDateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTimeZone_offsetFromUtc(const QTimeZone* self, QDateTime* atDateTime) {
	return self->offsetFromUtc(*atDateTime);
}

int QTimeZone_standardTimeOffset(const QTimeZone* self, QDateTime* atDateTime) {
	return self->standardTimeOffset(*atDateTime);
}

int QTimeZone_daylightTimeOffset(const QTimeZone* self, QDateTime* atDateTime) {
	return self->daylightTimeOffset(*atDateTime);
}

bool QTimeZone_hasDaylightTime(const QTimeZone* self) {
	return self->hasDaylightTime();
}

bool QTimeZone_isDaylightTime(const QTimeZone* self, QDateTime* atDateTime) {
	return self->isDaylightTime(*atDateTime);
}

bool QTimeZone_hasTransitions(const QTimeZone* self) {
	return self->hasTransitions();
}

struct miqt_string QTimeZone_systemTimeZoneId() {
	QByteArray _qb = QTimeZone::systemTimeZoneId();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QTimeZone* QTimeZone_systemTimeZone() {
	return new QTimeZone(QTimeZone::systemTimeZone());
}

QTimeZone* QTimeZone_utc() {
	return new QTimeZone(QTimeZone::utc());
}

bool QTimeZone_isTimeZoneIdAvailable(struct miqt_string ianaId) {
	QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
	return QTimeZone::isTimeZoneIdAvailable(ianaId_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIds() {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds();
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

struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIdsWithOffsetSeconds(int offsetSeconds) {
	QList<QByteArray> _ret = QTimeZone::availableTimeZoneIds(static_cast<int>(offsetSeconds));
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

struct miqt_string QTimeZone_ianaIdToWindowsId(struct miqt_string ianaId) {
	QByteArray ianaId_QByteArray(ianaId.data, ianaId.len);
	QByteArray _qb = QTimeZone::ianaIdToWindowsId(ianaId_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_windowsIdToDefaultIanaId(struct miqt_string windowsId) {
	QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
	QByteArray _qb = QTimeZone::windowsIdToDefaultIanaId(windowsId_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QTimeZone_windowsIdToIanaIds(struct miqt_string windowsId) {
	QByteArray windowsId_QByteArray(windowsId.data, windowsId.len);
	QList<QByteArray> _ret = QTimeZone::windowsIdToIanaIds(windowsId_QByteArray);
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

struct miqt_string QTimeZone_displayName2(const QTimeZone* self, QDateTime* atDateTime, int nameType) {
	QString _ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName3(const QTimeZone* self, QDateTime* atDateTime, int nameType, QLocale* locale) {
	QString _ret = self->displayName(*atDateTime, static_cast<QTimeZone::NameType>(nameType), *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName4(const QTimeZone* self, int timeType, int nameType) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeZone_displayName5(const QTimeZone* self, int timeType, int nameType, QLocale* locale) {
	QString _ret = self->displayName(static_cast<QTimeZone::TimeType>(timeType), static_cast<QTimeZone::NameType>(nameType), *locale);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTimeZone_delete(QTimeZone* self) {
	delete self;
}

QFileInfo* QFileInfo_new() {
	return new (std::nothrow) QFileInfo();
}

QFileInfo* QFileInfo_new2(struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new (std::nothrow) QFileInfo(file_QString);
}

QFileInfo* QFileInfo_new3(QFileDevice* file) {
	return new (std::nothrow) QFileInfo(*file);
}

QFileInfo* QFileInfo_new4(QDir* dir, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new (std::nothrow) QFileInfo(*dir, file_QString);
}

QFileInfo* QFileInfo_new5(QFileInfo* fileinfo) {
	return new (std::nothrow) QFileInfo(*fileinfo);
}

void QFileInfo_swap(QFileInfo* self, QFileInfo* other) {
	self->swap(*other);
}

void QFileInfo_setFile(QFileInfo* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	self->setFile(file_QString);
}

void QFileInfo_setFileWithFile(QFileInfo* self, QFileDevice* file) {
	self->setFile(*file);
}

void QFileInfo_setFile2(QFileInfo* self, QDir* dir, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	self->setFile(*dir, file_QString);
}

bool QFileInfo_exists(const QFileInfo* self) {
	return self->exists();
}

bool QFileInfo_existsWithFile(struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return QFileInfo::exists(file_QString);
}

void QFileInfo_refresh(QFileInfo* self) {
	self->refresh();
}

struct miqt_string QFileInfo_filePath(const QFileInfo* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_absoluteFilePath(const QFileInfo* self) {
	QString _ret = self->absoluteFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_canonicalFilePath(const QFileInfo* self) {
	QString _ret = self->canonicalFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_fileName(const QFileInfo* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_baseName(const QFileInfo* self) {
	QString _ret = self->baseName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_completeBaseName(const QFileInfo* self) {
	QString _ret = self->completeBaseName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_suffix(const QFileInfo* self) {
	QString _ret = self->suffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_bundleName(const QFileInfo* self) {
	QString _ret = self->bundleName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_completeSuffix(const QFileInfo* self) {
	QString _ret = self->completeSuffix();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_path(const QFileInfo* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_absolutePath(const QFileInfo* self) {
	QString _ret = self->absolutePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_canonicalPath(const QFileInfo* self) {
	QString _ret = self->canonicalPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QFileInfo_dir(const QFileInfo* self) {
	return new QDir(self->dir());
}

QDir* QFileInfo_absoluteDir(const QFileInfo* self) {
	return new QDir(self->absoluteDir());
}

bool QFileInfo_isReadable(const QFileInfo* self) {
	return self->isReadable();
}

bool QFileInfo_isWritable(const QFileInfo* self) {
	return self->isWritable();
}

bool QFileInfo_isExecutable(const QFileInfo* self) {
	return self->isExecutable();
}

bool QFileInfo_isHidden(const QFileInfo* self) {
	return self->isHidden();
}

bool QFileInfo_isNativePath(const QFileInfo* self) {
	return self->isNativePath();
}

bool QFileInfo_isRelative(const QFileInfo* self) {
	return self->isRelative();
}

bool QFileInfo_isAbsolute(const QFileInfo* self) {
	return self->isAbsolute();
}

bool QFileInfo_makeAbsolute(QFileInfo* self) {
	return self->makeAbsolute();
}

bool QFileInfo_isFile(const QFileInfo* self) {
	return self->isFile();
}

bool QFileInfo_isDir(const QFileInfo* self) {
	return self->isDir();
}

bool QFileInfo_isSymLink(const QFileInfo* self) {
	return self->isSymLink();
}

bool QFileInfo_isSymbolicLink(const QFileInfo* self) {
	return self->isSymbolicLink();
}

bool QFileInfo_isOther(const QFileInfo* self) {
	return self->isOther();
}

bool QFileInfo_isShortcut(const QFileInfo* self) {
	return self->isShortcut();
}

bool QFileInfo_isAlias(const QFileInfo* self) {
	return self->isAlias();
}

bool QFileInfo_isJunction(const QFileInfo* self) {
	return self->isJunction();
}

bool QFileInfo_isRoot(const QFileInfo* self) {
	return self->isRoot();
}

bool QFileInfo_isBundle(const QFileInfo* self) {
	return self->isBundle();
}

struct miqt_string QFileInfo_symLinkTarget(const QFileInfo* self) {
	QString _ret = self->symLinkTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_readSymLink(const QFileInfo* self) {
	QString _ret = self->readSymLink();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_junctionTarget(const QFileInfo* self) {
	QString _ret = self->junctionTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFileInfo_owner(const QFileInfo* self) {
	QString _ret = self->owner();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QFileInfo_ownerId(const QFileInfo* self) {
	unsigned int _ret = self->ownerId();
	return static_cast<unsigned int>(_ret);
}

struct miqt_string QFileInfo_group(const QFileInfo* self) {
	QString _ret = self->group();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

unsigned int QFileInfo_groupId(const QFileInfo* self) {
	unsigned int _ret = self->groupId();
	return static_cast<unsigned int>(_ret);
}

bool QFileInfo_permission(const QFileInfo* self, int permissions) {
	return self->permission(static_cast<QFlags<QFileDevice::Permission>>(permissions));
}

int QFileInfo_permissions(const QFileInfo* self) {
	QFile::Permissions _ret = self->permissions();
	return static_cast<int>(_ret);
}

long long QFileInfo_size(const QFileInfo* self) {
	long long _ret = self->size();
	return static_cast<long long>(_ret);
}

QDateTime* QFileInfo_birthTime(const QFileInfo* self) {
	return new QDateTime(self->birthTime());
}

QDateTime* QFileInfo_metadataChangeTime(const QFileInfo* self) {
	return new QDateTime(self->metadataChangeTime());
}

QDateTime* QFileInfo_lastModified(const QFileInfo* self) {
	return new QDateTime(self->lastModified());
}

QDateTime* QFileInfo_lastRead(const QFileInfo* self) {
	return new QDateTime(self->lastRead());
}

QDateTime* QFileInfo_fileTime(const QFileInfo* self, int time) {
	return new QDateTime(self->fileTime(static_cast<QFileDevice::FileTime>(time)));
}

QDateTime* QFileInfo_birthTimeWithTz(const QFileInfo* self, QTimeZone* tz) {
	return new QDateTime(self->birthTime(*tz));
}

QDateTime* QFileInfo_metadataChangeTimeWithTz(const QFileInfo* self, QTimeZone* tz) {
	return new QDateTime(self->metadataChangeTime(*tz));
}

QDateTime* QFileInfo_lastModifiedWithTz(const QFileInfo* self, QTimeZone* tz) {
	return new QDateTime(self->lastModified(*tz));
}

QDateTime* QFileInfo_lastReadWithTz(const QFileInfo* self, QTimeZone* tz) {
	return new QDateTime(self->lastRead(*tz));
}

QDateTime* QFileInfo_fileTime2(const QFileInfo* self, int time, QTimeZone* tz) {
	return new QDateTime(self->fileTime(static_cast<QFileDevice::FileTime>(time), *tz));
}

bool QFileInfo_caching(const QFileInfo* self) {
	return self->caching();
}

void QFileInfo_setCaching(QFileInfo* self, bool on) {
	self->setCaching(on);
}

void QFileInfo_stat(QFileInfo* self) {
	self->stat();
}

void QFileInfo_delete(QFileInfo* self) {
	delete self;
}

QDir* QDir_new(QDir* param1) {
	return new (std::nothrow) QDir(*param1);
}

QDir* QDir_new2() {
	return new (std::nothrow) QDir();
}

QDir* QDir_new3(struct miqt_string path, struct miqt_string nameFilter) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
	return new (std::nothrow) QDir(path_QString, nameFilter_QString);
}

QDir* QDir_new4(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return new (std::nothrow) QDir(path_QString);
}

QDir* QDir_new5(struct miqt_string path, struct miqt_string nameFilter, int sort) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
	return new (std::nothrow) QDir(path_QString, nameFilter_QString, static_cast<QDir::SortFlags>(sort));
}

QDir* QDir_new6(struct miqt_string path, struct miqt_string nameFilter, int sort, int filter) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
	return new (std::nothrow) QDir(path_QString, nameFilter_QString, static_cast<QDir::SortFlags>(sort), static_cast<QDir::Filters>(filter));
}

void QDir_swap(QDir* self, QDir* other) {
	self->swap(*other);
}

void QDir_setPath(QDir* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPath(path_QString);
}

struct miqt_string QDir_path(const QDir* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_absolutePath(const QDir* self) {
	QString _ret = self->absolutePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_canonicalPath(const QDir* self) {
	QString _ret = self->canonicalPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDir_setSearchPaths(struct miqt_string prefix, struct miqt_array /* of struct miqt_string */  searchPaths) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QStringList searchPaths_QList;
	searchPaths_QList.reserve(searchPaths.len);
	struct miqt_string* searchPaths_arr = static_cast<struct miqt_string*>(searchPaths.data);
	for(size_t i = 0; i < searchPaths.len; ++i) {
		QString searchPaths_arr_i_QString = QString::fromUtf8(searchPaths_arr[i].data, searchPaths_arr[i].len);
		searchPaths_QList.push_back(searchPaths_arr_i_QString);
	}
	QDir::setSearchPaths(prefix_QString, searchPaths_QList);
}

void QDir_addSearchPath(struct miqt_string prefix, struct miqt_string path) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QDir::addSearchPath(prefix_QString, path_QString);
}

struct miqt_array /* of struct miqt_string */  QDir_searchPaths(struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QStringList _ret = QDir::searchPaths(prefix_QString);
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

struct miqt_string QDir_dirName(const QDir* self) {
	QString _ret = self->dirName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_filePath(const QDir* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = self->filePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_absoluteFilePath(const QDir* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = self->absoluteFilePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_relativeFilePath(const QDir* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = self->relativeFilePath(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_toNativeSeparators(struct miqt_string pathName) {
	QString pathName_QString = QString::fromUtf8(pathName.data, pathName.len);
	QString _ret = QDir::toNativeSeparators(pathName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDir_fromNativeSeparators(struct miqt_string pathName) {
	QString pathName_QString = QString::fromUtf8(pathName.data, pathName.len);
	QString _ret = QDir::fromNativeSeparators(pathName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDir_cd(QDir* self, struct miqt_string dirName) {
	QString dirName_QString = QString::fromUtf8(dirName.data, dirName.len);
	return self->cd(dirName_QString);
}

bool QDir_cdUp(QDir* self) {
	return self->cdUp();
}

struct miqt_array /* of struct miqt_string */  QDir_nameFilters(const QDir* self) {
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

void QDir_setNameFilters(QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	self->setNameFilters(nameFilters_QList);
}

int QDir_filter(const QDir* self) {
	QDir::Filters _ret = self->filter();
	return static_cast<int>(_ret);
}

void QDir_setFilter(QDir* self, int filter) {
	self->setFilter(static_cast<QDir::Filters>(filter));
}

int QDir_sorting(const QDir* self) {
	return self->sorting();
}

void QDir_setSorting(QDir* self, int sort) {
	self->setSorting(static_cast<QDir::SortFlags>(sort));
}

bool QDir_isEmpty(const QDir* self) {
	return self->isEmpty();
}

struct miqt_string QDir_operatorSubscript(const QDir* self, int64_t param1) {
	QString _ret = self->operator[]((int64_t)(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QDir_nameFiltersFromString(struct miqt_string nameFilter) {
	QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
	QStringList _ret = QDir::nameFiltersFromString(nameFilter_QString);
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

struct miqt_array /* of struct miqt_string */  QDir_entryList(const QDir* self) {
	QStringList _ret = self->entryList();
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

struct miqt_array /* of struct miqt_string */  QDir_entryListWithNameFilters(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QStringList _ret = self->entryList(nameFilters_QList);
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

struct miqt_array /* of QFileInfo* */  QDir_entryInfoList(const QDir* self) {
	QFileInfoList _ret = self->entryInfoList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QFileInfo* */  QDir_entryInfoListWithNameFilters(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QFileInfoList _ret = self->entryInfoList(nameFilters_QList);
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QDir_mkdir(const QDir* self, struct miqt_string dirName) {
	QString dirName_QString = QString::fromUtf8(dirName.data, dirName.len);
	return self->mkdir(dirName_QString);
}

bool QDir_rmdir(const QDir* self, struct miqt_string dirName) {
	QString dirName_QString = QString::fromUtf8(dirName.data, dirName.len);
	return self->rmdir(dirName_QString);
}

bool QDir_mkpath(const QDir* self, struct miqt_string dirPath) {
	QString dirPath_QString = QString::fromUtf8(dirPath.data, dirPath.len);
	return self->mkpath(dirPath_QString);
}

bool QDir_rmpath(const QDir* self, struct miqt_string dirPath) {
	QString dirPath_QString = QString::fromUtf8(dirPath.data, dirPath.len);
	return self->rmpath(dirPath_QString);
}

bool QDir_removeRecursively(QDir* self) {
	return self->removeRecursively();
}

bool QDir_isReadable(const QDir* self) {
	return self->isReadable();
}

bool QDir_exists(const QDir* self) {
	return self->exists();
}

bool QDir_isRoot(const QDir* self) {
	return self->isRoot();
}

bool QDir_isRelativePath(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QDir::isRelativePath(path_QString);
}

bool QDir_isAbsolutePath(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QDir::isAbsolutePath(path_QString);
}

bool QDir_isRelative(const QDir* self) {
	return self->isRelative();
}

bool QDir_isAbsolute(const QDir* self) {
	return self->isAbsolute();
}

bool QDir_makeAbsolute(QDir* self) {
	return self->makeAbsolute();
}

bool QDir_remove(QDir* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->remove(fileName_QString);
}

bool QDir_rename(QDir* self, struct miqt_string oldName, struct miqt_string newName) {
	QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->rename(oldName_QString, newName_QString);
}

bool QDir_existsWithName(const QDir* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->exists(name_QString);
}

struct miqt_array /* of QFileInfo* */  QDir_drives() {
	QFileInfoList _ret = QDir::drives();
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QChar* QDir_listSeparator() {
	return new QChar(QDir::listSeparator());
}

QChar* QDir_separator() {
	return new QChar(QDir::separator());
}

bool QDir_setCurrent(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QDir::setCurrent(path_QString);
}

QDir* QDir_current() {
	return new QDir(QDir::current());
}

struct miqt_string QDir_currentPath() {
	QString _ret = QDir::currentPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QDir_home() {
	return new QDir(QDir::home());
}

struct miqt_string QDir_homePath() {
	QString _ret = QDir::homePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QDir_root() {
	return new QDir(QDir::root());
}

struct miqt_string QDir_rootPath() {
	QString _ret = QDir::rootPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDir* QDir_temp() {
	return new QDir(QDir::temp());
}

struct miqt_string QDir_tempPath() {
	QString _ret = QDir::tempPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDir_match(struct miqt_array /* of struct miqt_string */  filters, struct miqt_string fileName) {
	QStringList filters_QList;
	filters_QList.reserve(filters.len);
	struct miqt_string* filters_arr = static_cast<struct miqt_string*>(filters.data);
	for(size_t i = 0; i < filters.len; ++i) {
		QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
		filters_QList.push_back(filters_arr_i_QString);
	}
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QDir::match(filters_QList, fileName_QString);
}

bool QDir_match2(struct miqt_string filter, struct miqt_string fileName) {
	QString filter_QString = QString::fromUtf8(filter.data, filter.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QDir::match(filter_QString, fileName_QString);
}

struct miqt_string QDir_cleanPath(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QString _ret = QDir::cleanPath(path_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDir_refresh(const QDir* self) {
	self->refresh();
}

bool QDir_isEmptyWithFilters(const QDir* self, int filters) {
	return self->isEmpty(static_cast<QDir::Filters>(filters));
}

struct miqt_array /* of struct miqt_string */  QDir_entryListWithFilters(const QDir* self, int filters) {
	QStringList _ret = self->entryList(static_cast<QDir::Filters>(filters));
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

struct miqt_array /* of struct miqt_string */  QDir_entryList2(const QDir* self, int filters, int sort) {
	QStringList _ret = self->entryList(static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
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

struct miqt_array /* of struct miqt_string */  QDir_entryList3(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QStringList _ret = self->entryList(nameFilters_QList, static_cast<QDir::Filters>(filters));
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

struct miqt_array /* of struct miqt_string */  QDir_entryList4(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QStringList _ret = self->entryList(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
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

struct miqt_array /* of QFileInfo* */  QDir_entryInfoListWithFilters(const QDir* self, int filters) {
	QFileInfoList _ret = self->entryInfoList(static_cast<QDir::Filters>(filters));
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QFileInfo* */  QDir_entryInfoList2(const QDir* self, int filters, int sort) {
	QFileInfoList _ret = self->entryInfoList(static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QFileInfo* */  QDir_entryInfoList3(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QFileInfoList _ret = self->entryInfoList(nameFilters_QList, static_cast<QDir::Filters>(filters));
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QFileInfo* */  QDir_entryInfoList4(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort) {
	QStringList nameFilters_QList;
	nameFilters_QList.reserve(nameFilters.len);
	struct miqt_string* nameFilters_arr = static_cast<struct miqt_string*>(nameFilters.data);
	for(size_t i = 0; i < nameFilters.len; ++i) {
		QString nameFilters_arr_i_QString = QString::fromUtf8(nameFilters_arr[i].data, nameFilters_arr[i].len);
		nameFilters_QList.push_back(nameFilters_arr_i_QString);
	}
	QFileInfoList _ret = self->entryInfoList(nameFilters_QList, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
	// Convert QList<> from C++ memory to manually-managed C memory
	QFileInfo** _arr = static_cast<QFileInfo**>(malloc(sizeof(QFileInfo*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QFileInfo(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDir_delete(QDir* self) {
	delete self;
}

QEasingCurve* QEasingCurve_new() {
	return new (std::nothrow) QEasingCurve();
}

QEasingCurve* QEasingCurve_new2(QEasingCurve* other) {
	return new (std::nothrow) QEasingCurve(*other);
}

void QEasingCurve_swap(QEasingCurve* self, QEasingCurve* other) {
	self->swap(*other);
}

double QEasingCurve_amplitude(const QEasingCurve* self) {
	double _ret = self->amplitude();
	return static_cast<double>(_ret);
}

void QEasingCurve_setAmplitude(QEasingCurve* self, double amplitude) {
	self->setAmplitude(static_cast<double>(amplitude));
}

double QEasingCurve_period(const QEasingCurve* self) {
	double _ret = self->period();
	return static_cast<double>(_ret);
}

void QEasingCurve_setPeriod(QEasingCurve* self, double period) {
	self->setPeriod(static_cast<double>(period));
}

double QEasingCurve_overshoot(const QEasingCurve* self) {
	double _ret = self->overshoot();
	return static_cast<double>(_ret);
}

void QEasingCurve_setOvershoot(QEasingCurve* self, double overshoot) {
	self->setOvershoot(static_cast<double>(overshoot));
}

void QEasingCurve_addCubicBezierSegment(QEasingCurve* self, QPointF* c1, QPointF* c2, QPointF* endPoint) {
	self->addCubicBezierSegment(*c1, *c2, *endPoint);
}

void QEasingCurve_addTCBSegment(QEasingCurve* self, QPointF* nextPoint, double t, double c, double b) {
	self->addTCBSegment(*nextPoint, static_cast<double>(t), static_cast<double>(c), static_cast<double>(b));
}

struct miqt_array /* of QPointF* */  QEasingCurve_toCubicSpline(const QEasingCurve* self) {
	QList<QPointF> _ret = self->toCubicSpline();
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

double QEasingCurve_valueForProgress(const QEasingCurve* self, double progress) {
	double _ret = self->valueForProgress(static_cast<double>(progress));
	return static_cast<double>(_ret);
}

void QEasingCurve_delete(QEasingCurve* self) {
	delete self;
}

class MiqtVirtualQThread final : public QThread {
public:

	MiqtVirtualQThread(): QThread() {}
	MiqtVirtualQThread(QObject* parent): QThread(parent) {}

	virtual ~MiqtVirtualQThread() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QThread::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QThread_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QThread_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QThread::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QThread_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QThread_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend int QThread_protectedbase_exec(bool* _dynamic_cast_ok, void* self);
	friend QObject* QThread_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QThread_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QThread_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QThread_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QThread* QThread_new() {
	return new (std::nothrow) MiqtVirtualQThread();
}

QThread* QThread_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQThread(parent);
}

void QThread_virtbase(QThread* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QThread_metaObject(const QThread* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QThread_tr(const char* s) {
	QString _ret = QThread::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QThread* QThread_currentThread() {
	return QThread::currentThread();
}

bool QThread_isMainThread() {
	return QThread::isMainThread();
}

int QThread_idealThreadCount() {
	return QThread::idealThreadCount();
}

void QThread_yieldCurrentThread() {
	QThread::yieldCurrentThread();
}

void QThread_setPriority(QThread* self, int priority) {
	self->setPriority(static_cast<QThread::Priority>(priority));
}

int QThread_priority(const QThread* self) {
	QThread::Priority _ret = self->priority();
	return static_cast<int>(_ret);
}

bool QThread_isFinished(const QThread* self) {
	return self->isFinished();
}

bool QThread_isRunning(const QThread* self) {
	return self->isRunning();
}

void QThread_requestInterruption(QThread* self) {
	self->requestInterruption();
}

bool QThread_isInterruptionRequested(const QThread* self) {
	return self->isInterruptionRequested();
}

void QThread_setStackSize(QThread* self, unsigned int stackSize) {
	self->setStackSize(static_cast<unsigned int>(stackSize));
}

unsigned int QThread_stackSize(const QThread* self) {
	unsigned int _ret = self->stackSize();
	return static_cast<unsigned int>(_ret);
}

QAbstractEventDispatcher* QThread_eventDispatcher(const QThread* self) {
	return self->eventDispatcher();
}

void QThread_setEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher) {
	self->setEventDispatcher(eventDispatcher);
}

bool QThread_event(QThread* self, QEvent* event) {
	return self->event(event);
}

int QThread_loopLevel(const QThread* self) {
	return self->loopLevel();
}

bool QThread_isCurrentThread(const QThread* self) {
	return self->isCurrentThread();
}

void QThread_setServiceLevel(QThread* self, int serviceLevel) {
	self->setServiceLevel(static_cast<QThread::QualityOfService>(serviceLevel));
}

int QThread_serviceLevel(const QThread* self) {
	QThread::QualityOfService _ret = self->serviceLevel();
	return static_cast<int>(_ret);
}

void QThread_start(QThread* self) {
	self->start();
}

void QThread_terminate(QThread* self) {
	self->terminate();
}

void QThread_exit(QThread* self) {
	self->exit();
}

void QThread_quit(QThread* self) {
	self->quit();
}

bool QThread_wait(QThread* self) {
	return self->wait();
}

bool QThread_waitWithTime(QThread* self, unsigned long time) {
	return self->wait(static_cast<unsigned long>(time));
}

void QThread_sleep(unsigned long param1) {
	QThread::sleep(static_cast<unsigned long>(param1));
}

void QThread_msleep(unsigned long param1) {
	QThread::msleep(static_cast<unsigned long>(param1));
}

void QThread_usleep(unsigned long param1) {
	QThread::usleep(static_cast<unsigned long>(param1));
}

struct miqt_string QThread_tr2(const char* s, const char* c) {
	QString _ret = QThread::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThread_tr3(const char* s, const char* c, int n) {
	QString _ret = QThread::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QThread_startWithPriority(QThread* self, int param1) {
	self->start(static_cast<QThread::Priority>(param1));
}

void QThread_exitWithRetcode(QThread* self, int retcode) {
	self->exit(static_cast<int>(retcode));
}

bool QThread_waitWithDeadline(QThread* self, QDeadlineTimer* deadline) {
	return self->wait(*deadline);
}

bool QThread_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQThread* self_cast = static_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QThread_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQThread*>(self)->QThread::event(event);
}

bool QThread_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQThread* self_cast = static_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QThread_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQThread*>(self)->QThread::eventFilter(watched, event);
}

int QThread_protectedbase_exec(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQThread* self_cast = static_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->exec();
}

QObject* QThread_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQThread* self_cast = static_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QThread_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQThread* self_cast = static_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QThread_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQThread* self_cast = static_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QThread_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQThread* self_cast = static_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QThread_delete(QThread* self) {
	delete self;
}

QItemSelectionRange* QItemSelectionRange_new() {
	return new (std::nothrow) QItemSelectionRange();
}

QItemSelectionRange* QItemSelectionRange_new2(QModelIndex* topL, QModelIndex* bottomR) {
	return new (std::nothrow) QItemSelectionRange(*topL, *bottomR);
}

QItemSelectionRange* QItemSelectionRange_new3(QModelIndex* index) {
	return new (std::nothrow) QItemSelectionRange(*index);
}

QItemSelectionRange* QItemSelectionRange_new4(QItemSelectionRange* param1) {
	return new (std::nothrow) QItemSelectionRange(*param1);
}

void QItemSelectionRange_swap(QItemSelectionRange* self, QItemSelectionRange* other) {
	self->swap(*other);
}

int QItemSelectionRange_top(const QItemSelectionRange* self) {
	return self->top();
}

int QItemSelectionRange_left(const QItemSelectionRange* self) {
	return self->left();
}

int QItemSelectionRange_bottom(const QItemSelectionRange* self) {
	return self->bottom();
}

int QItemSelectionRange_right(const QItemSelectionRange* self) {
	return self->right();
}

int QItemSelectionRange_width(const QItemSelectionRange* self) {
	return self->width();
}

int QItemSelectionRange_height(const QItemSelectionRange* self) {
	return self->height();
}

QPersistentModelIndex* QItemSelectionRange_topLeft(const QItemSelectionRange* self) {
	const QPersistentModelIndex& _ret = self->topLeft();
	// Cast returned reference into pointer
	return const_cast<QPersistentModelIndex*>(&_ret);
}

QPersistentModelIndex* QItemSelectionRange_bottomRight(const QItemSelectionRange* self) {
	const QPersistentModelIndex& _ret = self->bottomRight();
	// Cast returned reference into pointer
	return const_cast<QPersistentModelIndex*>(&_ret);
}

QModelIndex* QItemSelectionRange_parent(const QItemSelectionRange* self) {
	return new QModelIndex(self->parent());
}

QAbstractItemModel* QItemSelectionRange_model(const QItemSelectionRange* self) {
	return (QAbstractItemModel*) self->model();
}

bool QItemSelectionRange_contains(const QItemSelectionRange* self, QModelIndex* index) {
	return self->contains(*index);
}

bool QItemSelectionRange_contains2(const QItemSelectionRange* self, int row, int column, QModelIndex* parentIndex) {
	return self->contains(static_cast<int>(row), static_cast<int>(column), *parentIndex);
}

bool QItemSelectionRange_intersects(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return self->intersects(*other);
}

QItemSelectionRange* QItemSelectionRange_intersected(const QItemSelectionRange* self, QItemSelectionRange* other) {
	return new QItemSelectionRange(self->intersected(*other));
}

bool QItemSelectionRange_isValid(const QItemSelectionRange* self) {
	return self->isValid();
}

bool QItemSelectionRange_isEmpty(const QItemSelectionRange* self) {
	return self->isEmpty();
}

struct miqt_array /* of QModelIndex* */  QItemSelectionRange_indexes(const QItemSelectionRange* self) {
	QModelIndexList _ret = self->indexes();
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

void QItemSelectionRange_delete(QItemSelectionRange* self) {
	delete self;
}

class MiqtVirtualQItemSelectionModel final : public QItemSelectionModel {
public:

	MiqtVirtualQItemSelectionModel(): QItemSelectionModel() {}
	MiqtVirtualQItemSelectionModel(QAbstractItemModel* model, QObject* parent): QItemSelectionModel(model, parent) {}
	MiqtVirtualQItemSelectionModel(QAbstractItemModel* model): QItemSelectionModel(model) {}

	virtual ~MiqtVirtualQItemSelectionModel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setCurrentIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void setCurrentIndex(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
		if (handle__setCurrentIndex == 0) {
			QItemSelectionModel::setCurrentIndex(index, command);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);
		miqt_exec_callback_QItemSelectionModel_setCurrentIndex(this, handle__setCurrentIndex, sigval1, sigval2);

	}

	friend void QItemSelectionModel_virtualbase_setCurrentIndex(void* self, QModelIndex* index, int command);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__select = 0;

	// Subclass to allow providing a Go implementation
	virtual void select(const QModelIndex& index, QItemSelectionModel::SelectionFlags command) override {
		if (handle__select == 0) {
			QItemSelectionModel::select(index, command);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);
		miqt_exec_callback_QItemSelectionModel_select(this, handle__select, sigval1, sigval2);

	}

	friend void QItemSelectionModel_virtualbase_select(void* self, QModelIndex* index, int command);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__select2 = 0;

	// Subclass to allow providing a Go implementation
	virtual void select(const QItemSelection& selection, QItemSelectionModel::SelectionFlags command) override {
		if (handle__select2 == 0) {
			QItemSelectionModel::select(selection, command);
			return;
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);
		miqt_exec_callback_QItemSelectionModel_select2(this, handle__select2, sigval1, sigval2);

	}

	friend void QItemSelectionModel_virtualbase_select2(void* self, QItemSelection* selection, int command);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clear = 0;

	// Subclass to allow providing a Go implementation
	virtual void clear() override {
		if (handle__clear == 0) {
			QItemSelectionModel::clear();
			return;
		}

		miqt_exec_callback_QItemSelectionModel_clear(this, handle__clear);

	}

	friend void QItemSelectionModel_virtualbase_clear(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (handle__reset == 0) {
			QItemSelectionModel::reset();
			return;
		}

		miqt_exec_callback_QItemSelectionModel_reset(this, handle__reset);

	}

	friend void QItemSelectionModel_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clearCurrentIndex = 0;

	// Subclass to allow providing a Go implementation
	virtual void clearCurrentIndex() override {
		if (handle__clearCurrentIndex == 0) {
			QItemSelectionModel::clearCurrentIndex();
			return;
		}

		miqt_exec_callback_QItemSelectionModel_clearCurrentIndex(this, handle__clearCurrentIndex);

	}

	friend void QItemSelectionModel_virtualbase_clearCurrentIndex(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QItemSelectionModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QItemSelectionModel_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QItemSelectionModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QItemSelectionModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QItemSelectionModel_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QItemSelectionModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend void QItemSelectionModel_protectedbase_emitSelectionChanged(bool* _dynamic_cast_ok, void* self, QItemSelection* newSelection, QItemSelection* oldSelection);
	friend QObject* QItemSelectionModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QItemSelectionModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QItemSelectionModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QItemSelectionModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QItemSelectionModel* QItemSelectionModel_new() {
	return new (std::nothrow) MiqtVirtualQItemSelectionModel();
}

QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQItemSelectionModel(model, parent);
}

QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model) {
	return new (std::nothrow) MiqtVirtualQItemSelectionModel(model);
}

void QItemSelectionModel_virtbase(QItemSelectionModel* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QItemSelectionModel_metaObject(const QItemSelectionModel* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QItemSelectionModel_tr(const char* s) {
	QString _ret = QItemSelectionModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QItemSelectionModel_currentIndex(const QItemSelectionModel* self) {
	return new QModelIndex(self->currentIndex());
}

bool QItemSelectionModel_isSelected(const QItemSelectionModel* self, QModelIndex* index) {
	return self->isSelected(*index);
}

bool QItemSelectionModel_isRowSelected(const QItemSelectionModel* self, int row) {
	return self->isRowSelected(static_cast<int>(row));
}

bool QItemSelectionModel_isColumnSelected(const QItemSelectionModel* self, int column) {
	return self->isColumnSelected(static_cast<int>(column));
}

bool QItemSelectionModel_rowIntersectsSelection(const QItemSelectionModel* self, int row) {
	return self->rowIntersectsSelection(static_cast<int>(row));
}

bool QItemSelectionModel_columnIntersectsSelection(const QItemSelectionModel* self, int column) {
	return self->columnIntersectsSelection(static_cast<int>(column));
}

bool QItemSelectionModel_hasSelection(const QItemSelectionModel* self) {
	return self->hasSelection();
}

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedIndexes(const QItemSelectionModel* self) {
	QModelIndexList _ret = self->selectedIndexes();
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

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedRows(const QItemSelectionModel* self) {
	QModelIndexList _ret = self->selectedRows();
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

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedColumns(const QItemSelectionModel* self) {
	QModelIndexList _ret = self->selectedColumns();
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

QItemSelection* QItemSelectionModel_selection(const QItemSelectionModel* self) {
	return new QItemSelection(self->selection());
}

QAbstractItemModel* QItemSelectionModel_model(const QItemSelectionModel* self) {
	return (QAbstractItemModel*) self->model();
}

QAbstractItemModel* QItemSelectionModel_model2(QItemSelectionModel* self) {
	return self->model();
}

void QItemSelectionModel_setModel(QItemSelectionModel* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QItemSelectionModel_setCurrentIndex(QItemSelectionModel* self, QModelIndex* index, int command) {
	self->setCurrentIndex(*index, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

void QItemSelectionModel_select(QItemSelectionModel* self, QModelIndex* index, int command) {
	self->select(*index, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

void QItemSelectionModel_select2(QItemSelectionModel* self, QItemSelection* selection, int command) {
	self->select(*selection, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

void QItemSelectionModel_clear(QItemSelectionModel* self) {
	self->clear();
}

void QItemSelectionModel_reset(QItemSelectionModel* self) {
	self->reset();
}

void QItemSelectionModel_clearSelection(QItemSelectionModel* self) {
	self->clearSelection();
}

void QItemSelectionModel_clearCurrentIndex(QItemSelectionModel* self) {
	self->clearCurrentIndex();
}

void QItemSelectionModel_selectionChanged(QItemSelectionModel* self, QItemSelection* selected, QItemSelection* deselected) {
	self->selectionChanged(*selected, *deselected);
}

void QItemSelectionModel_connect_selectionChanged(QItemSelectionModel* self, intptr_t slot) {
	QItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QItemSelection&, const QItemSelection&)>(&QItemSelectionModel::selectionChanged), self, [=](const QItemSelection& selected, const QItemSelection& deselected) {
		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
		miqt_exec_callback_QItemSelectionModel_selectionChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_currentChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentChanged(*current, *previous);
}

void QItemSelectionModel_connect_currentChanged(QItemSelectionModel* self, intptr_t slot) {
	QItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QItemSelectionModel_currentChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_currentRowChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentRowChanged(*current, *previous);
}

void QItemSelectionModel_connect_currentRowChanged(QItemSelectionModel* self, intptr_t slot) {
	QItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentRowChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QItemSelectionModel_currentRowChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_currentColumnChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous) {
	self->currentColumnChanged(*current, *previous);
}

void QItemSelectionModel_connect_currentColumnChanged(QItemSelectionModel* self, intptr_t slot) {
	QItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(const QModelIndex&, const QModelIndex&)>(&QItemSelectionModel::currentColumnChanged), self, [=](const QModelIndex& current, const QModelIndex& previous) {
		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QItemSelectionModel_currentColumnChanged(slot, sigval1, sigval2);
	});
}

void QItemSelectionModel_modelChanged(QItemSelectionModel* self, QAbstractItemModel* model) {
	self->modelChanged(model);
}

void QItemSelectionModel_connect_modelChanged(QItemSelectionModel* self, intptr_t slot) {
	QItemSelectionModel::connect(self, static_cast<void (QItemSelectionModel::*)(QAbstractItemModel*)>(&QItemSelectionModel::modelChanged), self, [=](QAbstractItemModel* model) {
		QAbstractItemModel* sigval1 = model;
		miqt_exec_callback_QItemSelectionModel_modelChanged(slot, sigval1);
	});
}

struct miqt_string QItemSelectionModel_tr2(const char* s, const char* c) {
	QString _ret = QItemSelectionModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemSelectionModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QItemSelectionModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QItemSelectionModel_isRowSelected2(const QItemSelectionModel* self, int row, QModelIndex* parent) {
	return self->isRowSelected(static_cast<int>(row), *parent);
}

bool QItemSelectionModel_isColumnSelected2(const QItemSelectionModel* self, int column, QModelIndex* parent) {
	return self->isColumnSelected(static_cast<int>(column), *parent);
}

bool QItemSelectionModel_rowIntersectsSelection2(const QItemSelectionModel* self, int row, QModelIndex* parent) {
	return self->rowIntersectsSelection(static_cast<int>(row), *parent);
}

bool QItemSelectionModel_columnIntersectsSelection2(const QItemSelectionModel* self, int column, QModelIndex* parent) {
	return self->columnIntersectsSelection(static_cast<int>(column), *parent);
}

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedRowsWithColumn(const QItemSelectionModel* self, int column) {
	QModelIndexList _ret = self->selectedRows(static_cast<int>(column));
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

struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedColumnsWithRow(const QItemSelectionModel* self, int row) {
	QModelIndexList _ret = self->selectedColumns(static_cast<int>(row));
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

bool QItemSelectionModel_override_virtual_setCurrentIndex(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setCurrentIndex = slot;
	return true;
}

void QItemSelectionModel_virtualbase_setCurrentIndex(void* self, QModelIndex* index, int command) {
	static_cast<MiqtVirtualQItemSelectionModel*>(self)->QItemSelectionModel::setCurrentIndex(*index, static_cast<QFlags<MiqtVirtualQItemSelectionModel::SelectionFlag>>(command));
}

bool QItemSelectionModel_override_virtual_select(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__select = slot;
	return true;
}

void QItemSelectionModel_virtualbase_select(void* self, QModelIndex* index, int command) {
	static_cast<MiqtVirtualQItemSelectionModel*>(self)->QItemSelectionModel::select(*index, static_cast<QFlags<MiqtVirtualQItemSelectionModel::SelectionFlag>>(command));
}

bool QItemSelectionModel_override_virtual_select2(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__select2 = slot;
	return true;
}

void QItemSelectionModel_virtualbase_select2(void* self, QItemSelection* selection, int command) {
	static_cast<MiqtVirtualQItemSelectionModel*>(self)->QItemSelectionModel::select(*selection, static_cast<QFlags<MiqtVirtualQItemSelectionModel::SelectionFlag>>(command));
}

bool QItemSelectionModel_override_virtual_clear(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clear = slot;
	return true;
}

void QItemSelectionModel_virtualbase_clear(void* self) {
	static_cast<MiqtVirtualQItemSelectionModel*>(self)->QItemSelectionModel::clear();
}

bool QItemSelectionModel_override_virtual_reset(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = slot;
	return true;
}

void QItemSelectionModel_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQItemSelectionModel*>(self)->QItemSelectionModel::reset();
}

bool QItemSelectionModel_override_virtual_clearCurrentIndex(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clearCurrentIndex = slot;
	return true;
}

void QItemSelectionModel_virtualbase_clearCurrentIndex(void* self) {
	static_cast<MiqtVirtualQItemSelectionModel*>(self)->QItemSelectionModel::clearCurrentIndex();
}

bool QItemSelectionModel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QItemSelectionModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQItemSelectionModel*>(self)->QItemSelectionModel::event(event);
}

bool QItemSelectionModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QItemSelectionModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQItemSelectionModel*>(self)->QItemSelectionModel::eventFilter(watched, event);
}

void QItemSelectionModel_protectedbase_emitSelectionChanged(bool* _dynamic_cast_ok, void* self, QItemSelection* newSelection, QItemSelection* oldSelection) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->emitSelectionChanged(*newSelection, *oldSelection);
}

QObject* QItemSelectionModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QItemSelectionModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QItemSelectionModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QItemSelectionModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQItemSelectionModel* self_cast = static_cast<MiqtVirtualQItemSelectionModel*>( (QItemSelectionModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QItemSelectionModel_delete(QItemSelectionModel* self) {
	delete self;
}

QItemSelection* QItemSelection_new(QModelIndex* topLeft, QModelIndex* bottomRight) {
	return new (std::nothrow) QItemSelection(*topLeft, *bottomRight);
}

QItemSelection* QItemSelection_new2() {
	return new (std::nothrow) QItemSelection();
}

QItemSelection* QItemSelection_new3(QItemSelection* param1) {
	return new (std::nothrow) QItemSelection(*param1);
}

void QItemSelection_select(QItemSelection* self, QModelIndex* topLeft, QModelIndex* bottomRight) {
	self->select(*topLeft, *bottomRight);
}

bool QItemSelection_contains(const QItemSelection* self, QModelIndex* index) {
	return self->contains(*index);
}

struct miqt_array /* of QModelIndex* */  QItemSelection_indexes(const QItemSelection* self) {
	QModelIndexList _ret = self->indexes();
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

void QItemSelection_merge(QItemSelection* self, QItemSelection* other, int command) {
	self->merge(*other, static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command));
}

void QItemSelection_split(QItemSelectionRange* range, QItemSelectionRange* other, QItemSelection* result) {
	QItemSelection::split(*range, *other, result);
}

void QItemSelection_delete(QItemSelection* self) {
	delete self;
}

struct miqt_string QJsonParseError_errorString(const QJsonParseError* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QJsonParseError_offset(const QJsonParseError* self) {
	return self->offset;
}

void QJsonParseError_setOffset(QJsonParseError* self, int offset) {
	self->offset = static_cast<int>(offset);
}

int QJsonParseError_error(const QJsonParseError* self) {
	QJsonParseError::ParseError error_ret = self->error;
	return static_cast<int>(error_ret);
}

void QJsonParseError_setError(QJsonParseError* self, int error) {
	self->error = static_cast<QJsonParseError::ParseError>(error);
}

void QJsonParseError_delete(QJsonParseError* self) {
	delete self;
}

QJsonDocument* QJsonDocument_new() {
	return new (std::nothrow) QJsonDocument();
}

QJsonDocument* QJsonDocument_new2(QJsonObject* object) {
	return new (std::nothrow) QJsonDocument(*object);
}

QJsonDocument* QJsonDocument_new3(QJsonArray* array) {
	return new (std::nothrow) QJsonDocument(*array);
}

QJsonDocument* QJsonDocument_new4(QJsonDocument* other) {
	return new (std::nothrow) QJsonDocument(*other);
}

void QJsonDocument_swap(QJsonDocument* self, QJsonDocument* other) {
	self->swap(*other);
}

QJsonDocument* QJsonDocument_fromVariant(QVariant* variant) {
	return new QJsonDocument(QJsonDocument::fromVariant(*variant));
}

QVariant* QJsonDocument_toVariant(const QJsonDocument* self) {
	return new QVariant(self->toVariant());
}

QJsonDocument* QJsonDocument_fromJson(struct miqt_string json) {
	QByteArray json_QByteArray(json.data, json.len);
	return new QJsonDocument(QJsonDocument::fromJson(json_QByteArray));
}

struct miqt_string QJsonDocument_toJson(const QJsonDocument* self) {
	QByteArray _qb = self->toJson();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QJsonDocument_isEmpty(const QJsonDocument* self) {
	return self->isEmpty();
}

bool QJsonDocument_isArray(const QJsonDocument* self) {
	return self->isArray();
}

bool QJsonDocument_isObject(const QJsonDocument* self) {
	return self->isObject();
}

QJsonObject* QJsonDocument_object(const QJsonDocument* self) {
	return new QJsonObject(self->object());
}

QJsonArray* QJsonDocument_array(const QJsonDocument* self) {
	return new QJsonArray(self->array());
}

void QJsonDocument_setObject(QJsonDocument* self, QJsonObject* object) {
	self->setObject(*object);
}

void QJsonDocument_setArray(QJsonDocument* self, QJsonArray* array) {
	self->setArray(*array);
}

QJsonValue* QJsonDocument_operatorSubscript(const QJsonDocument* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->operator[](key_QString));
}

QJsonValue* QJsonDocument_operatorSubscriptWithQsizetype(const QJsonDocument* self, int64_t i) {
	return new QJsonValue(self->operator[]((int64_t)(i)));
}

bool QJsonDocument_isNull(const QJsonDocument* self) {
	return self->isNull();
}

QJsonDocument* QJsonDocument_fromJson2(struct miqt_string json, QJsonParseError* error) {
	QByteArray json_QByteArray(json.data, json.len);
	return new QJsonDocument(QJsonDocument::fromJson(json_QByteArray, error));
}

struct miqt_string QJsonDocument_toJsonWithFormat(const QJsonDocument* self, int format) {
	QByteArray _qb = self->toJson(static_cast<QJsonDocument::JsonFormat>(format));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QJsonDocument_delete(QJsonDocument* self) {
	delete self;
}

QJsonValue* QJsonValue_new() {
	return new (std::nothrow) QJsonValue();
}

QJsonValue* QJsonValue_new2(bool b) {
	return new (std::nothrow) QJsonValue(b);
}

QJsonValue* QJsonValue_new3(double n) {
	return new (std::nothrow) QJsonValue(static_cast<double>(n));
}

QJsonValue* QJsonValue_new4(int n) {
	return new (std::nothrow) QJsonValue(static_cast<int>(n));
}

QJsonValue* QJsonValue_new5(long long v) {
	return new (std::nothrow) QJsonValue(static_cast<long long>(v));
}

QJsonValue* QJsonValue_new6(struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return new (std::nothrow) QJsonValue(s_QString);
}

QJsonValue* QJsonValue_new7(QJsonArray* a) {
	return new (std::nothrow) QJsonValue(*a);
}

QJsonValue* QJsonValue_new8(QJsonObject* o) {
	return new (std::nothrow) QJsonValue(*o);
}

QJsonValue* QJsonValue_new9(QJsonValue* other) {
	return new (std::nothrow) QJsonValue(*other);
}

void QJsonValue_swap(QJsonValue* self, QJsonValue* other) {
	self->swap(*other);
}

QJsonValue* QJsonValue_fromVariant(QVariant* variant) {
	return new QJsonValue(QJsonValue::fromVariant(*variant));
}

QVariant* QJsonValue_toVariant(const QJsonValue* self) {
	return new QVariant(self->toVariant());
}

struct miqt_string QJsonValue_toJson(const QJsonValue* self) {
	QByteArray _qb = self->toJson();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QJsonValue_isNull(const QJsonValue* self) {
	return self->isNull();
}

bool QJsonValue_isBool(const QJsonValue* self) {
	return self->isBool();
}

bool QJsonValue_isDouble(const QJsonValue* self) {
	return self->isDouble();
}

bool QJsonValue_isString(const QJsonValue* self) {
	return self->isString();
}

bool QJsonValue_isArray(const QJsonValue* self) {
	return self->isArray();
}

bool QJsonValue_isObject(const QJsonValue* self) {
	return self->isObject();
}

bool QJsonValue_isUndefined(const QJsonValue* self) {
	return self->isUndefined();
}

bool QJsonValue_toBool(const QJsonValue* self) {
	return self->toBool();
}

int QJsonValue_toInt(const QJsonValue* self) {
	return self->toInt();
}

long long QJsonValue_toInteger(const QJsonValue* self) {
	long long _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

double QJsonValue_toDouble(const QJsonValue* self) {
	return self->toDouble();
}

struct miqt_string QJsonValue_toString(const QJsonValue* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QJsonValue_toStringWithDefaultValue(const QJsonValue* self, struct miqt_string defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJsonArray* QJsonValue_toArray(const QJsonValue* self) {
	return new QJsonArray(self->toArray());
}

QJsonArray* QJsonValue_toArrayWithDefaultValue(const QJsonValue* self, QJsonArray* defaultValue) {
	return new QJsonArray(self->toArray(*defaultValue));
}

QJsonObject* QJsonValue_toObject(const QJsonValue* self) {
	return new QJsonObject(self->toObject());
}

QJsonObject* QJsonValue_toObjectWithDefaultValue(const QJsonValue* self, QJsonObject* defaultValue) {
	return new QJsonObject(self->toObject(*defaultValue));
}

QJsonValue* QJsonValue_operatorSubscript(const QJsonValue* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->operator[](key_QString));
}

QJsonValue* QJsonValue_operatorSubscriptWithQsizetype(const QJsonValue* self, int64_t i) {
	return new QJsonValue(self->operator[]((int64_t)(i)));
}

struct miqt_string QJsonValue_toJsonWithFormat(const QJsonValue* self, int format) {
	QByteArray _qb = self->toJson(static_cast<QJsonDocument::JsonFormat>(format));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QJsonValue_toBoolWithDefaultValue(const QJsonValue* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

int QJsonValue_toIntWithDefaultValue(const QJsonValue* self, int defaultValue) {
	return self->toInt(static_cast<int>(defaultValue));
}

long long QJsonValue_toIntegerWithDefaultValue(const QJsonValue* self, long long defaultValue) {
	long long _ret = self->toInteger(static_cast<long long>(defaultValue));
	return static_cast<long long>(_ret);
}

double QJsonValue_toDoubleWithDefaultValue(const QJsonValue* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

void QJsonValue_delete(QJsonValue* self) {
	delete self;
}

QJsonValueConstRef* QJsonValueConstRef_new(QJsonValueConstRef* param1) {
	return new (std::nothrow) QJsonValueConstRef(*param1);
}

QJsonValue* QJsonValueConstRef_ToQJsonValue(const QJsonValueConstRef* self) {
	return new QJsonValue(self->operator QJsonValue());
}

QVariant* QJsonValueConstRef_toVariant(const QJsonValueConstRef* self) {
	return new QVariant(self->toVariant());
}

int QJsonValueConstRef_type(const QJsonValueConstRef* self) {
	QJsonValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QJsonValueConstRef_isNull(const QJsonValueConstRef* self) {
	return self->isNull();
}

bool QJsonValueConstRef_isBool(const QJsonValueConstRef* self) {
	return self->isBool();
}

bool QJsonValueConstRef_isDouble(const QJsonValueConstRef* self) {
	return self->isDouble();
}

bool QJsonValueConstRef_isString(const QJsonValueConstRef* self) {
	return self->isString();
}

bool QJsonValueConstRef_isArray(const QJsonValueConstRef* self) {
	return self->isArray();
}

bool QJsonValueConstRef_isObject(const QJsonValueConstRef* self) {
	return self->isObject();
}

bool QJsonValueConstRef_isUndefined(const QJsonValueConstRef* self) {
	return self->isUndefined();
}

bool QJsonValueConstRef_toBool(const QJsonValueConstRef* self) {
	return self->toBool();
}

int QJsonValueConstRef_toInt(const QJsonValueConstRef* self) {
	return self->toInt();
}

long long QJsonValueConstRef_toInteger(const QJsonValueConstRef* self) {
	long long _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

double QJsonValueConstRef_toDouble(const QJsonValueConstRef* self) {
	return self->toDouble();
}

struct miqt_string QJsonValueConstRef_toString(const QJsonValueConstRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJsonArray* QJsonValueConstRef_toArray(const QJsonValueConstRef* self) {
	return new QJsonArray(self->toArray());
}

QJsonObject* QJsonValueConstRef_toObject(const QJsonValueConstRef* self) {
	return new QJsonObject(self->toObject());
}

QJsonValue* QJsonValueConstRef_operatorSubscript(const QJsonValueConstRef* self, int64_t i) {
	return new QJsonValue(self->operator[]((int64_t)(i)));
}

bool QJsonValueConstRef_toBoolWithDefaultValue(const QJsonValueConstRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

int QJsonValueConstRef_toIntWithDefaultValue(const QJsonValueConstRef* self, int defaultValue) {
	return self->toInt(static_cast<int>(defaultValue));
}

long long QJsonValueConstRef_toIntegerWithDefaultValue(const QJsonValueConstRef* self, long long defaultValue) {
	long long _ret = self->toInteger(static_cast<long long>(defaultValue));
	return static_cast<long long>(_ret);
}

double QJsonValueConstRef_toDoubleWithDefaultValue(const QJsonValueConstRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

struct miqt_string QJsonValueConstRef_toStringWithDefaultValue(const QJsonValueConstRef* self, struct miqt_string defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QJsonValueConstRef_delete(QJsonValueConstRef* self) {
	delete self;
}

QJsonValueRef* QJsonValueRef_new(QJsonValueRef* param1) {
	return new (std::nothrow) QJsonValueRef(*param1);
}

QJsonValueRef* QJsonValueRef_new2(QJsonArray* array, int64_t idx) {
	return new (std::nothrow) QJsonValueRef(array, (int64_t)(idx));
}

QJsonValueRef* QJsonValueRef_new3(QJsonObject* object, int64_t idx) {
	return new (std::nothrow) QJsonValueRef(object, (int64_t)(idx));
}

void QJsonValueRef_virtbase(QJsonValueRef* src, QJsonValueConstRef** outptr_QJsonValueConstRef) {
	*outptr_QJsonValueConstRef = static_cast<QJsonValueConstRef*>(src);
}

QJsonValue* QJsonValueRef_ToQJsonValue(const QJsonValueRef* self) {
	return new QJsonValue(self->operator QJsonValue());
}

QVariant* QJsonValueRef_toVariant(const QJsonValueRef* self) {
	return new QVariant(self->toVariant());
}

int QJsonValueRef_type(const QJsonValueRef* self) {
	QJsonValue::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QJsonValueRef_isNull(const QJsonValueRef* self) {
	return self->isNull();
}

bool QJsonValueRef_isBool(const QJsonValueRef* self) {
	return self->isBool();
}

bool QJsonValueRef_isDouble(const QJsonValueRef* self) {
	return self->isDouble();
}

bool QJsonValueRef_isString(const QJsonValueRef* self) {
	return self->isString();
}

bool QJsonValueRef_isArray(const QJsonValueRef* self) {
	return self->isArray();
}

bool QJsonValueRef_isObject(const QJsonValueRef* self) {
	return self->isObject();
}

bool QJsonValueRef_isUndefined(const QJsonValueRef* self) {
	return self->isUndefined();
}

bool QJsonValueRef_toBool(const QJsonValueRef* self) {
	return self->toBool();
}

int QJsonValueRef_toInt(const QJsonValueRef* self) {
	return self->toInt();
}

long long QJsonValueRef_toInteger(const QJsonValueRef* self) {
	long long _ret = self->toInteger();
	return static_cast<long long>(_ret);
}

double QJsonValueRef_toDouble(const QJsonValueRef* self) {
	return self->toDouble();
}

struct miqt_string QJsonValueRef_toString(const QJsonValueRef* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJsonArray* QJsonValueRef_toArray(const QJsonValueRef* self) {
	return new QJsonArray(self->toArray());
}

QJsonObject* QJsonValueRef_toObject(const QJsonValueRef* self) {
	return new QJsonObject(self->toObject());
}

QJsonValue* QJsonValueRef_operatorSubscript(const QJsonValueRef* self, int64_t i) {
	return new QJsonValue(self->operator[]((int64_t)(i)));
}

bool QJsonValueRef_toBoolWithDefaultValue(const QJsonValueRef* self, bool defaultValue) {
	return self->toBool(defaultValue);
}

int QJsonValueRef_toIntWithDefaultValue(const QJsonValueRef* self, int defaultValue) {
	return self->toInt(static_cast<int>(defaultValue));
}

long long QJsonValueRef_toIntegerWithDefaultValue(const QJsonValueRef* self, long long defaultValue) {
	long long _ret = self->toInteger(static_cast<long long>(defaultValue));
	return static_cast<long long>(_ret);
}

double QJsonValueRef_toDoubleWithDefaultValue(const QJsonValueRef* self, double defaultValue) {
	return self->toDouble(static_cast<double>(defaultValue));
}

struct miqt_string QJsonValueRef_toStringWithDefaultValue(const QJsonValueRef* self, struct miqt_string defaultValue) {
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	QString _ret = self->toString(defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QJsonValueRef_delete(QJsonValueRef* self) {
	delete self;
}

QJsonArray* QJsonArray_new() {
	return new (std::nothrow) QJsonArray();
}

QJsonArray* QJsonArray_new2(QJsonArray* other) {
	return new (std::nothrow) QJsonArray(*other);
}

QJsonArray* QJsonArray_fromStringList(struct miqt_array /* of struct miqt_string */  list) {
	QStringList list_QList;
	list_QList.reserve(list.len);
	struct miqt_string* list_arr = static_cast<struct miqt_string*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
		list_QList.push_back(list_arr_i_QString);
	}
	return new QJsonArray(QJsonArray::fromStringList(list_QList));
}

QJsonArray* QJsonArray_fromVariantList(struct miqt_array /* of QVariant* */  list) {
	QVariantList list_QList;
	list_QList.reserve(list.len);
	QVariant** list_arr = static_cast<QVariant**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	return new QJsonArray(QJsonArray::fromVariantList(list_QList));
}

struct miqt_array /* of QVariant* */  QJsonArray_toVariantList(const QJsonArray* self) {
	QVariantList _ret = self->toVariantList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QVariant(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int64_t QJsonArray_size(const QJsonArray* self) {
	int64_t _ret = self->size();
	return static_cast<int64_t>(_ret);
}

int64_t QJsonArray_count(const QJsonArray* self) {
	int64_t _ret = self->count();
	return static_cast<int64_t>(_ret);
}

bool QJsonArray_isEmpty(const QJsonArray* self) {
	return self->isEmpty();
}

QJsonValue* QJsonArray_at(const QJsonArray* self, int64_t i) {
	return new QJsonValue(self->at((int64_t)(i)));
}

QJsonValue* QJsonArray_first(const QJsonArray* self) {
	return new QJsonValue(self->first());
}

QJsonValue* QJsonArray_last(const QJsonArray* self) {
	return new QJsonValue(self->last());
}

void QJsonArray_prepend(QJsonArray* self, QJsonValue* value) {
	self->prepend(*value);
}

void QJsonArray_append(QJsonArray* self, QJsonValue* value) {
	self->append(*value);
}

void QJsonArray_removeAt(QJsonArray* self, int64_t i) {
	self->removeAt((int64_t)(i));
}

QJsonValue* QJsonArray_takeAt(QJsonArray* self, int64_t i) {
	return new QJsonValue(self->takeAt((int64_t)(i)));
}

void QJsonArray_removeFirst(QJsonArray* self) {
	self->removeFirst();
}

void QJsonArray_removeLast(QJsonArray* self) {
	self->removeLast();
}

void QJsonArray_replace(QJsonArray* self, int64_t i, QJsonValue* value) {
	self->replace((int64_t)(i), *value);
}

bool QJsonArray_contains(const QJsonArray* self, QJsonValue* element) {
	return self->contains(*element);
}

QJsonValueRef* QJsonArray_operatorSubscript(QJsonArray* self, int64_t i) {
	return new QJsonValueRef(self->operator[]((int64_t)(i)));
}

QJsonValue* QJsonArray_operatorSubscriptWithQsizetype(const QJsonArray* self, int64_t i) {
	return new QJsonValue(self->operator[]((int64_t)(i)));
}

void QJsonArray_swap(QJsonArray* self, QJsonArray* other) {
	self->swap(*other);
}

QJsonArray* QJsonArray_operatorPlus(const QJsonArray* self, QJsonValue* v) {
	return new QJsonArray(self->operator+(*v));
}

QJsonArray* QJsonArray_operatorPlusAssign(QJsonArray* self, QJsonValue* v) {
	QJsonArray& _ret = self->operator+=(*v);
	// Cast returned reference into pointer
	return &_ret;
}

QJsonArray* QJsonArray_operatorShiftLeft(QJsonArray* self, QJsonValue* v) {
	QJsonArray& _ret = self->operator<<(*v);
	// Cast returned reference into pointer
	return &_ret;
}

void QJsonArray_pushBack(QJsonArray* self, QJsonValue* t) {
	self->push_back(*t);
}

void QJsonArray_pushFront(QJsonArray* self, QJsonValue* t) {
	self->push_front(*t);
}

void QJsonArray_popFront(QJsonArray* self) {
	self->pop_front();
}

void QJsonArray_popBack(QJsonArray* self) {
	self->pop_back();
}

bool QJsonArray_empty(const QJsonArray* self) {
	return self->empty();
}

void QJsonArray_delete(QJsonArray* self) {
	delete self;
}

QJsonObject* QJsonObject_new() {
	return new (std::nothrow) QJsonObject();
}

QJsonObject* QJsonObject_new2(QJsonObject* other) {
	return new (std::nothrow) QJsonObject(*other);
}

void QJsonObject_swap(QJsonObject* self, QJsonObject* other) {
	self->swap(*other);
}

QJsonObject* QJsonObject_fromVariantMap(struct miqt_map /* of struct miqt_string to QVariant* */  map) {
	QVariantMap map_QMap;
	struct miqt_string* map_karr = static_cast<struct miqt_string*>(map.keys);
	QVariant** map_varr = static_cast<QVariant**>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
		map_QMap[map_karr_i_QString] = *(map_varr[i]);
	}
	return new QJsonObject(QJsonObject::fromVariantMap(map_QMap));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QJsonObject_toVariantMap(const QJsonObject* self) {
	QVariantMap _ret = self->toVariantMap();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

QJsonObject* QJsonObject_fromVariantHash(struct miqt_map /* of struct miqt_string to QVariant* */  map) {
	QVariantHash map_QMap;
	map_QMap.reserve(map.len);
	struct miqt_string* map_karr = static_cast<struct miqt_string*>(map.keys);
	QVariant** map_varr = static_cast<QVariant**>(map.values);
	for(size_t i = 0; i < map.len; ++i) {
		QString map_karr_i_QString = QString::fromUtf8(map_karr[i].data, map_karr[i].len);
		map_QMap[map_karr_i_QString] = *(map_varr[i]);
	}
	return new QJsonObject(QJsonObject::fromVariantHash(map_QMap));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QJsonObject_toVariantHash(const QJsonObject* self) {
	QVariantHash _ret = self->toVariantHash();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _hashkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _hashkey_b = _hashkey_ret.toUtf8();
		struct miqt_string _hashkey_ms;
		_hashkey_ms.len = _hashkey_b.length();
		_hashkey_ms.data = static_cast<char*>(malloc(_hashkey_ms.len));
		memcpy(_hashkey_ms.data, _hashkey_b.data(), _hashkey_ms.len);
		_karr[_ctr] = _hashkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QJsonObject_keys(const QJsonObject* self) {
	QStringList _ret = self->keys();
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

int64_t QJsonObject_size(const QJsonObject* self) {
	int64_t _ret = self->size();
	return static_cast<int64_t>(_ret);
}

int64_t QJsonObject_count(const QJsonObject* self) {
	int64_t _ret = self->count();
	return static_cast<int64_t>(_ret);
}

int64_t QJsonObject_length(const QJsonObject* self) {
	int64_t _ret = self->length();
	return static_cast<int64_t>(_ret);
}

bool QJsonObject_isEmpty(const QJsonObject* self) {
	return self->isEmpty();
}

QJsonValue* QJsonObject_value(const QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->value(key_QString));
}

QJsonValue* QJsonObject_operatorSubscript(const QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->operator[](key_QString));
}

QJsonValueRef* QJsonObject_operatorSubscriptWithKey(QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValueRef(self->operator[](key_QString));
}

void QJsonObject_remove(QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->remove(key_QString);
}

QJsonValue* QJsonObject_take(QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new QJsonValue(self->take(key_QString));
}

bool QJsonObject_contains(const QJsonObject* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->contains(key_QString);
}

bool QJsonObject_empty(const QJsonObject* self) {
	return self->empty();
}

void QJsonObject_delete(QJsonObject* self) {
	delete self;
}

QPoint* QPoint_new() {
	return new (std::nothrow) QPoint();
}

QPoint* QPoint_new2(int xpos, int ypos) {
	return new (std::nothrow) QPoint(static_cast<int>(xpos), static_cast<int>(ypos));
}

QPoint* QPoint_new3(QPoint* param1) {
	return new (std::nothrow) QPoint(*param1);
}

bool QPoint_isNull(const QPoint* self) {
	return self->isNull();
}

int QPoint_x(const QPoint* self) {
	return self->x();
}

int QPoint_y(const QPoint* self) {
	return self->y();
}

void QPoint_setX(QPoint* self, int x) {
	self->setX(static_cast<int>(x));
}

void QPoint_setY(QPoint* self, int y) {
	self->setY(static_cast<int>(y));
}

int QPoint_manhattanLength(const QPoint* self) {
	return self->manhattanLength();
}

QPoint* QPoint_transposed(const QPoint* self) {
	return new QPoint(self->transposed());
}

QPoint* QPoint_operatorPlusAssign(QPoint* self, QPoint* p) {
	QPoint& _ret = self->operator+=(*p);
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorMinusAssign(QPoint* self, QPoint* p) {
	QPoint& _ret = self->operator-=(*p);
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorMultiplyAssign(QPoint* self, float factor) {
	QPoint& _ret = self->operator*=(static_cast<float>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorMultiplyAssignWithFactor(QPoint* self, double factor) {
	QPoint& _ret = self->operator*=(static_cast<double>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorMultiplyAssign2(QPoint* self, int factor) {
	QPoint& _ret = self->operator*=(static_cast<int>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QPoint* QPoint_operatorDivideAssign(QPoint* self, double divisor) {
	QPoint& _ret = self->operator/=(static_cast<double>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

int QPoint_dotProduct(QPoint* p1, QPoint* p2) {
	return QPoint::dotProduct(*p1, *p2);
}

QPointF* QPoint_toPointF(const QPoint* self) {
	return new QPointF(self->toPointF());
}

void QPoint_delete(QPoint* self) {
	delete self;
}

QPointF* QPointF_new() {
	return new (std::nothrow) QPointF();
}

QPointF* QPointF_new2(QPoint* p) {
	return new (std::nothrow) QPointF(*p);
}

QPointF* QPointF_new3(double xpos, double ypos) {
	return new (std::nothrow) QPointF(static_cast<double>(xpos), static_cast<double>(ypos));
}

QPointF* QPointF_new4(QPointF* param1) {
	return new (std::nothrow) QPointF(*param1);
}

double QPointF_manhattanLength(const QPointF* self) {
	double _ret = self->manhattanLength();
	return static_cast<double>(_ret);
}

bool QPointF_isNull(const QPointF* self) {
	return self->isNull();
}

double QPointF_x(const QPointF* self) {
	double _ret = self->x();
	return static_cast<double>(_ret);
}

double QPointF_y(const QPointF* self) {
	double _ret = self->y();
	return static_cast<double>(_ret);
}

void QPointF_setX(QPointF* self, double x) {
	self->setX(static_cast<double>(x));
}

void QPointF_setY(QPointF* self, double y) {
	self->setY(static_cast<double>(y));
}

QPointF* QPointF_transposed(const QPointF* self) {
	return new QPointF(self->transposed());
}

QPointF* QPointF_operatorPlusAssign(QPointF* self, QPointF* p) {
	QPointF& _ret = self->operator+=(*p);
	// Cast returned reference into pointer
	return &_ret;
}

QPointF* QPointF_operatorMinusAssign(QPointF* self, QPointF* p) {
	QPointF& _ret = self->operator-=(*p);
	// Cast returned reference into pointer
	return &_ret;
}

QPointF* QPointF_operatorMultiplyAssign(QPointF* self, double c) {
	QPointF& _ret = self->operator*=(static_cast<double>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QPointF* QPointF_operatorDivideAssign(QPointF* self, double c) {
	QPointF& _ret = self->operator/=(static_cast<double>(c));
	// Cast returned reference into pointer
	return &_ret;
}

double QPointF_dotProduct(QPointF* p1, QPointF* p2) {
	double _ret = QPointF::dotProduct(*p1, *p2);
	return static_cast<double>(_ret);
}

QPoint* QPointF_toPoint(const QPointF* self) {
	return new QPoint(self->toPoint());
}

void QPointF_delete(QPointF* self) {
	delete self;
}

QLine* QLine_new() {
	return new (std::nothrow) QLine();
}

QLine* QLine_new2(QPoint* pt1, QPoint* pt2) {
	return new (std::nothrow) QLine(*pt1, *pt2);
}

QLine* QLine_new3(int x1, int y1, int x2, int y2) {
	return new (std::nothrow) QLine(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

QLine* QLine_new4(QLine* param1) {
	return new (std::nothrow) QLine(*param1);
}

bool QLine_isNull(const QLine* self) {
	return self->isNull();
}

QPoint* QLine_p1(const QLine* self) {
	return new QPoint(self->p1());
}

QPoint* QLine_p2(const QLine* self) {
	return new QPoint(self->p2());
}

int QLine_x1(const QLine* self) {
	return self->x1();
}

int QLine_y1(const QLine* self) {
	return self->y1();
}

int QLine_x2(const QLine* self) {
	return self->x2();
}

int QLine_y2(const QLine* self) {
	return self->y2();
}

int QLine_dx(const QLine* self) {
	return self->dx();
}

int QLine_dy(const QLine* self) {
	return self->dy();
}

void QLine_translate(QLine* self, QPoint* p) {
	self->translate(*p);
}

void QLine_translate2(QLine* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

QLine* QLine_translated(const QLine* self, QPoint* p) {
	return new QLine(self->translated(*p));
}

QLine* QLine_translated2(const QLine* self, int dx, int dy) {
	return new QLine(self->translated(static_cast<int>(dx), static_cast<int>(dy)));
}

QPoint* QLine_center(const QLine* self) {
	return new QPoint(self->center());
}

void QLine_setP1(QLine* self, QPoint* p1) {
	self->setP1(*p1);
}

void QLine_setP2(QLine* self, QPoint* p2) {
	self->setP2(*p2);
}

void QLine_setPoints(QLine* self, QPoint* p1, QPoint* p2) {
	self->setPoints(*p1, *p2);
}

void QLine_setLine(QLine* self, int x1, int y1, int x2, int y2) {
	self->setLine(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

QLineF* QLine_toLineF(const QLine* self) {
	return new QLineF(self->toLineF());
}

void QLine_delete(QLine* self) {
	delete self;
}

QLineF* QLineF_new() {
	return new (std::nothrow) QLineF();
}

QLineF* QLineF_new2(QPointF* pt1, QPointF* pt2) {
	return new (std::nothrow) QLineF(*pt1, *pt2);
}

QLineF* QLineF_new3(double x1, double y1, double x2, double y2) {
	return new (std::nothrow) QLineF(static_cast<double>(x1), static_cast<double>(y1), static_cast<double>(x2), static_cast<double>(y2));
}

QLineF* QLineF_new4(QLine* line) {
	return new (std::nothrow) QLineF(*line);
}

QLineF* QLineF_new5(QLineF* param1) {
	return new (std::nothrow) QLineF(*param1);
}

QLineF* QLineF_fromPolar(double length, double angle) {
	return new QLineF(QLineF::fromPolar(static_cast<double>(length), static_cast<double>(angle)));
}

bool QLineF_isNull(const QLineF* self) {
	return self->isNull();
}

QPointF* QLineF_p1(const QLineF* self) {
	return new QPointF(self->p1());
}

QPointF* QLineF_p2(const QLineF* self) {
	return new QPointF(self->p2());
}

double QLineF_x1(const QLineF* self) {
	double _ret = self->x1();
	return static_cast<double>(_ret);
}

double QLineF_y1(const QLineF* self) {
	double _ret = self->y1();
	return static_cast<double>(_ret);
}

double QLineF_x2(const QLineF* self) {
	double _ret = self->x2();
	return static_cast<double>(_ret);
}

double QLineF_y2(const QLineF* self) {
	double _ret = self->y2();
	return static_cast<double>(_ret);
}

double QLineF_dx(const QLineF* self) {
	double _ret = self->dx();
	return static_cast<double>(_ret);
}

double QLineF_dy(const QLineF* self) {
	double _ret = self->dy();
	return static_cast<double>(_ret);
}

double QLineF_length(const QLineF* self) {
	double _ret = self->length();
	return static_cast<double>(_ret);
}

void QLineF_setLength(QLineF* self, double len) {
	self->setLength(static_cast<double>(len));
}

double QLineF_angle(const QLineF* self) {
	double _ret = self->angle();
	return static_cast<double>(_ret);
}

void QLineF_setAngle(QLineF* self, double angle) {
	self->setAngle(static_cast<double>(angle));
}

double QLineF_angleTo(const QLineF* self, QLineF* l) {
	double _ret = self->angleTo(*l);
	return static_cast<double>(_ret);
}

QLineF* QLineF_unitVector(const QLineF* self) {
	return new QLineF(self->unitVector());
}

QLineF* QLineF_normalVector(const QLineF* self) {
	return new QLineF(self->normalVector());
}

int QLineF_intersects(const QLineF* self, QLineF* l) {
	return self->intersects(*l);
}

QPointF* QLineF_pointAt(const QLineF* self, double t) {
	return new QPointF(self->pointAt(static_cast<double>(t)));
}

void QLineF_translate(QLineF* self, QPointF* p) {
	self->translate(*p);
}

void QLineF_translate2(QLineF* self, double dx, double dy) {
	self->translate(static_cast<double>(dx), static_cast<double>(dy));
}

QLineF* QLineF_translated(const QLineF* self, QPointF* p) {
	return new QLineF(self->translated(*p));
}

QLineF* QLineF_translated2(const QLineF* self, double dx, double dy) {
	return new QLineF(self->translated(static_cast<double>(dx), static_cast<double>(dy)));
}

QPointF* QLineF_center(const QLineF* self) {
	return new QPointF(self->center());
}

void QLineF_setP1(QLineF* self, QPointF* p1) {
	self->setP1(*p1);
}

void QLineF_setP2(QLineF* self, QPointF* p2) {
	self->setP2(*p2);
}

void QLineF_setPoints(QLineF* self, QPointF* p1, QPointF* p2) {
	self->setPoints(*p1, *p2);
}

void QLineF_setLine(QLineF* self, double x1, double y1, double x2, double y2) {
	self->setLine(static_cast<double>(x1), static_cast<double>(y1), static_cast<double>(x2), static_cast<double>(y2));
}

QLine* QLineF_toLine(const QLineF* self) {
	return new QLine(self->toLine());
}

int QLineF_intersects2(const QLineF* self, QLineF* l, QPointF* intersectionPoint) {
	return self->intersects(*l, intersectionPoint);
}

void QLineF_delete(QLineF* self) {
	delete self;
}

QMargins* QMargins_new() {
	return new (std::nothrow) QMargins();
}

QMargins* QMargins_new2(int left, int top, int right, int bottom) {
	return new (std::nothrow) QMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QMargins_new3(QMargins* param1) {
	return new (std::nothrow) QMargins(*param1);
}

bool QMargins_isNull(const QMargins* self) {
	return self->isNull();
}

int QMargins_left(const QMargins* self) {
	return self->left();
}

int QMargins_top(const QMargins* self) {
	return self->top();
}

int QMargins_right(const QMargins* self) {
	return self->right();
}

int QMargins_bottom(const QMargins* self) {
	return self->bottom();
}

void QMargins_setLeft(QMargins* self, int left) {
	self->setLeft(static_cast<int>(left));
}

void QMargins_setTop(QMargins* self, int top) {
	self->setTop(static_cast<int>(top));
}

void QMargins_setRight(QMargins* self, int right) {
	self->setRight(static_cast<int>(right));
}

void QMargins_setBottom(QMargins* self, int bottom) {
	self->setBottom(static_cast<int>(bottom));
}

QMargins* QMargins_operatorPlusAssign(QMargins* self, QMargins* margins) {
	QMargins& _ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorMinusAssign(QMargins* self, QMargins* margins) {
	QMargins& _ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorPlusAssignWithInt(QMargins* self, int param1) {
	QMargins& _ret = self->operator+=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorMinusAssignWithInt(QMargins* self, int param1) {
	QMargins& _ret = self->operator-=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorMultiplyAssign(QMargins* self, int param1) {
	QMargins& _ret = self->operator*=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorDivideAssign(QMargins* self, int param1) {
	QMargins& _ret = self->operator/=(static_cast<int>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorMultiplyAssignWithQreal(QMargins* self, double param1) {
	QMargins& _ret = self->operator*=(static_cast<double>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMargins_operatorDivideAssignWithQreal(QMargins* self, double param1) {
	QMargins& _ret = self->operator/=(static_cast<double>(param1));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMargins_toMarginsF(const QMargins* self) {
	return new QMarginsF(self->toMarginsF());
}

void QMargins_delete(QMargins* self) {
	delete self;
}

QMarginsF* QMarginsF_new() {
	return new (std::nothrow) QMarginsF();
}

QMarginsF* QMarginsF_new2(double left, double top, double right, double bottom) {
	return new (std::nothrow) QMarginsF(static_cast<double>(left), static_cast<double>(top), static_cast<double>(right), static_cast<double>(bottom));
}

QMarginsF* QMarginsF_new3(QMargins* margins) {
	return new (std::nothrow) QMarginsF(*margins);
}

QMarginsF* QMarginsF_new4(QMarginsF* param1) {
	return new (std::nothrow) QMarginsF(*param1);
}

bool QMarginsF_isNull(const QMarginsF* self) {
	return self->isNull();
}

double QMarginsF_left(const QMarginsF* self) {
	double _ret = self->left();
	return static_cast<double>(_ret);
}

double QMarginsF_top(const QMarginsF* self) {
	double _ret = self->top();
	return static_cast<double>(_ret);
}

double QMarginsF_right(const QMarginsF* self) {
	double _ret = self->right();
	return static_cast<double>(_ret);
}

double QMarginsF_bottom(const QMarginsF* self) {
	double _ret = self->bottom();
	return static_cast<double>(_ret);
}

void QMarginsF_setLeft(QMarginsF* self, double aleft) {
	self->setLeft(static_cast<double>(aleft));
}

void QMarginsF_setTop(QMarginsF* self, double atop) {
	self->setTop(static_cast<double>(atop));
}

void QMarginsF_setRight(QMarginsF* self, double aright) {
	self->setRight(static_cast<double>(aright));
}

void QMarginsF_setBottom(QMarginsF* self, double abottom) {
	self->setBottom(static_cast<double>(abottom));
}

QMarginsF* QMarginsF_operatorPlusAssign(QMarginsF* self, QMarginsF* margins) {
	QMarginsF& _ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorMinusAssign(QMarginsF* self, QMarginsF* margins) {
	QMarginsF& _ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorPlusAssignWithAddend(QMarginsF* self, double addend) {
	QMarginsF& _ret = self->operator+=(static_cast<double>(addend));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorMinusAssignWithSubtrahend(QMarginsF* self, double subtrahend) {
	QMarginsF& _ret = self->operator-=(static_cast<double>(subtrahend));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorMultiplyAssign(QMarginsF* self, double factor) {
	QMarginsF& _ret = self->operator*=(static_cast<double>(factor));
	// Cast returned reference into pointer
	return &_ret;
}

QMarginsF* QMarginsF_operatorDivideAssign(QMarginsF* self, double divisor) {
	QMarginsF& _ret = self->operator/=(static_cast<double>(divisor));
	// Cast returned reference into pointer
	return &_ret;
}

QMargins* QMarginsF_toMargins(const QMarginsF* self) {
	return new QMargins(self->toMargins());
}

void QMarginsF_delete(QMarginsF* self) {
	delete self;
}

QMetaMethod* QMetaMethod_new() {
	return new (std::nothrow) QMetaMethod();
}

QMetaMethod* QMetaMethod_new2(QMetaMethod* param1) {
	return new (std::nothrow) QMetaMethod(*param1);
}

struct miqt_string QMetaMethod_methodSignature(const QMetaMethod* self) {
	QByteArray _qb = self->methodSignature();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QMetaMethod_name(const QMetaMethod* self) {
	QByteArray _qb = self->name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

const char* QMetaMethod_typeName(const QMetaMethod* self) {
	return (const char*) self->typeName();
}

int QMetaMethod_returnType(const QMetaMethod* self) {
	return self->returnType();
}

QMetaType* QMetaMethod_returnMetaType(const QMetaMethod* self) {
	return new QMetaType(self->returnMetaType());
}

int QMetaMethod_parameterCount(const QMetaMethod* self) {
	return self->parameterCount();
}

int QMetaMethod_parameterType(const QMetaMethod* self, int index) {
	return self->parameterType(static_cast<int>(index));
}

QMetaType* QMetaMethod_parameterMetaType(const QMetaMethod* self, int index) {
	return new QMetaType(self->parameterMetaType(static_cast<int>(index)));
}

void QMetaMethod_getParameterTypes(const QMetaMethod* self, int* types) {
	self->getParameterTypes(types);
}

struct miqt_array /* of struct miqt_string */  QMetaMethod_parameterTypes(const QMetaMethod* self) {
	QList<QByteArray> _ret = self->parameterTypes();
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

struct miqt_string QMetaMethod_parameterTypeName(const QMetaMethod* self, int index) {
	QByteArray _qb = self->parameterTypeName(static_cast<int>(index));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QMetaMethod_parameterNames(const QMetaMethod* self) {
	QList<QByteArray> _ret = self->parameterNames();
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

const char* QMetaMethod_tag(const QMetaMethod* self) {
	return (const char*) self->tag();
}

int QMetaMethod_access(const QMetaMethod* self) {
	return self->access();
}

int QMetaMethod_methodType(const QMetaMethod* self) {
	return self->methodType();
}

int QMetaMethod_attributes(const QMetaMethod* self) {
	return self->attributes();
}

int QMetaMethod_methodIndex(const QMetaMethod* self) {
	return self->methodIndex();
}

int QMetaMethod_relativeMethodIndex(const QMetaMethod* self) {
	return self->relativeMethodIndex();
}

int QMetaMethod_revision(const QMetaMethod* self) {
	return self->revision();
}

bool QMetaMethod_isConst(const QMetaMethod* self) {
	return self->isConst();
}

QMetaObject* QMetaMethod_enclosingMetaObject(const QMetaMethod* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

bool QMetaMethod_invoke(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue);
}

bool QMetaMethod_invoke2(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue) {
	return self->invoke(object, *returnValue);
}

bool QMetaMethod_invoke3(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0);
}

bool QMetaMethod_invoke4(const QMetaMethod* self, QObject* object, QGenericArgument* val0) {
	return self->invoke(object, *val0);
}

bool QMetaMethod_isValid(const QMetaMethod* self) {
	return self->isValid();
}

bool QMetaMethod_invoke5(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0);
}

bool QMetaMethod_invoke6(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1);
}

bool QMetaMethod_invoke7(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2);
}

bool QMetaMethod_invoke8(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_invoke9(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_invoke10(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_invoke11(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_invoke12(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_invoke13(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_invoke14(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_invoke15(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0) {
	return self->invoke(object, *returnValue, *val0);
}

bool QMetaMethod_invoke16(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, *returnValue, *val0, *val1);
}

bool QMetaMethod_invoke17(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2);
}

bool QMetaMethod_invoke18(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_invoke19(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_invoke20(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_invoke21(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_invoke22(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_invoke23(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_invoke24(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_invoke25(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1);
}

bool QMetaMethod_invoke26(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2);
}

bool QMetaMethod_invoke27(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3);
}

bool QMetaMethod_invoke28(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_invoke29(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_invoke30(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_invoke31(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_invoke32(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_invoke33(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, static_cast<Qt::ConnectionType>(connectionType), *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

bool QMetaMethod_invoke34(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1) {
	return self->invoke(object, *val0, *val1);
}

bool QMetaMethod_invoke35(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2) {
	return self->invoke(object, *val0, *val1, *val2);
}

bool QMetaMethod_invoke36(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3) {
	return self->invoke(object, *val0, *val1, *val2, *val3);
}

bool QMetaMethod_invoke37(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4);
}

bool QMetaMethod_invoke38(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5);
}

bool QMetaMethod_invoke39(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6);
}

bool QMetaMethod_invoke40(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7);
}

bool QMetaMethod_invoke41(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8);
}

bool QMetaMethod_invoke42(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
	return self->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

void QMetaMethod_delete(QMetaMethod* self) {
	delete self;
}

QMetaEnum* QMetaEnum_new() {
	return new (std::nothrow) QMetaEnum();
}

QMetaEnum* QMetaEnum_new2(QMetaEnum* param1) {
	return new (std::nothrow) QMetaEnum(*param1);
}

const char* QMetaEnum_name(const QMetaEnum* self) {
	return (const char*) self->name();
}

const char* QMetaEnum_enumName(const QMetaEnum* self) {
	return (const char*) self->enumName();
}

QMetaType* QMetaEnum_metaType(const QMetaEnum* self) {
	return new QMetaType(self->metaType());
}

bool QMetaEnum_isFlag(const QMetaEnum* self) {
	return self->isFlag();
}

bool QMetaEnum_isScoped(const QMetaEnum* self) {
	return self->isScoped();
}

bool QMetaEnum_is64Bit(const QMetaEnum* self) {
	return self->is64Bit();
}

int QMetaEnum_keyCount(const QMetaEnum* self) {
	return self->keyCount();
}

const char* QMetaEnum_key(const QMetaEnum* self, int index) {
	return (const char*) self->key(static_cast<int>(index));
}

int QMetaEnum_value(const QMetaEnum* self, int index) {
	return self->value(static_cast<int>(index));
}

const char* QMetaEnum_scope(const QMetaEnum* self) {
	return (const char*) self->scope();
}

int QMetaEnum_keyToValue(const QMetaEnum* self, const char* key) {
	return self->keyToValue(key);
}

int QMetaEnum_keysToValue(const QMetaEnum* self, const char* keys) {
	return self->keysToValue(keys);
}

const char* QMetaEnum_valueToKey(const QMetaEnum* self, unsigned long long value) {
	return (const char*) self->valueToKey(static_cast<unsigned long long>(value));
}

struct miqt_string QMetaEnum_valueToKeys(const QMetaEnum* self, unsigned long long value) {
	QByteArray _qb = self->valueToKeys(static_cast<unsigned long long>(value));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QMetaObject* QMetaEnum_enclosingMetaObject(const QMetaEnum* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

bool QMetaEnum_isValid(const QMetaEnum* self) {
	return self->isValid();
}

int QMetaEnum_keyToValue2(const QMetaEnum* self, const char* key, bool* ok) {
	return self->keyToValue(key, ok);
}

int QMetaEnum_keysToValue2(const QMetaEnum* self, const char* keys, bool* ok) {
	return self->keysToValue(keys, ok);
}

void QMetaEnum_delete(QMetaEnum* self) {
	delete self;
}

QMetaProperty* QMetaProperty_new() {
	return new (std::nothrow) QMetaProperty();
}

const char* QMetaProperty_name(const QMetaProperty* self) {
	return (const char*) self->name();
}

const char* QMetaProperty_typeName(const QMetaProperty* self) {
	return (const char*) self->typeName();
}

int QMetaProperty_type(const QMetaProperty* self) {
	QVariant::Type _ret = self->type();
	return static_cast<int>(_ret);
}

int QMetaProperty_userType(const QMetaProperty* self) {
	return self->userType();
}

int QMetaProperty_typeId(const QMetaProperty* self) {
	return self->typeId();
}

QMetaType* QMetaProperty_metaType(const QMetaProperty* self) {
	return new QMetaType(self->metaType());
}

int QMetaProperty_propertyIndex(const QMetaProperty* self) {
	return self->propertyIndex();
}

int QMetaProperty_relativePropertyIndex(const QMetaProperty* self) {
	return self->relativePropertyIndex();
}

bool QMetaProperty_isReadable(const QMetaProperty* self) {
	return self->isReadable();
}

bool QMetaProperty_isWritable(const QMetaProperty* self) {
	return self->isWritable();
}

bool QMetaProperty_isResettable(const QMetaProperty* self) {
	return self->isResettable();
}

bool QMetaProperty_isDesignable(const QMetaProperty* self) {
	return self->isDesignable();
}

bool QMetaProperty_isScriptable(const QMetaProperty* self) {
	return self->isScriptable();
}

bool QMetaProperty_isStored(const QMetaProperty* self) {
	return self->isStored();
}

bool QMetaProperty_isUser(const QMetaProperty* self) {
	return self->isUser();
}

bool QMetaProperty_isConstant(const QMetaProperty* self) {
	return self->isConstant();
}

bool QMetaProperty_isFinal(const QMetaProperty* self) {
	return self->isFinal();
}

bool QMetaProperty_isVirtual(const QMetaProperty* self) {
	return self->isVirtual();
}

bool QMetaProperty_isOverride(const QMetaProperty* self) {
	return self->isOverride();
}

bool QMetaProperty_isRequired(const QMetaProperty* self) {
	return self->isRequired();
}

bool QMetaProperty_isBindable(const QMetaProperty* self) {
	return self->isBindable();
}

bool QMetaProperty_isFlagType(const QMetaProperty* self) {
	return self->isFlagType();
}

bool QMetaProperty_isEnumType(const QMetaProperty* self) {
	return self->isEnumType();
}

QMetaEnum* QMetaProperty_enumerator(const QMetaProperty* self) {
	return new QMetaEnum(self->enumerator());
}

bool QMetaProperty_hasNotifySignal(const QMetaProperty* self) {
	return self->hasNotifySignal();
}

QMetaMethod* QMetaProperty_notifySignal(const QMetaProperty* self) {
	return new QMetaMethod(self->notifySignal());
}

int QMetaProperty_notifySignalIndex(const QMetaProperty* self) {
	return self->notifySignalIndex();
}

int QMetaProperty_revision(const QMetaProperty* self) {
	return self->revision();
}

QVariant* QMetaProperty_read(const QMetaProperty* self, QObject* obj) {
	return new QVariant(self->read(obj));
}

bool QMetaProperty_write(const QMetaProperty* self, QObject* obj, QVariant* value) {
	return self->write(obj, *value);
}

bool QMetaProperty_reset(const QMetaProperty* self, QObject* obj) {
	return self->reset(obj);
}

QUntypedBindable* QMetaProperty_bindable(const QMetaProperty* self, QObject* object) {
	return new QUntypedBindable(self->bindable(object));
}

bool QMetaProperty_hasStdCppSet(const QMetaProperty* self) {
	return self->hasStdCppSet();
}

bool QMetaProperty_isAlias(const QMetaProperty* self) {
	return self->isAlias();
}

bool QMetaProperty_isValid(const QMetaProperty* self) {
	return self->isValid();
}

QMetaObject* QMetaProperty_enclosingMetaObject(const QMetaProperty* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

void QMetaProperty_delete(QMetaProperty* self) {
	delete self;
}

QMetaClassInfo* QMetaClassInfo_new() {
	return new (std::nothrow) QMetaClassInfo();
}

QMetaClassInfo* QMetaClassInfo_new2(QMetaClassInfo* param1) {
	return new (std::nothrow) QMetaClassInfo(*param1);
}

const char* QMetaClassInfo_name(const QMetaClassInfo* self) {
	return (const char*) self->name();
}

const char* QMetaClassInfo_value(const QMetaClassInfo* self) {
	return (const char*) self->value();
}

QMetaObject* QMetaClassInfo_enclosingMetaObject(const QMetaClassInfo* self) {
	return (QMetaObject*) self->enclosingMetaObject();
}

void QMetaClassInfo_delete(QMetaClassInfo* self) {
	delete self;
}

class MiqtVirtualQMimeData final : public QMimeData {
public:

	MiqtVirtualQMimeData(): QMimeData() {}

	virtual ~MiqtVirtualQMimeData() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasFormat = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasFormat(const QString& mimetype) const override {
		if (handle__hasFormat == 0) {
			return QMimeData::hasFormat(mimetype);
		}

		const QString mimetype_ret = mimetype;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray mimetype_b = mimetype_ret.toUtf8();
		struct miqt_string mimetype_ms;
		mimetype_ms.len = mimetype_b.length();
		mimetype_ms.data = static_cast<char*>(malloc(mimetype_ms.len));
		memcpy(mimetype_ms.data, mimetype_b.data(), mimetype_ms.len);
		struct miqt_string sigval1 = mimetype_ms;
		bool callback_return_value = miqt_exec_callback_QMimeData_hasFormat(this, handle__hasFormat, sigval1);
		return callback_return_value;
	}

	friend bool QMimeData_virtualbase_hasFormat(const void* self, struct miqt_string mimetype);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__formats = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList formats() const override {
		if (handle__formats == 0) {
			return QMimeData::formats();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QMimeData_formats(this, handle__formats);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QMimeData_virtualbase_formats(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QMimeData::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QMimeData_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QMimeData_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QMimeData::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QMimeData_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QMimeData_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QMimeData_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMimeData_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMimeData_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMimeData_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMimeData* QMimeData_new() {
	return new (std::nothrow) MiqtVirtualQMimeData();
}

void QMimeData_virtbase(QMimeData* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMimeData_metaObject(const QMimeData* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QMimeData_tr(const char* s) {
	QString _ret = QMimeData::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QUrl* */  QMimeData_urls(const QMimeData* self) {
	QList<QUrl> _ret = self->urls();
	// Convert QList<> from C++ memory to manually-managed C memory
	QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QUrl(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QMimeData_setUrls(QMimeData* self, struct miqt_array /* of QUrl* */  urls) {
	QList<QUrl> urls_QList;
	urls_QList.reserve(urls.len);
	QUrl** urls_arr = static_cast<QUrl**>(urls.data);
	for(size_t i = 0; i < urls.len; ++i) {
		urls_QList.push_back(*(urls_arr[i]));
	}
	self->setUrls(urls_QList);
}

bool QMimeData_hasUrls(const QMimeData* self) {
	return self->hasUrls();
}

struct miqt_string QMimeData_text(const QMimeData* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMimeData_setText(QMimeData* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

bool QMimeData_hasText(const QMimeData* self) {
	return self->hasText();
}

struct miqt_string QMimeData_html(const QMimeData* self) {
	QString _ret = self->html();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMimeData_setHtml(QMimeData* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

bool QMimeData_hasHtml(const QMimeData* self) {
	return self->hasHtml();
}

QVariant* QMimeData_imageData(const QMimeData* self) {
	return new QVariant(self->imageData());
}

void QMimeData_setImageData(QMimeData* self, QVariant* image) {
	self->setImageData(*image);
}

bool QMimeData_hasImage(const QMimeData* self) {
	return self->hasImage();
}

QVariant* QMimeData_colorData(const QMimeData* self) {
	return new QVariant(self->colorData());
}

void QMimeData_setColorData(QMimeData* self, QVariant* color) {
	self->setColorData(*color);
}

bool QMimeData_hasColor(const QMimeData* self) {
	return self->hasColor();
}

struct miqt_string QMimeData_data(const QMimeData* self, struct miqt_string mimetype) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	QByteArray _qb = self->data(mimetype_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QMimeData_setData(QMimeData* self, struct miqt_string mimetype, struct miqt_string data) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	QByteArray data_QByteArray(data.data, data.len);
	self->setData(mimetype_QString, data_QByteArray);
}

void QMimeData_removeFormat(QMimeData* self, struct miqt_string mimetype) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	self->removeFormat(mimetype_QString);
}

bool QMimeData_hasFormat(const QMimeData* self, struct miqt_string mimetype) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	return self->hasFormat(mimetype_QString);
}

struct miqt_array /* of struct miqt_string */  QMimeData_formats(const QMimeData* self) {
	QStringList _ret = self->formats();
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

void QMimeData_clear(QMimeData* self) {
	self->clear();
}

struct miqt_string QMimeData_tr2(const char* s, const char* c) {
	QString _ret = QMimeData::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMimeData_tr3(const char* s, const char* c, int n) {
	QString _ret = QMimeData::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMimeData_override_virtual_hasFormat(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = static_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasFormat = slot;
	return true;
}

bool QMimeData_virtualbase_hasFormat(const void* self, struct miqt_string mimetype) {
	QString mimetype_QString = QString::fromUtf8(mimetype.data, mimetype.len);
	return static_cast<const MiqtVirtualQMimeData*>(self)->QMimeData::hasFormat(mimetype_QString);
}

bool QMimeData_override_virtual_formats(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = static_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__formats = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QMimeData_virtualbase_formats(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQMimeData*>(self)->QMimeData::formats();
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

bool QMimeData_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = static_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QMimeData_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQMimeData*>(self)->QMimeData::event(event);
}

bool QMimeData_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQMimeData* self_cast = static_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QMimeData_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQMimeData*>(self)->QMimeData::eventFilter(watched, event);
}

QObject* QMimeData_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMimeData* self_cast = static_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QMimeData_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMimeData* self_cast = static_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QMimeData_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMimeData* self_cast = static_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QMimeData_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMimeData* self_cast = static_cast<MiqtVirtualQMimeData*>( (QMimeData*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QMimeData_delete(QMimeData* self) {
	delete self;
}

QPermission* QPermission_new() {
	return new (std::nothrow) QPermission();
}

QPermission* QPermission_new2(QPermission* param1) {
	return new (std::nothrow) QPermission(*param1);
}

int QPermission_status(const QPermission* self) {
	Qt::PermissionStatus _ret = self->status();
	return static_cast<int>(_ret);
}

QMetaType* QPermission_type(const QPermission* self) {
	return new QMetaType(self->type());
}

void QPermission_delete(QPermission* self) {
	delete self;
}

QSize* QSize_new() {
	return new (std::nothrow) QSize();
}

QSize* QSize_new2(int w, int h) {
	return new (std::nothrow) QSize(static_cast<int>(w), static_cast<int>(h));
}

QSize* QSize_new3(QSize* param1) {
	return new (std::nothrow) QSize(*param1);
}

bool QSize_isNull(const QSize* self) {
	return self->isNull();
}

bool QSize_isEmpty(const QSize* self) {
	return self->isEmpty();
}

bool QSize_isValid(const QSize* self) {
	return self->isValid();
}

int QSize_width(const QSize* self) {
	return self->width();
}

int QSize_height(const QSize* self) {
	return self->height();
}

void QSize_setWidth(QSize* self, int w) {
	self->setWidth(static_cast<int>(w));
}

void QSize_setHeight(QSize* self, int h) {
	self->setHeight(static_cast<int>(h));
}

void QSize_transpose(QSize* self) {
	self->transpose();
}

QSize* QSize_transposed(const QSize* self) {
	return new QSize(self->transposed());
}

void QSize_scale(QSize* self, int w, int h, int mode) {
	self->scale(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSize_scale2(QSize* self, QSize* s, int mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSize* QSize_scaled(const QSize* self, int w, int h, int mode) {
	return new QSize(self->scaled(static_cast<int>(w), static_cast<int>(h), static_cast<Qt::AspectRatioMode>(mode)));
}

QSize* QSize_scaled2(const QSize* self, QSize* s, int mode) {
	return new QSize(self->scaled(*s, static_cast<Qt::AspectRatioMode>(mode)));
}

QSize* QSize_expandedTo(const QSize* self, QSize* param1) {
	return new QSize(self->expandedTo(*param1));
}

QSize* QSize_boundedTo(const QSize* self, QSize* param1) {
	return new QSize(self->boundedTo(*param1));
}

QSize* QSize_grownBy(const QSize* self, QMargins* m) {
	return new QSize(self->grownBy(*m));
}

QSize* QSize_shrunkBy(const QSize* self, QMargins* m) {
	return new QSize(self->shrunkBy(*m));
}

QSize* QSize_operatorPlusAssign(QSize* self, QSize* param1) {
	QSize& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSize_operatorMinusAssign(QSize* self, QSize* param1) {
	QSize& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSize_operatorMultiplyAssign(QSize* self, double c) {
	QSize& _ret = self->operator*=(static_cast<double>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSize_operatorDivideAssign(QSize* self, double c) {
	QSize& _ret = self->operator/=(static_cast<double>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSize_toSizeF(const QSize* self) {
	return new QSizeF(self->toSizeF());
}

void QSize_delete(QSize* self) {
	delete self;
}

QSizeF* QSizeF_new() {
	return new (std::nothrow) QSizeF();
}

QSizeF* QSizeF_new2(QSize* sz) {
	return new (std::nothrow) QSizeF(*sz);
}

QSizeF* QSizeF_new3(double w, double h) {
	return new (std::nothrow) QSizeF(static_cast<double>(w), static_cast<double>(h));
}

QSizeF* QSizeF_new4(QSizeF* param1) {
	return new (std::nothrow) QSizeF(*param1);
}

bool QSizeF_isNull(const QSizeF* self) {
	return self->isNull();
}

bool QSizeF_isEmpty(const QSizeF* self) {
	return self->isEmpty();
}

bool QSizeF_isValid(const QSizeF* self) {
	return self->isValid();
}

double QSizeF_width(const QSizeF* self) {
	double _ret = self->width();
	return static_cast<double>(_ret);
}

double QSizeF_height(const QSizeF* self) {
	double _ret = self->height();
	return static_cast<double>(_ret);
}

void QSizeF_setWidth(QSizeF* self, double w) {
	self->setWidth(static_cast<double>(w));
}

void QSizeF_setHeight(QSizeF* self, double h) {
	self->setHeight(static_cast<double>(h));
}

void QSizeF_transpose(QSizeF* self) {
	self->transpose();
}

QSizeF* QSizeF_transposed(const QSizeF* self) {
	return new QSizeF(self->transposed());
}

void QSizeF_scale(QSizeF* self, double w, double h, int mode) {
	self->scale(static_cast<double>(w), static_cast<double>(h), static_cast<Qt::AspectRatioMode>(mode));
}

void QSizeF_scale2(QSizeF* self, QSizeF* s, int mode) {
	self->scale(*s, static_cast<Qt::AspectRatioMode>(mode));
}

QSizeF* QSizeF_scaled(const QSizeF* self, double w, double h, int mode) {
	return new QSizeF(self->scaled(static_cast<double>(w), static_cast<double>(h), static_cast<Qt::AspectRatioMode>(mode)));
}

QSizeF* QSizeF_scaled2(const QSizeF* self, QSizeF* s, int mode) {
	return new QSizeF(self->scaled(*s, static_cast<Qt::AspectRatioMode>(mode)));
}

QSizeF* QSizeF_expandedTo(const QSizeF* self, QSizeF* param1) {
	return new QSizeF(self->expandedTo(*param1));
}

QSizeF* QSizeF_boundedTo(const QSizeF* self, QSizeF* param1) {
	return new QSizeF(self->boundedTo(*param1));
}

QSizeF* QSizeF_grownBy(const QSizeF* self, QMarginsF* m) {
	return new QSizeF(self->grownBy(*m));
}

QSizeF* QSizeF_shrunkBy(const QSizeF* self, QMarginsF* m) {
	return new QSizeF(self->shrunkBy(*m));
}

QSizeF* QSizeF_operatorPlusAssign(QSizeF* self, QSizeF* param1) {
	QSizeF& _ret = self->operator+=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSizeF_operatorMinusAssign(QSizeF* self, QSizeF* param1) {
	QSizeF& _ret = self->operator-=(*param1);
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSizeF_operatorMultiplyAssign(QSizeF* self, double c) {
	QSizeF& _ret = self->operator*=(static_cast<double>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSizeF* QSizeF_operatorDivideAssign(QSizeF* self, double c) {
	QSizeF& _ret = self->operator/=(static_cast<double>(c));
	// Cast returned reference into pointer
	return &_ret;
}

QSize* QSizeF_toSize(const QSizeF* self) {
	return new QSize(self->toSize());
}

void QSizeF_delete(QSizeF* self) {
	delete self;
}

QRect* QRect_new() {
	return new (std::nothrow) QRect();
}

QRect* QRect_new2(QPoint* topleft, QPoint* bottomright) {
	return new (std::nothrow) QRect(*topleft, *bottomright);
}

QRect* QRect_new3(QPoint* topleft, QSize* size) {
	return new (std::nothrow) QRect(*topleft, *size);
}

QRect* QRect_new4(int left, int top, int width, int height) {
	return new (std::nothrow) QRect(static_cast<int>(left), static_cast<int>(top), static_cast<int>(width), static_cast<int>(height));
}

QRect* QRect_new5(QRect* param1) {
	return new (std::nothrow) QRect(*param1);
}

bool QRect_isNull(const QRect* self) {
	return self->isNull();
}

bool QRect_isEmpty(const QRect* self) {
	return self->isEmpty();
}

bool QRect_isValid(const QRect* self) {
	return self->isValid();
}

int QRect_left(const QRect* self) {
	return self->left();
}

int QRect_top(const QRect* self) {
	return self->top();
}

int QRect_right(const QRect* self) {
	return self->right();
}

int QRect_bottom(const QRect* self) {
	return self->bottom();
}

QRect* QRect_normalized(const QRect* self) {
	return new QRect(self->normalized());
}

int QRect_x(const QRect* self) {
	return self->x();
}

int QRect_y(const QRect* self) {
	return self->y();
}

void QRect_setLeft(QRect* self, int pos) {
	self->setLeft(static_cast<int>(pos));
}

void QRect_setTop(QRect* self, int pos) {
	self->setTop(static_cast<int>(pos));
}

void QRect_setRight(QRect* self, int pos) {
	self->setRight(static_cast<int>(pos));
}

void QRect_setBottom(QRect* self, int pos) {
	self->setBottom(static_cast<int>(pos));
}

void QRect_setX(QRect* self, int x) {
	self->setX(static_cast<int>(x));
}

void QRect_setY(QRect* self, int y) {
	self->setY(static_cast<int>(y));
}

void QRect_setTopLeft(QRect* self, QPoint* p) {
	self->setTopLeft(*p);
}

void QRect_setBottomRight(QRect* self, QPoint* p) {
	self->setBottomRight(*p);
}

void QRect_setTopRight(QRect* self, QPoint* p) {
	self->setTopRight(*p);
}

void QRect_setBottomLeft(QRect* self, QPoint* p) {
	self->setBottomLeft(*p);
}

QPoint* QRect_topLeft(const QRect* self) {
	return new QPoint(self->topLeft());
}

QPoint* QRect_bottomRight(const QRect* self) {
	return new QPoint(self->bottomRight());
}

QPoint* QRect_topRight(const QRect* self) {
	return new QPoint(self->topRight());
}

QPoint* QRect_bottomLeft(const QRect* self) {
	return new QPoint(self->bottomLeft());
}

QPoint* QRect_center(const QRect* self) {
	return new QPoint(self->center());
}

void QRect_moveLeft(QRect* self, int pos) {
	self->moveLeft(static_cast<int>(pos));
}

void QRect_moveTop(QRect* self, int pos) {
	self->moveTop(static_cast<int>(pos));
}

void QRect_moveRight(QRect* self, int pos) {
	self->moveRight(static_cast<int>(pos));
}

void QRect_moveBottom(QRect* self, int pos) {
	self->moveBottom(static_cast<int>(pos));
}

void QRect_moveTopLeft(QRect* self, QPoint* p) {
	self->moveTopLeft(*p);
}

void QRect_moveBottomRight(QRect* self, QPoint* p) {
	self->moveBottomRight(*p);
}

void QRect_moveTopRight(QRect* self, QPoint* p) {
	self->moveTopRight(*p);
}

void QRect_moveBottomLeft(QRect* self, QPoint* p) {
	self->moveBottomLeft(*p);
}

void QRect_moveCenter(QRect* self, QPoint* p) {
	self->moveCenter(*p);
}

void QRect_translate(QRect* self, int dx, int dy) {
	self->translate(static_cast<int>(dx), static_cast<int>(dy));
}

void QRect_translateWithQPoint(QRect* self, QPoint* p) {
	self->translate(*p);
}

QRect* QRect_translated(const QRect* self, int dx, int dy) {
	return new QRect(self->translated(static_cast<int>(dx), static_cast<int>(dy)));
}

QRect* QRect_translatedWithQPoint(const QRect* self, QPoint* p) {
	return new QRect(self->translated(*p));
}

QRect* QRect_transposed(const QRect* self) {
	return new QRect(self->transposed());
}

void QRect_moveTo(QRect* self, int x, int t) {
	self->moveTo(static_cast<int>(x), static_cast<int>(t));
}

void QRect_moveToWithQPoint(QRect* self, QPoint* p) {
	self->moveTo(*p);
}

void QRect_setRect(QRect* self, int x, int y, int w, int h) {
	self->setRect(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QRect_getRect(const QRect* self, int* x, int* y, int* w, int* h) {
	self->getRect(x, y, w, h);
}

void QRect_setCoords(QRect* self, int x1, int y1, int x2, int y2) {
	self->setCoords(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

void QRect_getCoords(const QRect* self, int* x1, int* y1, int* x2, int* y2) {
	self->getCoords(x1, y1, x2, y2);
}

void QRect_adjust(QRect* self, int x1, int y1, int x2, int y2) {
	self->adjust(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2));
}

QRect* QRect_adjusted(const QRect* self, int x1, int y1, int x2, int y2) {
	return new QRect(self->adjusted(static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2)));
}

QSize* QRect_size(const QRect* self) {
	return new QSize(self->size());
}

int QRect_width(const QRect* self) {
	return self->width();
}

int QRect_height(const QRect* self) {
	return self->height();
}

void QRect_setWidth(QRect* self, int w) {
	self->setWidth(static_cast<int>(w));
}

void QRect_setHeight(QRect* self, int h) {
	self->setHeight(static_cast<int>(h));
}

void QRect_setSize(QRect* self, QSize* s) {
	self->setSize(*s);
}

QRect* QRect_operatorBitwiseOr(const QRect* self, QRect* r) {
	return new QRect(self->operator|(*r));
}

QRect* QRect_operatorBitwiseAnd(const QRect* self, QRect* r) {
	return new QRect(self->operator&(*r));
}

void QRect_operatorBitwiseOrAssign(QRect* self, QRect* r) {
	self->operator|=(*r);
}

void QRect_operatorBitwiseAndAssign(QRect* self, QRect* r) {
	self->operator&=(*r);
}

bool QRect_contains(const QRect* self, QRect* r) {
	return self->contains(*r);
}

bool QRect_containsWithQPoint(const QRect* self, QPoint* p) {
	return self->contains(*p);
}

bool QRect_contains2(const QRect* self, int x, int y) {
	return self->contains(static_cast<int>(x), static_cast<int>(y));
}

bool QRect_contains3(const QRect* self, int x, int y, bool proper) {
	return self->contains(static_cast<int>(x), static_cast<int>(y), proper);
}

QRect* QRect_united(const QRect* self, QRect* other) {
	return new QRect(self->united(*other));
}

QRect* QRect_intersected(const QRect* self, QRect* other) {
	return new QRect(self->intersected(*other));
}

bool QRect_intersects(const QRect* self, QRect* r) {
	return self->intersects(*r);
}

QRect* QRect_marginsAdded(const QRect* self, QMargins* margins) {
	return new QRect(self->marginsAdded(*margins));
}

QRect* QRect_marginsRemoved(const QRect* self, QMargins* margins) {
	return new QRect(self->marginsRemoved(*margins));
}

QRect* QRect_operatorPlusAssign(QRect* self, QMargins* margins) {
	QRect& _ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QRect* QRect_operatorMinusAssign(QRect* self, QMargins* margins) {
	QRect& _ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QRect* QRect_span(QPoint* p1, QPoint* p2) {
	return new QRect(QRect::span(*p1, *p2));
}

QRectF* QRect_toRectF(const QRect* self) {
	return new QRectF(self->toRectF());
}

bool QRect_contains4(const QRect* self, QRect* r, bool proper) {
	return self->contains(*r, proper);
}

bool QRect_contains5(const QRect* self, QPoint* p, bool proper) {
	return self->contains(*p, proper);
}

void QRect_delete(QRect* self) {
	delete self;
}

QRectF* QRectF_new() {
	return new (std::nothrow) QRectF();
}

QRectF* QRectF_new2(QPointF* topleft, QSizeF* size) {
	return new (std::nothrow) QRectF(*topleft, *size);
}

QRectF* QRectF_new3(QPointF* topleft, QPointF* bottomRight) {
	return new (std::nothrow) QRectF(*topleft, *bottomRight);
}

QRectF* QRectF_new4(double left, double top, double width, double height) {
	return new (std::nothrow) QRectF(static_cast<double>(left), static_cast<double>(top), static_cast<double>(width), static_cast<double>(height));
}

QRectF* QRectF_new5(QRect* rect) {
	return new (std::nothrow) QRectF(*rect);
}

QRectF* QRectF_new6(QRectF* param1) {
	return new (std::nothrow) QRectF(*param1);
}

bool QRectF_isNull(const QRectF* self) {
	return self->isNull();
}

bool QRectF_isEmpty(const QRectF* self) {
	return self->isEmpty();
}

bool QRectF_isValid(const QRectF* self) {
	return self->isValid();
}

QRectF* QRectF_normalized(const QRectF* self) {
	return new QRectF(self->normalized());
}

double QRectF_left(const QRectF* self) {
	double _ret = self->left();
	return static_cast<double>(_ret);
}

double QRectF_top(const QRectF* self) {
	double _ret = self->top();
	return static_cast<double>(_ret);
}

double QRectF_right(const QRectF* self) {
	double _ret = self->right();
	return static_cast<double>(_ret);
}

double QRectF_bottom(const QRectF* self) {
	double _ret = self->bottom();
	return static_cast<double>(_ret);
}

double QRectF_x(const QRectF* self) {
	double _ret = self->x();
	return static_cast<double>(_ret);
}

double QRectF_y(const QRectF* self) {
	double _ret = self->y();
	return static_cast<double>(_ret);
}

void QRectF_setLeft(QRectF* self, double pos) {
	self->setLeft(static_cast<double>(pos));
}

void QRectF_setTop(QRectF* self, double pos) {
	self->setTop(static_cast<double>(pos));
}

void QRectF_setRight(QRectF* self, double pos) {
	self->setRight(static_cast<double>(pos));
}

void QRectF_setBottom(QRectF* self, double pos) {
	self->setBottom(static_cast<double>(pos));
}

void QRectF_setX(QRectF* self, double pos) {
	self->setX(static_cast<double>(pos));
}

void QRectF_setY(QRectF* self, double pos) {
	self->setY(static_cast<double>(pos));
}

QPointF* QRectF_topLeft(const QRectF* self) {
	return new QPointF(self->topLeft());
}

QPointF* QRectF_bottomRight(const QRectF* self) {
	return new QPointF(self->bottomRight());
}

QPointF* QRectF_topRight(const QRectF* self) {
	return new QPointF(self->topRight());
}

QPointF* QRectF_bottomLeft(const QRectF* self) {
	return new QPointF(self->bottomLeft());
}

QPointF* QRectF_center(const QRectF* self) {
	return new QPointF(self->center());
}

void QRectF_setTopLeft(QRectF* self, QPointF* p) {
	self->setTopLeft(*p);
}

void QRectF_setBottomRight(QRectF* self, QPointF* p) {
	self->setBottomRight(*p);
}

void QRectF_setTopRight(QRectF* self, QPointF* p) {
	self->setTopRight(*p);
}

void QRectF_setBottomLeft(QRectF* self, QPointF* p) {
	self->setBottomLeft(*p);
}

void QRectF_moveLeft(QRectF* self, double pos) {
	self->moveLeft(static_cast<double>(pos));
}

void QRectF_moveTop(QRectF* self, double pos) {
	self->moveTop(static_cast<double>(pos));
}

void QRectF_moveRight(QRectF* self, double pos) {
	self->moveRight(static_cast<double>(pos));
}

void QRectF_moveBottom(QRectF* self, double pos) {
	self->moveBottom(static_cast<double>(pos));
}

void QRectF_moveTopLeft(QRectF* self, QPointF* p) {
	self->moveTopLeft(*p);
}

void QRectF_moveBottomRight(QRectF* self, QPointF* p) {
	self->moveBottomRight(*p);
}

void QRectF_moveTopRight(QRectF* self, QPointF* p) {
	self->moveTopRight(*p);
}

void QRectF_moveBottomLeft(QRectF* self, QPointF* p) {
	self->moveBottomLeft(*p);
}

void QRectF_moveCenter(QRectF* self, QPointF* p) {
	self->moveCenter(*p);
}

void QRectF_translate(QRectF* self, double dx, double dy) {
	self->translate(static_cast<double>(dx), static_cast<double>(dy));
}

void QRectF_translateWithQPointF(QRectF* self, QPointF* p) {
	self->translate(*p);
}

QRectF* QRectF_translated(const QRectF* self, double dx, double dy) {
	return new QRectF(self->translated(static_cast<double>(dx), static_cast<double>(dy)));
}

QRectF* QRectF_translatedWithQPointF(const QRectF* self, QPointF* p) {
	return new QRectF(self->translated(*p));
}

QRectF* QRectF_transposed(const QRectF* self) {
	return new QRectF(self->transposed());
}

void QRectF_moveTo(QRectF* self, double x, double y) {
	self->moveTo(static_cast<double>(x), static_cast<double>(y));
}

void QRectF_moveToWithQPointF(QRectF* self, QPointF* p) {
	self->moveTo(*p);
}

void QRectF_setRect(QRectF* self, double x, double y, double w, double h) {
	self->setRect(static_cast<double>(x), static_cast<double>(y), static_cast<double>(w), static_cast<double>(h));
}

void QRectF_getRect(const QRectF* self, double* x, double* y, double* w, double* h) {
	self->getRect(x, y, w, h);
}

void QRectF_setCoords(QRectF* self, double x1, double y1, double x2, double y2) {
	self->setCoords(static_cast<double>(x1), static_cast<double>(y1), static_cast<double>(x2), static_cast<double>(y2));
}

void QRectF_getCoords(const QRectF* self, double* x1, double* y1, double* x2, double* y2) {
	self->getCoords(x1, y1, x2, y2);
}

void QRectF_adjust(QRectF* self, double x1, double y1, double x2, double y2) {
	self->adjust(static_cast<double>(x1), static_cast<double>(y1), static_cast<double>(x2), static_cast<double>(y2));
}

QRectF* QRectF_adjusted(const QRectF* self, double x1, double y1, double x2, double y2) {
	return new QRectF(self->adjusted(static_cast<double>(x1), static_cast<double>(y1), static_cast<double>(x2), static_cast<double>(y2)));
}

QSizeF* QRectF_size(const QRectF* self) {
	return new QSizeF(self->size());
}

double QRectF_width(const QRectF* self) {
	double _ret = self->width();
	return static_cast<double>(_ret);
}

double QRectF_height(const QRectF* self) {
	double _ret = self->height();
	return static_cast<double>(_ret);
}

void QRectF_setWidth(QRectF* self, double w) {
	self->setWidth(static_cast<double>(w));
}

void QRectF_setHeight(QRectF* self, double h) {
	self->setHeight(static_cast<double>(h));
}

void QRectF_setSize(QRectF* self, QSizeF* s) {
	self->setSize(*s);
}

QRectF* QRectF_operatorBitwiseOr(const QRectF* self, QRectF* r) {
	return new QRectF(self->operator|(*r));
}

QRectF* QRectF_operatorBitwiseAnd(const QRectF* self, QRectF* r) {
	return new QRectF(self->operator&(*r));
}

void QRectF_operatorBitwiseOrAssign(QRectF* self, QRectF* r) {
	self->operator|=(*r);
}

void QRectF_operatorBitwiseAndAssign(QRectF* self, QRectF* r) {
	self->operator&=(*r);
}

bool QRectF_contains(const QRectF* self, QRectF* r) {
	return self->contains(*r);
}

bool QRectF_containsWithQPointF(const QRectF* self, QPointF* p) {
	return self->contains(*p);
}

bool QRectF_contains2(const QRectF* self, double x, double y) {
	return self->contains(static_cast<double>(x), static_cast<double>(y));
}

QRectF* QRectF_united(const QRectF* self, QRectF* other) {
	return new QRectF(self->united(*other));
}

QRectF* QRectF_intersected(const QRectF* self, QRectF* other) {
	return new QRectF(self->intersected(*other));
}

bool QRectF_intersects(const QRectF* self, QRectF* r) {
	return self->intersects(*r);
}

QRectF* QRectF_marginsAdded(const QRectF* self, QMarginsF* margins) {
	return new QRectF(self->marginsAdded(*margins));
}

QRectF* QRectF_marginsRemoved(const QRectF* self, QMarginsF* margins) {
	return new QRectF(self->marginsRemoved(*margins));
}

QRectF* QRectF_operatorPlusAssign(QRectF* self, QMarginsF* margins) {
	QRectF& _ret = self->operator+=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QRectF* QRectF_operatorMinusAssign(QRectF* self, QMarginsF* margins) {
	QRectF& _ret = self->operator-=(*margins);
	// Cast returned reference into pointer
	return &_ret;
}

QRect* QRectF_toRect(const QRectF* self) {
	return new QRect(self->toRect());
}

QRect* QRectF_toAlignedRect(const QRectF* self) {
	return new QRect(self->toAlignedRect());
}

void QRectF_delete(QRectF* self) {
	delete self;
}

void QSocketNotifier_virtbase(QSocketNotifier* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSocketNotifier_metaObject(const QSocketNotifier* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QSocketNotifier_tr(const char* s) {
	QString _ret = QSocketNotifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSocketNotifier_setSocket(QSocketNotifier* self, int64_t socket) {
	self->setSocket((int64_t)(socket));
}

int64_t QSocketNotifier_socket(const QSocketNotifier* self) {
	int64_t _ret = self->socket();
	return (int64_t)(_ret);
}

bool QSocketNotifier_isValid(const QSocketNotifier* self) {
	return self->isValid();
}

bool QSocketNotifier_isEnabled(const QSocketNotifier* self) {
	return self->isEnabled();
}

void QSocketNotifier_setEnabled(QSocketNotifier* self, bool enabled) {
	self->setEnabled(enabled);
}

struct miqt_string QSocketNotifier_tr2(const char* s, const char* c) {
	QString _ret = QSocketNotifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSocketNotifier_tr3(const char* s, const char* c, int n) {
	QString _ret = QSocketNotifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSocketNotifier_delete(QSocketNotifier* self) {
	delete self;
}

class MiqtVirtualQTimeLine final : public QTimeLine {
public:

	MiqtVirtualQTimeLine(): QTimeLine() {}
	MiqtVirtualQTimeLine(int duration): QTimeLine(duration) {}
	MiqtVirtualQTimeLine(int duration, QObject* parent): QTimeLine(duration, parent) {}

	virtual ~MiqtVirtualQTimeLine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__valueForTime = 0;

	// Subclass to allow providing a Go implementation
	virtual qreal valueForTime(int msec) const override {
		if (handle__valueForTime == 0) {
			return QTimeLine::valueForTime(msec);
		}

		int sigval1 = msec;
		double callback_return_value = miqt_exec_callback_QTimeLine_valueForTime(this, handle__valueForTime, sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QTimeLine_virtualbase_valueForTime(const void* self, int msec);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTimeLine::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTimeLine_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QTimeLine_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTimeLine::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTimeLine_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTimeLine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QTimeLine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTimeLine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTimeLine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTimeLine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTimeLine* QTimeLine_new() {
	return new (std::nothrow) MiqtVirtualQTimeLine();
}

QTimeLine* QTimeLine_new2(int duration) {
	return new (std::nothrow) MiqtVirtualQTimeLine(static_cast<int>(duration));
}

QTimeLine* QTimeLine_new3(int duration, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQTimeLine(static_cast<int>(duration), parent);
}

void QTimeLine_virtbase(QTimeLine* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTimeLine_metaObject(const QTimeLine* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QTimeLine_tr(const char* s) {
	QString _ret = QTimeLine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTimeLine_state(const QTimeLine* self) {
	QTimeLine::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QTimeLine_loopCount(const QTimeLine* self) {
	return self->loopCount();
}

void QTimeLine_setLoopCount(QTimeLine* self, int count) {
	self->setLoopCount(static_cast<int>(count));
}

int QTimeLine_direction(const QTimeLine* self) {
	return self->direction();
}

void QTimeLine_setDirection(QTimeLine* self, int direction) {
	self->setDirection(static_cast<QTimeLine::Direction>(direction));
}

int QTimeLine_duration(const QTimeLine* self) {
	return self->duration();
}

void QTimeLine_setDuration(QTimeLine* self, int duration) {
	self->setDuration(static_cast<int>(duration));
}

int QTimeLine_startFrame(const QTimeLine* self) {
	return self->startFrame();
}

void QTimeLine_setStartFrame(QTimeLine* self, int frame) {
	self->setStartFrame(static_cast<int>(frame));
}

int QTimeLine_endFrame(const QTimeLine* self) {
	return self->endFrame();
}

void QTimeLine_setEndFrame(QTimeLine* self, int frame) {
	self->setEndFrame(static_cast<int>(frame));
}

void QTimeLine_setFrameRange(QTimeLine* self, int startFrame, int endFrame) {
	self->setFrameRange(static_cast<int>(startFrame), static_cast<int>(endFrame));
}

int QTimeLine_updateInterval(const QTimeLine* self) {
	return self->updateInterval();
}

void QTimeLine_setUpdateInterval(QTimeLine* self, int interval) {
	self->setUpdateInterval(static_cast<int>(interval));
}

QEasingCurve* QTimeLine_easingCurve(const QTimeLine* self) {
	return new QEasingCurve(self->easingCurve());
}

void QTimeLine_setEasingCurve(QTimeLine* self, QEasingCurve* curve) {
	self->setEasingCurve(*curve);
}

int QTimeLine_currentTime(const QTimeLine* self) {
	return self->currentTime();
}

int QTimeLine_currentFrame(const QTimeLine* self) {
	return self->currentFrame();
}

double QTimeLine_currentValue(const QTimeLine* self) {
	double _ret = self->currentValue();
	return static_cast<double>(_ret);
}

int QTimeLine_frameForTime(const QTimeLine* self, int msec) {
	return self->frameForTime(static_cast<int>(msec));
}

double QTimeLine_valueForTime(const QTimeLine* self, int msec) {
	double _ret = self->valueForTime(static_cast<int>(msec));
	return static_cast<double>(_ret);
}

void QTimeLine_start(QTimeLine* self) {
	self->start();
}

void QTimeLine_resume(QTimeLine* self) {
	self->resume();
}

void QTimeLine_stop(QTimeLine* self) {
	self->stop();
}

void QTimeLine_setPaused(QTimeLine* self, bool paused) {
	self->setPaused(paused);
}

void QTimeLine_setCurrentTime(QTimeLine* self, int msec) {
	self->setCurrentTime(static_cast<int>(msec));
}

void QTimeLine_toggleDirection(QTimeLine* self) {
	self->toggleDirection();
}

struct miqt_string QTimeLine_tr2(const char* s, const char* c) {
	QString _ret = QTimeLine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTimeLine_tr3(const char* s, const char* c, int n) {
	QString _ret = QTimeLine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTimeLine_override_virtual_valueForTime(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = static_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__valueForTime = slot;
	return true;
}

double QTimeLine_virtualbase_valueForTime(const void* self, int msec) {
	double _ret = static_cast<const MiqtVirtualQTimeLine*>(self)->QTimeLine::valueForTime(static_cast<int>(msec));
	return static_cast<double>(_ret);
}

bool QTimeLine_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = static_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QTimeLine_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTimeLine*>(self)->QTimeLine::event(event);
}

bool QTimeLine_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTimeLine* self_cast = static_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTimeLine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTimeLine*>(self)->QTimeLine::eventFilter(watched, event);
}

QObject* QTimeLine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimeLine* self_cast = static_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTimeLine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTimeLine* self_cast = static_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTimeLine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTimeLine* self_cast = static_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTimeLine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTimeLine* self_cast = static_cast<MiqtVirtualQTimeLine*>( (QTimeLine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTimeLine_delete(QTimeLine* self) {
	delete self;
}

class MiqtVirtualQTranslator final : public QTranslator {
public:

	MiqtVirtualQTranslator(): QTranslator() {}
	MiqtVirtualQTranslator(QObject* parent): QTranslator(parent) {}

	virtual ~MiqtVirtualQTranslator() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__translate = 0;

	// Subclass to allow providing a Go implementation
	virtual QString translate(const char* context, const char* sourceText, const char* disambiguation, int n) const override {
		if (handle__translate == 0) {
			return QTranslator::translate(context, sourceText, disambiguation, n);
		}

		const char* sigval1 = (const char*) context;
		const char* sigval2 = (const char*) sourceText;
		const char* sigval3 = (const char*) disambiguation;
		int sigval4 = n;
		struct miqt_string callback_return_value = miqt_exec_callback_QTranslator_translate(this, handle__translate, sigval1, sigval2, sigval3, sigval4);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	friend struct miqt_string QTranslator_virtualbase_translate(const void* self, const char* context, const char* sourceText, const char* disambiguation, int n);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QTranslator::isEmpty();
		}

		bool callback_return_value = miqt_exec_callback_QTranslator_isEmpty(this, handle__isEmpty);
		return callback_return_value;
	}

	friend bool QTranslator_virtualbase_isEmpty(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTranslator::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTranslator_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QTranslator_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTranslator::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTranslator_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTranslator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend QObject* QTranslator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTranslator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTranslator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTranslator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTranslator* QTranslator_new() {
	return new (std::nothrow) MiqtVirtualQTranslator();
}

QTranslator* QTranslator_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQTranslator(parent);
}

void QTranslator_virtbase(QTranslator* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QTranslator_metaObject(const QTranslator* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string QTranslator_tr(const char* s) {
	QString _ret = QTranslator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTranslator_translate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
	QString _ret = self->translate(context, sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTranslator_isEmpty(const QTranslator* self) {
	return self->isEmpty();
}

struct miqt_string QTranslator_language(const QTranslator* self) {
	QString _ret = self->language();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTranslator_filePath(const QTranslator* self) {
	QString _ret = self->filePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTranslator_load(QTranslator* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->load(filename_QString);
}

bool QTranslator_load2(QTranslator* self, QLocale* locale, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->load(*locale, filename_QString);
}

bool QTranslator_load3(QTranslator* self, const unsigned char* data, int len) {
	return self->load(data, static_cast<int>(len));
}

struct miqt_string QTranslator_tr2(const char* s, const char* c) {
	QString _ret = QTranslator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTranslator_tr3(const char* s, const char* c, int n) {
	QString _ret = QTranslator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTranslator_load4(QTranslator* self, struct miqt_string filename, struct miqt_string directory) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	return self->load(filename_QString, directory_QString);
}

bool QTranslator_load5(QTranslator* self, struct miqt_string filename, struct miqt_string directory, struct miqt_string search_delimiters) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	QString search_delimiters_QString = QString::fromUtf8(search_delimiters.data, search_delimiters.len);
	return self->load(filename_QString, directory_QString, search_delimiters_QString);
}

bool QTranslator_load6(QTranslator* self, struct miqt_string filename, struct miqt_string directory, struct miqt_string search_delimiters, struct miqt_string suffix) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	QString search_delimiters_QString = QString::fromUtf8(search_delimiters.data, search_delimiters.len);
	QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
	return self->load(filename_QString, directory_QString, search_delimiters_QString, suffix_QString);
}

bool QTranslator_load7(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self->load(*locale, filename_QString, prefix_QString);
}

bool QTranslator_load8(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix, struct miqt_string directory) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	return self->load(*locale, filename_QString, prefix_QString, directory_QString);
}

bool QTranslator_load9(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix, struct miqt_string directory, struct miqt_string suffix) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
	return self->load(*locale, filename_QString, prefix_QString, directory_QString, suffix_QString);
}

bool QTranslator_load10(QTranslator* self, const unsigned char* data, int len, struct miqt_string directory) {
	QString directory_QString = QString::fromUtf8(directory.data, directory.len);
	return self->load(data, static_cast<int>(len), directory_QString);
}

bool QTranslator_override_virtual_translate(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = static_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__translate = slot;
	return true;
}

struct miqt_string QTranslator_virtualbase_translate(const void* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
	QString _ret = static_cast<const MiqtVirtualQTranslator*>(self)->QTranslator::translate(context, sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTranslator_override_virtual_isEmpty(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = static_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = slot;
	return true;
}

bool QTranslator_virtualbase_isEmpty(const void* self) {
	return static_cast<const MiqtVirtualQTranslator*>(self)->QTranslator::isEmpty();
}

bool QTranslator_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = static_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QTranslator_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTranslator*>(self)->QTranslator::event(event);
}

bool QTranslator_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQTranslator* self_cast = static_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTranslator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTranslator*>(self)->QTranslator::eventFilter(watched, event);
}

QObject* QTranslator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTranslator* self_cast = static_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTranslator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTranslator* self_cast = static_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTranslator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTranslator* self_cast = static_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTranslator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTranslator* self_cast = static_cast<MiqtVirtualQTranslator*>( (QTranslator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTranslator_delete(QTranslator* self) {
	delete self;
}

QUrlQuery* QUrlQuery_new() {
	return new (std::nothrow) QUrlQuery();
}

QUrlQuery* QUrlQuery_new2(QUrl* url) {
	return new (std::nothrow) QUrlQuery(*url);
}

QUrlQuery* QUrlQuery_new3(struct miqt_string queryString) {
	QString queryString_QString = QString::fromUtf8(queryString.data, queryString.len);
	return new (std::nothrow) QUrlQuery(queryString_QString);
}

QUrlQuery* QUrlQuery_new4(QUrlQuery* other) {
	return new (std::nothrow) QUrlQuery(*other);
}

void QUrlQuery_swap(QUrlQuery* self, QUrlQuery* other) {
	self->swap(*other);
}

bool QUrlQuery_isEmpty(const QUrlQuery* self) {
	return self->isEmpty();
}

bool QUrlQuery_isDetached(const QUrlQuery* self) {
	return self->isDetached();
}

void QUrlQuery_clear(QUrlQuery* self) {
	self->clear();
}

struct miqt_string QUrlQuery_query(const QUrlQuery* self) {
	QString _ret = self->query();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrlQuery_setQuery(QUrlQuery* self, struct miqt_string queryString) {
	QString queryString_QString = QString::fromUtf8(queryString.data, queryString.len);
	self->setQuery(queryString_QString);
}

struct miqt_string QUrlQuery_toString(const QUrlQuery* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUrlQuery_setQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter) {
	self->setQueryDelimiters(*valueDelimiter, *pairDelimiter);
}

QChar* QUrlQuery_queryValueDelimiter(const QUrlQuery* self) {
	return new QChar(self->queryValueDelimiter());
}

QChar* QUrlQuery_queryPairDelimiter(const QUrlQuery* self) {
	return new QChar(self->queryPairDelimiter());
}

bool QUrlQuery_hasQueryItem(const QUrlQuery* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->hasQueryItem(key_QString);
}

void QUrlQuery_addQueryItem(QUrlQuery* self, struct miqt_string key, struct miqt_string value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->addQueryItem(key_QString, value_QString);
}

void QUrlQuery_removeQueryItem(QUrlQuery* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->removeQueryItem(key_QString);
}

struct miqt_string QUrlQuery_queryItemValue(const QUrlQuery* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString _ret = self->queryItemValue(key_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QUrlQuery_allQueryItemValues(const QUrlQuery* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QStringList _ret = self->allQueryItemValues(key_QString);
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

void QUrlQuery_removeAllQueryItems(QUrlQuery* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->removeAllQueryItems(key_QString);
}

struct miqt_string QUrlQuery_queryWithEncoding(const QUrlQuery* self, int encoding) {
	QString _ret = self->query(static_cast<QFlags<QUrl::ComponentFormattingOption>>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrlQuery_toStringWithEncoding(const QUrlQuery* self, int encoding) {
	QString _ret = self->toString(static_cast<QFlags<QUrl::ComponentFormattingOption>>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUrlQuery_queryItemValue2(const QUrlQuery* self, struct miqt_string key, int encoding) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QString _ret = self->queryItemValue(key_QString, static_cast<QFlags<QUrl::ComponentFormattingOption>>(encoding));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QUrlQuery_allQueryItemValues2(const QUrlQuery* self, struct miqt_string key, int encoding) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	QStringList _ret = self->allQueryItemValues(key_QString, static_cast<QFlags<QUrl::ComponentFormattingOption>>(encoding));
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

void QUrlQuery_delete(QUrlQuery* self) {
	delete self;
}

