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
	 * Function DebugChildButton.DebugChildButton_C.SetText
	 */
	struct UDebugChildButton_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.GetText
	 */
	struct UDebugChildButton_C_GetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.CalcChildMenuPosition
	 */
	struct UDebugChildButton_C_CalcChildMenuPosition_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.Set Menu Focus
	 */
	struct UDebugChildButton_C_SetMenuFocus_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QCU7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.Construct
	 */
	struct UDebugChildButton_C_Construct_Params
	{	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.OnGetFocus
	 */
	struct UDebugChildButton_C_OnGetFocus_Params
	{	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.OnLostFocus
	 */
	struct UDebugChildButton_C_OnLostFocus_Params
	{	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.ExecFunc
	 */
	struct UDebugChildButton_C_ExecFunc_Params
	{	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugChildButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.OnPressOk
	 */
	struct UDebugChildButton_C_OnPressOk_Params
	{	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.ExecuteUbergraph_DebugChildButton
	 */
	struct UDebugChildButton_C_ExecuteUbergraph_DebugChildButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8KGU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugChildButton.DebugChildButton_C.EventDispatcher_OnClicked__DelegateSignature
	 */
	struct UDebugChildButton_C_EventDispatcher_OnClicked__DelegateSignature_Params
	{
	public:
		class UDebugChildButton_C*                                 DebugButton;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
