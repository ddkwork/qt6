#pragma once
#ifndef MIQT_QT6_GEN_QTCORE
#define MIQT_QT6_GEN_QTCORE

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libmiqt.h"
#include "miqt_export.h"

#ifdef __cplusplus
class QAbstractEventDispatcher;
class QAbstractItemModel;
class QAbstractNativeEventFilter;
class QAbstractProxyModel;
class QAtomicInt;
class QBasicTimer;
class QBindingStorage;
class QBitArray;
class QBitRef;
class QByteArray;
class QCalendar;
class QChar;
class QChildEvent;
class QCoreApplication;
class QDataStream;
class QDate;
class QDateTime;
class QDeadlineTimer;
class QDebug;
class QDir;
class QEasingCurve;
class QEvent;
class QEventLoop;
class QFileDevice;
class QFileInfo;
class QGenericArgument;
class QGenericReturnArgument;
class QIODevice;
class QItemSelection;
class QItemSelectionModel;
class QItemSelectionRange;
class QJsonArray;
class QJsonDocument;
class QJsonObject;
class QJsonParseError;
class QJsonValue;
class QJsonValueConstRef;
class QJsonValueRef;
class QKeyCombination;
class QLine;
class QLineF;
class QLocale;
class QMargins;
class QMarginsF;
class QMetaClassInfo;
class QMetaEnum;
class QMetaMethod;
class QMetaObject;
class QMetaProperty;
class QMetaType;
class QMimeData;
class QModelIndex;
class QModelRoleData;
class QModelRoleDataSpan;
class QObject;
class QPermission;
class QPersistentModelIndex;
class QPoint;
class QPointF;
class QPropertyBindingError;
class QPropertyBindingSourceLocation;
class QPropertyObserver;
class QRect;
class QRectF;
class QRegularExpression;
class QRegularExpressionMatch;
class QRegularExpressionMatchIterator;
class QSize;
class QSizeF;
class QSocketNotifier;
class QString;
class QTextStream;
class QTextStreamManipulator;
class QThread;
class QTime;
class QTimeLine;
class QTimeZone;
class QTimer;
class QTimerEvent;
class QTranslator;
class QUntypedBindable;
class QUntypedPropertyBinding;
class QUntypedPropertyData;
class QUrl;
class QUrlQuery;
class QUuid;
class QVariant;
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QAtomicInt QAtomicInt;
typedef struct QBasicTimer QBasicTimer;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitArray QBitArray;
typedef struct QBitRef QBitRef;
typedef struct QByteArray QByteArray;
typedef struct QCalendar QCalendar;
typedef struct QChar QChar;
typedef struct QChildEvent QChildEvent;
typedef struct QCoreApplication QCoreApplication;
typedef struct QDataStream QDataStream;
typedef struct QDate QDate;
typedef struct QDateTime QDateTime;
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QDebug QDebug;
typedef struct QDir QDir;
typedef struct QEasingCurve QEasingCurve;
typedef struct QEvent QEvent;
typedef struct QEventLoop QEventLoop;
typedef struct QFileDevice QFileDevice;
typedef struct QFileInfo QFileInfo;
typedef struct QGenericArgument QGenericArgument;
typedef struct QGenericReturnArgument QGenericReturnArgument;
typedef struct QIODevice QIODevice;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QItemSelectionRange QItemSelectionRange;
typedef struct QJsonArray QJsonArray;
typedef struct QJsonDocument QJsonDocument;
typedef struct QJsonObject QJsonObject;
typedef struct QJsonParseError QJsonParseError;
typedef struct QJsonValue QJsonValue;
typedef struct QJsonValueConstRef QJsonValueConstRef;
typedef struct QJsonValueRef QJsonValueRef;
typedef struct QKeyCombination QKeyCombination;
typedef struct QLine QLine;
typedef struct QLineF QLineF;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QMarginsF QMarginsF;
typedef struct QMetaClassInfo QMetaClassInfo;
typedef struct QMetaEnum QMetaEnum;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaProperty QMetaProperty;
typedef struct QMetaType QMetaType;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleData QModelRoleData;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QPermission QPermission;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QPropertyBindingError QPropertyBindingError;
typedef struct QPropertyBindingSourceLocation QPropertyBindingSourceLocation;
typedef struct QPropertyObserver QPropertyObserver;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionMatch QRegularExpressionMatch;
typedef struct QRegularExpressionMatchIterator QRegularExpressionMatchIterator;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QSocketNotifier QSocketNotifier;
typedef struct QString QString;
typedef struct QTextStream QTextStream;
typedef struct QTextStreamManipulator QTextStreamManipulator;
typedef struct QThread QThread;
typedef struct QTime QTime;
typedef struct QTimeLine QTimeLine;
typedef struct QTimeZone QTimeZone;
typedef struct QTimer QTimer;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTranslator QTranslator;
typedef struct QUntypedBindable QUntypedBindable;
typedef struct QUntypedPropertyBinding QUntypedPropertyBinding;
typedef struct QUntypedPropertyData QUntypedPropertyData;
typedef struct QUrl QUrl;
typedef struct QUrlQuery QUrlQuery;
typedef struct QUuid QUuid;
typedef struct QVariant QVariant;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef MIQT_TYPES_ONLY

// 来源: 类 (QAtomicInt)
// 来源: 构造函数
MIQT_EXPORT QAtomicInt* QAtomicInt_new();
// 来源: 构造函数
MIQT_EXPORT QAtomicInt* QAtomicInt_new2(QAtomicInt* param1);
// 来源: 构造函数
MIQT_EXPORT QAtomicInt* QAtomicInt_new3(int value);
// 来源: 析构函数
MIQT_EXPORT void QAtomicInt_delete(QAtomicInt* self);

// 来源: 类 (QKeyCombination)
// 来源: 构造函数
MIQT_EXPORT QKeyCombination* QKeyCombination_new();
// 来源: 构造函数
MIQT_EXPORT QKeyCombination* QKeyCombination_new2(int modifiers);
// 来源: 构造函数
MIQT_EXPORT QKeyCombination* QKeyCombination_new3(int modifiers);
// 来源: 构造函数
MIQT_EXPORT QKeyCombination* QKeyCombination_new4(QKeyCombination* param1);
// 来源: 构造函数
MIQT_EXPORT QKeyCombination* QKeyCombination_new5(int key);
// 来源: 构造函数
MIQT_EXPORT QKeyCombination* QKeyCombination_new6(int modifiers, int key);
// 来源: 构造函数
MIQT_EXPORT QKeyCombination* QKeyCombination_new7(int modifiers, int key);
// 来源: 类方法
MIQT_EXPORT int QKeyCombination_keyboardModifiers(const QKeyCombination* self);
// 来源: 类方法
MIQT_EXPORT int QKeyCombination_key(const QKeyCombination* self);
// 来源: 类方法
MIQT_EXPORT QKeyCombination* QKeyCombination_fromCombined(int combined);
// 来源: 类方法
MIQT_EXPORT int QKeyCombination_toCombined(const QKeyCombination* self);
// 来源: 类方法
MIQT_EXPORT int QKeyCombination_ToInt(const QKeyCombination* self);

// 来源: 析构函数
MIQT_EXPORT void QKeyCombination_delete(QKeyCombination* self);

// 来源: 类 (QGenericArgument)
// 来源: 构造函数
MIQT_EXPORT QGenericArgument* QGenericArgument_new();
// 来源: 构造函数
MIQT_EXPORT QGenericArgument* QGenericArgument_new2(QGenericArgument* param1);
// 来源: 构造函数
MIQT_EXPORT QGenericArgument* QGenericArgument_new3(const char* aName);
// 来源: 构造函数
MIQT_EXPORT QGenericArgument* QGenericArgument_new4(const char* aName, const void* aData);
// 来源: 类方法
MIQT_EXPORT void* QGenericArgument_data(const QGenericArgument* self);
// 来源: 类方法
MIQT_EXPORT const char* QGenericArgument_name(const QGenericArgument* self);

// 来源: 析构函数
MIQT_EXPORT void QGenericArgument_delete(QGenericArgument* self);

// 来源: 类 (QGenericReturnArgument)
// 来源: 构造函数
MIQT_EXPORT QGenericReturnArgument* QGenericReturnArgument_new();
// 来源: 构造函数
MIQT_EXPORT QGenericReturnArgument* QGenericReturnArgument_new2(QGenericReturnArgument* param1);
// 来源: 构造函数
MIQT_EXPORT QGenericReturnArgument* QGenericReturnArgument_new3(const char* aName);
// 来源: 构造函数
MIQT_EXPORT QGenericReturnArgument* QGenericReturnArgument_new4(const char* aName, void* aData);
MIQT_EXPORT void QGenericReturnArgument_virtbase(QGenericReturnArgument* src, QGenericArgument** outptr_QGenericArgument);
// 来源: 析构函数
MIQT_EXPORT void QGenericReturnArgument_delete(QGenericReturnArgument* self);

// 来源: 类 (QMetaObject)
// 来源: 构造函数
MIQT_EXPORT QMetaObject* QMetaObject_new();
// 来源: 构造函数
MIQT_EXPORT QMetaObject* QMetaObject_new2(QMetaObject* param1);
// 来源: 类方法
MIQT_EXPORT const char* QMetaObject_className(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QMetaObject_superClass(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_inherits(const QMetaObject* self, QMetaObject* metaObject);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_cast(const QMetaObject* self, QObject* obj);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_castWithObj(const QMetaObject* self, QObject* obj);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMetaObject_tr(const QMetaObject* self, const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT QMetaType* QMetaObject_metaType(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_methodOffset(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_enumeratorOffset(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_propertyOffset(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_classInfoOffset(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_constructorCount(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_methodCount(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_enumeratorCount(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_propertyCount(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_classInfoCount(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_indexOfConstructor(const QMetaObject* self, const char* constructor);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_indexOfMethod(const QMetaObject* self, const char* method);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_indexOfSignal(const QMetaObject* self, const char* signal);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_indexOfSlot(const QMetaObject* self, const char* slot);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_indexOfEnumerator(const QMetaObject* self, const char* name);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_indexOfProperty(const QMetaObject* self, const char* name);
// 来源: 类方法
MIQT_EXPORT int QMetaObject_indexOfClassInfo(const QMetaObject* self, const char* name);
// 来源: 类方法
MIQT_EXPORT QMetaMethod* QMetaObject_constructor(const QMetaObject* self, int index);
// 来源: 类方法
MIQT_EXPORT QMetaMethod* QMetaObject_method(const QMetaObject* self, int index);
// 来源: 类方法
MIQT_EXPORT QMetaEnum* QMetaObject_enumerator(const QMetaObject* self, int index);
// 来源: 类方法
MIQT_EXPORT QMetaProperty* QMetaObject_property(const QMetaObject* self, int index);
// 来源: 类方法
MIQT_EXPORT QMetaClassInfo* QMetaObject_classInfo(const QMetaObject* self, int index);
// 来源: 类方法
MIQT_EXPORT QMetaProperty* QMetaObject_userProperty(const QMetaObject* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_checkConnectArgs(const char* signal, const char* method);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_checkConnectArgs2(QMetaMethod* signal, QMetaMethod* method);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMetaObject_normalizedSignature(const char* method);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMetaObject_normalizedType(const char* type);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_disconnect(QObject* sender, int signal_index, QObject* receiver, int method_index);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_disconnectOne(QObject* sender, int signal_index, QObject* receiver, int method_index);
// 来源: 类方法
MIQT_EXPORT void QMetaObject_connectSlotsByName(QObject* o);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod2(QObject* obj, const char* member, QGenericReturnArgument* ret);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod3(QObject* obj, const char* member, int type, QGenericArgument* val0);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod4(QObject* obj, const char* member, QGenericArgument* val0);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_newInstance(const QMetaObject* self, QGenericArgument* val0);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMetaObject_tr2(const QMetaObject* self, const char* s, const char* c, int n);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod5(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod6(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod7(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod8(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod9(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod10(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod11(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod12(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod13(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod14(QObject* obj, const char* member, int param3, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod15(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod16(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod17(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod18(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod19(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod20(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod21(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod22(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod23(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod24(QObject* obj, const char* member, QGenericReturnArgument* ret, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod25(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod26(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod27(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod28(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod29(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod30(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod31(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod32(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod33(QObject* obj, const char* member, int type, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod34(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod35(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod36(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod37(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod38(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod39(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod40(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod41(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
// 来源: 类方法
MIQT_EXPORT bool QMetaObject_invokeMethod42(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_newInstance2(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_newInstance3(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_newInstance4(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_newInstance5(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_newInstance6(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_newInstance7(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_newInstance8(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_newInstance9(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
// 来源: 类方法
MIQT_EXPORT QObject* QMetaObject_newInstance10(const QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);

// 来源: 析构函数
MIQT_EXPORT void QMetaObject_delete(QMetaObject* self);

// 来源: 类 (QChar)
// 来源: 构造函数
MIQT_EXPORT QChar* QChar_new();
// 来源: 构造函数
MIQT_EXPORT QChar* QChar_new2(unsigned char c, unsigned char r);
// 来源: 构造函数
MIQT_EXPORT QChar* QChar_new3(QChar* param1);
// 来源: 类方法
MIQT_EXPORT int QChar_category(const QChar* self);
// 来源: 类方法
MIQT_EXPORT int QChar_joiningType(const QChar* self);
// 来源: 类方法
MIQT_EXPORT unsigned char QChar_combiningClass(const QChar* self);
// 来源: 类方法
MIQT_EXPORT QChar* QChar_mirroredChar(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_hasMirrored(const QChar* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QChar_decomposition(const QChar* self);
// 来源: 类方法
MIQT_EXPORT int QChar_decompositionTag(const QChar* self);
// 来源: 类方法
MIQT_EXPORT int QChar_digitValue(const QChar* self);
// 来源: 类方法
MIQT_EXPORT QChar* QChar_toLower(const QChar* self);
// 来源: 类方法
MIQT_EXPORT QChar* QChar_toUpper(const QChar* self);
// 来源: 类方法
MIQT_EXPORT QChar* QChar_toTitleCase(const QChar* self);
// 来源: 类方法
MIQT_EXPORT QChar* QChar_toCaseFolded(const QChar* self);
// 来源: 类方法
MIQT_EXPORT int QChar_unicodeVersion(const QChar* self);
// 来源: 类方法
MIQT_EXPORT char QChar_toLatin1(const QChar* self);
// 来源: 类方法
MIQT_EXPORT QChar* QChar_fromLatin1(char c);
// 来源: 类方法
MIQT_EXPORT bool QChar_isNull(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isPrint(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isSpace(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isMark(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isPunct(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isSymbol(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isLetter(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isNumber(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isLetterOrNumber(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isDigit(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isLower(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isUpper(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isTitleCase(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isNonCharacter(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isHighSurrogate(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isLowSurrogate(const QChar* self);
// 来源: 类方法
MIQT_EXPORT bool QChar_isSurrogate(const QChar* self);
// 来源: 类方法
MIQT_EXPORT unsigned char QChar_cell(const QChar* self);
// 来源: 类方法
MIQT_EXPORT unsigned char QChar_row(const QChar* self);
// 来源: 类方法
MIQT_EXPORT void QChar_setCell(QChar* self, unsigned char acell);
// 来源: 类方法
MIQT_EXPORT void QChar_setRow(QChar* self, unsigned char arow);
// 来源: 类方法
MIQT_EXPORT int QChar_currentUnicodeVersion();

// 来源: 析构函数
MIQT_EXPORT void QChar_delete(QChar* self);

// 来源: 类 (QByteArray)
// 来源: 构造函数
MIQT_EXPORT QByteArray* QByteArray_new();
// 来源: 构造函数
MIQT_EXPORT QByteArray* QByteArray_new2(const char* param1);
// 来源: 构造函数
MIQT_EXPORT QByteArray* QByteArray_new3(int64_t size, char c);
// 来源: 构造函数
MIQT_EXPORT QByteArray* QByteArray_new4(int64_t size, int param2);
// 来源: 构造函数
MIQT_EXPORT QByteArray* QByteArray_new5(struct miqt_string param1);
// 来源: 构造函数
MIQT_EXPORT QByteArray* QByteArray_new6(const char* param1, int64_t size);
// 来源: 类方法
MIQT_EXPORT void QByteArray_swap(QByteArray* self, struct miqt_string other);
// 来源: 类方法
MIQT_EXPORT bool QByteArray_isEmpty(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT void QByteArray_resize(QByteArray* self, int64_t size);
// 来源: 类方法
MIQT_EXPORT void QByteArray_resize2(QByteArray* self, int64_t size, char c);
// 来源: 类方法
MIQT_EXPORT void QByteArray_resizeForOverwrite(QByteArray* self, int64_t size);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_fill(QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_capacity(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT void QByteArray_reserve(QByteArray* self, int64_t size);
// 来源: 类方法
MIQT_EXPORT void QByteArray_squeeze(QByteArray* self);
// 来源: 类方法
MIQT_EXPORT const char* QByteArray_ToConstCharMultiply(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT const void* QByteArray_ToConstVoidMultiply(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT char* QByteArray_data(QByteArray* self);
// 来源: 类方法
MIQT_EXPORT const char* QByteArray_data2(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT const char* QByteArray_constData(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT void QByteArray_detach(QByteArray* self);
// 来源: 类方法
MIQT_EXPORT bool QByteArray_isDetached(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT bool QByteArray_isSharedWith(const QByteArray* self, struct miqt_string other);
// 来源: 类方法
MIQT_EXPORT void QByteArray_clear(QByteArray* self);
// 来源: 类方法
MIQT_EXPORT char QByteArray_at(const QByteArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT char QByteArray_operatorSubscript(const QByteArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT char QByteArray_front(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT char QByteArray_back(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_indexOf(const QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_lastIndexOf(const QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT bool QByteArray_contains(const QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_count(const QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_left(const QByteArray* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_right(const QByteArray* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_mid(const QByteArray* self, int64_t index);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_first(const QByteArray* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_last(const QByteArray* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_sliced(const QByteArray* self, int64_t pos);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_sliced2(const QByteArray* self, int64_t pos, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_chopped(const QByteArray* self, int64_t len);
// 来源: 类方法
MIQT_EXPORT bool QByteArray_startsWith(const QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT bool QByteArray_endsWith(const QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT bool QByteArray_isUpper(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT bool QByteArray_isLower(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT bool QByteArray_isValidUtf8(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT void QByteArray_truncate(QByteArray* self, int64_t pos);
// 来源: 类方法
MIQT_EXPORT void QByteArray_chop(QByteArray* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_slice(QByteArray* self, int64_t pos);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_slice2(QByteArray* self, int64_t pos, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_toLower(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_toUpper(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_trimmed(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_simplified(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_leftJustified(const QByteArray* self, int64_t width);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_rightJustified(const QByteArray* self, int64_t width);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_prepend(QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_prepend2(QByteArray* self, int64_t count, char c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_prependWithChar(QByteArray* self, const char* s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_prepend3(QByteArray* self, const char* s, int64_t len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_prependWithQByteArray(QByteArray* self, struct miqt_string a);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_append(QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_append2(QByteArray* self, int64_t count, char c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_appendWithChar(QByteArray* self, const char* s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_append3(QByteArray* self, const char* s, int64_t len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_appendWithQByteArray(QByteArray* self, struct miqt_string a);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_assign(QByteArray* self, int64_t n, char c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_insert(QByteArray* self, int64_t i, const char* s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_insert2(QByteArray* self, int64_t i, struct miqt_string data);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_insert3(QByteArray* self, int64_t i, int64_t count, char c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_insert4(QByteArray* self, int64_t i, char c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_insert5(QByteArray* self, int64_t i, const char* s, int64_t len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_remove(QByteArray* self, int64_t index, int64_t len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_removeAt(QByteArray* self, int64_t pos);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_removeFirst(QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_removeLast(QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_replace(QByteArray* self, int64_t index, int64_t len, const char* s, int64_t alen);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_replace2(QByteArray* self, const char* before, int64_t bsize, const char* after, int64_t asize);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_replace3(QByteArray* self, char before, char after);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_operatorPlusAssign(QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_operatorPlusAssignWithChar(QByteArray* self, const char* s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_operatorPlusAssignWithQByteArray(QByteArray* self, struct miqt_string a);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QByteArray_split(const QByteArray* self, char sep);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_repeated(const QByteArray* self, int64_t times);
// 来源: 类方法
MIQT_EXPORT short QByteArray_toShort(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT unsigned short QByteArray_toUShort(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT int QByteArray_toInt(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT unsigned int QByteArray_toUInt(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT long QByteArray_toLong(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT unsigned long QByteArray_toULong(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT long long QByteArray_toLongLong(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT unsigned long long QByteArray_toULongLong(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT float QByteArray_toFloat(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT double QByteArray_toDouble(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_toBase64(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_toHex(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_toPercentEncoding(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_percentDecoded(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum(QByteArray* self, short param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNumWithUshort(QByteArray* self, unsigned short param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNumWithInt(QByteArray* self, int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNumWithUint(QByteArray* self, unsigned int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNumWithLong(QByteArray* self, long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNumWithUlong(QByteArray* self, unsigned long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNumWithQlonglong(QByteArray* self, long long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNumWithQulonglong(QByteArray* self, unsigned long long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNumWithFloat(QByteArray* self, float param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNumWithDouble(QByteArray* self, double param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setRawData(QByteArray* self, const char* a, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_number(int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_numberWithUint(unsigned int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_numberWithLong(long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_numberWithUlong(unsigned long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_numberWithQlonglong(long long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_numberWithQulonglong(unsigned long long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_numberWithDouble(double param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_fromRawData(const char* data, int64_t size);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_fromBase64(struct miqt_string base64);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_fromHex(struct miqt_string hexEncoded);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_fromPercentEncoding(struct miqt_string pctEncoded);
// 来源: 类方法
MIQT_EXPORT void QByteArray_pushBack(QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT void QByteArray_pushBackWithChar(QByteArray* self, const char* s);
// 来源: 类方法
MIQT_EXPORT void QByteArray_pushBackWithQByteArray(QByteArray* self, struct miqt_string a);
// 来源: 类方法
MIQT_EXPORT void QByteArray_pushFront(QByteArray* self, char c);
// 来源: 类方法
MIQT_EXPORT void QByteArray_pushFrontWithChar(QByteArray* self, const char* c);
// 来源: 类方法
MIQT_EXPORT void QByteArray_pushFrontWithQByteArray(QByteArray* self, struct miqt_string a);
// 来源: 类方法
MIQT_EXPORT void QByteArray_shrinkToFit(QByteArray* self);
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_maxSize(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_maxSize2();
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_size(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_count2(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_length(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT bool QByteArray_isNull(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_nullTerminated(const QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_nullTerminate(QByteArray* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_fill2(QByteArray* self, char c, int64_t size);
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_indexOf2(const QByteArray* self, char c, int64_t from);
// 来源: 类方法
MIQT_EXPORT int64_t QByteArray_lastIndexOf2(const QByteArray* self, char c, int64_t from);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_mid2(const QByteArray* self, int64_t index, int64_t len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_leftJustified2(const QByteArray* self, int64_t width, char fill);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_leftJustified3(const QByteArray* self, int64_t width, char fill, bool truncate);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_rightJustified2(const QByteArray* self, int64_t width, char fill);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_rightJustified3(const QByteArray* self, int64_t width, char fill, bool truncate);
// 来源: 类方法
MIQT_EXPORT short QByteArray_toShortWithOk(const QByteArray* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT short QByteArray_toShort2(const QByteArray* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT unsigned short QByteArray_toUShortWithOk(const QByteArray* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned short QByteArray_toUShort2(const QByteArray* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT int QByteArray_toIntWithOk(const QByteArray* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT int QByteArray_toInt2(const QByteArray* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT unsigned int QByteArray_toUIntWithOk(const QByteArray* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned int QByteArray_toUInt2(const QByteArray* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT long QByteArray_toLongWithOk(const QByteArray* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT long QByteArray_toLong2(const QByteArray* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT unsigned long QByteArray_toULongWithOk(const QByteArray* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned long QByteArray_toULong2(const QByteArray* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT long long QByteArray_toLongLongWithOk(const QByteArray* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT long long QByteArray_toLongLong2(const QByteArray* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT unsigned long long QByteArray_toULongLongWithOk(const QByteArray* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned long long QByteArray_toULongLong2(const QByteArray* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT float QByteArray_toFloatWithOk(const QByteArray* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT double QByteArray_toDoubleWithOk(const QByteArray* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_toBase64WithOptions(const QByteArray* self, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_toHexWithSeparator(const QByteArray* self, char separator);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_toPercentEncodingWithExclude(const QByteArray* self, struct miqt_string exclude);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_toPercentEncoding2(const QByteArray* self, struct miqt_string exclude, struct miqt_string include);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_toPercentEncoding3(const QByteArray* self, struct miqt_string exclude, struct miqt_string include, char percent);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_percentDecodedWithPercent(const QByteArray* self, char percent);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum2(QByteArray* self, short param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum3(QByteArray* self, unsigned short param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum4(QByteArray* self, int param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum5(QByteArray* self, unsigned int param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum6(QByteArray* self, long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum7(QByteArray* self, unsigned long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum8(QByteArray* self, long long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum9(QByteArray* self, unsigned long long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum10(QByteArray* self, float param1, char format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum11(QByteArray* self, float param1, char format, int precision);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum12(QByteArray* self, double param1, char format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_setNum13(QByteArray* self, double param1, char format, int precision);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_number2(int param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_number3(unsigned int param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_number4(long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_number5(unsigned long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_number6(long long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_number7(unsigned long long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_number8(double param1, char format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_number9(double param1, char format, int precision);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_fromBase642(struct miqt_string base64, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QByteArray_fromPercentEncoding2(struct miqt_string pctEncoded, char percent);

// 来源: 析构函数
MIQT_EXPORT void QByteArray_delete(QByteArray* self);

// 来源: 类 (QString)
// 来源: 构造函数
MIQT_EXPORT QString* QString_new();
// 来源: 构造函数
MIQT_EXPORT QString* QString_new2(QChar* unicode);
// 来源: 构造函数
MIQT_EXPORT QString* QString_new3(QChar* c);
// 来源: 构造函数
MIQT_EXPORT QString* QString_new4(int64_t size, QChar* c);
// 来源: 构造函数
MIQT_EXPORT QString* QString_new5(struct miqt_string param1);
// 来源: 构造函数
MIQT_EXPORT QString* QString_new6(int64_t size, int param2);
// 来源: 构造函数
MIQT_EXPORT QString* QString_new7(QChar* unicode, int64_t size);
// 来源: 类方法
MIQT_EXPORT void QString_swap(QString* self, struct miqt_string other);
// 来源: 类方法
MIQT_EXPORT int64_t QString_maxSize();
// 来源: 类方法
MIQT_EXPORT int64_t QString_size(const QString* self);
// 来源: 类方法
MIQT_EXPORT int64_t QString_count(const QString* self);
// 来源: 类方法
MIQT_EXPORT int64_t QString_length(const QString* self);
// 来源: 类方法
MIQT_EXPORT bool QString_isEmpty(const QString* self);
// 来源: 类方法
MIQT_EXPORT void QString_resize(QString* self, int64_t size);
// 来源: 类方法
MIQT_EXPORT void QString_resize2(QString* self, int64_t size, QChar* fillChar);
// 来源: 类方法
MIQT_EXPORT void QString_resizeForOverwrite(QString* self, int64_t size);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_fill(QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT void QString_truncate(QString* self, int64_t pos);
// 来源: 类方法
MIQT_EXPORT void QString_chop(QString* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_slice(QString* self, int64_t pos);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_slice2(QString* self, int64_t pos, int64_t n);
// 来源: 类方法
MIQT_EXPORT int64_t QString_capacity(const QString* self);
// 来源: 类方法
MIQT_EXPORT void QString_reserve(QString* self, int64_t size);
// 来源: 类方法
MIQT_EXPORT void QString_squeeze(QString* self);
// 来源: 类方法
MIQT_EXPORT QChar* QString_unicode(const QString* self);
// 来源: 类方法
MIQT_EXPORT QChar* QString_data(QString* self);
// 来源: 类方法
MIQT_EXPORT QChar* QString_data2(const QString* self);
// 来源: 类方法
MIQT_EXPORT QChar* QString_constData(const QString* self);
// 来源: 类方法
MIQT_EXPORT void QString_detach(QString* self);
// 来源: 类方法
MIQT_EXPORT bool QString_isDetached(const QString* self);
// 来源: 类方法
MIQT_EXPORT bool QString_isSharedWith(const QString* self, struct miqt_string other);
// 来源: 类方法
MIQT_EXPORT void QString_clear(QString* self);
// 来源: 类方法
MIQT_EXPORT QChar* QString_at(const QString* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT QChar* QString_operatorSubscript(const QString* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT QChar* QString_operatorSubscriptWithQsizetype(QString* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT QChar* QString_front(const QString* self);
// 来源: 类方法
MIQT_EXPORT QChar* QString_front2(QString* self);
// 来源: 类方法
MIQT_EXPORT QChar* QString_back(const QString* self);
// 来源: 类方法
MIQT_EXPORT QChar* QString_back2(QString* self);
// 来源: 类方法
MIQT_EXPORT int64_t QString_indexOf(const QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT int64_t QString_indexOfWithQString(const QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT int64_t QString_lastIndexOf(const QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT int64_t QString_lastIndexOf2(const QString* self, QChar* c, int64_t from);
// 来源: 类方法
MIQT_EXPORT int64_t QString_lastIndexOfWithQString(const QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT int64_t QString_lastIndexOf3(const QString* self, struct miqt_string s, int64_t from);
// 来源: 类方法
MIQT_EXPORT bool QString_contains(const QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT bool QString_containsWithQString(const QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT int64_t QString_countWithQChar(const QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT int64_t QString_countWithQString(const QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT int64_t QString_indexOfWithRe(const QString* self, QRegularExpression* re);
// 来源: 类方法
MIQT_EXPORT int64_t QString_lastIndexOf4(const QString* self, QRegularExpression* re, int64_t from);
// 来源: 类方法
MIQT_EXPORT bool QString_containsWithRe(const QString* self, QRegularExpression* re);
// 来源: 类方法
MIQT_EXPORT int64_t QString_countWithRe(const QString* self, QRegularExpression* re);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_section(const QString* self, QChar* sep, int64_t start);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_section2(const QString* self, struct miqt_string in_sep, int64_t start);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_section3(const QString* self, QRegularExpression* re, int64_t start);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_left(const QString* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_right(const QString* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_mid(const QString* self, int64_t position);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_first(const QString* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_last(const QString* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_sliced(const QString* self, int64_t pos);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_sliced2(const QString* self, int64_t pos, int64_t n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_chopped(const QString* self, int64_t n);
// 来源: 类方法
MIQT_EXPORT bool QString_startsWith(const QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT bool QString_startsWithWithQChar(const QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT bool QString_endsWith(const QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT bool QString_endsWithWithQChar(const QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT bool QString_isUpper(const QString* self);
// 来源: 类方法
MIQT_EXPORT bool QString_isLower(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_leftJustified(const QString* self, int64_t width);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_rightJustified(const QString* self, int64_t width);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_toLower(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_toUpper(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_toCaseFolded(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_trimmed(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_simplified(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_toHtmlEscaped(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_insert(QString* self, int64_t i, QChar* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_insert2(QString* self, int64_t i, QChar* uc, int64_t len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_insert3(QString* self, int64_t i, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_append(QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_append2(QString* self, QChar* uc, int64_t len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_appendWithQString(QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_prepend(QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_prepend2(QString* self, QChar* uc, int64_t len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_prependWithQString(QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_assign(QString* self, int64_t n, QChar* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_operatorPlusAssign(QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_operatorPlusAssignWithQString(QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_remove(QString* self, int64_t i, int64_t len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_removeWithQChar(QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_removeWithQString(QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_removeAt(QString* self, int64_t pos);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_removeFirst(QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_removeLast(QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace(QString* self, int64_t i, int64_t len, QChar* after);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace2(QString* self, int64_t i, int64_t len, QChar* s, int64_t slen);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace3(QString* self, int64_t i, int64_t len, struct miqt_string after);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace4(QString* self, QChar* before, QChar* after);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace5(QString* self, QChar* before, int64_t blen, QChar* after, int64_t alen);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace6(QString* self, struct miqt_string before, struct miqt_string after);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace7(QString* self, QChar* c, struct miqt_string after);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace8(QString* self, QRegularExpression* re, struct miqt_string after);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_removeWithRe(QString* self, QRegularExpression* re);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QString_split(const QString* self, struct miqt_string sep);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QString_splitWithSep(const QString* self, QChar* sep);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QString_split2(const QString* self, QRegularExpression* sep);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_normalized(const QString* self, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_repeated(const QString* self, int64_t times);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_nullTerminated(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_nullTerminate(QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_toLatin1(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_toUtf8(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_toLocal8Bit(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of unsigned int */  QString_toUcs4(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_fromLatin1(const char* str, int64_t size);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_fromUtf8(const char* utf8, int64_t size);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_fromLocal8Bit(const char* str, int64_t size);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_fromRawData2(QChar* param1, int64_t size);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_fromUtf16WithStr(const unsigned short* str);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_fromUcs4WithStr(const unsigned int* str);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setRawData(QString* self, QChar* unicode, int64_t size);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setUnicode(QString* self, QChar* unicode, int64_t size);
// 来源: 类方法
MIQT_EXPORT int QString_compare(const QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT int QString_compareWithCh(const QString* self, QChar* ch);
// 来源: 类方法
MIQT_EXPORT int QString_compare2(struct miqt_string s1, struct miqt_string s2);
// 来源: 类方法
MIQT_EXPORT int QString_localeAwareCompare(const QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT int QString_localeAwareCompare2(struct miqt_string s1, struct miqt_string s2);
// 来源: 类方法
MIQT_EXPORT short QString_toShort(const QString* self);
// 来源: 类方法
MIQT_EXPORT unsigned short QString_toUShort(const QString* self);
// 来源: 类方法
MIQT_EXPORT int QString_toInt(const QString* self);
// 来源: 类方法
MIQT_EXPORT unsigned int QString_toUInt(const QString* self);
// 来源: 类方法
MIQT_EXPORT long QString_toLong(const QString* self);
// 来源: 类方法
MIQT_EXPORT unsigned long QString_toULong(const QString* self);
// 来源: 类方法
MIQT_EXPORT long long QString_toLongLong(const QString* self);
// 来源: 类方法
MIQT_EXPORT unsigned long long QString_toULongLong(const QString* self);
// 来源: 类方法
MIQT_EXPORT float QString_toFloat(const QString* self);
// 来源: 类方法
MIQT_EXPORT double QString_toDouble(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum(QString* self, short param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNumWithUshort(QString* self, unsigned short param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNumWithInt(QString* self, int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNumWithUint(QString* self, unsigned int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNumWithLong(QString* self, long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNumWithUlong(QString* self, unsigned long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNumWithQlonglong(QString* self, long long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNumWithQulonglong(QString* self, unsigned long long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNumWithFloat(QString* self, float param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNumWithDouble(QString* self, double param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_number(int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_numberWithUint(unsigned int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_numberWithLong(long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_numberWithUlong(unsigned long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_numberWithQlonglong(long long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_numberWithQulonglong(unsigned long long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_numberWithDouble(double param1);
// 来源: 类方法
MIQT_EXPORT void QString_pushBack(QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT void QString_pushBackWithQString(QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT void QString_pushFront(QString* self, QChar* c);
// 来源: 类方法
MIQT_EXPORT void QString_pushFrontWithQString(QString* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT void QString_shrinkToFit(QString* self);
// 来源: 类方法
MIQT_EXPORT int64_t QString_maxSize2(const QString* self);
// 来源: 类方法
MIQT_EXPORT bool QString_isNull(const QString* self);
// 来源: 类方法
MIQT_EXPORT bool QString_isRightToLeft(const QString* self);
// 来源: 类方法
MIQT_EXPORT bool QString_isValidUtf16(const QString* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_fill2(QString* self, QChar* c, int64_t size);
// 来源: 类方法
MIQT_EXPORT int64_t QString_indexOf2(const QString* self, QChar* c, int64_t from);
// 来源: 类方法
MIQT_EXPORT int64_t QString_indexOf3(const QString* self, QChar* c, int64_t from, int cs);
// 来源: 类方法
MIQT_EXPORT int64_t QString_indexOf4(const QString* self, struct miqt_string s, int64_t from);
// 来源: 类方法
MIQT_EXPORT int64_t QString_indexOf5(const QString* self, struct miqt_string s, int64_t from, int cs);
// 来源: 类方法
MIQT_EXPORT int64_t QString_lastIndexOf5(const QString* self, QChar* c, int cs);
// 来源: 类方法
MIQT_EXPORT int64_t QString_lastIndexOf6(const QString* self, QChar* c, int64_t from, int cs);
// 来源: 类方法
MIQT_EXPORT int64_t QString_lastIndexOf7(const QString* self, struct miqt_string s, int cs);
// 来源: 类方法
MIQT_EXPORT int64_t QString_lastIndexOf8(const QString* self, struct miqt_string s, int64_t from, int cs);
// 来源: 类方法
MIQT_EXPORT bool QString_contains2(const QString* self, QChar* c, int cs);
// 来源: 类方法
MIQT_EXPORT bool QString_contains3(const QString* self, struct miqt_string s, int cs);
// 来源: 类方法
MIQT_EXPORT int64_t QString_count2(const QString* self, QChar* c, int cs);
// 来源: 类方法
MIQT_EXPORT int64_t QString_count3(const QString* self, struct miqt_string s, int cs);
// 来源: 类方法
MIQT_EXPORT int64_t QString_indexOf6(const QString* self, QRegularExpression* re, int64_t from);
// 来源: 类方法
MIQT_EXPORT int64_t QString_indexOf7(const QString* self, QRegularExpression* re, int64_t from, QRegularExpressionMatch* rmatch);
// 来源: 类方法
MIQT_EXPORT int64_t QString_lastIndexOf9(const QString* self, QRegularExpression* re, int64_t from, QRegularExpressionMatch* rmatch);
// 来源: 类方法
MIQT_EXPORT bool QString_contains4(const QString* self, QRegularExpression* re, QRegularExpressionMatch* rmatch);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_section4(const QString* self, QChar* sep, int64_t start, int64_t end);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_section5(const QString* self, QChar* sep, int64_t start, int64_t end, int flags);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_section6(const QString* self, struct miqt_string in_sep, int64_t start, int64_t end);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_section7(const QString* self, struct miqt_string in_sep, int64_t start, int64_t end, int flags);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_section8(const QString* self, QRegularExpression* re, int64_t start, int64_t end);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_section9(const QString* self, QRegularExpression* re, int64_t start, int64_t end, int flags);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_mid2(const QString* self, int64_t position, int64_t n);
// 来源: 类方法
MIQT_EXPORT bool QString_startsWith2(const QString* self, struct miqt_string s, int cs);
// 来源: 类方法
MIQT_EXPORT bool QString_startsWith3(const QString* self, QChar* c, int cs);
// 来源: 类方法
MIQT_EXPORT bool QString_endsWith2(const QString* self, struct miqt_string s, int cs);
// 来源: 类方法
MIQT_EXPORT bool QString_endsWith3(const QString* self, QChar* c, int cs);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_leftJustified2(const QString* self, int64_t width, QChar* fill);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_leftJustified3(const QString* self, int64_t width, QChar* fill, bool trunc);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_rightJustified2(const QString* self, int64_t width, QChar* fill);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_rightJustified3(const QString* self, int64_t width, QChar* fill, bool trunc);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_remove2(QString* self, QChar* c, int cs);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_remove3(QString* self, struct miqt_string s, int cs);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace9(QString* self, QChar* before, QChar* after, int cs);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace10(QString* self, QChar* before, int64_t blen, QChar* after, int64_t alen, int cs);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace11(QString* self, struct miqt_string before, struct miqt_string after, int cs);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_replace12(QString* self, QChar* c, struct miqt_string after, int cs);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QString_split3(const QString* self, struct miqt_string sep, int behavior);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QString_split4(const QString* self, struct miqt_string sep, int behavior, int cs);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QString_split5(const QString* self, QChar* sep, int behavior);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QString_split6(const QString* self, QChar* sep, int behavior, int cs);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QString_split7(const QString* self, QRegularExpression* sep, int behavior);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_normalized2(const QString* self, int mode, int version);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_fromUtf163(const unsigned short* str, int64_t size);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_fromUcs43(const unsigned int* str, int64_t size);
// 来源: 类方法
MIQT_EXPORT int QString_compare3(const QString* self, struct miqt_string s, int cs);
// 来源: 类方法
MIQT_EXPORT int QString_compare4(const QString* self, QChar* ch, int cs);
// 来源: 类方法
MIQT_EXPORT int QString_compare5(struct miqt_string s1, struct miqt_string s2, int cs);
// 来源: 类方法
MIQT_EXPORT short QString_toShortWithOk(const QString* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT short QString_toShort2(const QString* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT unsigned short QString_toUShortWithOk(const QString* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned short QString_toUShort2(const QString* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT int QString_toIntWithOk(const QString* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT int QString_toInt2(const QString* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT unsigned int QString_toUIntWithOk(const QString* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned int QString_toUInt2(const QString* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT long QString_toLongWithOk(const QString* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT long QString_toLong2(const QString* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT unsigned long QString_toULongWithOk(const QString* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned long QString_toULong2(const QString* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT long long QString_toLongLongWithOk(const QString* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT long long QString_toLongLong2(const QString* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT unsigned long long QString_toULongLongWithOk(const QString* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned long long QString_toULongLong2(const QString* self, bool* ok, int base);
// 来源: 类方法
MIQT_EXPORT float QString_toFloatWithOk(const QString* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT double QString_toDoubleWithOk(const QString* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum2(QString* self, short param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum3(QString* self, unsigned short param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum4(QString* self, int param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum5(QString* self, unsigned int param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum6(QString* self, long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum7(QString* self, unsigned long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum8(QString* self, long long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum9(QString* self, unsigned long long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum10(QString* self, float param1, char format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum11(QString* self, float param1, char format, int precision);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum12(QString* self, double param1, char format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_setNum13(QString* self, double param1, char format, int precision);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_number2(int param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_number3(unsigned int param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_number4(long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_number5(unsigned long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_number6(long long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_number7(unsigned long long param1, int base);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_number8(double param1, char format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QString_number9(double param1, char format, int precision);

// 来源: 析构函数
MIQT_EXPORT void QString_delete(QString* self);

// 来源: 类 (QDataStream)
// 来源: 构造函数
MIQT_EXPORT QDataStream* QDataStream_new();
// 来源: 构造函数
MIQT_EXPORT QDataStream* QDataStream_new2(QIODevice* param1);
// 来源: 构造函数
MIQT_EXPORT QDataStream* QDataStream_new3(struct miqt_string param1);
// 来源: 类方法
MIQT_EXPORT QIODevice* QDataStream_device(const QDataStream* self);
// 来源: 类方法
MIQT_EXPORT void QDataStream_setDevice(QDataStream* self, QIODevice* device);
// 来源: 类方法
MIQT_EXPORT bool QDataStream_atEnd(const QDataStream* self);
// 来源: 类方法
MIQT_EXPORT void QDataStream_resetStatus(QDataStream* self);
// 来源: 类方法
MIQT_EXPORT int QDataStream_floatingPointPrecision(const QDataStream* self);
// 来源: 类方法
MIQT_EXPORT void QDataStream_setFloatingPointPrecision(QDataStream* self, int precision);
// 来源: 类方法
MIQT_EXPORT int QDataStream_byteOrder(const QDataStream* self);
// 来源: 类方法
MIQT_EXPORT void QDataStream_setByteOrder(QDataStream* self, int byteOrder);
// 来源: 类方法
MIQT_EXPORT int QDataStream_version(const QDataStream* self);
// 来源: 类方法
MIQT_EXPORT void QDataStream_setVersion(QDataStream* self, int version);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRight(QDataStream* self, char* i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithQint8(QDataStream* self, signed char* i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithQuint8(QDataStream* self, unsigned char* i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithQint16(QDataStream* self, short* i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithQuint16(QDataStream* self, unsigned short* i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithQint32(QDataStream* self, int* i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithQuint32(QDataStream* self, unsigned int* i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithQint64(QDataStream* self, long long* i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithQuint64(QDataStream* self, unsigned long long* i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithBool(QDataStream* self, bool* i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithFloat(QDataStream* self, float* f);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithDouble(QDataStream* self, double* f);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftRightWithStr(QDataStream* self, char* str);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeft(QDataStream* self, char i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithQint8(QDataStream* self, signed char i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithQuint8(QDataStream* self, unsigned char i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithQint16(QDataStream* self, short i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithQuint16(QDataStream* self, unsigned short i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithQint32(QDataStream* self, int i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithQuint32(QDataStream* self, unsigned int i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithQint64(QDataStream* self, long long i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithQuint64(QDataStream* self, unsigned long long i);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithFloat(QDataStream* self, float f);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithDouble(QDataStream* self, double f);
// 来源: 类方法
MIQT_EXPORT void QDataStream_operatorShiftLeftWithStr(QDataStream* self, const char* str);
// 来源: 类方法
MIQT_EXPORT bool QDataStream_ToBool(const QDataStream* self);
// 来源: 类方法
MIQT_EXPORT long long QDataStream_readRawData(QDataStream* self, char* param1, long long len);
// 来源: 类方法
MIQT_EXPORT void QDataStream_writeBytes(QDataStream* self, const char* param1, long long len);
// 来源: 类方法
MIQT_EXPORT long long QDataStream_writeRawData(QDataStream* self, const char* param1, long long len);
// 来源: 类方法
MIQT_EXPORT long long QDataStream_skipRawData(QDataStream* self, long long len);
// 来源: 类方法
MIQT_EXPORT void QDataStream_startTransaction(QDataStream* self);
// 来源: 类方法
MIQT_EXPORT bool QDataStream_commitTransaction(QDataStream* self);
// 来源: 类方法
MIQT_EXPORT void QDataStream_rollbackTransaction(QDataStream* self);
// 来源: 类方法
MIQT_EXPORT void QDataStream_abortTransaction(QDataStream* self);
// 来源: 类方法
MIQT_EXPORT bool QDataStream_isDeviceTransactionStarted(const QDataStream* self);

// 来源: 析构函数
MIQT_EXPORT void QDataStream_delete(QDataStream* self);

// 来源: 类 (QMetaType)
// 来源: 构造函数
MIQT_EXPORT QMetaType* QMetaType_new(int type);
// 来源: 构造函数
MIQT_EXPORT QMetaType* QMetaType_new2();
// 来源: 构造函数
MIQT_EXPORT QMetaType* QMetaType_new3(QMetaType* param1);
// 来源: 类方法
MIQT_EXPORT void QMetaType_registerNormalizedTypedef(struct miqt_string normalizedTypeName, QMetaType* type);
// 来源: 类方法
MIQT_EXPORT int QMetaType_type(const char* typeName);
// 来源: 类方法
MIQT_EXPORT int QMetaType_typeWithTypeName(struct miqt_string typeName);
// 来源: 类方法
MIQT_EXPORT const char* QMetaType_typeName(int type);
// 来源: 类方法
MIQT_EXPORT int QMetaType_sizeOf(int type);
// 来源: 类方法
MIQT_EXPORT int QMetaType_typeFlags(int type);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QMetaType_metaObjectForType(int type);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_isRegistered(int type);
// 来源: 类方法
MIQT_EXPORT void QMetaType_registerType(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT int QMetaType_id(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT int64_t QMetaType_sizeOf2(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT int64_t QMetaType_alignOf(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT int QMetaType_flags(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QMetaType_metaObject(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT const char* QMetaType_name(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_isDefaultConstructible(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_isCopyConstructible(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_isMoveConstructible(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_isDestructible(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_isEqualityComparable(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_isOrdered(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_hasRegisteredDataStreamOperators(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT QMetaType* QMetaType_underlyingType(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_hasRegisteredDebugStreamOperator(const QMetaType* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_hasRegisteredDebugStreamOperatorWithTypeId(int typeId);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_canConvert(QMetaType* fromType, QMetaType* toType);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_canView(QMetaType* fromType, QMetaType* toType);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_hasRegisteredConverterFunction(QMetaType* fromType, QMetaType* toType);
// 来源: 类方法
MIQT_EXPORT bool QMetaType_hasRegisteredMutableViewFunction(QMetaType* fromType, QMetaType* toType);
// 来源: 类方法
MIQT_EXPORT void QMetaType_unregisterConverterFunction(QMetaType* from, QMetaType* to);
// 来源: 类方法
MIQT_EXPORT void QMetaType_unregisterMutableViewFunction(QMetaType* from, QMetaType* to);
// 来源: 类方法
MIQT_EXPORT void QMetaType_unregisterMetaType(QMetaType* type);
// 来源: 类方法
MIQT_EXPORT int QMetaType_idWithInt(const QMetaType* self, int param1);

// 来源: 析构函数
MIQT_EXPORT void QMetaType_delete(QMetaType* self);

// 来源: 类 (QBindingStorage)
// 来源: 构造函数
MIQT_EXPORT QBindingStorage* QBindingStorage_new();
// 来源: 类方法
MIQT_EXPORT bool QBindingStorage_isEmpty(QBindingStorage* self);
// 来源: 类方法
MIQT_EXPORT bool QBindingStorage_isValid(const QBindingStorage* self);
// 来源: 类方法
MIQT_EXPORT void QBindingStorage_registerDependency(const QBindingStorage* self, QUntypedPropertyData* data);

// 来源: 析构函数
MIQT_EXPORT void QBindingStorage_delete(QBindingStorage* self);

// 来源: 类 (QObject)
// 来源: 构造函数
MIQT_EXPORT QObject* QObject_new();
// 来源: 构造函数
MIQT_EXPORT QObject* QObject_new2(QObject* parent);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QObject_metaObject(const QObject* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QObject_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT bool QObject_event(QObject* self, QEvent* event);
// 来源: 类方法
MIQT_EXPORT bool QObject_eventFilter(QObject* self, QObject* watched, QEvent* event);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QObject_objectName(const QObject* self);
// 来源: 类方法
MIQT_EXPORT bool QObject_isWidgetType(const QObject* self);
// 来源: 类方法
MIQT_EXPORT bool QObject_isWindowType(const QObject* self);
// 来源: 类方法
MIQT_EXPORT bool QObject_isQuickItemType(const QObject* self);
// 来源: 类方法
MIQT_EXPORT bool QObject_isQmlExposed(const QObject* self);
// 来源: 类方法
MIQT_EXPORT bool QObject_signalsBlocked(const QObject* self);
// 来源: 类方法
MIQT_EXPORT bool QObject_blockSignals(QObject* self, bool b);
// 来源: 类方法
MIQT_EXPORT QThread* QObject_thread(const QObject* self);
// 来源: 类方法
MIQT_EXPORT int QObject_startTimer(QObject* self, int interval);
// 来源: 类方法
MIQT_EXPORT void QObject_killTimer(QObject* self, int id);
// 来源: 类方法
MIQT_EXPORT void QObject_killTimerWithId(QObject* self, int id);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QObject* */  QObject_children(const QObject* self);
// 来源: 类方法
MIQT_EXPORT void QObject_setParent(QObject* self, QObject* parent);
// 来源: 类方法
MIQT_EXPORT void QObject_installEventFilter(QObject* self, QObject* filterObj);
// 来源: 类方法
MIQT_EXPORT void QObject_removeEventFilter(QObject* self, QObject* obj);
// 来源: 类方法
MIQT_EXPORT bool QObject_disconnect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member);
// 来源: 类方法
MIQT_EXPORT void QObject_dumpObjectTree(const QObject* self);
// 来源: 类方法
MIQT_EXPORT void QObject_dumpObjectInfo(const QObject* self);
// 来源: 类方法
MIQT_EXPORT bool QObject_setProperty(QObject* self, const char* name, QVariant* value);
// 来源: 类方法
MIQT_EXPORT QVariant* QObject_property(const QObject* self, const char* name);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QObject_dynamicPropertyNames(const QObject* self);
// 来源: 类方法
MIQT_EXPORT QBindingStorage* QObject_bindingStorage(QObject* self);
// 来源: 类方法
MIQT_EXPORT QBindingStorage* QObject_bindingStorage2(const QObject* self);
// 来源: 类方法
MIQT_EXPORT void QObject_destroyed(QObject* self);
// 来源: 信号
MIQT_EXPORT void QObject_connect_destroyed(QObject* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT QObject* QObject_parent(const QObject* self);
// 来源: 类方法
MIQT_EXPORT bool QObject_inherits(const QObject* self, const char* classname);
// 来源: 类方法
MIQT_EXPORT void QObject_deleteLater(QObject* self);
// 来源: 类方法
MIQT_EXPORT void QObject_timerEvent(QObject* self, QTimerEvent* event);
// 来源: 类方法
MIQT_EXPORT void QObject_childEvent(QObject* self, QChildEvent* event);
// 来源: 类方法
MIQT_EXPORT void QObject_customEvent(QObject* self, QEvent* event);
// 来源: 类方法
MIQT_EXPORT void QObject_connectNotify(QObject* self, QMetaMethod* signal);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QObject_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QObject_tr3(const char* s, const char* c, int n);
// 来源: 类方法
MIQT_EXPORT int QObject_startTimer2(QObject* self, int interval, int timerType);
// 来源: 类方法
MIQT_EXPORT void QObject_destroyedWithQObject(QObject* self, QObject* param1);
// 来源: 信号
MIQT_EXPORT void QObject_connect_destroyedWithQObject(QObject* self, intptr_t slot);

// 来源: 虚函数
MIQT_EXPORT bool QObject_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QObject_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QObject_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QObject_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT QObject* QObject_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QObject_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QObject_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QObject_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QObject_delete(QObject* self);

// 来源: 类 (QDeadlineTimer)
// 来源: 构造函数
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_new();
// 来源: 构造函数
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_new2(int type_);
// 来源: 构造函数
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_new3(int param1);
// 来源: 构造函数
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_new4(long long msecs);
// 来源: 构造函数
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_new5(QDeadlineTimer* param1);
// 来源: 构造函数
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_new6(int param1, int type_);
// 来源: 构造函数
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_new7(long long msecs, int type);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_swap(QDeadlineTimer* self, QDeadlineTimer* other);
// 来源: 类方法
MIQT_EXPORT bool QDeadlineTimer_isForever(const QDeadlineTimer* self);
// 来源: 类方法
MIQT_EXPORT bool QDeadlineTimer_hasExpired(const QDeadlineTimer* self);
// 来源: 类方法
MIQT_EXPORT int QDeadlineTimer_timerType(const QDeadlineTimer* self);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setTimerType(QDeadlineTimer* self, int type);
// 来源: 类方法
MIQT_EXPORT long long QDeadlineTimer_remainingTime(const QDeadlineTimer* self);
// 来源: 类方法
MIQT_EXPORT long long QDeadlineTimer_remainingTimeNSecs(const QDeadlineTimer* self);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setRemainingTime(QDeadlineTimer* self, long long msecs);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setPreciseRemainingTime(QDeadlineTimer* self, long long secs);
// 来源: 类方法
MIQT_EXPORT long long QDeadlineTimer_deadline(const QDeadlineTimer* self);
// 来源: 类方法
MIQT_EXPORT long long QDeadlineTimer_deadlineNSecs(const QDeadlineTimer* self);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setDeadline(QDeadlineTimer* self, long long msecs);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setPreciseDeadline(QDeadlineTimer* self, long long secs);
// 来源: 类方法
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_addNSecs(QDeadlineTimer* dt, long long nsecs);
// 来源: 类方法
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_current();
// 来源: 类方法
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_operatorPlusAssign(QDeadlineTimer* self, long long msecs);
// 来源: 类方法
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_operatorMinusAssign(QDeadlineTimer* self, long long msecs);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setRemainingTime2(QDeadlineTimer* self, long long msecs, int type);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setPreciseRemainingTime2(QDeadlineTimer* self, long long secs, long long nsecs);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setPreciseRemainingTime3(QDeadlineTimer* self, long long secs, long long nsecs, int type);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setDeadline2(QDeadlineTimer* self, long long msecs, int timerType);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setPreciseDeadline2(QDeadlineTimer* self, long long secs, long long nsecs);
// 来源: 类方法
MIQT_EXPORT void QDeadlineTimer_setPreciseDeadline3(QDeadlineTimer* self, long long secs, long long nsecs, int type);
// 来源: 类方法
MIQT_EXPORT QDeadlineTimer* QDeadlineTimer_currentWithTimerType(int timerType);

// 来源: 析构函数
MIQT_EXPORT void QDeadlineTimer_delete(QDeadlineTimer* self);

// 来源: 类 (QEventLoop)
// 来源: 构造函数
MIQT_EXPORT QEventLoop* QEventLoop_new();
// 来源: 构造函数
MIQT_EXPORT QEventLoop* QEventLoop_new2(QObject* parent);
MIQT_EXPORT void QEventLoop_virtbase(QEventLoop* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QEventLoop_metaObject(const QEventLoop* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QEventLoop_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT bool QEventLoop_processEvents(QEventLoop* self);
// 来源: 类方法
MIQT_EXPORT void QEventLoop_processEvents2(QEventLoop* self, int flags, int maximumTime);
// 来源: 类方法
MIQT_EXPORT void QEventLoop_processEvents3(QEventLoop* self, int flags, QDeadlineTimer* deadline);
// 来源: 类方法
MIQT_EXPORT int QEventLoop_exec(QEventLoop* self);
// 来源: 类方法
MIQT_EXPORT bool QEventLoop_isRunning(const QEventLoop* self);
// 来源: 类方法
MIQT_EXPORT void QEventLoop_wakeUp(QEventLoop* self);
// 来源: 类方法
MIQT_EXPORT bool QEventLoop_event(QEventLoop* self, QEvent* event);
// 来源: 类方法
MIQT_EXPORT void QEventLoop_exit(QEventLoop* self);
// 来源: 类方法
MIQT_EXPORT void QEventLoop_quit(QEventLoop* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QEventLoop_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QEventLoop_tr3(const char* s, const char* c, int n);
// 来源: 类方法
MIQT_EXPORT bool QEventLoop_processEventsWithFlags(QEventLoop* self, int flags);
// 来源: 类方法
MIQT_EXPORT int QEventLoop_execWithFlags(QEventLoop* self, int flags);
// 来源: 类方法
MIQT_EXPORT void QEventLoop_exitWithReturnCode(QEventLoop* self, int returnCode);

// 来源: 虚函数
MIQT_EXPORT bool QEventLoop_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QEventLoop_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QEventLoop_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QEventLoop_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT QObject* QEventLoop_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QEventLoop_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QEventLoop_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QEventLoop_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QEventLoop_delete(QEventLoop* self);

// 来源: 类 (QAbstractEventDispatcher)
MIQT_EXPORT void QAbstractEventDispatcher_virtbase(QAbstractEventDispatcher* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QAbstractEventDispatcher_metaObject(const QAbstractEventDispatcher* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QAbstractEventDispatcher_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT QAbstractEventDispatcher* QAbstractEventDispatcher_instance();
// 来源: 类方法
MIQT_EXPORT bool QAbstractEventDispatcher_processEvents(QAbstractEventDispatcher* self, int flags);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_registerSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_unregisterSocketNotifier(QAbstractEventDispatcher* self, QSocketNotifier* notifier);
// 来源: 类方法
MIQT_EXPORT int QAbstractEventDispatcher_registerTimer(QAbstractEventDispatcher* self, int interval, int timerType, QObject* object);
// 来源: 类方法
MIQT_EXPORT int QAbstractEventDispatcher_registerTimer2(QAbstractEventDispatcher* self, long long interval, int timerType, QObject* object);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_registerTimer3(QAbstractEventDispatcher* self, int timerId, long long interval, int timerType, QObject* object);
// 来源: 类方法
MIQT_EXPORT bool QAbstractEventDispatcher_unregisterTimer(QAbstractEventDispatcher* self, int timerId);
// 来源: 类方法
MIQT_EXPORT bool QAbstractEventDispatcher_unregisterTimers(QAbstractEventDispatcher* self, QObject* object);
// 来源: 类方法
MIQT_EXPORT int QAbstractEventDispatcher_remainingTime(QAbstractEventDispatcher* self, int timerId);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_registerTimer4(QAbstractEventDispatcher* self, int timerId, int interval, int timerType, QObject* object);
// 来源: 类方法
MIQT_EXPORT bool QAbstractEventDispatcher_unregisterTimerWithTimerId(QAbstractEventDispatcher* self, int timerId);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_wakeUp(QAbstractEventDispatcher* self);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_interrupt(QAbstractEventDispatcher* self);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_startingUp(QAbstractEventDispatcher* self);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_closingDown(QAbstractEventDispatcher* self);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_installNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_removeNativeEventFilter(QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_aboutToBlock(QAbstractEventDispatcher* self);
// 来源: 信号
MIQT_EXPORT void QAbstractEventDispatcher_connect_aboutToBlock(QAbstractEventDispatcher* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QAbstractEventDispatcher_awake(QAbstractEventDispatcher* self);
// 来源: 信号
MIQT_EXPORT void QAbstractEventDispatcher_connect_awake(QAbstractEventDispatcher* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QAbstractEventDispatcher_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QAbstractEventDispatcher_tr3(const char* s, const char* c, int n);
// 来源: 类方法
MIQT_EXPORT QAbstractEventDispatcher* QAbstractEventDispatcher_instanceWithThread(QThread* thread);

// 来源: 析构函数
MIQT_EXPORT void QAbstractEventDispatcher_delete(QAbstractEventDispatcher* self);

// 来源: 类 (QTextStream)
// 来源: 构造函数
MIQT_EXPORT QTextStream* QTextStream_new();
// 来源: 构造函数
MIQT_EXPORT QTextStream* QTextStream_new2(QIODevice* device);
// 来源: 构造函数
MIQT_EXPORT QTextStream* QTextStream_new3(struct miqt_string array);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setEncoding(QTextStream* self, int encoding);
// 来源: 类方法
MIQT_EXPORT int QTextStream_encoding(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setAutoDetectUnicode(QTextStream* self, bool enabled);
// 来源: 类方法
MIQT_EXPORT bool QTextStream_autoDetectUnicode(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setGenerateByteOrderMark(QTextStream* self, bool generate);
// 来源: 类方法
MIQT_EXPORT bool QTextStream_generateByteOrderMark(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setLocale(QTextStream* self, QLocale* locale);
// 来源: 类方法
MIQT_EXPORT QLocale* QTextStream_locale(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setDevice(QTextStream* self, QIODevice* device);
// 来源: 类方法
MIQT_EXPORT QIODevice* QTextStream_device(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTextStream_string(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_resetStatus(QTextStream* self);
// 来源: 类方法
MIQT_EXPORT bool QTextStream_atEnd(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_reset(QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_flush(QTextStream* self);
// 来源: 类方法
MIQT_EXPORT bool QTextStream_seek(QTextStream* self, long long pos);
// 来源: 类方法
MIQT_EXPORT long long QTextStream_pos(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_skipWhiteSpace(QTextStream* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTextStream_readLine(QTextStream* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTextStream_readAll(QTextStream* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTextStream_read(QTextStream* self, long long maxlen);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setFieldAlignment(QTextStream* self, int alignment);
// 来源: 类方法
MIQT_EXPORT int QTextStream_fieldAlignment(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setPadChar(QTextStream* self, QChar* ch);
// 来源: 类方法
MIQT_EXPORT QChar* QTextStream_padChar(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setFieldWidth(QTextStream* self, int width);
// 来源: 类方法
MIQT_EXPORT int QTextStream_fieldWidth(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setNumberFlags(QTextStream* self, int flags);
// 来源: 类方法
MIQT_EXPORT int QTextStream_numberFlags(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setIntegerBase(QTextStream* self, int base);
// 来源: 类方法
MIQT_EXPORT int QTextStream_integerBase(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setRealNumberNotation(QTextStream* self, int notation);
// 来源: 类方法
MIQT_EXPORT int QTextStream_realNumberNotation(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT void QTextStream_setRealNumberPrecision(QTextStream* self, int precision);
// 来源: 类方法
MIQT_EXPORT int QTextStream_realNumberPrecision(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRight(QTextStream* self, QChar* ch);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithCh(QTextStream* self, char* ch);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithShort(QTextStream* self, short* i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithUnsignedshort(QTextStream* self, unsigned short* i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithInt(QTextStream* self, int* i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithUnsignedint(QTextStream* self, unsigned int* i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithLong(QTextStream* self, long* i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithUnsignedlong(QTextStream* self, unsigned long* i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithQlonglong(QTextStream* self, long long* i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithQulonglong(QTextStream* self, unsigned long long* i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithFloat(QTextStream* self, float* f);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithDouble(QTextStream* self, double* f);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithQString(QTextStream* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithArray(QTextStream* self, struct miqt_string array);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftRightWithChar(QTextStream* self, char* c);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeft(QTextStream* self, QChar* ch);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithCh(QTextStream* self, char ch);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithShort(QTextStream* self, short i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithUnsignedshort(QTextStream* self, unsigned short i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithInt(QTextStream* self, int i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithUnsignedint(QTextStream* self, unsigned int i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithLong(QTextStream* self, long i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithUnsignedlong(QTextStream* self, unsigned long i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithQlonglong(QTextStream* self, long long i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithQulonglong(QTextStream* self, unsigned long long i);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithFloat(QTextStream* self, float f);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithDouble(QTextStream* self, double f);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithQString(QTextStream* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithArray(QTextStream* self, struct miqt_string array);
// 来源: 类方法
MIQT_EXPORT QTextStream* QTextStream_operatorShiftLeftWithChar(QTextStream* self, const char* c);
// 来源: 类方法
MIQT_EXPORT bool QTextStream_ToBool(const QTextStream* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTextStream_readLineWithMaxlen(QTextStream* self, long long maxlen);

// 来源: 析构函数
MIQT_EXPORT void QTextStream_delete(QTextStream* self);

// 来源: 类 (QTextStreamManipulator)
// 来源: 构造函数
MIQT_EXPORT QTextStreamManipulator* QTextStreamManipulator_new(QTextStreamManipulator* param1);
// 来源: 类方法
MIQT_EXPORT void QTextStreamManipulator_exec(QTextStreamManipulator* self, QTextStream* s);

// 来源: 析构函数
MIQT_EXPORT void QTextStreamManipulator_delete(QTextStreamManipulator* self);

// 来源: 类 (QDebug)
// 来源: 构造函数
MIQT_EXPORT QDebug* QDebug_new(QIODevice* device);
// 来源: 构造函数
MIQT_EXPORT QDebug* QDebug_new2(QDebug* o);
// 来源: 类方法
MIQT_EXPORT void QDebug_swap(QDebug* self, QDebug* other);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_resetFormat(QDebug* self);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_space(QDebug* self);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_nospace(QDebug* self);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_maybeSpace(QDebug* self);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_verbosity(QDebug* self, int verbosityLevel);
// 来源: 类方法
MIQT_EXPORT int QDebug_verbosity2(const QDebug* self);
// 来源: 类方法
MIQT_EXPORT void QDebug_setVerbosity(QDebug* self, int verbosityLevel);
// 来源: 类方法
MIQT_EXPORT bool QDebug_autoInsertSpaces(const QDebug* self);
// 来源: 类方法
MIQT_EXPORT void QDebug_setAutoInsertSpaces(QDebug* self, bool b);
// 来源: 类方法
MIQT_EXPORT bool QDebug_quoteStrings(const QDebug* self);
// 来源: 类方法
MIQT_EXPORT void QDebug_setQuoteStrings(QDebug* self, bool b);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_quote(QDebug* self);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_noquote(QDebug* self);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_maybeQuote(QDebug* self);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeft(QDebug* self, QChar* t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithBool(QDebug* self, bool t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithChar(QDebug* self, char t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithShort(QDebug* self, short t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithUnsignedshort(QDebug* self, unsigned short t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithInt(QDebug* self, int t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithUnsignedint(QDebug* self, unsigned int t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithLong(QDebug* self, long t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithUnsignedlong(QDebug* self, unsigned long t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithQint64(QDebug* self, long long t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithQuint64(QDebug* self, unsigned long long t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithFloat(QDebug* self, float t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithDouble(QDebug* self, double t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeft2(QDebug* self, const char* t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithQString(QDebug* self, struct miqt_string t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithQByteArray(QDebug* self, struct miqt_string t);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_operatorShiftLeftWithQTextStreamManipulator(QDebug* self, QTextStreamManipulator* m);
// 来源: 类方法
MIQT_EXPORT QDebug* QDebug_maybeQuoteWithChar(QDebug* self, char c);

// 来源: 析构函数
MIQT_EXPORT void QDebug_delete(QDebug* self);

// 来源: 类 (QVariant)
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new();
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new2(QMetaType* type);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new3(QVariant* other);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new4(int i);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new5(unsigned int ui);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new6(long long ll);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new7(unsigned long long ull);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new8(bool b);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new9(double d);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new10(float f);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new11(QChar* qchar);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new12(QDate* date);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new13(QTime* time);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new14(QBitArray* bitarray);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new15(struct miqt_string bytearray);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new16(QDateTime* datetime);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new17(struct miqt_map /* of struct miqt_string to QVariant* */  hash);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new18(QJsonArray* jsonArray);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new19(QJsonObject* jsonObject);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new20(QLocale* locale);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new21(struct miqt_map /* of struct miqt_string to QVariant* */  map);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new22(QRegularExpression* re);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new23(struct miqt_string string);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new24(struct miqt_array /* of struct miqt_string */  stringlist);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new25(QUrl* url);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new26(QJsonValue* jsonValue);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new27(QModelIndex* modelIndex);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new28(QUuid* uuid);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new29(QSize* size);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new30(QSizeF* size);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new31(QPoint* pt);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new32(QPointF* pt);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new33(QLine* line);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new34(QLineF* line);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new35(QRect* rect);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new36(QRectF* rect);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new37(QEasingCurve* easing);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new38(QJsonDocument* jsonDocument);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new39(QPersistentModelIndex* modelIndex);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new40(QMetaType* type, const void* copy);
// 来源: 构造函数
MIQT_EXPORT QVariant* QVariant_new41(struct miqt_array /* of QVariant* */  list);
// 来源: 类方法
MIQT_EXPORT void QVariant_swap(QVariant* self, QVariant* other);
// 来源: 类方法
MIQT_EXPORT int QVariant_userType(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT int QVariant_typeId(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT const char* QVariant_typeName(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QMetaType* QVariant_metaType(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT bool QVariant_canConvert(const QVariant* self, QMetaType* targetType);
// 来源: 类方法
MIQT_EXPORT bool QVariant_convert(QVariant* self, QMetaType* type);
// 来源: 类方法
MIQT_EXPORT bool QVariant_canView(const QVariant* self, QMetaType* targetType);
// 来源: 类方法
MIQT_EXPORT bool QVariant_canConvertWithTargetTypeId(const QVariant* self, int targetTypeId);
// 来源: 类方法
MIQT_EXPORT bool QVariant_convertWithTargetTypeId(QVariant* self, int targetTypeId);
// 来源: 类方法
MIQT_EXPORT bool QVariant_isValid(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT bool QVariant_isNull(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT void QVariant_clear(QVariant* self);
// 来源: 类方法
MIQT_EXPORT void QVariant_detach(QVariant* self);
// 来源: 类方法
MIQT_EXPORT bool QVariant_isDetached(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT int QVariant_toInt(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT unsigned int QVariant_toUInt(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT long long QVariant_toLongLong(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT unsigned long long QVariant_toULongLong(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT bool QVariant_toBool(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT double QVariant_toDouble(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT float QVariant_toFloat(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT double QVariant_toReal(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QVariant_toByteArray(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QBitArray* QVariant_toBitArray(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QVariant_toString(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QVariant_toStringList(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QChar* QVariant_toChar(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QDate* QVariant_toDate(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QTime* QVariant_toTime(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QDateTime* QVariant_toDateTime(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QVariant* */  QVariant_toList(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_toMap(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_map /* of struct miqt_string to QVariant* */  QVariant_toHash(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QPoint* QVariant_toPoint(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QPointF* QVariant_toPointF(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QRect* QVariant_toRect(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QSize* QVariant_toSize(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QSizeF* QVariant_toSizeF(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QLine* QVariant_toLine(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QLineF* QVariant_toLineF(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QRectF* QVariant_toRectF(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QLocale* QVariant_toLocale(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QRegularExpression* QVariant_toRegularExpression(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QEasingCurve* QVariant_toEasingCurve(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QUuid* QVariant_toUuid(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QUrl* QVariant_toUrl(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QVariant_toJsonValue(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QJsonObject* QVariant_toJsonObject(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QVariant_toJsonArray(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QJsonDocument* QVariant_toJsonDocument(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QVariant_toModelIndex(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT QPersistentModelIndex* QVariant_toPersistentModelIndex(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT void QVariant_load(QVariant* self, QDataStream* ds);
// 来源: 类方法
MIQT_EXPORT void QVariant_save(const QVariant* self, QDataStream* ds);
// 来源: 类方法
MIQT_EXPORT const char* QVariant_typeToName(int typeId);
// 来源: 类方法
MIQT_EXPORT void* QVariant_data(QVariant* self);
// 来源: 类方法
MIQT_EXPORT const void* QVariant_constData(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT const void* QVariant_data2(const QVariant* self);
// 来源: 类方法
MIQT_EXPORT void QVariant_setValue(QVariant* self, QVariant* avalue);
// 来源: 类方法
MIQT_EXPORT int QVariant_toIntWithOk(const QVariant* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned int QVariant_toUIntWithOk(const QVariant* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT long long QVariant_toLongLongWithOk(const QVariant* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned long long QVariant_toULongLongWithOk(const QVariant* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT double QVariant_toDoubleWithOk(const QVariant* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT float QVariant_toFloatWithOk(const QVariant* self, bool* ok);
// 来源: 类方法
MIQT_EXPORT double QVariant_toRealWithOk(const QVariant* self, bool* ok);

// 来源: 析构函数
MIQT_EXPORT void QVariant_delete(QVariant* self);

// 来源: 类 (QModelRoleData)
// 来源: 构造函数
MIQT_EXPORT QModelRoleData* QModelRoleData_new(int role);
// 来源: 构造函数
MIQT_EXPORT QModelRoleData* QModelRoleData_new2(QModelRoleData* param1);
// 来源: 类方法
MIQT_EXPORT int QModelRoleData_role(const QModelRoleData* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QModelRoleData_data(QModelRoleData* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QModelRoleData_data2(const QModelRoleData* self);
// 来源: 类方法
MIQT_EXPORT void QModelRoleData_clearData(QModelRoleData* self);

// 来源: 析构函数
MIQT_EXPORT void QModelRoleData_delete(QModelRoleData* self);

// 来源: 类 (QModelRoleDataSpan)
// 来源: 构造函数
MIQT_EXPORT QModelRoleDataSpan* QModelRoleDataSpan_new();
// 来源: 构造函数
MIQT_EXPORT QModelRoleDataSpan* QModelRoleDataSpan_new2(QModelRoleData* modelRoleData);
// 来源: 构造函数
MIQT_EXPORT QModelRoleDataSpan* QModelRoleDataSpan_new3(QModelRoleData* modelRoleData, int64_t len);
// 来源: 构造函数
MIQT_EXPORT QModelRoleDataSpan* QModelRoleDataSpan_new4(QModelRoleDataSpan* param1);
// 来源: 类方法
MIQT_EXPORT int64_t QModelRoleDataSpan_size(const QModelRoleDataSpan* self);
// 来源: 类方法
MIQT_EXPORT int64_t QModelRoleDataSpan_length(const QModelRoleDataSpan* self);
// 来源: 类方法
MIQT_EXPORT QModelRoleData* QModelRoleDataSpan_data(const QModelRoleDataSpan* self);
// 来源: 类方法
MIQT_EXPORT QModelRoleData* QModelRoleDataSpan_begin(const QModelRoleDataSpan* self);
// 来源: 类方法
MIQT_EXPORT QModelRoleData* QModelRoleDataSpan_end(const QModelRoleDataSpan* self);
// 来源: 类方法
MIQT_EXPORT QModelRoleData* QModelRoleDataSpan_operatorSubscript(const QModelRoleDataSpan* self, int64_t index);
// 来源: 类方法
MIQT_EXPORT QVariant* QModelRoleDataSpan_dataForRole(const QModelRoleDataSpan* self, int role);

// 来源: 析构函数
MIQT_EXPORT void QModelRoleDataSpan_delete(QModelRoleDataSpan* self);

// 来源: 类 (QModelIndex)
// 来源: 构造函数
MIQT_EXPORT QModelIndex* QModelIndex_new();
// 来源: 构造函数
MIQT_EXPORT QModelIndex* QModelIndex_new2(QModelIndex* param1);
// 来源: 类方法
MIQT_EXPORT int QModelIndex_row(const QModelIndex* self);
// 来源: 类方法
MIQT_EXPORT int QModelIndex_column(const QModelIndex* self);
// 来源: 类方法
MIQT_EXPORT uint64_t QModelIndex_internalId(const QModelIndex* self);
// 来源: 类方法
MIQT_EXPORT void* QModelIndex_internalPointer(const QModelIndex* self);
// 来源: 类方法
MIQT_EXPORT const void* QModelIndex_constInternalPointer(const QModelIndex* self);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QModelIndex_parent(const QModelIndex* self);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QModelIndex_sibling(const QModelIndex* self, int row, int column);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QModelIndex_siblingAtColumn(const QModelIndex* self, int column);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QModelIndex_siblingAtRow(const QModelIndex* self, int row);
// 来源: 类方法
MIQT_EXPORT QVariant* QModelIndex_data(const QModelIndex* self);
// 来源: 类方法
MIQT_EXPORT void QModelIndex_multiData(const QModelIndex* self, QModelRoleDataSpan* roleDataSpan);
// 来源: 类方法
MIQT_EXPORT int QModelIndex_flags(const QModelIndex* self);
// 来源: 类方法
MIQT_EXPORT QAbstractItemModel* QModelIndex_model(const QModelIndex* self);
// 来源: 类方法
MIQT_EXPORT bool QModelIndex_isValid(const QModelIndex* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QModelIndex_dataWithRole(const QModelIndex* self, int role);

// 来源: 析构函数
MIQT_EXPORT void QModelIndex_delete(QModelIndex* self);

// 来源: 类 (QPersistentModelIndex)
// 来源: 构造函数
MIQT_EXPORT QPersistentModelIndex* QPersistentModelIndex_new();
// 来源: 构造函数
MIQT_EXPORT QPersistentModelIndex* QPersistentModelIndex_new2(QModelIndex* index);
// 来源: 构造函数
MIQT_EXPORT QPersistentModelIndex* QPersistentModelIndex_new3(QPersistentModelIndex* other);
// 来源: 类方法
MIQT_EXPORT void QPersistentModelIndex_swap(QPersistentModelIndex* self, QPersistentModelIndex* other);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QPersistentModelIndex_ToQModelIndex(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT int QPersistentModelIndex_row(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT int QPersistentModelIndex_column(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT void* QPersistentModelIndex_internalPointer(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT const void* QPersistentModelIndex_constInternalPointer(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT uint64_t QPersistentModelIndex_internalId(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QPersistentModelIndex_parent(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QPersistentModelIndex_sibling(const QPersistentModelIndex* self, int row, int column);
// 来源: 类方法
MIQT_EXPORT QVariant* QPersistentModelIndex_data(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT void QPersistentModelIndex_multiData(const QPersistentModelIndex* self, QModelRoleDataSpan* roleDataSpan);
// 来源: 类方法
MIQT_EXPORT int QPersistentModelIndex_flags(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT QAbstractItemModel* QPersistentModelIndex_model(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT bool QPersistentModelIndex_isValid(const QPersistentModelIndex* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QPersistentModelIndex_dataWithRole(const QPersistentModelIndex* self, int role);

// 来源: 析构函数
MIQT_EXPORT void QPersistentModelIndex_delete(QPersistentModelIndex* self);

// 来源: 类 (QAbstractItemModel)
// 来源: 构造函数
MIQT_EXPORT QAbstractItemModel* QAbstractItemModel_new();
// 来源: 构造函数
MIQT_EXPORT QAbstractItemModel* QAbstractItemModel_new2(QObject* parent);
MIQT_EXPORT void QAbstractItemModel_virtbase(QAbstractItemModel* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QAbstractItemModel_metaObject(const QAbstractItemModel* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QAbstractItemModel_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_hasIndex(const QAbstractItemModel* self, int row, int column);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QAbstractItemModel_index(const QAbstractItemModel* self, int row, int column, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QAbstractItemModel_parent(const QAbstractItemModel* self, QModelIndex* child);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QAbstractItemModel_sibling(const QAbstractItemModel* self, int row, int column, QModelIndex* idx);
// 来源: 类方法
MIQT_EXPORT int QAbstractItemModel_rowCount(const QAbstractItemModel* self, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT int QAbstractItemModel_columnCount(const QAbstractItemModel* self, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_hasChildren(const QAbstractItemModel* self, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT QVariant* QAbstractItemModel_data(const QAbstractItemModel* self, QModelIndex* index, int role);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_setData(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role);
// 来源: 类方法
MIQT_EXPORT QVariant* QAbstractItemModel_headerData(const QAbstractItemModel* self, int section, int orientation, int role);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_setHeaderData(QAbstractItemModel* self, int section, int orientation, QVariant* value, int role);
// 来源: 类方法
MIQT_EXPORT struct miqt_map /* of int to QVariant* */  QAbstractItemModel_itemData(const QAbstractItemModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_setItemData(QAbstractItemModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_clearItemData(QAbstractItemModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QAbstractItemModel_mimeTypes(const QAbstractItemModel* self);
// 来源: 类方法
MIQT_EXPORT QMimeData* QAbstractItemModel_mimeData(const QAbstractItemModel* self, struct miqt_array /* of QModelIndex* */  indexes);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_canDropMimeData(const QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_dropMimeData(QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT int QAbstractItemModel_supportedDropActions(const QAbstractItemModel* self);
// 来源: 类方法
MIQT_EXPORT int QAbstractItemModel_supportedDragActions(const QAbstractItemModel* self);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_insertRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_insertColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_removeRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_removeColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_moveRows(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_moveColumns(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_insertRow(QAbstractItemModel* self, int row);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_insertColumn(QAbstractItemModel* self, int column);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_removeRow(QAbstractItemModel* self, int row);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_removeColumn(QAbstractItemModel* self, int column);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_moveRow(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_moveColumn(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_fetchMore(QAbstractItemModel* self, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_canFetchMore(const QAbstractItemModel* self, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT int QAbstractItemModel_flags(const QAbstractItemModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_sort(QAbstractItemModel* self, int column, int order);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QAbstractItemModel_buddy(const QAbstractItemModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QAbstractItemModel_match(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
// 来源: 类方法
MIQT_EXPORT QSize* QAbstractItemModel_span(const QAbstractItemModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_roleNames(const QAbstractItemModel* self);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_checkIndex(const QAbstractItemModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_multiData(const QAbstractItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_dataChanged(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight);
// 来源: 信号
MIQT_EXPORT void QAbstractItemModel_connect_dataChanged(QAbstractItemModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_headerDataChanged(QAbstractItemModel* self, int orientation, int first, int last);
// 来源: 信号
MIQT_EXPORT void QAbstractItemModel_connect_headerDataChanged(QAbstractItemModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_layoutChanged(QAbstractItemModel* self);
// 来源: 信号
MIQT_EXPORT void QAbstractItemModel_connect_layoutChanged(QAbstractItemModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_layoutAboutToBeChanged(QAbstractItemModel* self);
// 来源: 信号
MIQT_EXPORT void QAbstractItemModel_connect_layoutAboutToBeChanged(QAbstractItemModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_submit(QAbstractItemModel* self);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_revert(QAbstractItemModel* self);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_resetInternalData(QAbstractItemModel* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QAbstractItemModel_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QAbstractItemModel_tr3(const char* s, const char* c, int n);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_hasIndex2(const QAbstractItemModel* self, int row, int column, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_insertRow2(QAbstractItemModel* self, int row, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_insertColumn2(QAbstractItemModel* self, int column, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_removeRow2(QAbstractItemModel* self, int row, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractItemModel_removeColumn2(QAbstractItemModel* self, int column, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_dataChanged2(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
// 来源: 信号
MIQT_EXPORT void QAbstractItemModel_connect_dataChanged2(QAbstractItemModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_layoutChangedWithParents(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents);
// 来源: 信号
MIQT_EXPORT void QAbstractItemModel_connect_layoutChangedWithParents(QAbstractItemModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_layoutChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint);
// 来源: 信号
MIQT_EXPORT void QAbstractItemModel_connect_layoutChanged2(QAbstractItemModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_layoutAboutToBeChangedWithParents(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents);
// 来源: 信号
MIQT_EXPORT void QAbstractItemModel_connect_layoutAboutToBeChangedWithParents(QAbstractItemModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QAbstractItemModel_layoutAboutToBeChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint);
// 来源: 信号
MIQT_EXPORT void QAbstractItemModel_connect_layoutAboutToBeChanged2(QAbstractItemModel* self, intptr_t slot);

// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_index(void* self, intptr_t slot);
MIQT_EXPORT QModelIndex* QAbstractItemModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_parent(void* self, intptr_t slot);
MIQT_EXPORT QModelIndex* QAbstractItemModel_virtualbase_parent(const void* self, QModelIndex* child);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_sibling(void* self, intptr_t slot);
MIQT_EXPORT QModelIndex* QAbstractItemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_rowCount(void* self, intptr_t slot);
MIQT_EXPORT int QAbstractItemModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_columnCount(void* self, intptr_t slot);
MIQT_EXPORT int QAbstractItemModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_hasChildren(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_data(void* self, intptr_t slot);
MIQT_EXPORT QVariant* QAbstractItemModel_virtualbase_data(const void* self, QModelIndex* index, int role);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_setData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_headerData(void* self, intptr_t slot);
MIQT_EXPORT QVariant* QAbstractItemModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_setHeaderData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_itemData(void* self, intptr_t slot);
MIQT_EXPORT struct miqt_map /* of int to QVariant* */  QAbstractItemModel_virtualbase_itemData(const void* self, QModelIndex* index);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_setItemData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_clearItemData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_clearItemData(void* self, QModelIndex* index);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_mimeTypes(void* self, intptr_t slot);
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QAbstractItemModel_virtualbase_mimeTypes(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_mimeData(void* self, intptr_t slot);
MIQT_EXPORT QMimeData* QAbstractItemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_dropMimeData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
MIQT_EXPORT int QAbstractItemModel_virtualbase_supportedDropActions(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
MIQT_EXPORT int QAbstractItemModel_virtualbase_supportedDragActions(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_insertRows(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_insertColumns(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_removeRows(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_removeColumns(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_moveRows(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_moveColumns(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_fetchMore(void* self, intptr_t slot);
MIQT_EXPORT void QAbstractItemModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_canFetchMore(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_flags(void* self, intptr_t slot);
MIQT_EXPORT int QAbstractItemModel_virtualbase_flags(const void* self, QModelIndex* index);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_sort(void* self, intptr_t slot);
MIQT_EXPORT void QAbstractItemModel_virtualbase_sort(void* self, int column, int order);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_buddy(void* self, intptr_t slot);
MIQT_EXPORT QModelIndex* QAbstractItemModel_virtualbase_buddy(const void* self, QModelIndex* index);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_match(void* self, intptr_t slot);
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QAbstractItemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_span(void* self, intptr_t slot);
MIQT_EXPORT QSize* QAbstractItemModel_virtualbase_span(const void* self, QModelIndex* index);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_roleNames(void* self, intptr_t slot);
MIQT_EXPORT struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_virtualbase_roleNames(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_multiData(void* self, intptr_t slot);
MIQT_EXPORT void QAbstractItemModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_submit(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_submit(void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_revert(void* self, intptr_t slot);
MIQT_EXPORT void QAbstractItemModel_virtualbase_revert(void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractItemModel_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractItemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT QModelIndex* QAbstractItemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column, uint64_t id);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
// 来源: 受保护方法
MIQT_EXPORT bool QAbstractItemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT bool QAbstractItemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT bool QAbstractItemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractItemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
// 来源: 受保护方法
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QAbstractItemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT QObject* QAbstractItemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QAbstractItemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QAbstractItemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QAbstractItemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QAbstractItemModel_delete(QAbstractItemModel* self);

// 来源: 类 (QAbstractNativeEventFilter)
// 来源: 析构函数
MIQT_EXPORT void QAbstractNativeEventFilter_delete(QAbstractNativeEventFilter* self);

// 来源: 类 (QAbstractProxyModel)
// 来源: 构造函数
MIQT_EXPORT QAbstractProxyModel* QAbstractProxyModel_new();
// 来源: 构造函数
MIQT_EXPORT QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent);
MIQT_EXPORT void QAbstractProxyModel_virtbase(QAbstractProxyModel* src, QAbstractItemModel** outptr_QAbstractItemModel);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QAbstractProxyModel_metaObject(const QAbstractProxyModel* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QAbstractProxyModel_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT void QAbstractProxyModel_setSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel);
// 来源: 类方法
MIQT_EXPORT QAbstractItemModel* QAbstractProxyModel_sourceModel(const QAbstractProxyModel* self);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QAbstractProxyModel_mapToSource(const QAbstractProxyModel* self, QModelIndex* proxyIndex);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QAbstractProxyModel_mapFromSource(const QAbstractProxyModel* self, QModelIndex* sourceIndex);
// 来源: 类方法
MIQT_EXPORT QItemSelection* QAbstractProxyModel_mapSelectionToSource(const QAbstractProxyModel* self, QItemSelection* selection);
// 来源: 类方法
MIQT_EXPORT QItemSelection* QAbstractProxyModel_mapSelectionFromSource(const QAbstractProxyModel* self, QItemSelection* selection);
// 来源: 类方法
MIQT_EXPORT bool QAbstractProxyModel_submit(QAbstractProxyModel* self);
// 来源: 类方法
MIQT_EXPORT void QAbstractProxyModel_revert(QAbstractProxyModel* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QAbstractProxyModel_data(const QAbstractProxyModel* self, QModelIndex* proxyIndex, int role);
// 来源: 类方法
MIQT_EXPORT QVariant* QAbstractProxyModel_headerData(const QAbstractProxyModel* self, int section, int orientation, int role);
// 来源: 类方法
MIQT_EXPORT struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_itemData(const QAbstractProxyModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT int QAbstractProxyModel_flags(const QAbstractProxyModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT bool QAbstractProxyModel_setData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role);
// 来源: 类方法
MIQT_EXPORT bool QAbstractProxyModel_setItemData(QAbstractProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
// 来源: 类方法
MIQT_EXPORT bool QAbstractProxyModel_setHeaderData(QAbstractProxyModel* self, int section, int orientation, QVariant* value, int role);
// 来源: 类方法
MIQT_EXPORT bool QAbstractProxyModel_clearItemData(QAbstractProxyModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QAbstractProxyModel_buddy(const QAbstractProxyModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT bool QAbstractProxyModel_canFetchMore(const QAbstractProxyModel* self, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT void QAbstractProxyModel_fetchMore(QAbstractProxyModel* self, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT void QAbstractProxyModel_sort(QAbstractProxyModel* self, int column, int order);
// 来源: 类方法
MIQT_EXPORT QSize* QAbstractProxyModel_span(const QAbstractProxyModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT bool QAbstractProxyModel_hasChildren(const QAbstractProxyModel* self, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QAbstractProxyModel_sibling(const QAbstractProxyModel* self, int row, int column, QModelIndex* idx);
// 来源: 类方法
MIQT_EXPORT QMimeData* QAbstractProxyModel_mimeData(const QAbstractProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes);
// 来源: 类方法
MIQT_EXPORT bool QAbstractProxyModel_canDropMimeData(const QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QAbstractProxyModel_dropMimeData(QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_mimeTypes(const QAbstractProxyModel* self);
// 来源: 类方法
MIQT_EXPORT int QAbstractProxyModel_supportedDragActions(const QAbstractProxyModel* self);
// 来源: 类方法
MIQT_EXPORT int QAbstractProxyModel_supportedDropActions(const QAbstractProxyModel* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_roleNames(const QAbstractProxyModel* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QAbstractProxyModel_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QAbstractProxyModel_tr3(const char* s, const char* c, int n);

// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot);
MIQT_EXPORT void QAbstractProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* sourceModel);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_mapToSource(void* self, intptr_t slot);
MIQT_EXPORT QModelIndex* QAbstractProxyModel_virtualbase_mapToSource(const void* self, QModelIndex* proxyIndex);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot);
MIQT_EXPORT QModelIndex* QAbstractProxyModel_virtualbase_mapFromSource(const void* self, QModelIndex* sourceIndex);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_mapSelectionToSource(void* self, intptr_t slot);
MIQT_EXPORT QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_mapSelectionFromSource(void* self, intptr_t slot);
MIQT_EXPORT QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_submit(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_submit(void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_revert(void* self, intptr_t slot);
MIQT_EXPORT void QAbstractProxyModel_virtualbase_revert(void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_data(void* self, intptr_t slot);
MIQT_EXPORT QVariant* QAbstractProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_headerData(void* self, intptr_t slot);
MIQT_EXPORT QVariant* QAbstractProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_itemData(void* self, intptr_t slot);
MIQT_EXPORT struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_virtualbase_itemData(const void* self, QModelIndex* index);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_flags(void* self, intptr_t slot);
MIQT_EXPORT int QAbstractProxyModel_virtualbase_flags(const void* self, QModelIndex* index);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_setData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_setItemData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_clearItemData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_clearItemData(void* self, QModelIndex* index);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_buddy(void* self, intptr_t slot);
MIQT_EXPORT QModelIndex* QAbstractProxyModel_virtualbase_buddy(const void* self, QModelIndex* index);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_fetchMore(void* self, intptr_t slot);
MIQT_EXPORT void QAbstractProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_sort(void* self, intptr_t slot);
MIQT_EXPORT void QAbstractProxyModel_virtualbase_sort(void* self, int column, int order);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_span(void* self, intptr_t slot);
MIQT_EXPORT QSize* QAbstractProxyModel_virtualbase_span(const void* self, QModelIndex* index);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_hasChildren(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_sibling(void* self, intptr_t slot);
MIQT_EXPORT QModelIndex* QAbstractProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_mimeData(void* self, intptr_t slot);
MIQT_EXPORT QMimeData* QAbstractProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot);
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_virtualbase_mimeTypes(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
MIQT_EXPORT int QAbstractProxyModel_virtualbase_supportedDragActions(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
MIQT_EXPORT int QAbstractProxyModel_virtualbase_supportedDropActions(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_roleNames(void* self, intptr_t slot);
MIQT_EXPORT struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_virtualbase_roleNames(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_index(void* self, intptr_t slot);
MIQT_EXPORT QModelIndex* QAbstractProxyModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_parent(void* self, intptr_t slot);
MIQT_EXPORT QModelIndex* QAbstractProxyModel_virtualbase_parent(const void* self, QModelIndex* child);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_rowCount(void* self, intptr_t slot);
MIQT_EXPORT int QAbstractProxyModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_columnCount(void* self, intptr_t slot);
MIQT_EXPORT int QAbstractProxyModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_insertRows(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_insertColumns(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_removeRows(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_removeColumns(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_moveRows(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_moveColumns(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_match(void* self, intptr_t slot);
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_multiData(void* self, intptr_t slot);
MIQT_EXPORT void QAbstractProxyModel_virtualbase_multiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QAbstractProxyModel_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QAbstractProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT QModelIndex* QAbstractProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column, uint64_t id);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
// 来源: 受保护方法
MIQT_EXPORT bool QAbstractProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT bool QAbstractProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT bool QAbstractProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
// 来源: 受保护方法
MIQT_EXPORT void QAbstractProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
// 来源: 受保护方法
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT QObject* QAbstractProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QAbstractProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QAbstractProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QAbstractProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QAbstractProxyModel_delete(QAbstractProxyModel* self);

// 来源: 类 (QBasicTimer)
// 来源: 构造函数
MIQT_EXPORT QBasicTimer* QBasicTimer_new();
// 来源: 类方法
MIQT_EXPORT void QBasicTimer_swap(QBasicTimer* self, QBasicTimer* other);
// 来源: 类方法
MIQT_EXPORT bool QBasicTimer_isActive(const QBasicTimer* self);
// 来源: 类方法
MIQT_EXPORT int QBasicTimer_timerId(const QBasicTimer* self);
// 来源: 类方法
MIQT_EXPORT int QBasicTimer_id(const QBasicTimer* self);
// 来源: 类方法
MIQT_EXPORT void QBasicTimer_start(QBasicTimer* self, int msec, QObject* obj);
// 来源: 类方法
MIQT_EXPORT void QBasicTimer_start2(QBasicTimer* self, int msec, int timerType, QObject* obj);
// 来源: 类方法
MIQT_EXPORT void QBasicTimer_start3(QBasicTimer* self, int duration, QObject* obj);
// 来源: 类方法
MIQT_EXPORT void QBasicTimer_start4(QBasicTimer* self, int duration, int timerType, QObject* obj);
// 来源: 类方法
MIQT_EXPORT void QBasicTimer_stop(QBasicTimer* self);

// 来源: 析构函数
MIQT_EXPORT void QBasicTimer_delete(QBasicTimer* self);

// 来源: 类 (QEvent)
// 来源: 类方法
MIQT_EXPORT bool QEvent_spontaneous(const QEvent* self);
// 来源: 类方法
MIQT_EXPORT void QEvent_setAccepted(QEvent* self, bool accepted);
// 来源: 类方法
MIQT_EXPORT bool QEvent_isAccepted(const QEvent* self);
// 来源: 类方法
MIQT_EXPORT void QEvent_accept(QEvent* self);
// 来源: 类方法
MIQT_EXPORT void QEvent_ignore(QEvent* self);
// 来源: 类方法
MIQT_EXPORT bool QEvent_isInputEvent(const QEvent* self);
// 来源: 类方法
MIQT_EXPORT bool QEvent_isPointerEvent(const QEvent* self);
// 来源: 类方法
MIQT_EXPORT bool QEvent_isSinglePointEvent(const QEvent* self);
// 来源: 类方法
MIQT_EXPORT int QEvent_registerEventType();
// 来源: 类方法
MIQT_EXPORT QEvent* QEvent_clone(const QEvent* self);
// 来源: 类方法
MIQT_EXPORT int QEvent_registerEventTypeWithHint(int hint);

// 来源: 析构函数
MIQT_EXPORT void QEvent_delete(QEvent* self);

// 来源: 类 (QTimerEvent)
// 来源: 构造函数
MIQT_EXPORT QTimerEvent* QTimerEvent_new(int timerId);
// 来源: 构造函数
MIQT_EXPORT QTimerEvent* QTimerEvent_new2(int timerId);
MIQT_EXPORT void QTimerEvent_virtbase(QTimerEvent* src, QEvent** outptr_QEvent);
// 来源: 类方法
MIQT_EXPORT QTimerEvent* QTimerEvent_clone(const QTimerEvent* self);
// 来源: 类方法
MIQT_EXPORT int QTimerEvent_timerId(const QTimerEvent* self);
// 来源: 类方法
MIQT_EXPORT int QTimerEvent_id(const QTimerEvent* self);
// 来源: 类方法
MIQT_EXPORT bool QTimerEvent_matches(const QTimerEvent* self, QBasicTimer* timer);

// 来源: 虚函数
MIQT_EXPORT bool QTimerEvent_override_virtual_clone(void* self, intptr_t slot);
MIQT_EXPORT QTimerEvent* QTimerEvent_virtualbase_clone(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QTimerEvent_override_virtual_setAccepted(void* self, intptr_t slot);
MIQT_EXPORT void QTimerEvent_virtualbase_setAccepted(void* self, bool accepted);

// 来源: 析构函数
MIQT_EXPORT void QTimerEvent_delete(QTimerEvent* self);

// 来源: 类 (QChildEvent)
MIQT_EXPORT void QChildEvent_virtbase(QChildEvent* src, QEvent** outptr_QEvent);
// 来源: 类方法
MIQT_EXPORT QChildEvent* QChildEvent_clone(const QChildEvent* self);
// 来源: 类方法
MIQT_EXPORT QObject* QChildEvent_child(const QChildEvent* self);
// 来源: 类方法
MIQT_EXPORT bool QChildEvent_added(const QChildEvent* self);
// 来源: 类方法
MIQT_EXPORT bool QChildEvent_polished(const QChildEvent* self);
// 来源: 类方法
MIQT_EXPORT bool QChildEvent_removed(const QChildEvent* self);

// 来源: 析构函数
MIQT_EXPORT void QChildEvent_delete(QChildEvent* self);

// 来源: 类 (QCoreApplication)
// 来源: 构造函数
MIQT_EXPORT QCoreApplication* QCoreApplication_new(int* argc, char** argv);
// 来源: 构造函数
MIQT_EXPORT QCoreApplication* QCoreApplication_new2(int* argc, char** argv, int param3);
MIQT_EXPORT void QCoreApplication_virtbase(QCoreApplication* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QCoreApplication_metaObject(const QCoreApplication* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QCoreApplication_arguments();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_setAttribute(int attribute);
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_testAttribute(int attribute);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_setOrganizationDomain(struct miqt_string orgDomain);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_organizationDomain();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_setOrganizationName(struct miqt_string orgName);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_organizationName();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_setApplicationName(struct miqt_string application);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_applicationName();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_setApplicationVersion(struct miqt_string version);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_applicationVersion();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_setSetuidAllowed(bool allow);
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_isSetuidAllowed();
// 来源: 类方法
MIQT_EXPORT QCoreApplication* QCoreApplication_instance();
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_instanceExists();
// 来源: 类方法
MIQT_EXPORT int QCoreApplication_exec();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_processEvents();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_processEvents2(int flags, int maxtime);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_processEvents3(int flags, QDeadlineTimer* deadline);
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_sendEvent(QObject* receiver, QEvent* event);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_postEvent(QObject* receiver, QEvent* event);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_sendPostedEvents();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_removePostedEvents(QObject* receiver);
// 来源: 类方法
MIQT_EXPORT QAbstractEventDispatcher* QCoreApplication_eventDispatcher();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_setEventDispatcher(QAbstractEventDispatcher* eventDispatcher);
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_notify(QCoreApplication* self, QObject* param1, QEvent* param2);
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_startingUp();
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_closingDown();
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_applicationDirPath();
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_applicationFilePath();
// 来源: 类方法
MIQT_EXPORT long long QCoreApplication_applicationPid();
// 来源: 类方法
MIQT_EXPORT int QCoreApplication_checkPermission(QCoreApplication* self, QPermission* permission);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_setLibraryPaths(struct miqt_array /* of struct miqt_string */  libraryPaths);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QCoreApplication_libraryPaths();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_addLibraryPath(struct miqt_string param1);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_removeLibraryPath(struct miqt_string param1);
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_installTranslator(QTranslator* messageFile);
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_removeTranslator(QTranslator* messageFile);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_translate(const char* context, const char* key);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_installNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_removeNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj);
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_isQuitLockEnabled();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_setQuitLockEnabled(bool enabled);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_quit();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_exit();
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_organizationNameChanged(QCoreApplication* self);
// 来源: 信号
MIQT_EXPORT void QCoreApplication_connect_organizationNameChanged(QCoreApplication* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_organizationDomainChanged(QCoreApplication* self);
// 来源: 信号
MIQT_EXPORT void QCoreApplication_connect_organizationDomainChanged(QCoreApplication* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_applicationNameChanged(QCoreApplication* self);
// 来源: 信号
MIQT_EXPORT void QCoreApplication_connect_applicationNameChanged(QCoreApplication* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_applicationVersionChanged(QCoreApplication* self);
// 来源: 信号
MIQT_EXPORT void QCoreApplication_connect_applicationVersionChanged(QCoreApplication* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT bool QCoreApplication_event(QCoreApplication* self, QEvent* param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_tr3(const char* s, const char* c, int n);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_setAttribute2(int attribute, bool on);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_processEventsWithFlags(int flags);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_postEvent2(QObject* receiver, QEvent* event, int priority);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_sendPostedEventsWithReceiver(QObject* receiver);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_sendPostedEvents2(QObject* receiver, int event_type);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_removePostedEvents2(QObject* receiver, int eventType);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_translate2(const char* context, const char* key, const char* disambiguation);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCoreApplication_translate3(const char* context, const char* key, const char* disambiguation, int n);
// 来源: 类方法
MIQT_EXPORT void QCoreApplication_exitWithRetcode(int retcode);

// 来源: 虚函数
MIQT_EXPORT bool QCoreApplication_override_virtual_notify(void* self, intptr_t slot);
MIQT_EXPORT bool QCoreApplication_virtualbase_notify(void* self, QObject* param1, QEvent* param2);
// 来源: 虚函数
MIQT_EXPORT bool QCoreApplication_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QCoreApplication_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QCoreApplication_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QCoreApplication_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT void* QCoreApplication_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision);
// 来源: 受保护方法
MIQT_EXPORT QObject* QCoreApplication_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QCoreApplication_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QCoreApplication_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QCoreApplication_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QCoreApplication_delete(QCoreApplication* self);

// 来源: 类 (QBitArray)
// 来源: 构造函数
MIQT_EXPORT QBitArray* QBitArray_new();
// 来源: 构造函数
MIQT_EXPORT QBitArray* QBitArray_new2(int64_t size);
// 来源: 构造函数
MIQT_EXPORT QBitArray* QBitArray_new3(QBitArray* other);
// 来源: 构造函数
MIQT_EXPORT QBitArray* QBitArray_new4(int64_t size, bool val);
// 来源: 类方法
MIQT_EXPORT void QBitArray_swap(QBitArray* self, QBitArray* other);
// 来源: 类方法
MIQT_EXPORT int64_t QBitArray_size(const QBitArray* self);
// 来源: 类方法
MIQT_EXPORT int64_t QBitArray_count(const QBitArray* self);
// 来源: 类方法
MIQT_EXPORT int64_t QBitArray_countWithOn(const QBitArray* self, bool on);
// 来源: 类方法
MIQT_EXPORT bool QBitArray_isEmpty(const QBitArray* self);
// 来源: 类方法
MIQT_EXPORT bool QBitArray_isNull(const QBitArray* self);
// 来源: 类方法
MIQT_EXPORT void QBitArray_resize(QBitArray* self, int64_t size);
// 来源: 类方法
MIQT_EXPORT void QBitArray_detach(QBitArray* self);
// 来源: 类方法
MIQT_EXPORT bool QBitArray_isDetached(const QBitArray* self);
// 来源: 类方法
MIQT_EXPORT void QBitArray_clear(QBitArray* self);
// 来源: 类方法
MIQT_EXPORT bool QBitArray_testBit(const QBitArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT void QBitArray_setBit(QBitArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT void QBitArray_setBit2(QBitArray* self, int64_t i, bool val);
// 来源: 类方法
MIQT_EXPORT void QBitArray_clearBit(QBitArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT bool QBitArray_toggleBit(QBitArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT bool QBitArray_at(const QBitArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT QBitRef* QBitArray_operatorSubscript(QBitArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT bool QBitArray_operatorSubscriptWithQsizetype(const QBitArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT void QBitArray_operatorBitwiseAndAssign(QBitArray* self, QBitArray* param1);
// 来源: 类方法
MIQT_EXPORT void QBitArray_operatorBitwiseOrAssign(QBitArray* self, QBitArray* param1);
// 来源: 类方法
MIQT_EXPORT void QBitArray_operatorBitwiseNotAssign(QBitArray* self, QBitArray* param1);
// 来源: 类方法
MIQT_EXPORT bool QBitArray_fill(QBitArray* self, bool aval);
// 来源: 类方法
MIQT_EXPORT void QBitArray_fill2(QBitArray* self, bool val, int64_t first, int64_t last);
// 来源: 类方法
MIQT_EXPORT void QBitArray_truncate(QBitArray* self, int64_t pos);
// 来源: 类方法
MIQT_EXPORT const char* QBitArray_bits(const QBitArray* self);
// 来源: 类方法
MIQT_EXPORT QBitArray* QBitArray_fromBits(const char* data, int64_t len);
// 来源: 类方法
MIQT_EXPORT unsigned int QBitArray_toUInt32(const QBitArray* self, int endianness);
// 来源: 类方法
MIQT_EXPORT bool QBitArray_fill3(QBitArray* self, bool aval, int64_t asize);
// 来源: 类方法
MIQT_EXPORT unsigned int QBitArray_toUInt322(const QBitArray* self, int endianness, bool* ok);

// 来源: 析构函数
MIQT_EXPORT void QBitArray_delete(QBitArray* self);

// 来源: 类 (QBitRef)
// 来源: 构造函数
MIQT_EXPORT QBitRef* QBitRef_new(QBitRef* param1);
// 来源: 类方法
MIQT_EXPORT bool QBitRef_ToBool(const QBitRef* self);
// 来源: 类方法
MIQT_EXPORT bool QBitRef_operatorNot(const QBitRef* self);

// 来源: 析构函数
MIQT_EXPORT void QBitRef_delete(QBitRef* self);

// 来源: 类 (QIODevice)
MIQT_EXPORT void QIODevice_virtbase(QIODevice* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QIODevice_metaObject(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QIODevice_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT int QIODevice_openMode(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT void QIODevice_setTextModeEnabled(QIODevice* self, bool enabled);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_isTextModeEnabled(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_isOpen(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_isReadable(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_isWritable(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_isSequential(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT int QIODevice_readChannelCount(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT int QIODevice_writeChannelCount(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT int QIODevice_currentReadChannel(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT void QIODevice_setCurrentReadChannel(QIODevice* self, int channel);
// 来源: 类方法
MIQT_EXPORT int QIODevice_currentWriteChannel(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT void QIODevice_setCurrentWriteChannel(QIODevice* self, int channel);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_open(QIODevice* self, int mode);
// 来源: 类方法
MIQT_EXPORT void QIODevice_close(QIODevice* self);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_pos(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_size(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_seek(QIODevice* self, long long pos);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_atEnd(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_reset(QIODevice* self);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_bytesAvailable(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_bytesToWrite(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_read(QIODevice* self, char* data, long long maxlen);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QIODevice_readWithMaxlen(QIODevice* self, long long maxlen);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QIODevice_readAll(QIODevice* self);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_readLine(QIODevice* self, char* data, long long maxlen);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QIODevice_readLine2(QIODevice* self);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_canReadLine(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT void QIODevice_startTransaction(QIODevice* self);
// 来源: 类方法
MIQT_EXPORT void QIODevice_commitTransaction(QIODevice* self);
// 来源: 类方法
MIQT_EXPORT void QIODevice_rollbackTransaction(QIODevice* self);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_isTransactionStarted(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_write(QIODevice* self, const char* data, long long len);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_writeWithData(QIODevice* self, const char* data);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_write2(QIODevice* self, struct miqt_string data);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_peek(QIODevice* self, char* data, long long maxlen);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QIODevice_peekWithMaxlen(QIODevice* self, long long maxlen);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_skip(QIODevice* self, long long maxSize);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_waitForReadyRead(QIODevice* self, int msecs);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_waitForBytesWritten(QIODevice* self, int msecs);
// 来源: 类方法
MIQT_EXPORT void QIODevice_ungetChar(QIODevice* self, char c);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_putChar(QIODevice* self, char c);
// 来源: 类方法
MIQT_EXPORT bool QIODevice_getChar(QIODevice* self, char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QIODevice_errorString(const QIODevice* self);
// 来源: 类方法
MIQT_EXPORT void QIODevice_readyRead(QIODevice* self);
// 来源: 信号
MIQT_EXPORT void QIODevice_connect_readyRead(QIODevice* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QIODevice_channelReadyRead(QIODevice* self, int channel);
// 来源: 信号
MIQT_EXPORT void QIODevice_connect_channelReadyRead(QIODevice* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QIODevice_bytesWritten(QIODevice* self, long long bytes);
// 来源: 信号
MIQT_EXPORT void QIODevice_connect_bytesWritten(QIODevice* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QIODevice_channelBytesWritten(QIODevice* self, int channel, long long bytes);
// 来源: 信号
MIQT_EXPORT void QIODevice_connect_channelBytesWritten(QIODevice* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QIODevice_aboutToClose(QIODevice* self);
// 来源: 信号
MIQT_EXPORT void QIODevice_connect_aboutToClose(QIODevice* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QIODevice_readChannelFinished(QIODevice* self);
// 来源: 信号
MIQT_EXPORT void QIODevice_connect_readChannelFinished(QIODevice* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_readData(QIODevice* self, char* data, long long maxlen);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_readLineData(QIODevice* self, char* data, long long maxlen);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_skipData(QIODevice* self, long long maxSize);
// 来源: 类方法
MIQT_EXPORT long long QIODevice_writeData(QIODevice* self, const char* data, long long len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QIODevice_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QIODevice_tr3(const char* s, const char* c, int n);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QIODevice_readLineWithMaxlen(QIODevice* self, long long maxlen);

// 来源: 析构函数
MIQT_EXPORT void QIODevice_delete(QIODevice* self);

// 来源: 类 (QLocale)
// 来源: 构造函数
MIQT_EXPORT QLocale* QLocale_new();
// 来源: 构造函数
MIQT_EXPORT QLocale* QLocale_new2(struct miqt_string name);
// 来源: 构造函数
MIQT_EXPORT QLocale* QLocale_new3(QLocale* other);
// 来源: 类方法
MIQT_EXPORT void QLocale_swap(QLocale* self, QLocale* other);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_name(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_bcp47Name(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_nativeLanguageName(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_nativeTerritoryName(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_nativeCountryName(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT short QLocale_toShort(const QLocale* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT unsigned short QLocale_toUShort(const QLocale* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT int QLocale_toInt(const QLocale* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT unsigned int QLocale_toUInt(const QLocale* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT long QLocale_toLong(const QLocale* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT unsigned long QLocale_toULong(const QLocale* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT long long QLocale_toLongLong(const QLocale* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT unsigned long long QLocale_toULongLong(const QLocale* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT float QLocale_toFloat(const QLocale* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT double QLocale_toDouble(const QLocale* self, struct miqt_string s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toString(const QLocale* self, long long i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithQulonglong(const QLocale* self, unsigned long long i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithLong(const QLocale* self, long i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithUlong(const QLocale* self, unsigned long i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithShort(const QLocale* self, short i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithUshort(const QLocale* self, unsigned short i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithInt(const QLocale* self, int i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithUint(const QLocale* self, unsigned int i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithDouble(const QLocale* self, double f);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithFloat(const QLocale* self, float f);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toString10(const QLocale* self, QDate* date, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toString11(const QLocale* self, QTime* time, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toString12(const QLocale* self, QDateTime* dateTime, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithDate(const QLocale* self, QDate* date);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithTime(const QLocale* self, QTime* time);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toStringWithDateTime(const QLocale* self, QDateTime* dateTime);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_dateFormat(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_timeFormat(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_dateTimeFormat(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT QTime* QLocale_toTime(const QLocale* self, struct miqt_string string);
// 来源: 类方法
MIQT_EXPORT QTime* QLocale_toTime2(const QLocale* self, struct miqt_string string, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT QDate* QLocale_toDate(const QLocale* self, struct miqt_string string);
// 来源: 类方法
MIQT_EXPORT QDate* QLocale_toDate2(const QLocale* self, struct miqt_string string, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT QDateTime* QLocale_toDateTime(const QLocale* self, struct miqt_string string);
// 来源: 类方法
MIQT_EXPORT QDateTime* QLocale_toDateTime2(const QLocale* self, struct miqt_string string, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT QDate* QLocale_toDate4(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT QDateTime* QLocale_toDateTime4(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_decimalPoint(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_groupSeparator(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_percent(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_zeroDigit(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_negativeSign(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_positiveSign(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_exponential(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_monthName(const QLocale* self, int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_standaloneMonthName(const QLocale* self, int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_dayName(const QLocale* self, int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_standaloneDayName(const QLocale* self, int param1);
// 来源: 类方法
MIQT_EXPORT int QLocale_firstDayOfWeek(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of int */  QLocale_weekdays(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_amText(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_pmText(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT int QLocale_measurementSystem(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT QLocale* QLocale_collation(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT int QLocale_textDirection(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toUpper(const QLocale* self, struct miqt_string str);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toLower(const QLocale* self, struct miqt_string str);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_currencySymbol(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString(const QLocale* self, long long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyStringWithQulonglong(const QLocale* self, unsigned long long param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyStringWithShort(const QLocale* self, short i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyStringWithUshort(const QLocale* self, unsigned short i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyStringWithInt(const QLocale* self, int i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyStringWithUint(const QLocale* self, unsigned int i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyStringWithDouble(const QLocale* self, double param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyStringWithFloat(const QLocale* self, float i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_formattedDataSize(const QLocale* self, long long bytes);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QLocale_uiLanguages(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT void QLocale_setDefault(QLocale* locale);
// 来源: 类方法
MIQT_EXPORT QLocale* QLocale_c();
// 来源: 类方法
MIQT_EXPORT QLocale* QLocale_system();
// 来源: 类方法
MIQT_EXPORT void QLocale_setNumberOptions(QLocale* self, int options);
// 来源: 类方法
MIQT_EXPORT int QLocale_numberOptions(const QLocale* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_quoteString(const QLocale* self, struct miqt_string str);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_createSeparatedList(const QLocale* self, struct miqt_array /* of struct miqt_string */  strl);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_nameWithSeparator(const QLocale* self, int separator);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_bcp47NameWithSeparator(const QLocale* self, int separator);
// 来源: 类方法
MIQT_EXPORT short QLocale_toShort2(const QLocale* self, struct miqt_string s, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned short QLocale_toUShort2(const QLocale* self, struct miqt_string s, bool* ok);
// 来源: 类方法
MIQT_EXPORT int QLocale_toInt2(const QLocale* self, struct miqt_string s, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned int QLocale_toUInt2(const QLocale* self, struct miqt_string s, bool* ok);
// 来源: 类方法
MIQT_EXPORT long QLocale_toLong2(const QLocale* self, struct miqt_string s, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned long QLocale_toULong2(const QLocale* self, struct miqt_string s, bool* ok);
// 来源: 类方法
MIQT_EXPORT long long QLocale_toLongLong2(const QLocale* self, struct miqt_string s, bool* ok);
// 来源: 类方法
MIQT_EXPORT unsigned long long QLocale_toULongLong2(const QLocale* self, struct miqt_string s, bool* ok);
// 来源: 类方法
MIQT_EXPORT float QLocale_toFloat2(const QLocale* self, struct miqt_string s, bool* ok);
// 来源: 类方法
MIQT_EXPORT double QLocale_toDouble2(const QLocale* self, struct miqt_string s, bool* ok);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toString15(const QLocale* self, double f, char format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toString16(const QLocale* self, double f, char format, int precision);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toString17(const QLocale* self, float f, char format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toString18(const QLocale* self, float f, char format, int precision);
// 来源: 类方法
MIQT_EXPORT QDate* QLocale_toDate7(const QLocale* self, struct miqt_string string, struct miqt_string format, int baseYear);
// 来源: 类方法
MIQT_EXPORT QDateTime* QLocale_toDateTime7(const QLocale* self, struct miqt_string string, struct miqt_string format, int baseYear);
// 来源: 类方法
MIQT_EXPORT QDate* QLocale_toDate9(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal, int baseYear);
// 来源: 类方法
MIQT_EXPORT QDateTime* QLocale_toDateTime9(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal, int baseYear);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_currencySymbolWithCurrencySymbolFormat(const QLocale* self, int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString2(const QLocale* self, long long param1, struct miqt_string symbol);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString3(const QLocale* self, unsigned long long param1, struct miqt_string symbol);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString4(const QLocale* self, short i, struct miqt_string symbol);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString5(const QLocale* self, unsigned short i, struct miqt_string symbol);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString6(const QLocale* self, int i, struct miqt_string symbol);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString7(const QLocale* self, unsigned int i, struct miqt_string symbol);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString8(const QLocale* self, double param1, struct miqt_string symbol);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString9(const QLocale* self, double param1, struct miqt_string symbol, int precision);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString10(const QLocale* self, float i, struct miqt_string symbol);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_toCurrencyString11(const QLocale* self, float i, struct miqt_string symbol, int precision);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_formattedDataSize2(const QLocale* self, long long bytes, int precision);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_formattedDataSize3(const QLocale* self, long long bytes, int precision, int format);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QLocale_uiLanguagesWithSeparator(const QLocale* self, int separator);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QLocale_quoteString2(const QLocale* self, struct miqt_string str, int style);

// 来源: 析构函数
MIQT_EXPORT void QLocale_delete(QLocale* self);

// 来源: 类 (QCalendar)
// 来源: 构造函数
MIQT_EXPORT QCalendar* QCalendar_new();
// 来源: 构造函数
MIQT_EXPORT QCalendar* QCalendar_new2(int system);
// 来源: 构造函数
MIQT_EXPORT QCalendar* QCalendar_new3(QCalendar* param1);
// 来源: 类方法
MIQT_EXPORT bool QCalendar_isValid(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT int QCalendar_daysInMonth(const QCalendar* self, int month);
// 来源: 类方法
MIQT_EXPORT int QCalendar_daysInYear(const QCalendar* self, int year);
// 来源: 类方法
MIQT_EXPORT int QCalendar_monthsInYear(const QCalendar* self, int year);
// 来源: 类方法
MIQT_EXPORT bool QCalendar_isDateValid(const QCalendar* self, int year, int month, int day);
// 来源: 类方法
MIQT_EXPORT bool QCalendar_isLeapYear(const QCalendar* self, int year);
// 来源: 类方法
MIQT_EXPORT bool QCalendar_isGregorian(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT bool QCalendar_isLunar(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT bool QCalendar_isLuniSolar(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT bool QCalendar_isSolar(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT bool QCalendar_isProleptic(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT bool QCalendar_hasYearZero(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT int QCalendar_maximumDaysInMonth(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT int QCalendar_minimumDaysInMonth(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT int QCalendar_maximumMonthsInYear(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_name(const QCalendar* self);
// 来源: 类方法
MIQT_EXPORT QDate* QCalendar_dateFromParts(const QCalendar* self, int year, int month, int day);
// 来源: 类方法
MIQT_EXPORT int QCalendar_dayOfWeek(const QCalendar* self, QDate* date);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_monthName(const QCalendar* self, QLocale* locale, int month);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_standaloneMonthName(const QCalendar* self, QLocale* locale, int month);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_weekDayName(const QCalendar* self, QLocale* locale, int day);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_standaloneWeekDayName(const QCalendar* self, QLocale* locale, int day);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QCalendar_availableCalendars();
// 来源: 类方法
MIQT_EXPORT int QCalendar_daysInMonth2(const QCalendar* self, int month, int year);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_monthName2(const QCalendar* self, QLocale* locale, int month, int year);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_monthName3(const QCalendar* self, QLocale* locale, int month, int year, int format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_standaloneMonthName2(const QCalendar* self, QLocale* locale, int month, int year);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_standaloneMonthName3(const QCalendar* self, QLocale* locale, int month, int year, int format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_weekDayName2(const QCalendar* self, QLocale* locale, int day, int format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QCalendar_standaloneWeekDayName2(const QCalendar* self, QLocale* locale, int day, int format);

// 来源: 析构函数
MIQT_EXPORT void QCalendar_delete(QCalendar* self);

// 来源: 类 (QDate)
// 来源: 构造函数
MIQT_EXPORT QDate* QDate_new();
// 来源: 构造函数
MIQT_EXPORT QDate* QDate_new2(int y, int m, int d);
// 来源: 构造函数
MIQT_EXPORT QDate* QDate_new3(int y, int m, int d, QCalendar* cal);
// 来源: 构造函数
MIQT_EXPORT QDate* QDate_new4(QDate* param1);
// 来源: 类方法
MIQT_EXPORT bool QDate_isNull(const QDate* self);
// 来源: 类方法
MIQT_EXPORT bool QDate_isValid(const QDate* self);
// 来源: 类方法
MIQT_EXPORT int QDate_year(const QDate* self);
// 来源: 类方法
MIQT_EXPORT int QDate_month(const QDate* self);
// 来源: 类方法
MIQT_EXPORT int QDate_day(const QDate* self);
// 来源: 类方法
MIQT_EXPORT int QDate_dayOfWeek(const QDate* self);
// 来源: 类方法
MIQT_EXPORT int QDate_dayOfYear(const QDate* self);
// 来源: 类方法
MIQT_EXPORT int QDate_daysInMonth(const QDate* self);
// 来源: 类方法
MIQT_EXPORT int QDate_daysInYear(const QDate* self);
// 来源: 类方法
MIQT_EXPORT int QDate_weekNumber(const QDate* self);
// 来源: 类方法
MIQT_EXPORT int QDate_yearWithCal(const QDate* self, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT int QDate_monthWithCal(const QDate* self, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT int QDate_dayWithCal(const QDate* self, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT int QDate_dayOfWeekWithCal(const QDate* self, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT int QDate_dayOfYearWithCal(const QDate* self, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT int QDate_daysInMonthWithCal(const QDate* self, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT int QDate_daysInYearWithCal(const QDate* self, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDate_startOfDay(const QDate* self, int spec);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDate_endOfDay(const QDate* self, int spec);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDate_startOfDayWithZone(const QDate* self, QTimeZone* zone);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDate_endOfDayWithZone(const QDate* self, QTimeZone* zone);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDate_startOfDay2(const QDate* self);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDate_endOfDay2(const QDate* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDate_toString(const QDate* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDate_toStringWithFormat(const QDate* self, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDate_toString2(const QDate* self, struct miqt_string format, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT bool QDate_setDate(QDate* self, int year, int month, int day);
// 来源: 类方法
MIQT_EXPORT bool QDate_setDate2(QDate* self, int year, int month, int day, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_addDays(const QDate* self, long long days);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_addMonths(const QDate* self, int months);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_addYears(const QDate* self, int years);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_addMonths2(const QDate* self, int months, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_addYears2(const QDate* self, int years, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT long long QDate_daysTo(const QDate* self, QDate* d);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_currentDate();
// 来源: 类方法
MIQT_EXPORT QDate* QDate_fromString(struct miqt_string string);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_fromString2(struct miqt_string string, struct miqt_string format, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_fromString3(struct miqt_string string, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_fromString4(struct miqt_string string, struct miqt_string format, int baseYear, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT bool QDate_isValid2(int y, int m, int d);
// 来源: 类方法
MIQT_EXPORT bool QDate_isLeapYear(int year);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_fromJulianDay(long long jd_);
// 来源: 类方法
MIQT_EXPORT long long QDate_toJulianDay(const QDate* self);
// 来源: 类方法
MIQT_EXPORT int QDate_weekNumberWithYearNum(const QDate* self, int* yearNum);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDate_startOfDay3(const QDate* self, int spec, int offsetSeconds);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDate_endOfDay3(const QDate* self, int spec, int offsetSeconds);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDate_toString3(const QDate* self, int format);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_fromString5(struct miqt_string string, int format);
// 来源: 类方法
MIQT_EXPORT QDate* QDate_fromString6(struct miqt_string string, struct miqt_string format, int baseYear);

// 来源: 析构函数
MIQT_EXPORT void QDate_delete(QDate* self);

// 来源: 类 (QTime)
// 来源: 构造函数
MIQT_EXPORT QTime* QTime_new();
// 来源: 构造函数
MIQT_EXPORT QTime* QTime_new2(int h, int m);
// 来源: 构造函数
MIQT_EXPORT QTime* QTime_new3(QTime* param1);
// 来源: 构造函数
MIQT_EXPORT QTime* QTime_new4(int h, int m, int s);
// 来源: 构造函数
MIQT_EXPORT QTime* QTime_new5(int h, int m, int s, int ms);
// 来源: 类方法
MIQT_EXPORT bool QTime_isNull(const QTime* self);
// 来源: 类方法
MIQT_EXPORT bool QTime_isValid(const QTime* self);
// 来源: 类方法
MIQT_EXPORT int QTime_hour(const QTime* self);
// 来源: 类方法
MIQT_EXPORT int QTime_minute(const QTime* self);
// 来源: 类方法
MIQT_EXPORT int QTime_second(const QTime* self);
// 来源: 类方法
MIQT_EXPORT int QTime_msec(const QTime* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTime_toString(const QTime* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTime_toStringWithFormat(const QTime* self, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT bool QTime_setHMS(QTime* self, int h, int m, int s);
// 来源: 类方法
MIQT_EXPORT QTime* QTime_addSecs(const QTime* self, int secs);
// 来源: 类方法
MIQT_EXPORT int QTime_secsTo(const QTime* self, QTime* t);
// 来源: 类方法
MIQT_EXPORT QTime* QTime_addMSecs(const QTime* self, int ms);
// 来源: 类方法
MIQT_EXPORT int QTime_msecsTo(const QTime* self, QTime* t);
// 来源: 类方法
MIQT_EXPORT QTime* QTime_fromMSecsSinceStartOfDay(int msecs);
// 来源: 类方法
MIQT_EXPORT int QTime_msecsSinceStartOfDay(const QTime* self);
// 来源: 类方法
MIQT_EXPORT QTime* QTime_currentTime();
// 来源: 类方法
MIQT_EXPORT QTime* QTime_fromString(struct miqt_string string);
// 来源: 类方法
MIQT_EXPORT QTime* QTime_fromString2(struct miqt_string string, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT bool QTime_isValid2(int h, int m, int s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTime_toStringWithQtDateFormat(const QTime* self, int f);
// 来源: 类方法
MIQT_EXPORT bool QTime_setHMS2(QTime* self, int h, int m, int s, int ms);
// 来源: 类方法
MIQT_EXPORT QTime* QTime_fromString3(struct miqt_string string, int format);
// 来源: 类方法
MIQT_EXPORT bool QTime_isValid3(int h, int m, int s, int ms);

// 来源: 析构函数
MIQT_EXPORT void QTime_delete(QTime* self);

// 来源: 类 (QDateTime)
// 来源: 构造函数
MIQT_EXPORT QDateTime* QDateTime_new();
// 来源: 构造函数
MIQT_EXPORT QDateTime* QDateTime_new2(QDate* date, QTime* time, int spec);
// 来源: 构造函数
MIQT_EXPORT QDateTime* QDateTime_new3(QDate* date, QTime* time, QTimeZone* timeZone);
// 来源: 构造函数
MIQT_EXPORT QDateTime* QDateTime_new4(QDate* date, QTime* time);
// 来源: 构造函数
MIQT_EXPORT QDateTime* QDateTime_new5(QDateTime* other);
// 来源: 构造函数
MIQT_EXPORT QDateTime* QDateTime_new6(QDate* date, QTime* time, int spec, int offsetSeconds);
// 来源: 构造函数
MIQT_EXPORT QDateTime* QDateTime_new7(QDate* date, QTime* time, QTimeZone* timeZone, int resolve);
// 来源: 构造函数
MIQT_EXPORT QDateTime* QDateTime_new8(QDate* date, QTime* time, int resolve);
// 来源: 类方法
MIQT_EXPORT void QDateTime_swap(QDateTime* self, QDateTime* other);
// 来源: 类方法
MIQT_EXPORT bool QDateTime_isNull(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT bool QDateTime_isValid(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT QDate* QDateTime_date(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT QTime* QDateTime_time(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT int QDateTime_timeSpec(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT int QDateTime_offsetFromUtc(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT QTimeZone* QDateTime_timeRepresentation(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT QTimeZone* QDateTime_timeZone(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDateTime_timeZoneAbbreviation(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT bool QDateTime_isDaylightTime(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT long long QDateTime_toMSecsSinceEpoch(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT long long QDateTime_toSecsSinceEpoch(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT void QDateTime_setDate(QDateTime* self, QDate* date);
// 来源: 类方法
MIQT_EXPORT void QDateTime_setTime(QDateTime* self, QTime* time);
// 来源: 类方法
MIQT_EXPORT void QDateTime_setTimeSpec(QDateTime* self, int spec);
// 来源: 类方法
MIQT_EXPORT void QDateTime_setOffsetFromUtc(QDateTime* self, int offsetSeconds);
// 来源: 类方法
MIQT_EXPORT void QDateTime_setTimeZone(QDateTime* self, QTimeZone* toZone);
// 来源: 类方法
MIQT_EXPORT void QDateTime_setMSecsSinceEpoch(QDateTime* self, long long msecs);
// 来源: 类方法
MIQT_EXPORT void QDateTime_setSecsSinceEpoch(QDateTime* self, long long secs);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDateTime_toString(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDateTime_toStringWithFormat(const QDateTime* self, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDateTime_toString2(const QDateTime* self, struct miqt_string format, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_addDays(const QDateTime* self, long long days);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_addMonths(const QDateTime* self, int months);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_addYears(const QDateTime* self, int years);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_addSecs(const QDateTime* self, long long secs);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_addMSecs(const QDateTime* self, long long msecs);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_toTimeSpec(const QDateTime* self, int spec);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_toLocalTime(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_toUTC(const QDateTime* self);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_toOffsetFromUtc(const QDateTime* self, int offsetSeconds);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_toTimeZone(const QDateTime* self, QTimeZone* toZone);
// 来源: 类方法
MIQT_EXPORT long long QDateTime_daysTo(const QDateTime* self, QDateTime* param1);
// 来源: 类方法
MIQT_EXPORT long long QDateTime_secsTo(const QDateTime* self, QDateTime* param1);
// 来源: 类方法
MIQT_EXPORT long long QDateTime_msecsTo(const QDateTime* self, QDateTime* param1);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_currentDateTime(QTimeZone* zone);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_currentDateTime2();
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_currentDateTimeUtc();
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromString(struct miqt_string string);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromString2(struct miqt_string string, struct miqt_string format, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromString3(struct miqt_string string, struct miqt_string format);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromString4(struct miqt_string string, struct miqt_string format, int baseYear, QCalendar* cal);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromMSecsSinceEpoch(long long msecs, int spec);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromSecsSinceEpoch(long long secs, int spec);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromMSecsSinceEpoch2(long long msecs, QTimeZone* timeZone);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromSecsSinceEpoch2(long long secs, QTimeZone* timeZone);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromMSecsSinceEpochWithMsecs(long long msecs);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromSecsSinceEpochWithSecs(long long secs);
// 来源: 类方法
MIQT_EXPORT long long QDateTime_currentMSecsSinceEpoch();
// 来源: 类方法
MIQT_EXPORT long long QDateTime_currentSecsSinceEpoch();
// 来源: 类方法
MIQT_EXPORT void QDateTime_setDate2(QDateTime* self, QDate* date, int resolve);
// 来源: 类方法
MIQT_EXPORT void QDateTime_setTime2(QDateTime* self, QTime* time, int resolve);
// 来源: 类方法
MIQT_EXPORT void QDateTime_setTimeZone2(QDateTime* self, QTimeZone* toZone, int resolve);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDateTime_toString3(const QDateTime* self, int format);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromString5(struct miqt_string string, int format);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromString6(struct miqt_string string, struct miqt_string format, int baseYear);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromMSecsSinceEpoch3(long long msecs, int spec, int offsetFromUtc);
// 来源: 类方法
MIQT_EXPORT QDateTime* QDateTime_fromSecsSinceEpoch3(long long secs, int spec, int offsetFromUtc);

// 来源: 析构函数
MIQT_EXPORT void QDateTime_delete(QDateTime* self);

// 来源: 类 (QRegularExpression)
// 来源: 构造函数
MIQT_EXPORT QRegularExpression* QRegularExpression_new();
// 来源: 构造函数
MIQT_EXPORT QRegularExpression* QRegularExpression_new2(struct miqt_string pattern);
// 来源: 构造函数
MIQT_EXPORT QRegularExpression* QRegularExpression_new3(QRegularExpression* re);
// 来源: 构造函数
MIQT_EXPORT QRegularExpression* QRegularExpression_new4(struct miqt_string pattern, int options);
// 来源: 类方法
MIQT_EXPORT int QRegularExpression_patternOptions(const QRegularExpression* self);
// 来源: 类方法
MIQT_EXPORT void QRegularExpression_setPatternOptions(QRegularExpression* self, int options);
// 来源: 类方法
MIQT_EXPORT void QRegularExpression_swap(QRegularExpression* self, QRegularExpression* other);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QRegularExpression_pattern(const QRegularExpression* self);
// 来源: 类方法
MIQT_EXPORT void QRegularExpression_setPattern(QRegularExpression* self, struct miqt_string pattern);
// 来源: 类方法
MIQT_EXPORT bool QRegularExpression_isValid(const QRegularExpression* self);
// 来源: 类方法
MIQT_EXPORT int64_t QRegularExpression_patternErrorOffset(const QRegularExpression* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QRegularExpression_errorString(const QRegularExpression* self);
// 来源: 类方法
MIQT_EXPORT int QRegularExpression_captureCount(const QRegularExpression* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QRegularExpression_namedCaptureGroups(const QRegularExpression* self);
// 来源: 类方法
MIQT_EXPORT QRegularExpressionMatch* QRegularExpression_match(const QRegularExpression* self, struct miqt_string subject);
// 来源: 类方法
MIQT_EXPORT QRegularExpressionMatchIterator* QRegularExpression_globalMatch(const QRegularExpression* self, struct miqt_string subject);
// 来源: 类方法
MIQT_EXPORT void QRegularExpression_optimize(const QRegularExpression* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QRegularExpression_escape(struct miqt_string str);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QRegularExpression_wildcardToRegularExpression(struct miqt_string str);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QRegularExpression_anchoredPattern(struct miqt_string expression);
// 来源: 类方法
MIQT_EXPORT QRegularExpressionMatch* QRegularExpression_match2(const QRegularExpression* self, struct miqt_string subject, int64_t offset);
// 来源: 类方法
MIQT_EXPORT QRegularExpressionMatch* QRegularExpression_match3(const QRegularExpression* self, struct miqt_string subject, int64_t offset, int matchType);
// 来源: 类方法
MIQT_EXPORT QRegularExpressionMatch* QRegularExpression_match4(const QRegularExpression* self, struct miqt_string subject, int64_t offset, int matchType, int matchOptions);
// 来源: 类方法
MIQT_EXPORT QRegularExpressionMatchIterator* QRegularExpression_globalMatch2(const QRegularExpression* self, struct miqt_string subject, int64_t offset);
// 来源: 类方法
MIQT_EXPORT QRegularExpressionMatchIterator* QRegularExpression_globalMatch3(const QRegularExpression* self, struct miqt_string subject, int64_t offset, int matchType);
// 来源: 类方法
MIQT_EXPORT QRegularExpressionMatchIterator* QRegularExpression_globalMatch4(const QRegularExpression* self, struct miqt_string subject, int64_t offset, int matchType, int matchOptions);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QRegularExpression_wildcardToRegularExpression2(struct miqt_string str, int options);

// 来源: 析构函数
MIQT_EXPORT void QRegularExpression_delete(QRegularExpression* self);

// 来源: 类 (QRegularExpressionMatch)
// 来源: 构造函数
MIQT_EXPORT QRegularExpressionMatch* QRegularExpressionMatch_new();
// 来源: 构造函数
MIQT_EXPORT QRegularExpressionMatch* QRegularExpressionMatch_new2(QRegularExpressionMatch* match);
// 来源: 类方法
MIQT_EXPORT void QRegularExpressionMatch_swap(QRegularExpressionMatch* self, QRegularExpressionMatch* other);
// 来源: 类方法
MIQT_EXPORT QRegularExpression* QRegularExpressionMatch_regularExpression(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT int QRegularExpressionMatch_matchType(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT int QRegularExpressionMatch_matchOptions(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT bool QRegularExpressionMatch_hasMatch(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT bool QRegularExpressionMatch_hasPartialMatch(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT bool QRegularExpressionMatch_isValid(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT int QRegularExpressionMatch_lastCapturedIndex(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT bool QRegularExpressionMatch_hasCaptured(const QRegularExpressionMatch* self, int nth);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QRegularExpressionMatch_captured(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QRegularExpressionMatch_capturedTexts(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT int64_t QRegularExpressionMatch_capturedStart(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT int64_t QRegularExpressionMatch_capturedLength(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT int64_t QRegularExpressionMatch_capturedEnd(const QRegularExpressionMatch* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QRegularExpressionMatch_capturedWithNth(const QRegularExpressionMatch* self, int nth);
// 来源: 类方法
MIQT_EXPORT int64_t QRegularExpressionMatch_capturedStartWithNth(const QRegularExpressionMatch* self, int nth);
// 来源: 类方法
MIQT_EXPORT int64_t QRegularExpressionMatch_capturedLengthWithNth(const QRegularExpressionMatch* self, int nth);
// 来源: 类方法
MIQT_EXPORT int64_t QRegularExpressionMatch_capturedEndWithNth(const QRegularExpressionMatch* self, int nth);

// 来源: 析构函数
MIQT_EXPORT void QRegularExpressionMatch_delete(QRegularExpressionMatch* self);

// 来源: 类 (QRegularExpressionMatchIterator)
// 来源: 构造函数
MIQT_EXPORT QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new();
// 来源: 构造函数
MIQT_EXPORT QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new2(QRegularExpressionMatchIterator* iterator);
// 来源: 类方法
MIQT_EXPORT void QRegularExpressionMatchIterator_swap(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* other);
// 来源: 类方法
MIQT_EXPORT bool QRegularExpressionMatchIterator_isValid(const QRegularExpressionMatchIterator* self);
// 来源: 类方法
MIQT_EXPORT bool QRegularExpressionMatchIterator_hasNext(const QRegularExpressionMatchIterator* self);
// 来源: 类方法
MIQT_EXPORT QRegularExpressionMatch* QRegularExpressionMatchIterator_next(QRegularExpressionMatchIterator* self);
// 来源: 类方法
MIQT_EXPORT QRegularExpressionMatch* QRegularExpressionMatchIterator_peekNext(const QRegularExpressionMatchIterator* self);
// 来源: 类方法
MIQT_EXPORT QRegularExpression* QRegularExpressionMatchIterator_regularExpression(const QRegularExpressionMatchIterator* self);
// 来源: 类方法
MIQT_EXPORT int QRegularExpressionMatchIterator_matchType(const QRegularExpressionMatchIterator* self);
// 来源: 类方法
MIQT_EXPORT int QRegularExpressionMatchIterator_matchOptions(const QRegularExpressionMatchIterator* self);

// 来源: 析构函数
MIQT_EXPORT void QRegularExpressionMatchIterator_delete(QRegularExpressionMatchIterator* self);

// 来源: 类 (QUrl)
// 来源: 构造函数
MIQT_EXPORT QUrl* QUrl_new();
// 来源: 构造函数
MIQT_EXPORT QUrl* QUrl_new2(QUrl* copy);
// 来源: 构造函数
MIQT_EXPORT QUrl* QUrl_new3(struct miqt_string url);
// 来源: 构造函数
MIQT_EXPORT QUrl* QUrl_new4(struct miqt_string url, int mode);
// 来源: 类方法
MIQT_EXPORT void QUrl_swap(QUrl* self, QUrl* other);
// 来源: 类方法
MIQT_EXPORT void QUrl_setUrl(QUrl* self, struct miqt_string url);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_url(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toString(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toDisplayString(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT QUrl* QUrl_adjusted(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toEncoded(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT QUrl* QUrl_fromUserInput(struct miqt_string userInput);
// 来源: 类方法
MIQT_EXPORT bool QUrl_isValid(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_errorString(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT bool QUrl_isEmpty(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_clear(QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_setScheme(QUrl* self, struct miqt_string scheme);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_scheme(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_setAuthority(QUrl* self, struct miqt_string authority);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_authority(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_setUserInfo(QUrl* self, struct miqt_string userInfo);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_userInfo(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_setUserName(QUrl* self, struct miqt_string userName);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_userName(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_setPassword(QUrl* self, struct miqt_string password);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_password(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_setHost(QUrl* self, struct miqt_string host);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_host(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_setPort(QUrl* self, int port);
// 来源: 类方法
MIQT_EXPORT int QUrl_port(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_setPath(QUrl* self, struct miqt_string path);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_path(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_fileName(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT bool QUrl_hasQuery(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_setQuery(QUrl* self, struct miqt_string query);
// 来源: 类方法
MIQT_EXPORT void QUrl_setQueryWithQuery(QUrl* self, QUrlQuery* query);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_query(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT bool QUrl_hasFragment(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_fragment(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_setFragment(QUrl* self, struct miqt_string fragment);
// 来源: 类方法
MIQT_EXPORT QUrl* QUrl_resolved(const QUrl* self, QUrl* relative);
// 来源: 类方法
MIQT_EXPORT bool QUrl_isRelative(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT bool QUrl_isParentOf(const QUrl* self, QUrl* url);
// 来源: 类方法
MIQT_EXPORT bool QUrl_isLocalFile(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT QUrl* QUrl_fromLocalFile(struct miqt_string localfile);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toLocalFile(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT void QUrl_detach(QUrl* self);
// 来源: 类方法
MIQT_EXPORT bool QUrl_isDetached(const QUrl* self);
// 来源: 类方法
MIQT_EXPORT bool QUrl_matches(const QUrl* self, QUrl* url, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_fromPercentEncoding(struct miqt_string param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toPercentEncoding(struct miqt_string param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_fromAce(struct miqt_string domain);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toAce(struct miqt_string domain);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QUrl_idnWhitelist();
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QUrl_toStringList(struct miqt_array /* of QUrl* */  uris);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QUrl* */  QUrl_fromStringList(struct miqt_array /* of struct miqt_string */  uris);
// 来源: 类方法
MIQT_EXPORT void QUrl_setIdnWhitelist(struct miqt_array /* of struct miqt_string */  idnWhitelist);
// 来源: 类方法
MIQT_EXPORT void QUrl_setUrl2(QUrl* self, struct miqt_string url, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_urlWithOptions(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toStringWithOptions(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toDisplayStringWithOptions(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toEncodedWithOptions(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT QUrl* QUrl_fromUserInput2(struct miqt_string userInput, struct miqt_string workingDirectory);
// 来源: 类方法
MIQT_EXPORT QUrl* QUrl_fromUserInput3(struct miqt_string userInput, struct miqt_string workingDirectory, int options);
// 来源: 类方法
MIQT_EXPORT void QUrl_setAuthority2(QUrl* self, struct miqt_string authority, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_authorityWithOptions(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT void QUrl_setUserInfo2(QUrl* self, struct miqt_string userInfo, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_userInfoWithOptions(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT void QUrl_setUserName2(QUrl* self, struct miqt_string userName, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_userNameWithOptions(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT void QUrl_setPassword2(QUrl* self, struct miqt_string password, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_passwordWithComponentFormattingOptions(const QUrl* self, int param1);
// 来源: 类方法
MIQT_EXPORT void QUrl_setHost2(QUrl* self, struct miqt_string host, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_hostWithComponentFormattingOptions(const QUrl* self, int param1);
// 来源: 类方法
MIQT_EXPORT int QUrl_portWithDefaultPort(const QUrl* self, int defaultPort);
// 来源: 类方法
MIQT_EXPORT void QUrl_setPath2(QUrl* self, struct miqt_string path, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_pathWithOptions(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_fileNameWithOptions(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT void QUrl_setQuery2(QUrl* self, struct miqt_string query, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_queryWithComponentFormattingOptions(const QUrl* self, int param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_fragmentWithOptions(const QUrl* self, int options);
// 来源: 类方法
MIQT_EXPORT void QUrl_setFragment2(QUrl* self, struct miqt_string fragment, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toPercentEncoding2(struct miqt_string param1, struct miqt_string exclude);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toPercentEncoding3(struct miqt_string param1, struct miqt_string exclude, struct miqt_string include);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_fromAce2(struct miqt_string domain, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrl_toAce2(struct miqt_string domain, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QUrl_toStringList2(struct miqt_array /* of QUrl* */  uris, int options);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QUrl* */  QUrl_fromStringList2(struct miqt_array /* of struct miqt_string */  uris, int mode);

// 来源: 析构函数
MIQT_EXPORT void QUrl_delete(QUrl* self);

// 来源: 类 (QUuid)
// 来源: 构造函数
MIQT_EXPORT QUuid* QUuid_new();
// 来源: 构造函数
MIQT_EXPORT QUuid* QUuid_new2(unsigned int l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8);
// 来源: 构造函数
MIQT_EXPORT QUuid* QUuid_new3(QUuid* param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUuid_toString(const QUuid* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUuid_toByteArray(const QUuid* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUuid_toRfc4122(const QUuid* self);
// 来源: 类方法
MIQT_EXPORT QUuid* QUuid_createUuid();
// 来源: 类方法
MIQT_EXPORT QUuid* QUuid_createUuidV7();
// 来源: 类方法
MIQT_EXPORT unsigned int QUuid_data1(const QUuid* self);
// 来源: 类方法
MIQT_EXPORT void QUuid_setData1(QUuid* self, unsigned int data1);
// 来源: 类方法
MIQT_EXPORT unsigned short QUuid_data2(const QUuid* self);
// 来源: 类方法
MIQT_EXPORT void QUuid_setData2(QUuid* self, unsigned short data2);
// 来源: 类方法
MIQT_EXPORT unsigned short QUuid_data3(const QUuid* self);
// 来源: 类方法
MIQT_EXPORT void QUuid_setData3(QUuid* self, unsigned short data3);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUuid_toStringWithMode(const QUuid* self, int mode);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUuid_toByteArrayWithMode(const QUuid* self, int mode);

// 来源: 析构函数
MIQT_EXPORT void QUuid_delete(QUuid* self);

// 来源: 类 (QPropertyBindingSourceLocation)
// 来源: 类方法
MIQT_EXPORT const char* QPropertyBindingSourceLocation_fileName(const QPropertyBindingSourceLocation* self);
// 来源: 类方法
MIQT_EXPORT void QPropertyBindingSourceLocation_setFileName(QPropertyBindingSourceLocation* self, const char* fileName);
// 来源: 类方法
MIQT_EXPORT const char* QPropertyBindingSourceLocation_functionName(const QPropertyBindingSourceLocation* self);
// 来源: 类方法
MIQT_EXPORT void QPropertyBindingSourceLocation_setFunctionName(QPropertyBindingSourceLocation* self, const char* functionName);
// 来源: 类方法
MIQT_EXPORT unsigned int QPropertyBindingSourceLocation_line(const QPropertyBindingSourceLocation* self);
// 来源: 类方法
MIQT_EXPORT void QPropertyBindingSourceLocation_setLine(QPropertyBindingSourceLocation* self, unsigned int line);
// 来源: 类方法
MIQT_EXPORT unsigned int QPropertyBindingSourceLocation_column(const QPropertyBindingSourceLocation* self);
// 来源: 类方法
MIQT_EXPORT void QPropertyBindingSourceLocation_setColumn(QPropertyBindingSourceLocation* self, unsigned int column);

// 来源: 析构函数
MIQT_EXPORT void QPropertyBindingSourceLocation_delete(QPropertyBindingSourceLocation* self);

// 来源: 类 (QPropertyBindingError)
// 来源: 构造函数
MIQT_EXPORT QPropertyBindingError* QPropertyBindingError_new();
// 来源: 构造函数
MIQT_EXPORT QPropertyBindingError* QPropertyBindingError_new2(QPropertyBindingError* other);
// 来源: 类方法
MIQT_EXPORT bool QPropertyBindingError_hasError(const QPropertyBindingError* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QPropertyBindingError_description(const QPropertyBindingError* self);

// 来源: 析构函数
MIQT_EXPORT void QPropertyBindingError_delete(QPropertyBindingError* self);

// 来源: 类 (QUntypedPropertyBinding)
// 来源: 类方法
MIQT_EXPORT bool QUntypedPropertyBinding_isNull(const QUntypedPropertyBinding* self);
// 来源: 类方法
MIQT_EXPORT QMetaType* QUntypedPropertyBinding_valueMetaType(const QUntypedPropertyBinding* self);

// 来源: 析构函数
MIQT_EXPORT void QUntypedPropertyBinding_delete(QUntypedPropertyBinding* self);

// 来源: 类 (QPropertyObserver)
// 来源: 构造函数
MIQT_EXPORT QPropertyObserver* QPropertyObserver_new();

// 来源: 析构函数
MIQT_EXPORT void QPropertyObserver_delete(QPropertyObserver* self);

// 来源: 类 (QUntypedBindable)
// 来源: 构造函数
MIQT_EXPORT QUntypedBindable* QUntypedBindable_new();
// 来源: 构造函数
MIQT_EXPORT QUntypedBindable* QUntypedBindable_new2(QUntypedBindable* param1);
// 来源: 类方法
MIQT_EXPORT bool QUntypedBindable_isValid(const QUntypedBindable* self);
// 来源: 类方法
MIQT_EXPORT bool QUntypedBindable_isBindable(const QUntypedBindable* self);
// 来源: 类方法
MIQT_EXPORT bool QUntypedBindable_isReadOnly(const QUntypedBindable* self);
// 来源: 类方法
MIQT_EXPORT bool QUntypedBindable_hasBinding(const QUntypedBindable* self);
// 来源: 类方法
MIQT_EXPORT QMetaType* QUntypedBindable_metaType(const QUntypedBindable* self);

// 来源: 析构函数
MIQT_EXPORT void QUntypedBindable_delete(QUntypedBindable* self);

// 来源: 类 (QTimer)
// 来源: 构造函数
MIQT_EXPORT QTimer* QTimer_new();
// 来源: 构造函数
MIQT_EXPORT QTimer* QTimer_new2(QObject* parent);
MIQT_EXPORT void QTimer_virtbase(QTimer* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QTimer_metaObject(const QTimer* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimer_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT bool QTimer_isActive(const QTimer* self);
// 来源: 类方法
MIQT_EXPORT int QTimer_timerId(const QTimer* self);
// 来源: 类方法
MIQT_EXPORT int QTimer_id(const QTimer* self);
// 来源: 类方法
MIQT_EXPORT void QTimer_setInterval(QTimer* self, int msec);
// 来源: 类方法
MIQT_EXPORT int QTimer_interval(const QTimer* self);
// 来源: 类方法
MIQT_EXPORT int QTimer_remainingTime(const QTimer* self);
// 来源: 类方法
MIQT_EXPORT void QTimer_setTimerType(QTimer* self, int atype);
// 来源: 类方法
MIQT_EXPORT int QTimer_timerType(const QTimer* self);
// 来源: 类方法
MIQT_EXPORT void QTimer_setSingleShot(QTimer* self, bool singleShot);
// 来源: 类方法
MIQT_EXPORT bool QTimer_isSingleShot(const QTimer* self);
// 来源: 类方法
MIQT_EXPORT void QTimer_start(QTimer* self, int msec);
// 来源: 类方法
MIQT_EXPORT void QTimer_start2(QTimer* self);
// 来源: 类方法
MIQT_EXPORT void QTimer_stop(QTimer* self);
// 来源: 类方法
MIQT_EXPORT void QTimer_timerEvent(QTimer* self, QTimerEvent* param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimer_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimer_tr3(const char* s, const char* c, int n);

// 来源: 虚函数
MIQT_EXPORT bool QTimer_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QTimer_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QTimer_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QTimer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT QObject* QTimer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QTimer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QTimer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QTimer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QTimer_delete(QTimer* self);

// 来源: 类 (QFileDevice)
MIQT_EXPORT void QFileDevice_virtbase(QFileDevice* src, QIODevice** outptr_QIODevice);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QFileDevice_metaObject(const QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileDevice_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT int QFileDevice_error(const QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT void QFileDevice_unsetError(QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT void QFileDevice_close(QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT bool QFileDevice_isSequential(const QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT int QFileDevice_handle(const QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileDevice_fileName(const QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT long long QFileDevice_pos(const QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT bool QFileDevice_seek(QFileDevice* self, long long offset);
// 来源: 类方法
MIQT_EXPORT bool QFileDevice_atEnd(const QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT bool QFileDevice_flush(QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT long long QFileDevice_size(const QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT bool QFileDevice_resize(QFileDevice* self, long long sz);
// 来源: 类方法
MIQT_EXPORT int QFileDevice_permissions(const QFileDevice* self);
// 来源: 类方法
MIQT_EXPORT bool QFileDevice_setPermissions(QFileDevice* self, int permissionSpec);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileDevice_fileTime(const QFileDevice* self, int time);
// 来源: 类方法
MIQT_EXPORT bool QFileDevice_setFileTime(QFileDevice* self, QDateTime* newDate, int fileTime);
// 来源: 类方法
MIQT_EXPORT long long QFileDevice_readData(QFileDevice* self, char* data, long long maxlen);
// 来源: 类方法
MIQT_EXPORT long long QFileDevice_writeData(QFileDevice* self, const char* data, long long len);
// 来源: 类方法
MIQT_EXPORT long long QFileDevice_readLineData(QFileDevice* self, char* data, long long maxlen);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileDevice_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileDevice_tr3(const char* s, const char* c, int n);

// 来源: 析构函数
MIQT_EXPORT void QFileDevice_delete(QFileDevice* self);

// 来源: 类 (QTimeZone)
// 来源: 构造函数
MIQT_EXPORT QTimeZone* QTimeZone_new();
// 来源: 构造函数
MIQT_EXPORT QTimeZone* QTimeZone_new2(int offsetSeconds);
// 来源: 构造函数
MIQT_EXPORT QTimeZone* QTimeZone_new3(struct miqt_string ianaId);
// 来源: 构造函数
MIQT_EXPORT QTimeZone* QTimeZone_new4(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation);
// 来源: 构造函数
MIQT_EXPORT QTimeZone* QTimeZone_new5(QTimeZone* other);
// 来源: 类方法
MIQT_EXPORT void QTimeZone_swap(QTimeZone* self, QTimeZone* other);
// 来源: 类方法
MIQT_EXPORT bool QTimeZone_isValid(const QTimeZone* self);
// 来源: 类方法
MIQT_EXPORT QTimeZone* QTimeZone_fromSecondsAheadOfUtc(int offset);
// 来源: 类方法
MIQT_EXPORT int QTimeZone_timeSpec(const QTimeZone* self);
// 来源: 类方法
MIQT_EXPORT int QTimeZone_fixedSecondsAheadOfUtc(const QTimeZone* self);
// 来源: 类方法
MIQT_EXPORT bool QTimeZone_isUtcOrFixedOffset(int spec);
// 来源: 类方法
MIQT_EXPORT bool QTimeZone_isUtcOrFixedOffset2(const QTimeZone* self);
// 来源: 类方法
MIQT_EXPORT QTimeZone* QTimeZone_asBackendZone(const QTimeZone* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_id(const QTimeZone* self);
// 来源: 类方法
MIQT_EXPORT int QTimeZone_country(const QTimeZone* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_comment(const QTimeZone* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_displayName(const QTimeZone* self, QDateTime* atDateTime);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_displayNameWithTimeType(const QTimeZone* self, int timeType);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_abbreviation(const QTimeZone* self, QDateTime* atDateTime);
// 来源: 类方法
MIQT_EXPORT int QTimeZone_offsetFromUtc(const QTimeZone* self, QDateTime* atDateTime);
// 来源: 类方法
MIQT_EXPORT int QTimeZone_standardTimeOffset(const QTimeZone* self, QDateTime* atDateTime);
// 来源: 类方法
MIQT_EXPORT int QTimeZone_daylightTimeOffset(const QTimeZone* self, QDateTime* atDateTime);
// 来源: 类方法
MIQT_EXPORT bool QTimeZone_hasDaylightTime(const QTimeZone* self);
// 来源: 类方法
MIQT_EXPORT bool QTimeZone_isDaylightTime(const QTimeZone* self, QDateTime* atDateTime);
// 来源: 类方法
MIQT_EXPORT bool QTimeZone_hasTransitions(const QTimeZone* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_systemTimeZoneId();
// 来源: 类方法
MIQT_EXPORT QTimeZone* QTimeZone_systemTimeZone();
// 来源: 类方法
MIQT_EXPORT QTimeZone* QTimeZone_utc();
// 来源: 类方法
MIQT_EXPORT bool QTimeZone_isTimeZoneIdAvailable(struct miqt_string ianaId);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIds();
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIdsWithOffsetSeconds(int offsetSeconds);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_ianaIdToWindowsId(struct miqt_string ianaId);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_windowsIdToDefaultIanaId(struct miqt_string windowsId);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QTimeZone_windowsIdToIanaIds(struct miqt_string windowsId);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_displayName2(const QTimeZone* self, QDateTime* atDateTime, int nameType);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_displayName3(const QTimeZone* self, QDateTime* atDateTime, int nameType, QLocale* locale);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_displayName4(const QTimeZone* self, int timeType, int nameType);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeZone_displayName5(const QTimeZone* self, int timeType, int nameType, QLocale* locale);

// 来源: 析构函数
MIQT_EXPORT void QTimeZone_delete(QTimeZone* self);

// 来源: 类 (QFileInfo)
// 来源: 构造函数
MIQT_EXPORT QFileInfo* QFileInfo_new();
// 来源: 构造函数
MIQT_EXPORT QFileInfo* QFileInfo_new2(struct miqt_string file);
// 来源: 构造函数
MIQT_EXPORT QFileInfo* QFileInfo_new3(QFileDevice* file);
// 来源: 构造函数
MIQT_EXPORT QFileInfo* QFileInfo_new4(QDir* dir, struct miqt_string file);
// 来源: 构造函数
MIQT_EXPORT QFileInfo* QFileInfo_new5(QFileInfo* fileinfo);
// 来源: 类方法
MIQT_EXPORT void QFileInfo_swap(QFileInfo* self, QFileInfo* other);
// 来源: 类方法
MIQT_EXPORT void QFileInfo_setFile(QFileInfo* self, struct miqt_string file);
// 来源: 类方法
MIQT_EXPORT void QFileInfo_setFileWithFile(QFileInfo* self, QFileDevice* file);
// 来源: 类方法
MIQT_EXPORT void QFileInfo_setFile2(QFileInfo* self, QDir* dir, struct miqt_string file);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_exists(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_existsWithFile(struct miqt_string file);
// 来源: 类方法
MIQT_EXPORT void QFileInfo_refresh(QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_filePath(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_absoluteFilePath(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_canonicalFilePath(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_fileName(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_baseName(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_completeBaseName(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_suffix(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_bundleName(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_completeSuffix(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_path(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_absolutePath(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_canonicalPath(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT QDir* QFileInfo_dir(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT QDir* QFileInfo_absoluteDir(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isReadable(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isWritable(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isExecutable(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isHidden(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isNativePath(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isRelative(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isAbsolute(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_makeAbsolute(QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isFile(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isDir(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isSymLink(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isSymbolicLink(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isOther(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isShortcut(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isAlias(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isJunction(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isRoot(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_isBundle(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_symLinkTarget(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_readSymLink(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_junctionTarget(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_owner(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT unsigned int QFileInfo_ownerId(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QFileInfo_group(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT unsigned int QFileInfo_groupId(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_permission(const QFileInfo* self, int permissions);
// 来源: 类方法
MIQT_EXPORT int QFileInfo_permissions(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT long long QFileInfo_size(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileInfo_birthTime(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileInfo_metadataChangeTime(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileInfo_lastModified(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileInfo_lastRead(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileInfo_fileTime(const QFileInfo* self, int time);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileInfo_birthTimeWithTz(const QFileInfo* self, QTimeZone* tz);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileInfo_metadataChangeTimeWithTz(const QFileInfo* self, QTimeZone* tz);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileInfo_lastModifiedWithTz(const QFileInfo* self, QTimeZone* tz);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileInfo_lastReadWithTz(const QFileInfo* self, QTimeZone* tz);
// 来源: 类方法
MIQT_EXPORT QDateTime* QFileInfo_fileTime2(const QFileInfo* self, int time, QTimeZone* tz);
// 来源: 类方法
MIQT_EXPORT bool QFileInfo_caching(const QFileInfo* self);
// 来源: 类方法
MIQT_EXPORT void QFileInfo_setCaching(QFileInfo* self, bool on);
// 来源: 类方法
MIQT_EXPORT void QFileInfo_stat(QFileInfo* self);

// 来源: 析构函数
MIQT_EXPORT void QFileInfo_delete(QFileInfo* self);

// 来源: 类 (QDir)
// 来源: 构造函数
MIQT_EXPORT QDir* QDir_new(QDir* param1);
// 来源: 构造函数
MIQT_EXPORT QDir* QDir_new2();
// 来源: 构造函数
MIQT_EXPORT QDir* QDir_new3(struct miqt_string path, struct miqt_string nameFilter);
// 来源: 构造函数
MIQT_EXPORT QDir* QDir_new4(struct miqt_string path);
// 来源: 构造函数
MIQT_EXPORT QDir* QDir_new5(struct miqt_string path, struct miqt_string nameFilter, int sort);
// 来源: 构造函数
MIQT_EXPORT QDir* QDir_new6(struct miqt_string path, struct miqt_string nameFilter, int sort, int filter);
// 来源: 类方法
MIQT_EXPORT void QDir_swap(QDir* self, QDir* other);
// 来源: 类方法
MIQT_EXPORT void QDir_setPath(QDir* self, struct miqt_string path);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_path(const QDir* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_absolutePath(const QDir* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_canonicalPath(const QDir* self);
// 来源: 类方法
MIQT_EXPORT void QDir_setSearchPaths(struct miqt_string prefix, struct miqt_array /* of struct miqt_string */  searchPaths);
// 来源: 类方法
MIQT_EXPORT void QDir_addSearchPath(struct miqt_string prefix, struct miqt_string path);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QDir_searchPaths(struct miqt_string prefix);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_dirName(const QDir* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_filePath(const QDir* self, struct miqt_string fileName);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_absoluteFilePath(const QDir* self, struct miqt_string fileName);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_relativeFilePath(const QDir* self, struct miqt_string fileName);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_toNativeSeparators(struct miqt_string pathName);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_fromNativeSeparators(struct miqt_string pathName);
// 来源: 类方法
MIQT_EXPORT bool QDir_cd(QDir* self, struct miqt_string dirName);
// 来源: 类方法
MIQT_EXPORT bool QDir_cdUp(QDir* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QDir_nameFilters(const QDir* self);
// 来源: 类方法
MIQT_EXPORT void QDir_setNameFilters(QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters);
// 来源: 类方法
MIQT_EXPORT int QDir_filter(const QDir* self);
// 来源: 类方法
MIQT_EXPORT void QDir_setFilter(QDir* self, int filter);
// 来源: 类方法
MIQT_EXPORT int QDir_sorting(const QDir* self);
// 来源: 类方法
MIQT_EXPORT void QDir_setSorting(QDir* self, int sort);
// 来源: 类方法
MIQT_EXPORT bool QDir_isEmpty(const QDir* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_operatorSubscript(const QDir* self, int64_t param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QDir_nameFiltersFromString(struct miqt_string nameFilter);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QDir_entryList(const QDir* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QDir_entryListWithNameFilters(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QFileInfo* */  QDir_entryInfoList(const QDir* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QFileInfo* */  QDir_entryInfoListWithNameFilters(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters);
// 来源: 类方法
MIQT_EXPORT bool QDir_mkdir(const QDir* self, struct miqt_string dirName);
// 来源: 类方法
MIQT_EXPORT bool QDir_rmdir(const QDir* self, struct miqt_string dirName);
// 来源: 类方法
MIQT_EXPORT bool QDir_mkpath(const QDir* self, struct miqt_string dirPath);
// 来源: 类方法
MIQT_EXPORT bool QDir_rmpath(const QDir* self, struct miqt_string dirPath);
// 来源: 类方法
MIQT_EXPORT bool QDir_removeRecursively(QDir* self);
// 来源: 类方法
MIQT_EXPORT bool QDir_isReadable(const QDir* self);
// 来源: 类方法
MIQT_EXPORT bool QDir_exists(const QDir* self);
// 来源: 类方法
MIQT_EXPORT bool QDir_isRoot(const QDir* self);
// 来源: 类方法
MIQT_EXPORT bool QDir_isRelativePath(struct miqt_string path);
// 来源: 类方法
MIQT_EXPORT bool QDir_isAbsolutePath(struct miqt_string path);
// 来源: 类方法
MIQT_EXPORT bool QDir_isRelative(const QDir* self);
// 来源: 类方法
MIQT_EXPORT bool QDir_isAbsolute(const QDir* self);
// 来源: 类方法
MIQT_EXPORT bool QDir_makeAbsolute(QDir* self);
// 来源: 类方法
MIQT_EXPORT bool QDir_remove(QDir* self, struct miqt_string fileName);
// 来源: 类方法
MIQT_EXPORT bool QDir_rename(QDir* self, struct miqt_string oldName, struct miqt_string newName);
// 来源: 类方法
MIQT_EXPORT bool QDir_existsWithName(const QDir* self, struct miqt_string name);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QFileInfo* */  QDir_drives();
// 来源: 类方法
MIQT_EXPORT QChar* QDir_listSeparator();
// 来源: 类方法
MIQT_EXPORT QChar* QDir_separator();
// 来源: 类方法
MIQT_EXPORT bool QDir_setCurrent(struct miqt_string path);
// 来源: 类方法
MIQT_EXPORT QDir* QDir_current();
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_currentPath();
// 来源: 类方法
MIQT_EXPORT QDir* QDir_home();
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_homePath();
// 来源: 类方法
MIQT_EXPORT QDir* QDir_root();
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_rootPath();
// 来源: 类方法
MIQT_EXPORT QDir* QDir_temp();
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_tempPath();
// 来源: 类方法
MIQT_EXPORT bool QDir_match(struct miqt_array /* of struct miqt_string */  filters, struct miqt_string fileName);
// 来源: 类方法
MIQT_EXPORT bool QDir_match2(struct miqt_string filter, struct miqt_string fileName);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QDir_cleanPath(struct miqt_string path);
// 来源: 类方法
MIQT_EXPORT void QDir_refresh(const QDir* self);
// 来源: 类方法
MIQT_EXPORT bool QDir_isEmptyWithFilters(const QDir* self, int filters);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QDir_entryListWithFilters(const QDir* self, int filters);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QDir_entryList2(const QDir* self, int filters, int sort);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QDir_entryList3(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QDir_entryList4(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QFileInfo* */  QDir_entryInfoListWithFilters(const QDir* self, int filters);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QFileInfo* */  QDir_entryInfoList2(const QDir* self, int filters, int sort);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QFileInfo* */  QDir_entryInfoList3(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QFileInfo* */  QDir_entryInfoList4(const QDir* self, struct miqt_array /* of struct miqt_string */  nameFilters, int filters, int sort);

// 来源: 析构函数
MIQT_EXPORT void QDir_delete(QDir* self);

// 来源: 类 (QEasingCurve)
// 来源: 构造函数
MIQT_EXPORT QEasingCurve* QEasingCurve_new();
// 来源: 构造函数
MIQT_EXPORT QEasingCurve* QEasingCurve_new2(QEasingCurve* other);
// 来源: 类方法
MIQT_EXPORT void QEasingCurve_swap(QEasingCurve* self, QEasingCurve* other);
// 来源: 类方法
MIQT_EXPORT double QEasingCurve_amplitude(const QEasingCurve* self);
// 来源: 类方法
MIQT_EXPORT void QEasingCurve_setAmplitude(QEasingCurve* self, double amplitude);
// 来源: 类方法
MIQT_EXPORT double QEasingCurve_period(const QEasingCurve* self);
// 来源: 类方法
MIQT_EXPORT void QEasingCurve_setPeriod(QEasingCurve* self, double period);
// 来源: 类方法
MIQT_EXPORT double QEasingCurve_overshoot(const QEasingCurve* self);
// 来源: 类方法
MIQT_EXPORT void QEasingCurve_setOvershoot(QEasingCurve* self, double overshoot);
// 来源: 类方法
MIQT_EXPORT void QEasingCurve_addCubicBezierSegment(QEasingCurve* self, QPointF* c1, QPointF* c2, QPointF* endPoint);
// 来源: 类方法
MIQT_EXPORT void QEasingCurve_addTCBSegment(QEasingCurve* self, QPointF* nextPoint, double t, double c, double b);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QPointF* */  QEasingCurve_toCubicSpline(const QEasingCurve* self);
// 来源: 类方法
MIQT_EXPORT double QEasingCurve_valueForProgress(const QEasingCurve* self, double progress);

// 来源: 析构函数
MIQT_EXPORT void QEasingCurve_delete(QEasingCurve* self);

// 来源: 类 (QThread)
// 来源: 构造函数
MIQT_EXPORT QThread* QThread_new();
// 来源: 构造函数
MIQT_EXPORT QThread* QThread_new2(QObject* parent);
MIQT_EXPORT void QThread_virtbase(QThread* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QThread_metaObject(const QThread* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QThread_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT QThread* QThread_currentThread();
// 来源: 类方法
MIQT_EXPORT bool QThread_isMainThread();
// 来源: 类方法
MIQT_EXPORT int QThread_idealThreadCount();
// 来源: 类方法
MIQT_EXPORT void QThread_yieldCurrentThread();
// 来源: 类方法
MIQT_EXPORT void QThread_setPriority(QThread* self, int priority);
// 来源: 类方法
MIQT_EXPORT int QThread_priority(const QThread* self);
// 来源: 类方法
MIQT_EXPORT bool QThread_isFinished(const QThread* self);
// 来源: 类方法
MIQT_EXPORT bool QThread_isRunning(const QThread* self);
// 来源: 类方法
MIQT_EXPORT void QThread_requestInterruption(QThread* self);
// 来源: 类方法
MIQT_EXPORT bool QThread_isInterruptionRequested(const QThread* self);
// 来源: 类方法
MIQT_EXPORT void QThread_setStackSize(QThread* self, unsigned int stackSize);
// 来源: 类方法
MIQT_EXPORT unsigned int QThread_stackSize(const QThread* self);
// 来源: 类方法
MIQT_EXPORT QAbstractEventDispatcher* QThread_eventDispatcher(const QThread* self);
// 来源: 类方法
MIQT_EXPORT void QThread_setEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher);
// 来源: 类方法
MIQT_EXPORT bool QThread_event(QThread* self, QEvent* event);
// 来源: 类方法
MIQT_EXPORT int QThread_loopLevel(const QThread* self);
// 来源: 类方法
MIQT_EXPORT bool QThread_isCurrentThread(const QThread* self);
// 来源: 类方法
MIQT_EXPORT void QThread_setServiceLevel(QThread* self, int serviceLevel);
// 来源: 类方法
MIQT_EXPORT int QThread_serviceLevel(const QThread* self);
// 来源: 类方法
MIQT_EXPORT void QThread_start(QThread* self);
// 来源: 类方法
MIQT_EXPORT void QThread_terminate(QThread* self);
// 来源: 类方法
MIQT_EXPORT void QThread_exit(QThread* self);
// 来源: 类方法
MIQT_EXPORT void QThread_quit(QThread* self);
// 来源: 类方法
MIQT_EXPORT bool QThread_wait(QThread* self);
// 来源: 类方法
MIQT_EXPORT bool QThread_waitWithTime(QThread* self, unsigned long time);
// 来源: 类方法
MIQT_EXPORT void QThread_sleep(unsigned long param1);
// 来源: 类方法
MIQT_EXPORT void QThread_msleep(unsigned long param1);
// 来源: 类方法
MIQT_EXPORT void QThread_usleep(unsigned long param1);
// 来源: 类方法
MIQT_EXPORT void QThread_run(QThread* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QThread_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QThread_tr3(const char* s, const char* c, int n);
// 来源: 类方法
MIQT_EXPORT void QThread_startWithPriority(QThread* self, int param1);
// 来源: 类方法
MIQT_EXPORT void QThread_exitWithRetcode(QThread* self, int retcode);
// 来源: 类方法
MIQT_EXPORT bool QThread_waitWithDeadline(QThread* self, QDeadlineTimer* deadline);

// 来源: 虚函数
MIQT_EXPORT bool QThread_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QThread_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QThread_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QThread_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT int QThread_protectedbase_exec(bool* _dynamic_cast_ok, void* self);
// 来源: 受保护方法
MIQT_EXPORT QObject* QThread_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QThread_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QThread_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QThread_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QThread_delete(QThread* self);

// 来源: 类 (QItemSelectionRange)
// 来源: 构造函数
MIQT_EXPORT QItemSelectionRange* QItemSelectionRange_new();
// 来源: 构造函数
MIQT_EXPORT QItemSelectionRange* QItemSelectionRange_new2(QModelIndex* topL, QModelIndex* bottomR);
// 来源: 构造函数
MIQT_EXPORT QItemSelectionRange* QItemSelectionRange_new3(QModelIndex* index);
// 来源: 构造函数
MIQT_EXPORT QItemSelectionRange* QItemSelectionRange_new4(QItemSelectionRange* param1);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionRange_swap(QItemSelectionRange* self, QItemSelectionRange* other);
// 来源: 类方法
MIQT_EXPORT int QItemSelectionRange_top(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT int QItemSelectionRange_left(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT int QItemSelectionRange_bottom(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT int QItemSelectionRange_right(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT int QItemSelectionRange_width(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT int QItemSelectionRange_height(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT QPersistentModelIndex* QItemSelectionRange_topLeft(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT QPersistentModelIndex* QItemSelectionRange_bottomRight(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QItemSelectionRange_parent(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT QAbstractItemModel* QItemSelectionRange_model(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionRange_contains(const QItemSelectionRange* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionRange_contains2(const QItemSelectionRange* self, int row, int column, QModelIndex* parentIndex);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionRange_intersects(const QItemSelectionRange* self, QItemSelectionRange* other);
// 来源: 类方法
MIQT_EXPORT QItemSelectionRange* QItemSelectionRange_intersected(const QItemSelectionRange* self, QItemSelectionRange* other);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionRange_isValid(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionRange_isEmpty(const QItemSelectionRange* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QItemSelectionRange_indexes(const QItemSelectionRange* self);

// 来源: 析构函数
MIQT_EXPORT void QItemSelectionRange_delete(QItemSelectionRange* self);

// 来源: 类 (QItemSelectionModel)
// 来源: 构造函数
MIQT_EXPORT QItemSelectionModel* QItemSelectionModel_new();
// 来源: 构造函数
MIQT_EXPORT QItemSelectionModel* QItemSelectionModel_new2(QAbstractItemModel* model, QObject* parent);
// 来源: 构造函数
MIQT_EXPORT QItemSelectionModel* QItemSelectionModel_new3(QAbstractItemModel* model);
MIQT_EXPORT void QItemSelectionModel_virtbase(QItemSelectionModel* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QItemSelectionModel_metaObject(const QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QItemSelectionModel_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT QModelIndex* QItemSelectionModel_currentIndex(const QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionModel_isSelected(const QItemSelectionModel* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionModel_isRowSelected(const QItemSelectionModel* self, int row);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionModel_isColumnSelected(const QItemSelectionModel* self, int column);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionModel_rowIntersectsSelection(const QItemSelectionModel* self, int row);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionModel_columnIntersectsSelection(const QItemSelectionModel* self, int column);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionModel_hasSelection(const QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedIndexes(const QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedRows(const QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedColumns(const QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT QItemSelection* QItemSelectionModel_selection(const QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT QAbstractItemModel* QItemSelectionModel_model(const QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT QAbstractItemModel* QItemSelectionModel_model2(QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_setModel(QItemSelectionModel* self, QAbstractItemModel* model);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_setCurrentIndex(QItemSelectionModel* self, QModelIndex* index, int command);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_select(QItemSelectionModel* self, QModelIndex* index, int command);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_select2(QItemSelectionModel* self, QItemSelection* selection, int command);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_clear(QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_reset(QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_clearSelection(QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_clearCurrentIndex(QItemSelectionModel* self);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_selectionChanged(QItemSelectionModel* self, QItemSelection* selected, QItemSelection* deselected);
// 来源: 信号
MIQT_EXPORT void QItemSelectionModel_connect_selectionChanged(QItemSelectionModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_currentChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous);
// 来源: 信号
MIQT_EXPORT void QItemSelectionModel_connect_currentChanged(QItemSelectionModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_currentRowChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous);
// 来源: 信号
MIQT_EXPORT void QItemSelectionModel_connect_currentRowChanged(QItemSelectionModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_currentColumnChanged(QItemSelectionModel* self, QModelIndex* current, QModelIndex* previous);
// 来源: 信号
MIQT_EXPORT void QItemSelectionModel_connect_currentColumnChanged(QItemSelectionModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT void QItemSelectionModel_modelChanged(QItemSelectionModel* self, QAbstractItemModel* model);
// 来源: 信号
MIQT_EXPORT void QItemSelectionModel_connect_modelChanged(QItemSelectionModel* self, intptr_t slot);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QItemSelectionModel_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QItemSelectionModel_tr3(const char* s, const char* c, int n);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionModel_isRowSelected2(const QItemSelectionModel* self, int row, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionModel_isColumnSelected2(const QItemSelectionModel* self, int column, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionModel_rowIntersectsSelection2(const QItemSelectionModel* self, int row, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT bool QItemSelectionModel_columnIntersectsSelection2(const QItemSelectionModel* self, int column, QModelIndex* parent);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedRowsWithColumn(const QItemSelectionModel* self, int column);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QItemSelectionModel_selectedColumnsWithRow(const QItemSelectionModel* self, int row);

// 来源: 虚函数
MIQT_EXPORT bool QItemSelectionModel_override_virtual_setCurrentIndex(void* self, intptr_t slot);
MIQT_EXPORT void QItemSelectionModel_virtualbase_setCurrentIndex(void* self, QModelIndex* index, int command);
// 来源: 虚函数
MIQT_EXPORT bool QItemSelectionModel_override_virtual_select(void* self, intptr_t slot);
MIQT_EXPORT void QItemSelectionModel_virtualbase_select(void* self, QModelIndex* index, int command);
// 来源: 虚函数
MIQT_EXPORT bool QItemSelectionModel_override_virtual_select2(void* self, intptr_t slot);
MIQT_EXPORT void QItemSelectionModel_virtualbase_select2(void* self, QItemSelection* selection, int command);
// 来源: 虚函数
MIQT_EXPORT bool QItemSelectionModel_override_virtual_clear(void* self, intptr_t slot);
MIQT_EXPORT void QItemSelectionModel_virtualbase_clear(void* self);
// 来源: 虚函数
MIQT_EXPORT bool QItemSelectionModel_override_virtual_reset(void* self, intptr_t slot);
MIQT_EXPORT void QItemSelectionModel_virtualbase_reset(void* self);
// 来源: 虚函数
MIQT_EXPORT bool QItemSelectionModel_override_virtual_clearCurrentIndex(void* self, intptr_t slot);
MIQT_EXPORT void QItemSelectionModel_virtualbase_clearCurrentIndex(void* self);
// 来源: 虚函数
MIQT_EXPORT bool QItemSelectionModel_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QItemSelectionModel_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QItemSelectionModel_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QItemSelectionModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT void QItemSelectionModel_protectedbase_emitSelectionChanged(bool* _dynamic_cast_ok, void* self, QItemSelection* newSelection, QItemSelection* oldSelection);
// 来源: 受保护方法
MIQT_EXPORT QObject* QItemSelectionModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QItemSelectionModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QItemSelectionModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QItemSelectionModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QItemSelectionModel_delete(QItemSelectionModel* self);

// 来源: 类 (QItemSelection)
// 来源: 构造函数
MIQT_EXPORT QItemSelection* QItemSelection_new(QModelIndex* topLeft, QModelIndex* bottomRight);
// 来源: 构造函数
MIQT_EXPORT QItemSelection* QItemSelection_new2();
// 来源: 构造函数
MIQT_EXPORT QItemSelection* QItemSelection_new3(QItemSelection* param1);
// 来源: 类方法
MIQT_EXPORT void QItemSelection_select(QItemSelection* self, QModelIndex* topLeft, QModelIndex* bottomRight);
// 来源: 类方法
MIQT_EXPORT bool QItemSelection_contains(const QItemSelection* self, QModelIndex* index);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QModelIndex* */  QItemSelection_indexes(const QItemSelection* self);
// 来源: 类方法
MIQT_EXPORT void QItemSelection_merge(QItemSelection* self, QItemSelection* other, int command);
// 来源: 类方法
MIQT_EXPORT void QItemSelection_split(QItemSelectionRange* range, QItemSelectionRange* other, QItemSelection* result);

// 来源: 析构函数
MIQT_EXPORT void QItemSelection_delete(QItemSelection* self);

// 来源: 类 (QJsonParseError)
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonParseError_errorString(const QJsonParseError* self);
// 来源: 类方法
MIQT_EXPORT int QJsonParseError_offset(const QJsonParseError* self);
// 来源: 类方法
MIQT_EXPORT void QJsonParseError_setOffset(QJsonParseError* self, int offset);
// 来源: 类方法
MIQT_EXPORT int QJsonParseError_error(const QJsonParseError* self);
// 来源: 类方法
MIQT_EXPORT void QJsonParseError_setError(QJsonParseError* self, int error);

// 来源: 析构函数
MIQT_EXPORT void QJsonParseError_delete(QJsonParseError* self);

// 来源: 类 (QJsonDocument)
// 来源: 构造函数
MIQT_EXPORT QJsonDocument* QJsonDocument_new();
// 来源: 构造函数
MIQT_EXPORT QJsonDocument* QJsonDocument_new2(QJsonObject* object);
// 来源: 构造函数
MIQT_EXPORT QJsonDocument* QJsonDocument_new3(QJsonArray* array);
// 来源: 构造函数
MIQT_EXPORT QJsonDocument* QJsonDocument_new4(QJsonDocument* other);
// 来源: 类方法
MIQT_EXPORT void QJsonDocument_swap(QJsonDocument* self, QJsonDocument* other);
// 来源: 类方法
MIQT_EXPORT QJsonDocument* QJsonDocument_fromVariant(QVariant* variant);
// 来源: 类方法
MIQT_EXPORT QVariant* QJsonDocument_toVariant(const QJsonDocument* self);
// 来源: 类方法
MIQT_EXPORT QJsonDocument* QJsonDocument_fromJson(struct miqt_string json);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonDocument_toJson(const QJsonDocument* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonDocument_isEmpty(const QJsonDocument* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonDocument_isArray(const QJsonDocument* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonDocument_isObject(const QJsonDocument* self);
// 来源: 类方法
MIQT_EXPORT QJsonObject* QJsonDocument_object(const QJsonDocument* self);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QJsonDocument_array(const QJsonDocument* self);
// 来源: 类方法
MIQT_EXPORT void QJsonDocument_setObject(QJsonDocument* self, QJsonObject* object);
// 来源: 类方法
MIQT_EXPORT void QJsonDocument_setArray(QJsonDocument* self, QJsonArray* array);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonDocument_operatorSubscript(const QJsonDocument* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonDocument_operatorSubscriptWithQsizetype(const QJsonDocument* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT bool QJsonDocument_isNull(const QJsonDocument* self);
// 来源: 类方法
MIQT_EXPORT QJsonDocument* QJsonDocument_fromJson2(struct miqt_string json, QJsonParseError* error);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonDocument_toJsonWithFormat(const QJsonDocument* self, int format);

// 来源: 析构函数
MIQT_EXPORT void QJsonDocument_delete(QJsonDocument* self);

// 来源: 类 (QJsonValue)
// 来源: 构造函数
MIQT_EXPORT QJsonValue* QJsonValue_new();
// 来源: 构造函数
MIQT_EXPORT QJsonValue* QJsonValue_new2(bool b);
// 来源: 构造函数
MIQT_EXPORT QJsonValue* QJsonValue_new3(double n);
// 来源: 构造函数
MIQT_EXPORT QJsonValue* QJsonValue_new4(int n);
// 来源: 构造函数
MIQT_EXPORT QJsonValue* QJsonValue_new5(long long v);
// 来源: 构造函数
MIQT_EXPORT QJsonValue* QJsonValue_new6(struct miqt_string s);
// 来源: 构造函数
MIQT_EXPORT QJsonValue* QJsonValue_new7(QJsonArray* a);
// 来源: 构造函数
MIQT_EXPORT QJsonValue* QJsonValue_new8(QJsonObject* o);
// 来源: 构造函数
MIQT_EXPORT QJsonValue* QJsonValue_new9(QJsonValue* other);
// 来源: 类方法
MIQT_EXPORT void QJsonValue_swap(QJsonValue* self, QJsonValue* other);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonValue_fromVariant(QVariant* variant);
// 来源: 类方法
MIQT_EXPORT QVariant* QJsonValue_toVariant(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonValue_toJson(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValue_isNull(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValue_isBool(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValue_isDouble(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValue_isString(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValue_isArray(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValue_isObject(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValue_isUndefined(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValue_toBool(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT int QJsonValue_toInt(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT long long QJsonValue_toInteger(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT double QJsonValue_toDouble(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonValue_toString(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonValue_toStringWithDefaultValue(const QJsonValue* self, struct miqt_string defaultValue);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QJsonValue_toArray(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QJsonValue_toArrayWithDefaultValue(const QJsonValue* self, QJsonArray* defaultValue);
// 来源: 类方法
MIQT_EXPORT QJsonObject* QJsonValue_toObject(const QJsonValue* self);
// 来源: 类方法
MIQT_EXPORT QJsonObject* QJsonValue_toObjectWithDefaultValue(const QJsonValue* self, QJsonObject* defaultValue);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonValue_operatorSubscript(const QJsonValue* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonValue_operatorSubscriptWithQsizetype(const QJsonValue* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonValue_toJsonWithFormat(const QJsonValue* self, int format);
// 来源: 类方法
MIQT_EXPORT bool QJsonValue_toBoolWithDefaultValue(const QJsonValue* self, bool defaultValue);
// 来源: 类方法
MIQT_EXPORT int QJsonValue_toIntWithDefaultValue(const QJsonValue* self, int defaultValue);
// 来源: 类方法
MIQT_EXPORT long long QJsonValue_toIntegerWithDefaultValue(const QJsonValue* self, long long defaultValue);
// 来源: 类方法
MIQT_EXPORT double QJsonValue_toDoubleWithDefaultValue(const QJsonValue* self, double defaultValue);

// 来源: 析构函数
MIQT_EXPORT void QJsonValue_delete(QJsonValue* self);

// 来源: 类 (QJsonValueConstRef)
// 来源: 构造函数
MIQT_EXPORT QJsonValueConstRef* QJsonValueConstRef_new(QJsonValueConstRef* param1);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonValueConstRef_ToQJsonValue(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QJsonValueConstRef_toVariant(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT int QJsonValueConstRef_type(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueConstRef_isNull(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueConstRef_isBool(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueConstRef_isDouble(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueConstRef_isString(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueConstRef_isArray(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueConstRef_isObject(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueConstRef_isUndefined(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueConstRef_toBool(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT int QJsonValueConstRef_toInt(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT long long QJsonValueConstRef_toInteger(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT double QJsonValueConstRef_toDouble(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonValueConstRef_toString(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QJsonValueConstRef_toArray(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT QJsonObject* QJsonValueConstRef_toObject(const QJsonValueConstRef* self);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonValueConstRef_operatorSubscript(const QJsonValueConstRef* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueConstRef_toBoolWithDefaultValue(const QJsonValueConstRef* self, bool defaultValue);
// 来源: 类方法
MIQT_EXPORT int QJsonValueConstRef_toIntWithDefaultValue(const QJsonValueConstRef* self, int defaultValue);
// 来源: 类方法
MIQT_EXPORT long long QJsonValueConstRef_toIntegerWithDefaultValue(const QJsonValueConstRef* self, long long defaultValue);
// 来源: 类方法
MIQT_EXPORT double QJsonValueConstRef_toDoubleWithDefaultValue(const QJsonValueConstRef* self, double defaultValue);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonValueConstRef_toStringWithDefaultValue(const QJsonValueConstRef* self, struct miqt_string defaultValue);

// 来源: 析构函数
MIQT_EXPORT void QJsonValueConstRef_delete(QJsonValueConstRef* self);

// 来源: 类 (QJsonValueRef)
// 来源: 构造函数
MIQT_EXPORT QJsonValueRef* QJsonValueRef_new(QJsonValueRef* param1);
// 来源: 构造函数
MIQT_EXPORT QJsonValueRef* QJsonValueRef_new2(QJsonArray* array, int64_t idx);
// 来源: 构造函数
MIQT_EXPORT QJsonValueRef* QJsonValueRef_new3(QJsonObject* object, int64_t idx);
MIQT_EXPORT void QJsonValueRef_virtbase(QJsonValueRef* src, QJsonValueConstRef** outptr_QJsonValueConstRef);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonValueRef_ToQJsonValue(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QJsonValueRef_toVariant(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT int QJsonValueRef_type(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueRef_isNull(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueRef_isBool(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueRef_isDouble(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueRef_isString(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueRef_isArray(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueRef_isObject(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueRef_isUndefined(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueRef_toBool(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT int QJsonValueRef_toInt(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT long long QJsonValueRef_toInteger(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT double QJsonValueRef_toDouble(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonValueRef_toString(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QJsonValueRef_toArray(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT QJsonObject* QJsonValueRef_toObject(const QJsonValueRef* self);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonValueRef_operatorSubscript(const QJsonValueRef* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT bool QJsonValueRef_toBoolWithDefaultValue(const QJsonValueRef* self, bool defaultValue);
// 来源: 类方法
MIQT_EXPORT int QJsonValueRef_toIntWithDefaultValue(const QJsonValueRef* self, int defaultValue);
// 来源: 类方法
MIQT_EXPORT long long QJsonValueRef_toIntegerWithDefaultValue(const QJsonValueRef* self, long long defaultValue);
// 来源: 类方法
MIQT_EXPORT double QJsonValueRef_toDoubleWithDefaultValue(const QJsonValueRef* self, double defaultValue);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QJsonValueRef_toStringWithDefaultValue(const QJsonValueRef* self, struct miqt_string defaultValue);

// 来源: 析构函数
MIQT_EXPORT void QJsonValueRef_delete(QJsonValueRef* self);

// 来源: 类 (QJsonArray)
// 来源: 构造函数
MIQT_EXPORT QJsonArray* QJsonArray_new();
// 来源: 构造函数
MIQT_EXPORT QJsonArray* QJsonArray_new2(QJsonArray* other);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QJsonArray_fromStringList(struct miqt_array /* of struct miqt_string */  list);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QJsonArray_fromVariantList(struct miqt_array /* of QVariant* */  list);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QVariant* */  QJsonArray_toVariantList(const QJsonArray* self);
// 来源: 类方法
MIQT_EXPORT int64_t QJsonArray_size(const QJsonArray* self);
// 来源: 类方法
MIQT_EXPORT int64_t QJsonArray_count(const QJsonArray* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonArray_isEmpty(const QJsonArray* self);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonArray_at(const QJsonArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonArray_first(const QJsonArray* self);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonArray_last(const QJsonArray* self);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_prepend(QJsonArray* self, QJsonValue* value);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_append(QJsonArray* self, QJsonValue* value);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_removeAt(QJsonArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonArray_takeAt(QJsonArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_removeFirst(QJsonArray* self);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_removeLast(QJsonArray* self);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_replace(QJsonArray* self, int64_t i, QJsonValue* value);
// 来源: 类方法
MIQT_EXPORT bool QJsonArray_contains(const QJsonArray* self, QJsonValue* element);
// 来源: 类方法
MIQT_EXPORT QJsonValueRef* QJsonArray_operatorSubscript(QJsonArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonArray_operatorSubscriptWithQsizetype(const QJsonArray* self, int64_t i);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_swap(QJsonArray* self, QJsonArray* other);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QJsonArray_operatorPlus(const QJsonArray* self, QJsonValue* v);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QJsonArray_operatorPlusAssign(QJsonArray* self, QJsonValue* v);
// 来源: 类方法
MIQT_EXPORT QJsonArray* QJsonArray_operatorShiftLeft(QJsonArray* self, QJsonValue* v);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_pushBack(QJsonArray* self, QJsonValue* t);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_pushFront(QJsonArray* self, QJsonValue* t);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_popFront(QJsonArray* self);
// 来源: 类方法
MIQT_EXPORT void QJsonArray_popBack(QJsonArray* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonArray_empty(const QJsonArray* self);

// 来源: 析构函数
MIQT_EXPORT void QJsonArray_delete(QJsonArray* self);

// 来源: 类 (QJsonObject)
// 来源: 构造函数
MIQT_EXPORT QJsonObject* QJsonObject_new();
// 来源: 构造函数
MIQT_EXPORT QJsonObject* QJsonObject_new2(QJsonObject* other);
// 来源: 类方法
MIQT_EXPORT void QJsonObject_swap(QJsonObject* self, QJsonObject* other);
// 来源: 类方法
MIQT_EXPORT QJsonObject* QJsonObject_fromVariantMap(struct miqt_map /* of struct miqt_string to QVariant* */  map);
// 来源: 类方法
MIQT_EXPORT struct miqt_map /* of struct miqt_string to QVariant* */  QJsonObject_toVariantMap(const QJsonObject* self);
// 来源: 类方法
MIQT_EXPORT QJsonObject* QJsonObject_fromVariantHash(struct miqt_map /* of struct miqt_string to QVariant* */  map);
// 来源: 类方法
MIQT_EXPORT struct miqt_map /* of struct miqt_string to QVariant* */  QJsonObject_toVariantHash(const QJsonObject* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QJsonObject_keys(const QJsonObject* self);
// 来源: 类方法
MIQT_EXPORT int64_t QJsonObject_size(const QJsonObject* self);
// 来源: 类方法
MIQT_EXPORT int64_t QJsonObject_count(const QJsonObject* self);
// 来源: 类方法
MIQT_EXPORT int64_t QJsonObject_length(const QJsonObject* self);
// 来源: 类方法
MIQT_EXPORT bool QJsonObject_isEmpty(const QJsonObject* self);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonObject_value(const QJsonObject* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonObject_operatorSubscript(const QJsonObject* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT QJsonValueRef* QJsonObject_operatorSubscriptWithKey(QJsonObject* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT void QJsonObject_remove(QJsonObject* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT QJsonValue* QJsonObject_take(QJsonObject* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT bool QJsonObject_contains(const QJsonObject* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT bool QJsonObject_empty(const QJsonObject* self);

// 来源: 析构函数
MIQT_EXPORT void QJsonObject_delete(QJsonObject* self);

// 来源: 类 (QPoint)
// 来源: 构造函数
MIQT_EXPORT QPoint* QPoint_new();
// 来源: 构造函数
MIQT_EXPORT QPoint* QPoint_new2(int xpos, int ypos);
// 来源: 构造函数
MIQT_EXPORT QPoint* QPoint_new3(QPoint* param1);
// 来源: 类方法
MIQT_EXPORT bool QPoint_isNull(const QPoint* self);
// 来源: 类方法
MIQT_EXPORT int QPoint_x(const QPoint* self);
// 来源: 类方法
MIQT_EXPORT int QPoint_y(const QPoint* self);
// 来源: 类方法
MIQT_EXPORT void QPoint_setX(QPoint* self, int x);
// 来源: 类方法
MIQT_EXPORT void QPoint_setY(QPoint* self, int y);
// 来源: 类方法
MIQT_EXPORT int QPoint_manhattanLength(const QPoint* self);
// 来源: 类方法
MIQT_EXPORT QPoint* QPoint_transposed(const QPoint* self);
// 来源: 类方法
MIQT_EXPORT QPoint* QPoint_operatorPlusAssign(QPoint* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT QPoint* QPoint_operatorMinusAssign(QPoint* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT QPoint* QPoint_operatorMultiplyAssign(QPoint* self, float factor);
// 来源: 类方法
MIQT_EXPORT QPoint* QPoint_operatorMultiplyAssignWithFactor(QPoint* self, double factor);
// 来源: 类方法
MIQT_EXPORT QPoint* QPoint_operatorMultiplyAssign2(QPoint* self, int factor);
// 来源: 类方法
MIQT_EXPORT QPoint* QPoint_operatorDivideAssign(QPoint* self, double divisor);
// 来源: 类方法
MIQT_EXPORT int QPoint_dotProduct(QPoint* p1, QPoint* p2);
// 来源: 类方法
MIQT_EXPORT QPointF* QPoint_toPointF(const QPoint* self);

// 来源: 析构函数
MIQT_EXPORT void QPoint_delete(QPoint* self);

// 来源: 类 (QPointF)
// 来源: 构造函数
MIQT_EXPORT QPointF* QPointF_new();
// 来源: 构造函数
MIQT_EXPORT QPointF* QPointF_new2(QPoint* p);
// 来源: 构造函数
MIQT_EXPORT QPointF* QPointF_new3(double xpos, double ypos);
// 来源: 构造函数
MIQT_EXPORT QPointF* QPointF_new4(QPointF* param1);
// 来源: 类方法
MIQT_EXPORT double QPointF_manhattanLength(const QPointF* self);
// 来源: 类方法
MIQT_EXPORT bool QPointF_isNull(const QPointF* self);
// 来源: 类方法
MIQT_EXPORT double QPointF_x(const QPointF* self);
// 来源: 类方法
MIQT_EXPORT double QPointF_y(const QPointF* self);
// 来源: 类方法
MIQT_EXPORT void QPointF_setX(QPointF* self, double x);
// 来源: 类方法
MIQT_EXPORT void QPointF_setY(QPointF* self, double y);
// 来源: 类方法
MIQT_EXPORT QPointF* QPointF_transposed(const QPointF* self);
// 来源: 类方法
MIQT_EXPORT QPointF* QPointF_operatorPlusAssign(QPointF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT QPointF* QPointF_operatorMinusAssign(QPointF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT QPointF* QPointF_operatorMultiplyAssign(QPointF* self, double c);
// 来源: 类方法
MIQT_EXPORT QPointF* QPointF_operatorDivideAssign(QPointF* self, double c);
// 来源: 类方法
MIQT_EXPORT double QPointF_dotProduct(QPointF* p1, QPointF* p2);
// 来源: 类方法
MIQT_EXPORT QPoint* QPointF_toPoint(const QPointF* self);

// 来源: 析构函数
MIQT_EXPORT void QPointF_delete(QPointF* self);

// 来源: 类 (QLine)
// 来源: 构造函数
MIQT_EXPORT QLine* QLine_new();
// 来源: 构造函数
MIQT_EXPORT QLine* QLine_new2(QPoint* pt1, QPoint* pt2);
// 来源: 构造函数
MIQT_EXPORT QLine* QLine_new3(int x1, int y1, int x2, int y2);
// 来源: 构造函数
MIQT_EXPORT QLine* QLine_new4(QLine* param1);
// 来源: 类方法
MIQT_EXPORT bool QLine_isNull(const QLine* self);
// 来源: 类方法
MIQT_EXPORT QPoint* QLine_p1(const QLine* self);
// 来源: 类方法
MIQT_EXPORT QPoint* QLine_p2(const QLine* self);
// 来源: 类方法
MIQT_EXPORT int QLine_x1(const QLine* self);
// 来源: 类方法
MIQT_EXPORT int QLine_y1(const QLine* self);
// 来源: 类方法
MIQT_EXPORT int QLine_x2(const QLine* self);
// 来源: 类方法
MIQT_EXPORT int QLine_y2(const QLine* self);
// 来源: 类方法
MIQT_EXPORT int QLine_dx(const QLine* self);
// 来源: 类方法
MIQT_EXPORT int QLine_dy(const QLine* self);
// 来源: 类方法
MIQT_EXPORT void QLine_translate(QLine* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT void QLine_translate2(QLine* self, int dx, int dy);
// 来源: 类方法
MIQT_EXPORT QLine* QLine_translated(const QLine* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT QLine* QLine_translated2(const QLine* self, int dx, int dy);
// 来源: 类方法
MIQT_EXPORT QPoint* QLine_center(const QLine* self);
// 来源: 类方法
MIQT_EXPORT void QLine_setP1(QLine* self, QPoint* p1);
// 来源: 类方法
MIQT_EXPORT void QLine_setP2(QLine* self, QPoint* p2);
// 来源: 类方法
MIQT_EXPORT void QLine_setPoints(QLine* self, QPoint* p1, QPoint* p2);
// 来源: 类方法
MIQT_EXPORT void QLine_setLine(QLine* self, int x1, int y1, int x2, int y2);
// 来源: 类方法
MIQT_EXPORT QLineF* QLine_toLineF(const QLine* self);

// 来源: 析构函数
MIQT_EXPORT void QLine_delete(QLine* self);

// 来源: 类 (QLineF)
// 来源: 构造函数
MIQT_EXPORT QLineF* QLineF_new();
// 来源: 构造函数
MIQT_EXPORT QLineF* QLineF_new2(QPointF* pt1, QPointF* pt2);
// 来源: 构造函数
MIQT_EXPORT QLineF* QLineF_new3(double x1, double y1, double x2, double y2);
// 来源: 构造函数
MIQT_EXPORT QLineF* QLineF_new4(QLine* line);
// 来源: 构造函数
MIQT_EXPORT QLineF* QLineF_new5(QLineF* param1);
// 来源: 类方法
MIQT_EXPORT QLineF* QLineF_fromPolar(double length, double angle);
// 来源: 类方法
MIQT_EXPORT bool QLineF_isNull(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT QPointF* QLineF_p1(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT QPointF* QLineF_p2(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT double QLineF_x1(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT double QLineF_y1(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT double QLineF_x2(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT double QLineF_y2(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT double QLineF_dx(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT double QLineF_dy(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT double QLineF_length(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT void QLineF_setLength(QLineF* self, double len);
// 来源: 类方法
MIQT_EXPORT double QLineF_angle(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT void QLineF_setAngle(QLineF* self, double angle);
// 来源: 类方法
MIQT_EXPORT double QLineF_angleTo(const QLineF* self, QLineF* l);
// 来源: 类方法
MIQT_EXPORT QLineF* QLineF_unitVector(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT QLineF* QLineF_normalVector(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT int QLineF_intersects(const QLineF* self, QLineF* l);
// 来源: 类方法
MIQT_EXPORT QPointF* QLineF_pointAt(const QLineF* self, double t);
// 来源: 类方法
MIQT_EXPORT void QLineF_translate(QLineF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QLineF_translate2(QLineF* self, double dx, double dy);
// 来源: 类方法
MIQT_EXPORT QLineF* QLineF_translated(const QLineF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT QLineF* QLineF_translated2(const QLineF* self, double dx, double dy);
// 来源: 类方法
MIQT_EXPORT QPointF* QLineF_center(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT void QLineF_setP1(QLineF* self, QPointF* p1);
// 来源: 类方法
MIQT_EXPORT void QLineF_setP2(QLineF* self, QPointF* p2);
// 来源: 类方法
MIQT_EXPORT void QLineF_setPoints(QLineF* self, QPointF* p1, QPointF* p2);
// 来源: 类方法
MIQT_EXPORT void QLineF_setLine(QLineF* self, double x1, double y1, double x2, double y2);
// 来源: 类方法
MIQT_EXPORT QLine* QLineF_toLine(const QLineF* self);
// 来源: 类方法
MIQT_EXPORT int QLineF_intersects2(const QLineF* self, QLineF* l, QPointF* intersectionPoint);

// 来源: 析构函数
MIQT_EXPORT void QLineF_delete(QLineF* self);

// 来源: 类 (QMargins)
// 来源: 构造函数
MIQT_EXPORT QMargins* QMargins_new();
// 来源: 构造函数
MIQT_EXPORT QMargins* QMargins_new2(int left, int top, int right, int bottom);
// 来源: 构造函数
MIQT_EXPORT QMargins* QMargins_new3(QMargins* param1);
// 来源: 类方法
MIQT_EXPORT bool QMargins_isNull(const QMargins* self);
// 来源: 类方法
MIQT_EXPORT int QMargins_left(const QMargins* self);
// 来源: 类方法
MIQT_EXPORT int QMargins_top(const QMargins* self);
// 来源: 类方法
MIQT_EXPORT int QMargins_right(const QMargins* self);
// 来源: 类方法
MIQT_EXPORT int QMargins_bottom(const QMargins* self);
// 来源: 类方法
MIQT_EXPORT void QMargins_setLeft(QMargins* self, int left);
// 来源: 类方法
MIQT_EXPORT void QMargins_setTop(QMargins* self, int top);
// 来源: 类方法
MIQT_EXPORT void QMargins_setRight(QMargins* self, int right);
// 来源: 类方法
MIQT_EXPORT void QMargins_setBottom(QMargins* self, int bottom);
// 来源: 类方法
MIQT_EXPORT QMargins* QMargins_operatorPlusAssign(QMargins* self, QMargins* margins);
// 来源: 类方法
MIQT_EXPORT QMargins* QMargins_operatorMinusAssign(QMargins* self, QMargins* margins);
// 来源: 类方法
MIQT_EXPORT QMargins* QMargins_operatorPlusAssignWithInt(QMargins* self, int param1);
// 来源: 类方法
MIQT_EXPORT QMargins* QMargins_operatorMinusAssignWithInt(QMargins* self, int param1);
// 来源: 类方法
MIQT_EXPORT QMargins* QMargins_operatorMultiplyAssign(QMargins* self, int param1);
// 来源: 类方法
MIQT_EXPORT QMargins* QMargins_operatorDivideAssign(QMargins* self, int param1);
// 来源: 类方法
MIQT_EXPORT QMargins* QMargins_operatorMultiplyAssignWithQreal(QMargins* self, double param1);
// 来源: 类方法
MIQT_EXPORT QMargins* QMargins_operatorDivideAssignWithQreal(QMargins* self, double param1);
// 来源: 类方法
MIQT_EXPORT QMarginsF* QMargins_toMarginsF(const QMargins* self);

// 来源: 析构函数
MIQT_EXPORT void QMargins_delete(QMargins* self);

// 来源: 类 (QMarginsF)
// 来源: 构造函数
MIQT_EXPORT QMarginsF* QMarginsF_new();
// 来源: 构造函数
MIQT_EXPORT QMarginsF* QMarginsF_new2(double left, double top, double right, double bottom);
// 来源: 构造函数
MIQT_EXPORT QMarginsF* QMarginsF_new3(QMargins* margins);
// 来源: 构造函数
MIQT_EXPORT QMarginsF* QMarginsF_new4(QMarginsF* param1);
// 来源: 类方法
MIQT_EXPORT bool QMarginsF_isNull(const QMarginsF* self);
// 来源: 类方法
MIQT_EXPORT double QMarginsF_left(const QMarginsF* self);
// 来源: 类方法
MIQT_EXPORT double QMarginsF_top(const QMarginsF* self);
// 来源: 类方法
MIQT_EXPORT double QMarginsF_right(const QMarginsF* self);
// 来源: 类方法
MIQT_EXPORT double QMarginsF_bottom(const QMarginsF* self);
// 来源: 类方法
MIQT_EXPORT void QMarginsF_setLeft(QMarginsF* self, double aleft);
// 来源: 类方法
MIQT_EXPORT void QMarginsF_setTop(QMarginsF* self, double atop);
// 来源: 类方法
MIQT_EXPORT void QMarginsF_setRight(QMarginsF* self, double aright);
// 来源: 类方法
MIQT_EXPORT void QMarginsF_setBottom(QMarginsF* self, double abottom);
// 来源: 类方法
MIQT_EXPORT QMarginsF* QMarginsF_operatorPlusAssign(QMarginsF* self, QMarginsF* margins);
// 来源: 类方法
MIQT_EXPORT QMarginsF* QMarginsF_operatorMinusAssign(QMarginsF* self, QMarginsF* margins);
// 来源: 类方法
MIQT_EXPORT QMarginsF* QMarginsF_operatorPlusAssignWithAddend(QMarginsF* self, double addend);
// 来源: 类方法
MIQT_EXPORT QMarginsF* QMarginsF_operatorMinusAssignWithSubtrahend(QMarginsF* self, double subtrahend);
// 来源: 类方法
MIQT_EXPORT QMarginsF* QMarginsF_operatorMultiplyAssign(QMarginsF* self, double factor);
// 来源: 类方法
MIQT_EXPORT QMarginsF* QMarginsF_operatorDivideAssign(QMarginsF* self, double divisor);
// 来源: 类方法
MIQT_EXPORT QMargins* QMarginsF_toMargins(const QMarginsF* self);

// 来源: 析构函数
MIQT_EXPORT void QMarginsF_delete(QMarginsF* self);

// 来源: 类 (QMetaMethod)
// 来源: 构造函数
MIQT_EXPORT QMetaMethod* QMetaMethod_new();
// 来源: 构造函数
MIQT_EXPORT QMetaMethod* QMetaMethod_new2(QMetaMethod* param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMetaMethod_methodSignature(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMetaMethod_name(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT const char* QMetaMethod_typeName(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT int QMetaMethod_returnType(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT QMetaType* QMetaMethod_returnMetaType(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT int QMetaMethod_parameterCount(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT int QMetaMethod_parameterType(const QMetaMethod* self, int index);
// 来源: 类方法
MIQT_EXPORT QMetaType* QMetaMethod_parameterMetaType(const QMetaMethod* self, int index);
// 来源: 类方法
MIQT_EXPORT void QMetaMethod_getParameterTypes(const QMetaMethod* self, int* types);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QMetaMethod_parameterTypes(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMetaMethod_parameterTypeName(const QMetaMethod* self, int index);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QMetaMethod_parameterNames(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT const char* QMetaMethod_tag(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT int QMetaMethod_access(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT int QMetaMethod_methodType(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT int QMetaMethod_attributes(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT int QMetaMethod_methodIndex(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT int QMetaMethod_relativeMethodIndex(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT int QMetaMethod_revision(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_isConst(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QMetaMethod_enclosingMetaObject(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke2(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke3(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke4(const QMetaMethod* self, QObject* object, QGenericArgument* val0);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_isValid(const QMetaMethod* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke5(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke6(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke7(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke8(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke9(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke10(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke11(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke12(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke13(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke14(const QMetaMethod* self, QObject* object, int connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke15(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke16(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke17(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke18(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke19(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke20(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke21(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke22(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke23(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke24(const QMetaMethod* self, QObject* object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke25(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke26(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke27(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke28(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke29(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke30(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke31(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke32(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke33(const QMetaMethod* self, QObject* object, int connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke34(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke35(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke36(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke37(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke38(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke39(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke40(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke41(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
// 来源: 类方法
MIQT_EXPORT bool QMetaMethod_invoke42(const QMetaMethod* self, QObject* object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);

// 来源: 析构函数
MIQT_EXPORT void QMetaMethod_delete(QMetaMethod* self);

// 来源: 类 (QMetaEnum)
// 来源: 构造函数
MIQT_EXPORT QMetaEnum* QMetaEnum_new();
// 来源: 构造函数
MIQT_EXPORT QMetaEnum* QMetaEnum_new2(QMetaEnum* param1);
// 来源: 类方法
MIQT_EXPORT const char* QMetaEnum_name(const QMetaEnum* self);
// 来源: 类方法
MIQT_EXPORT const char* QMetaEnum_enumName(const QMetaEnum* self);
// 来源: 类方法
MIQT_EXPORT QMetaType* QMetaEnum_metaType(const QMetaEnum* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaEnum_isFlag(const QMetaEnum* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaEnum_isScoped(const QMetaEnum* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaEnum_is64Bit(const QMetaEnum* self);
// 来源: 类方法
MIQT_EXPORT int QMetaEnum_keyCount(const QMetaEnum* self);
// 来源: 类方法
MIQT_EXPORT const char* QMetaEnum_key(const QMetaEnum* self, int index);
// 来源: 类方法
MIQT_EXPORT int QMetaEnum_value(const QMetaEnum* self, int index);
// 来源: 类方法
MIQT_EXPORT const char* QMetaEnum_scope(const QMetaEnum* self);
// 来源: 类方法
MIQT_EXPORT int QMetaEnum_keyToValue(const QMetaEnum* self, const char* key);
// 来源: 类方法
MIQT_EXPORT int QMetaEnum_keysToValue(const QMetaEnum* self, const char* keys);
// 来源: 类方法
MIQT_EXPORT const char* QMetaEnum_valueToKey(const QMetaEnum* self, unsigned long long value);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMetaEnum_valueToKeys(const QMetaEnum* self, unsigned long long value);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QMetaEnum_enclosingMetaObject(const QMetaEnum* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaEnum_isValid(const QMetaEnum* self);
// 来源: 类方法
MIQT_EXPORT int QMetaEnum_keyToValue2(const QMetaEnum* self, const char* key, bool* ok);
// 来源: 类方法
MIQT_EXPORT int QMetaEnum_keysToValue2(const QMetaEnum* self, const char* keys, bool* ok);

// 来源: 析构函数
MIQT_EXPORT void QMetaEnum_delete(QMetaEnum* self);

// 来源: 类 (QMetaProperty)
// 来源: 构造函数
MIQT_EXPORT QMetaProperty* QMetaProperty_new();
// 来源: 类方法
MIQT_EXPORT const char* QMetaProperty_name(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT const char* QMetaProperty_typeName(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT int QMetaProperty_type(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT int QMetaProperty_userType(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT int QMetaProperty_typeId(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT QMetaType* QMetaProperty_metaType(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT int QMetaProperty_propertyIndex(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT int QMetaProperty_relativePropertyIndex(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isReadable(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isWritable(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isResettable(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isDesignable(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isScriptable(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isStored(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isUser(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isConstant(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isFinal(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isVirtual(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isOverride(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isRequired(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isBindable(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isFlagType(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isEnumType(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT QMetaEnum* QMetaProperty_enumerator(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_hasNotifySignal(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT QMetaMethod* QMetaProperty_notifySignal(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT int QMetaProperty_notifySignalIndex(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT int QMetaProperty_revision(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QMetaProperty_read(const QMetaProperty* self, QObject* obj);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_write(const QMetaProperty* self, QObject* obj, QVariant* value);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_reset(const QMetaProperty* self, QObject* obj);
// 来源: 类方法
MIQT_EXPORT QUntypedBindable* QMetaProperty_bindable(const QMetaProperty* self, QObject* object);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_hasStdCppSet(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isAlias(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT bool QMetaProperty_isValid(const QMetaProperty* self);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QMetaProperty_enclosingMetaObject(const QMetaProperty* self);

// 来源: 析构函数
MIQT_EXPORT void QMetaProperty_delete(QMetaProperty* self);

// 来源: 类 (QMetaClassInfo)
// 来源: 构造函数
MIQT_EXPORT QMetaClassInfo* QMetaClassInfo_new();
// 来源: 构造函数
MIQT_EXPORT QMetaClassInfo* QMetaClassInfo_new2(QMetaClassInfo* param1);
// 来源: 类方法
MIQT_EXPORT const char* QMetaClassInfo_name(const QMetaClassInfo* self);
// 来源: 类方法
MIQT_EXPORT const char* QMetaClassInfo_value(const QMetaClassInfo* self);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QMetaClassInfo_enclosingMetaObject(const QMetaClassInfo* self);

// 来源: 析构函数
MIQT_EXPORT void QMetaClassInfo_delete(QMetaClassInfo* self);

// 来源: 类 (QMimeData)
// 来源: 构造函数
MIQT_EXPORT QMimeData* QMimeData_new();
MIQT_EXPORT void QMimeData_virtbase(QMimeData* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QMimeData_metaObject(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMimeData_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of QUrl* */  QMimeData_urls(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT void QMimeData_setUrls(QMimeData* self, struct miqt_array /* of QUrl* */  urls);
// 来源: 类方法
MIQT_EXPORT bool QMimeData_hasUrls(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMimeData_text(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT void QMimeData_setText(QMimeData* self, struct miqt_string text);
// 来源: 类方法
MIQT_EXPORT bool QMimeData_hasText(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMimeData_html(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT void QMimeData_setHtml(QMimeData* self, struct miqt_string html);
// 来源: 类方法
MIQT_EXPORT bool QMimeData_hasHtml(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QMimeData_imageData(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT void QMimeData_setImageData(QMimeData* self, QVariant* image);
// 来源: 类方法
MIQT_EXPORT bool QMimeData_hasImage(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QMimeData_colorData(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT void QMimeData_setColorData(QMimeData* self, QVariant* color);
// 来源: 类方法
MIQT_EXPORT bool QMimeData_hasColor(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMimeData_data(const QMimeData* self, struct miqt_string mimetype);
// 来源: 类方法
MIQT_EXPORT void QMimeData_setData(QMimeData* self, struct miqt_string mimetype, struct miqt_string data);
// 来源: 类方法
MIQT_EXPORT void QMimeData_removeFormat(QMimeData* self, struct miqt_string mimetype);
// 来源: 类方法
MIQT_EXPORT bool QMimeData_hasFormat(const QMimeData* self, struct miqt_string mimetype);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QMimeData_formats(const QMimeData* self);
// 来源: 类方法
MIQT_EXPORT void QMimeData_clear(QMimeData* self);
// 来源: 类方法
MIQT_EXPORT QVariant* QMimeData_retrieveData(const QMimeData* self, struct miqt_string mimetype, QMetaType* preferredType);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMimeData_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QMimeData_tr3(const char* s, const char* c, int n);

// 来源: 虚函数
MIQT_EXPORT bool QMimeData_override_virtual_hasFormat(void* self, intptr_t slot);
MIQT_EXPORT bool QMimeData_virtualbase_hasFormat(const void* self, struct miqt_string mimetype);
// 来源: 虚函数
MIQT_EXPORT bool QMimeData_override_virtual_formats(void* self, intptr_t slot);
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QMimeData_virtualbase_formats(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QMimeData_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QMimeData_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QMimeData_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QMimeData_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT QObject* QMimeData_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QMimeData_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QMimeData_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QMimeData_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QMimeData_delete(QMimeData* self);

// 来源: 类 (QPermission)
// 来源: 构造函数
MIQT_EXPORT QPermission* QPermission_new();
// 来源: 构造函数
MIQT_EXPORT QPermission* QPermission_new2(QPermission* param1);
// 来源: 类方法
MIQT_EXPORT int QPermission_status(const QPermission* self);
// 来源: 类方法
MIQT_EXPORT QMetaType* QPermission_type(const QPermission* self);

// 来源: 析构函数
MIQT_EXPORT void QPermission_delete(QPermission* self);

// 来源: 类 (QSize)
// 来源: 构造函数
MIQT_EXPORT QSize* QSize_new();
// 来源: 构造函数
MIQT_EXPORT QSize* QSize_new2(int w, int h);
// 来源: 构造函数
MIQT_EXPORT QSize* QSize_new3(QSize* param1);
// 来源: 类方法
MIQT_EXPORT bool QSize_isNull(const QSize* self);
// 来源: 类方法
MIQT_EXPORT bool QSize_isEmpty(const QSize* self);
// 来源: 类方法
MIQT_EXPORT bool QSize_isValid(const QSize* self);
// 来源: 类方法
MIQT_EXPORT int QSize_width(const QSize* self);
// 来源: 类方法
MIQT_EXPORT int QSize_height(const QSize* self);
// 来源: 类方法
MIQT_EXPORT void QSize_setWidth(QSize* self, int w);
// 来源: 类方法
MIQT_EXPORT void QSize_setHeight(QSize* self, int h);
// 来源: 类方法
MIQT_EXPORT void QSize_transpose(QSize* self);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_transposed(const QSize* self);
// 来源: 类方法
MIQT_EXPORT void QSize_scale(QSize* self, int w, int h, int mode);
// 来源: 类方法
MIQT_EXPORT void QSize_scale2(QSize* self, QSize* s, int mode);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_scaled(const QSize* self, int w, int h, int mode);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_scaled2(const QSize* self, QSize* s, int mode);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_expandedTo(const QSize* self, QSize* param1);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_boundedTo(const QSize* self, QSize* param1);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_grownBy(const QSize* self, QMargins* m);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_shrunkBy(const QSize* self, QMargins* m);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_operatorPlusAssign(QSize* self, QSize* param1);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_operatorMinusAssign(QSize* self, QSize* param1);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_operatorMultiplyAssign(QSize* self, double c);
// 来源: 类方法
MIQT_EXPORT QSize* QSize_operatorDivideAssign(QSize* self, double c);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSize_toSizeF(const QSize* self);

// 来源: 析构函数
MIQT_EXPORT void QSize_delete(QSize* self);

// 来源: 类 (QSizeF)
// 来源: 构造函数
MIQT_EXPORT QSizeF* QSizeF_new();
// 来源: 构造函数
MIQT_EXPORT QSizeF* QSizeF_new2(QSize* sz);
// 来源: 构造函数
MIQT_EXPORT QSizeF* QSizeF_new3(double w, double h);
// 来源: 构造函数
MIQT_EXPORT QSizeF* QSizeF_new4(QSizeF* param1);
// 来源: 类方法
MIQT_EXPORT bool QSizeF_isNull(const QSizeF* self);
// 来源: 类方法
MIQT_EXPORT bool QSizeF_isEmpty(const QSizeF* self);
// 来源: 类方法
MIQT_EXPORT bool QSizeF_isValid(const QSizeF* self);
// 来源: 类方法
MIQT_EXPORT double QSizeF_width(const QSizeF* self);
// 来源: 类方法
MIQT_EXPORT double QSizeF_height(const QSizeF* self);
// 来源: 类方法
MIQT_EXPORT void QSizeF_setWidth(QSizeF* self, double w);
// 来源: 类方法
MIQT_EXPORT void QSizeF_setHeight(QSizeF* self, double h);
// 来源: 类方法
MIQT_EXPORT void QSizeF_transpose(QSizeF* self);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_transposed(const QSizeF* self);
// 来源: 类方法
MIQT_EXPORT void QSizeF_scale(QSizeF* self, double w, double h, int mode);
// 来源: 类方法
MIQT_EXPORT void QSizeF_scale2(QSizeF* self, QSizeF* s, int mode);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_scaled(const QSizeF* self, double w, double h, int mode);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_scaled2(const QSizeF* self, QSizeF* s, int mode);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_expandedTo(const QSizeF* self, QSizeF* param1);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_boundedTo(const QSizeF* self, QSizeF* param1);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_grownBy(const QSizeF* self, QMarginsF* m);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_shrunkBy(const QSizeF* self, QMarginsF* m);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_operatorPlusAssign(QSizeF* self, QSizeF* param1);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_operatorMinusAssign(QSizeF* self, QSizeF* param1);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_operatorMultiplyAssign(QSizeF* self, double c);
// 来源: 类方法
MIQT_EXPORT QSizeF* QSizeF_operatorDivideAssign(QSizeF* self, double c);
// 来源: 类方法
MIQT_EXPORT QSize* QSizeF_toSize(const QSizeF* self);

// 来源: 析构函数
MIQT_EXPORT void QSizeF_delete(QSizeF* self);

// 来源: 类 (QRect)
// 来源: 构造函数
MIQT_EXPORT QRect* QRect_new();
// 来源: 构造函数
MIQT_EXPORT QRect* QRect_new2(QPoint* topleft, QPoint* bottomright);
// 来源: 构造函数
MIQT_EXPORT QRect* QRect_new3(QPoint* topleft, QSize* size);
// 来源: 构造函数
MIQT_EXPORT QRect* QRect_new4(int left, int top, int width, int height);
// 来源: 构造函数
MIQT_EXPORT QRect* QRect_new5(QRect* param1);
// 来源: 类方法
MIQT_EXPORT bool QRect_isNull(const QRect* self);
// 来源: 类方法
MIQT_EXPORT bool QRect_isEmpty(const QRect* self);
// 来源: 类方法
MIQT_EXPORT bool QRect_isValid(const QRect* self);
// 来源: 类方法
MIQT_EXPORT int QRect_left(const QRect* self);
// 来源: 类方法
MIQT_EXPORT int QRect_top(const QRect* self);
// 来源: 类方法
MIQT_EXPORT int QRect_right(const QRect* self);
// 来源: 类方法
MIQT_EXPORT int QRect_bottom(const QRect* self);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_normalized(const QRect* self);
// 来源: 类方法
MIQT_EXPORT int QRect_x(const QRect* self);
// 来源: 类方法
MIQT_EXPORT int QRect_y(const QRect* self);
// 来源: 类方法
MIQT_EXPORT void QRect_setLeft(QRect* self, int pos);
// 来源: 类方法
MIQT_EXPORT void QRect_setTop(QRect* self, int pos);
// 来源: 类方法
MIQT_EXPORT void QRect_setRight(QRect* self, int pos);
// 来源: 类方法
MIQT_EXPORT void QRect_setBottom(QRect* self, int pos);
// 来源: 类方法
MIQT_EXPORT void QRect_setX(QRect* self, int x);
// 来源: 类方法
MIQT_EXPORT void QRect_setY(QRect* self, int y);
// 来源: 类方法
MIQT_EXPORT void QRect_setTopLeft(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT void QRect_setBottomRight(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT void QRect_setTopRight(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT void QRect_setBottomLeft(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT QPoint* QRect_topLeft(const QRect* self);
// 来源: 类方法
MIQT_EXPORT QPoint* QRect_bottomRight(const QRect* self);
// 来源: 类方法
MIQT_EXPORT QPoint* QRect_topRight(const QRect* self);
// 来源: 类方法
MIQT_EXPORT QPoint* QRect_bottomLeft(const QRect* self);
// 来源: 类方法
MIQT_EXPORT QPoint* QRect_center(const QRect* self);
// 来源: 类方法
MIQT_EXPORT void QRect_moveLeft(QRect* self, int pos);
// 来源: 类方法
MIQT_EXPORT void QRect_moveTop(QRect* self, int pos);
// 来源: 类方法
MIQT_EXPORT void QRect_moveRight(QRect* self, int pos);
// 来源: 类方法
MIQT_EXPORT void QRect_moveBottom(QRect* self, int pos);
// 来源: 类方法
MIQT_EXPORT void QRect_moveTopLeft(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT void QRect_moveBottomRight(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT void QRect_moveTopRight(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT void QRect_moveBottomLeft(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT void QRect_moveCenter(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT void QRect_translate(QRect* self, int dx, int dy);
// 来源: 类方法
MIQT_EXPORT void QRect_translateWithQPoint(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_translated(const QRect* self, int dx, int dy);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_translatedWithQPoint(const QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_transposed(const QRect* self);
// 来源: 类方法
MIQT_EXPORT void QRect_moveTo(QRect* self, int x, int t);
// 来源: 类方法
MIQT_EXPORT void QRect_moveToWithQPoint(QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT void QRect_setRect(QRect* self, int x, int y, int w, int h);
// 来源: 类方法
MIQT_EXPORT void QRect_getRect(const QRect* self, int* x, int* y, int* w, int* h);
// 来源: 类方法
MIQT_EXPORT void QRect_setCoords(QRect* self, int x1, int y1, int x2, int y2);
// 来源: 类方法
MIQT_EXPORT void QRect_getCoords(const QRect* self, int* x1, int* y1, int* x2, int* y2);
// 来源: 类方法
MIQT_EXPORT void QRect_adjust(QRect* self, int x1, int y1, int x2, int y2);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_adjusted(const QRect* self, int x1, int y1, int x2, int y2);
// 来源: 类方法
MIQT_EXPORT QSize* QRect_size(const QRect* self);
// 来源: 类方法
MIQT_EXPORT int QRect_width(const QRect* self);
// 来源: 类方法
MIQT_EXPORT int QRect_height(const QRect* self);
// 来源: 类方法
MIQT_EXPORT void QRect_setWidth(QRect* self, int w);
// 来源: 类方法
MIQT_EXPORT void QRect_setHeight(QRect* self, int h);
// 来源: 类方法
MIQT_EXPORT void QRect_setSize(QRect* self, QSize* s);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_operatorBitwiseOr(const QRect* self, QRect* r);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_operatorBitwiseAnd(const QRect* self, QRect* r);
// 来源: 类方法
MIQT_EXPORT void QRect_operatorBitwiseOrAssign(QRect* self, QRect* r);
// 来源: 类方法
MIQT_EXPORT void QRect_operatorBitwiseAndAssign(QRect* self, QRect* r);
// 来源: 类方法
MIQT_EXPORT bool QRect_contains(const QRect* self, QRect* r);
// 来源: 类方法
MIQT_EXPORT bool QRect_containsWithQPoint(const QRect* self, QPoint* p);
// 来源: 类方法
MIQT_EXPORT bool QRect_contains2(const QRect* self, int x, int y);
// 来源: 类方法
MIQT_EXPORT bool QRect_contains3(const QRect* self, int x, int y, bool proper);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_united(const QRect* self, QRect* other);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_intersected(const QRect* self, QRect* other);
// 来源: 类方法
MIQT_EXPORT bool QRect_intersects(const QRect* self, QRect* r);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_marginsAdded(const QRect* self, QMargins* margins);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_marginsRemoved(const QRect* self, QMargins* margins);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_operatorPlusAssign(QRect* self, QMargins* margins);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_operatorMinusAssign(QRect* self, QMargins* margins);
// 来源: 类方法
MIQT_EXPORT QRect* QRect_span(QPoint* p1, QPoint* p2);
// 来源: 类方法
MIQT_EXPORT QRectF* QRect_toRectF(const QRect* self);
// 来源: 类方法
MIQT_EXPORT bool QRect_contains4(const QRect* self, QRect* r, bool proper);
// 来源: 类方法
MIQT_EXPORT bool QRect_contains5(const QRect* self, QPoint* p, bool proper);

// 来源: 析构函数
MIQT_EXPORT void QRect_delete(QRect* self);

// 来源: 类 (QRectF)
// 来源: 构造函数
MIQT_EXPORT QRectF* QRectF_new();
// 来源: 构造函数
MIQT_EXPORT QRectF* QRectF_new2(QPointF* topleft, QSizeF* size);
// 来源: 构造函数
MIQT_EXPORT QRectF* QRectF_new3(QPointF* topleft, QPointF* bottomRight);
// 来源: 构造函数
MIQT_EXPORT QRectF* QRectF_new4(double left, double top, double width, double height);
// 来源: 构造函数
MIQT_EXPORT QRectF* QRectF_new5(QRect* rect);
// 来源: 构造函数
MIQT_EXPORT QRectF* QRectF_new6(QRectF* param1);
// 来源: 类方法
MIQT_EXPORT bool QRectF_isNull(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT bool QRectF_isEmpty(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT bool QRectF_isValid(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_normalized(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT double QRectF_left(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT double QRectF_top(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT double QRectF_right(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT double QRectF_bottom(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT double QRectF_x(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT double QRectF_y(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT void QRectF_setLeft(QRectF* self, double pos);
// 来源: 类方法
MIQT_EXPORT void QRectF_setTop(QRectF* self, double pos);
// 来源: 类方法
MIQT_EXPORT void QRectF_setRight(QRectF* self, double pos);
// 来源: 类方法
MIQT_EXPORT void QRectF_setBottom(QRectF* self, double pos);
// 来源: 类方法
MIQT_EXPORT void QRectF_setX(QRectF* self, double pos);
// 来源: 类方法
MIQT_EXPORT void QRectF_setY(QRectF* self, double pos);
// 来源: 类方法
MIQT_EXPORT QPointF* QRectF_topLeft(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT QPointF* QRectF_bottomRight(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT QPointF* QRectF_topRight(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT QPointF* QRectF_bottomLeft(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT QPointF* QRectF_center(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT void QRectF_setTopLeft(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QRectF_setBottomRight(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QRectF_setTopRight(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QRectF_setBottomLeft(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveLeft(QRectF* self, double pos);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveTop(QRectF* self, double pos);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveRight(QRectF* self, double pos);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveBottom(QRectF* self, double pos);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveTopLeft(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveBottomRight(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveTopRight(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveBottomLeft(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveCenter(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QRectF_translate(QRectF* self, double dx, double dy);
// 来源: 类方法
MIQT_EXPORT void QRectF_translateWithQPointF(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_translated(const QRectF* self, double dx, double dy);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_translatedWithQPointF(const QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_transposed(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveTo(QRectF* self, double x, double y);
// 来源: 类方法
MIQT_EXPORT void QRectF_moveToWithQPointF(QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT void QRectF_setRect(QRectF* self, double x, double y, double w, double h);
// 来源: 类方法
MIQT_EXPORT void QRectF_getRect(const QRectF* self, double* x, double* y, double* w, double* h);
// 来源: 类方法
MIQT_EXPORT void QRectF_setCoords(QRectF* self, double x1, double y1, double x2, double y2);
// 来源: 类方法
MIQT_EXPORT void QRectF_getCoords(const QRectF* self, double* x1, double* y1, double* x2, double* y2);
// 来源: 类方法
MIQT_EXPORT void QRectF_adjust(QRectF* self, double x1, double y1, double x2, double y2);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_adjusted(const QRectF* self, double x1, double y1, double x2, double y2);
// 来源: 类方法
MIQT_EXPORT QSizeF* QRectF_size(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT double QRectF_width(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT double QRectF_height(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT void QRectF_setWidth(QRectF* self, double w);
// 来源: 类方法
MIQT_EXPORT void QRectF_setHeight(QRectF* self, double h);
// 来源: 类方法
MIQT_EXPORT void QRectF_setSize(QRectF* self, QSizeF* s);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_operatorBitwiseOr(const QRectF* self, QRectF* r);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_operatorBitwiseAnd(const QRectF* self, QRectF* r);
// 来源: 类方法
MIQT_EXPORT void QRectF_operatorBitwiseOrAssign(QRectF* self, QRectF* r);
// 来源: 类方法
MIQT_EXPORT void QRectF_operatorBitwiseAndAssign(QRectF* self, QRectF* r);
// 来源: 类方法
MIQT_EXPORT bool QRectF_contains(const QRectF* self, QRectF* r);
// 来源: 类方法
MIQT_EXPORT bool QRectF_containsWithQPointF(const QRectF* self, QPointF* p);
// 来源: 类方法
MIQT_EXPORT bool QRectF_contains2(const QRectF* self, double x, double y);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_united(const QRectF* self, QRectF* other);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_intersected(const QRectF* self, QRectF* other);
// 来源: 类方法
MIQT_EXPORT bool QRectF_intersects(const QRectF* self, QRectF* r);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_marginsAdded(const QRectF* self, QMarginsF* margins);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_marginsRemoved(const QRectF* self, QMarginsF* margins);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_operatorPlusAssign(QRectF* self, QMarginsF* margins);
// 来源: 类方法
MIQT_EXPORT QRectF* QRectF_operatorMinusAssign(QRectF* self, QMarginsF* margins);
// 来源: 类方法
MIQT_EXPORT QRect* QRectF_toRect(const QRectF* self);
// 来源: 类方法
MIQT_EXPORT QRect* QRectF_toAlignedRect(const QRectF* self);

// 来源: 析构函数
MIQT_EXPORT void QRectF_delete(QRectF* self);

// 来源: 类 (QSocketNotifier)
MIQT_EXPORT void QSocketNotifier_virtbase(QSocketNotifier* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QSocketNotifier_metaObject(const QSocketNotifier* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QSocketNotifier_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT void QSocketNotifier_setSocket(QSocketNotifier* self, int64_t socket);
// 来源: 类方法
MIQT_EXPORT int64_t QSocketNotifier_socket(const QSocketNotifier* self);
// 来源: 类方法
MIQT_EXPORT bool QSocketNotifier_isValid(const QSocketNotifier* self);
// 来源: 类方法
MIQT_EXPORT bool QSocketNotifier_isEnabled(const QSocketNotifier* self);
// 来源: 类方法
MIQT_EXPORT void QSocketNotifier_setEnabled(QSocketNotifier* self, bool enabled);
// 来源: 类方法
MIQT_EXPORT bool QSocketNotifier_event(QSocketNotifier* self, QEvent* param1);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QSocketNotifier_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QSocketNotifier_tr3(const char* s, const char* c, int n);

// 来源: 析构函数
MIQT_EXPORT void QSocketNotifier_delete(QSocketNotifier* self);

// 来源: 类 (QTimeLine)
// 来源: 构造函数
MIQT_EXPORT QTimeLine* QTimeLine_new();
// 来源: 构造函数
MIQT_EXPORT QTimeLine* QTimeLine_new2(int duration);
// 来源: 构造函数
MIQT_EXPORT QTimeLine* QTimeLine_new3(int duration, QObject* parent);
MIQT_EXPORT void QTimeLine_virtbase(QTimeLine* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QTimeLine_metaObject(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeLine_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT int QTimeLine_state(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT int QTimeLine_loopCount(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_setLoopCount(QTimeLine* self, int count);
// 来源: 类方法
MIQT_EXPORT int QTimeLine_direction(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_setDirection(QTimeLine* self, int direction);
// 来源: 类方法
MIQT_EXPORT int QTimeLine_duration(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_setDuration(QTimeLine* self, int duration);
// 来源: 类方法
MIQT_EXPORT int QTimeLine_startFrame(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_setStartFrame(QTimeLine* self, int frame);
// 来源: 类方法
MIQT_EXPORT int QTimeLine_endFrame(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_setEndFrame(QTimeLine* self, int frame);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_setFrameRange(QTimeLine* self, int startFrame, int endFrame);
// 来源: 类方法
MIQT_EXPORT int QTimeLine_updateInterval(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_setUpdateInterval(QTimeLine* self, int interval);
// 来源: 类方法
MIQT_EXPORT QEasingCurve* QTimeLine_easingCurve(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_setEasingCurve(QTimeLine* self, QEasingCurve* curve);
// 来源: 类方法
MIQT_EXPORT int QTimeLine_currentTime(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT int QTimeLine_currentFrame(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT double QTimeLine_currentValue(const QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT int QTimeLine_frameForTime(const QTimeLine* self, int msec);
// 来源: 类方法
MIQT_EXPORT double QTimeLine_valueForTime(const QTimeLine* self, int msec);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_start(QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_resume(QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_stop(QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_setPaused(QTimeLine* self, bool paused);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_setCurrentTime(QTimeLine* self, int msec);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_toggleDirection(QTimeLine* self);
// 来源: 类方法
MIQT_EXPORT void QTimeLine_timerEvent(QTimeLine* self, QTimerEvent* event);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeLine_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTimeLine_tr3(const char* s, const char* c, int n);

// 来源: 虚函数
MIQT_EXPORT bool QTimeLine_override_virtual_valueForTime(void* self, intptr_t slot);
MIQT_EXPORT double QTimeLine_virtualbase_valueForTime(const void* self, int msec);
// 来源: 虚函数
MIQT_EXPORT bool QTimeLine_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QTimeLine_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QTimeLine_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QTimeLine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT QObject* QTimeLine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QTimeLine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QTimeLine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QTimeLine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QTimeLine_delete(QTimeLine* self);

// 来源: 类 (QTranslator)
// 来源: 构造函数
MIQT_EXPORT QTranslator* QTranslator_new();
// 来源: 构造函数
MIQT_EXPORT QTranslator* QTranslator_new2(QObject* parent);
MIQT_EXPORT void QTranslator_virtbase(QTranslator* src, QObject** outptr_QObject);
// 来源: 类方法
MIQT_EXPORT QMetaObject* QTranslator_metaObject(const QTranslator* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTranslator_tr(const char* s);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTranslator_translate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_isEmpty(const QTranslator* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTranslator_language(const QTranslator* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTranslator_filePath(const QTranslator* self);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_load(QTranslator* self, struct miqt_string filename);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_load2(QTranslator* self, QLocale* locale, struct miqt_string filename);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_load3(QTranslator* self, const unsigned char* data, int len);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTranslator_tr2(const char* s, const char* c);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QTranslator_tr3(const char* s, const char* c, int n);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_load4(QTranslator* self, struct miqt_string filename, struct miqt_string directory);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_load5(QTranslator* self, struct miqt_string filename, struct miqt_string directory, struct miqt_string search_delimiters);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_load6(QTranslator* self, struct miqt_string filename, struct miqt_string directory, struct miqt_string search_delimiters, struct miqt_string suffix);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_load7(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_load8(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix, struct miqt_string directory);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_load9(QTranslator* self, QLocale* locale, struct miqt_string filename, struct miqt_string prefix, struct miqt_string directory, struct miqt_string suffix);
// 来源: 类方法
MIQT_EXPORT bool QTranslator_load10(QTranslator* self, const unsigned char* data, int len, struct miqt_string directory);

// 来源: 虚函数
MIQT_EXPORT bool QTranslator_override_virtual_translate(void* self, intptr_t slot);
MIQT_EXPORT struct miqt_string QTranslator_virtualbase_translate(const void* self, const char* context, const char* sourceText, const char* disambiguation, int n);
// 来源: 虚函数
MIQT_EXPORT bool QTranslator_override_virtual_isEmpty(void* self, intptr_t slot);
MIQT_EXPORT bool QTranslator_virtualbase_isEmpty(const void* self);
// 来源: 虚函数
MIQT_EXPORT bool QTranslator_override_virtual_event(void* self, intptr_t slot);
MIQT_EXPORT bool QTranslator_virtualbase_event(void* self, QEvent* event);
// 来源: 虚函数
MIQT_EXPORT bool QTranslator_override_virtual_eventFilter(void* self, intptr_t slot);
MIQT_EXPORT bool QTranslator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

// 来源: 受保护方法
MIQT_EXPORT QObject* QTranslator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QTranslator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
// 来源: 受保护方法
MIQT_EXPORT int QTranslator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
// 来源: 受保护方法
MIQT_EXPORT bool QTranslator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

// 来源: 析构函数
MIQT_EXPORT void QTranslator_delete(QTranslator* self);

// 来源: 类 (QUrlQuery)
// 来源: 构造函数
MIQT_EXPORT QUrlQuery* QUrlQuery_new();
// 来源: 构造函数
MIQT_EXPORT QUrlQuery* QUrlQuery_new2(QUrl* url);
// 来源: 构造函数
MIQT_EXPORT QUrlQuery* QUrlQuery_new3(struct miqt_string queryString);
// 来源: 构造函数
MIQT_EXPORT QUrlQuery* QUrlQuery_new4(QUrlQuery* other);
// 来源: 类方法
MIQT_EXPORT void QUrlQuery_swap(QUrlQuery* self, QUrlQuery* other);
// 来源: 类方法
MIQT_EXPORT bool QUrlQuery_isEmpty(const QUrlQuery* self);
// 来源: 类方法
MIQT_EXPORT bool QUrlQuery_isDetached(const QUrlQuery* self);
// 来源: 类方法
MIQT_EXPORT void QUrlQuery_clear(QUrlQuery* self);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrlQuery_query(const QUrlQuery* self);
// 来源: 类方法
MIQT_EXPORT void QUrlQuery_setQuery(QUrlQuery* self, struct miqt_string queryString);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrlQuery_toString(const QUrlQuery* self);
// 来源: 类方法
MIQT_EXPORT void QUrlQuery_setQueryDelimiters(QUrlQuery* self, QChar* valueDelimiter, QChar* pairDelimiter);
// 来源: 类方法
MIQT_EXPORT QChar* QUrlQuery_queryValueDelimiter(const QUrlQuery* self);
// 来源: 类方法
MIQT_EXPORT QChar* QUrlQuery_queryPairDelimiter(const QUrlQuery* self);
// 来源: 类方法
MIQT_EXPORT bool QUrlQuery_hasQueryItem(const QUrlQuery* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT void QUrlQuery_addQueryItem(QUrlQuery* self, struct miqt_string key, struct miqt_string value);
// 来源: 类方法
MIQT_EXPORT void QUrlQuery_removeQueryItem(QUrlQuery* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrlQuery_queryItemValue(const QUrlQuery* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QUrlQuery_allQueryItemValues(const QUrlQuery* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT void QUrlQuery_removeAllQueryItems(QUrlQuery* self, struct miqt_string key);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrlQuery_queryWithEncoding(const QUrlQuery* self, int encoding);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrlQuery_toStringWithEncoding(const QUrlQuery* self, int encoding);
// 来源: 类方法
MIQT_EXPORT struct miqt_string QUrlQuery_queryItemValue2(const QUrlQuery* self, struct miqt_string key, int encoding);
// 来源: 类方法
MIQT_EXPORT struct miqt_array /* of struct miqt_string */  QUrlQuery_allQueryItemValues2(const QUrlQuery* self, struct miqt_string key, int encoding);

// 来源: 析构函数
MIQT_EXPORT void QUrlQuery_delete(QUrlQuery* self);

#endif // MIQT_TYPES_ONLY

#ifdef __cplusplus
} /* extern C */
#endif

#endif
