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
	 * Function ActionMenu.ActionMenu_C.Construct
	 */
	struct UActionMenu_C_Construct_Params
	{	};

	/**
	 * Function ActionMenu.ActionMenu_C.Destruct
	 */
	struct UActionMenu_C_Destruct_Params
	{	};

	/**
	 * Function ActionMenu.ActionMenu_C.Hide
	 */
	struct UActionMenu_C_Hide_Params
	{	};

	/**
	 * Function ActionMenu.ActionMenu_C.AddItem
	 */
	struct UActionMenu_C_AddItem_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ActionMenu.ActionMenu_C.OnClicked_Event_1
	 */
	struct UActionMenu_C_OnClicked_Event_1_Params
	{
	public:
		class UActionMenuButton_C*                                 Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionMenu.ActionMenu_C.OnAnimationFinished
	 */
	struct UActionMenu_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionMenu.ActionMenu_C.CustomEvent_1
	 */
	struct UActionMenu_C_CustomEvent_1_Params
	{	};

	/**
	 * Function ActionMenu.ActionMenu_C.ExecuteUbergraph_ActionMenu
	 */
	struct UActionMenu_C_ExecuteUbergraph_ActionMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LSIW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionMenu.ActionMenu_C.OnItemSelected__DelegateSignature
	 */
	struct UActionMenu_C_OnItemSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    SelectItemIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
