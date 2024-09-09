#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.OnMouseButtonUp_1
	 */
	struct UUIWrapperForMouseDrag_C_OnMouseButtonUp_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.OnMouseButtonDown_1
	 */
	struct UUIWrapperForMouseDrag_C_OnMouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.GetMousePosition
	 */
	struct UUIWrapperForMouseDrag_C_GetMousePosition_Params
	{
	public:
		struct FVector2D                                           MousePosition;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.Tick
	 */
	struct UUIWrapperForMouseDrag_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.ExecuteUbergraph_UIWrapperForMouseDrag
	 */
	struct UUIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.EventOnButtonUp__DelegateSignature
	 */
	struct UUIWrapperForMouseDrag_C_EventOnButtonUp__DelegateSignature_Params
	{	};

	/**
	 * Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.EventOnButtonDown__DelegateSignature
	 */
	struct UUIWrapperForMouseDrag_C_EventOnButtonDown__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
