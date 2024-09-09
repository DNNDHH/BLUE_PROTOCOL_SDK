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
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.GetTooltipString
	 */
	struct UMapWidget_QuestIcon_C_GetTooltipString_Params
	{
	public:
		class FString                                              OutTooltipString;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipEnable
	 */
	struct UMapWidget_QuestIcon_C_SetTooltipEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipToIcon
	 */
	struct UMapWidget_QuestIcon_C_SetTooltipToIcon_Params
	{
	public:
		bool                                                       IsTooltip2Line;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9SCO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InToolTipText;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetTooltipString
	 */
	struct UMapWidget_QuestIcon_C_SetTooltipString_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.GetToolTipWidget_1
	 */
	struct UMapWidget_QuestIcon_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.SetIcon
	 */
	struct UMapWidget_QuestIcon_C_SetIcon_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsClosed;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_QuestIcon_C_BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMapWidget_QuestIcon_C_BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMapWidget_QuestIcon_C_BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UMapWidget_QuestIcon_C_BndEvt__MapWidget_QuestIcon_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.OnAnimationFinished
	 */
	struct UMapWidget_QuestIcon_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.ExecuteUbergraph_MapWidget_QuestIcon
	 */
	struct UMapWidget_QuestIcon_C_ExecuteUbergraph_MapWidget_QuestIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QA54[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_QuestIcon.MapWidget_QuestIcon_C.OnPressedQuestIcon__DelegateSignature
	 */
	struct UMapWidget_QuestIcon_C_OnPressedQuestIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    InQuestId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
