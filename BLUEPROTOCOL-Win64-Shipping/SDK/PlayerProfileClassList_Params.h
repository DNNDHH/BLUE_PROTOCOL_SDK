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
	 * Function PlayerProfileClassList.PlayerProfileClassList_C.Init
	 */
	struct UPlayerProfileClassList_C_Init_Params
	{	};

	/**
	 * Function PlayerProfileClassList.PlayerProfileClassList_C.AddClass
	 */
	struct UPlayerProfileClassList_C_AddClass_Params
	{
	public:
		ESBClassType                                               Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PZ0R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Level;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfileClassList.PlayerProfileClassList_C.BndEvt__BtnOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlayerProfileClassList_C_BndEvt__BtnOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfileClassList.PlayerProfileClassList_C.BndEvt__BtnClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlayerProfileClassList_C_BndEvt__BtnClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerProfileClassList.PlayerProfileClassList_C.OnAnimationFinished
	 */
	struct UPlayerProfileClassList_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerProfileClassList.PlayerProfileClassList_C.ExecuteUbergraph_PlayerProfileClassList
	 */
	struct UPlayerProfileClassList_C_ExecuteUbergraph_PlayerProfileClassList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
