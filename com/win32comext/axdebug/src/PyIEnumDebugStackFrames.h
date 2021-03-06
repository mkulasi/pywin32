// This file declares the IEnumDebugStackFrames Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIEnumDebugStackFrames : public PyIUnknown {
   public:
    MAKE_PYCOM_CTOR_ERRORINFO(PyIEnumDebugStackFrames, IID_IEnumDebugStackFrames);
    static IEnumDebugStackFrames *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *Next(PyObject *self, PyObject *args);
    static PyObject *Skip(PyObject *self, PyObject *args);
    static PyObject *Reset(PyObject *self, PyObject *args);
    static PyObject *Clone(PyObject *self, PyObject *args);

   protected:
    PyIEnumDebugStackFrames(IUnknown *pdisp);
    ~PyIEnumDebugStackFrames();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGEnumDebugStackFrames : public PyGatewayBase, public IEnumDebugStackFrames {
   protected:
    PyGEnumDebugStackFrames(PyObject *instance) : PyGatewayBase(instance) { ; }
    PYGATEWAY_MAKE_SUPPORT(PyGEnumDebugStackFrames, IEnumDebugStackFrames, IID_IEnumDebugStackFrames)

    // IEnumDebugStackFrames
    STDMETHOD(Next)(ULONG celt, DebugStackFrameDescriptor __RPC_FAR *ppdsf, ULONG __RPC_FAR *pceltFetched);

    STDMETHOD(Skip)(ULONG celt);

    STDMETHOD(Reset)(void);

    STDMETHOD(Clone)(IEnumDebugStackFrames __RPC_FAR *__RPC_FAR *ppedsf);
};
