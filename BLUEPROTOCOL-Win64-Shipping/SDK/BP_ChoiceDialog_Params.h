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
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.UpdateTimeLimit
	 */
	struct UBP_ChoiceDialog_C_UpdateTimeLimit_Params
	{
	public:
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.TimeUp_Event
	 */
	struct UBP_ChoiceDialog_C_TimeUp_Event_Params
	{	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.Construct
	 */
	struct UBP_ChoiceDialog_C_Construct_Params
	{	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.Destruct
	 */
	struct UBP_ChoiceDialog_C_Destruct_Params
	{	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.AddItem
	 */
	struct UBP_ChoiceDialog_C_AddItem_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnClicked_Event_1
	 */
	struct UBP_ChoiceDialog_C_OnClicked_Event_1_Params
	{
	public:
		class UBP_ChoiceDialogItem_C*                              Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnAnimationFinished
	 */
	struct UBP_ChoiceDialog_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.Show
	 */
	struct UBP_ChoiceDialog_C_Show_Params
	{	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.AddItemFromArray
	 */
	struct UBP_ChoiceDialog_C_AddItemFromArray_Params
	{
	public:
		TArray<class FText>                                        ItemTexts;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetQuestion
	 */
	struct UBP_ChoiceDialog_C_SetQuestion_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.Tick
	 */
	struct UBP_ChoiceDialog_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChoiceDialog.BP_ChoiceDialog_C.ExecuteUbergraph_BP_ChoiceDialog
	 */
	struct UBP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
