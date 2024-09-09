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
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetData
	 */
	struct UCommunicateSettingMenu_ClassData_C_SetData_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BKH6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InClassLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            InAwardIdList;                                           // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetClassIconAndName
	 */
	struct UCommunicateSettingMenu_ClassData_C_SetClassIconAndName_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_27UU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            InAwardIdList;                                           // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ErrorDataSet
	 */
	struct UCommunicateSettingMenu_ClassData_C_ErrorDataSet_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    AwardId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetAwardId
	 */
	struct UCommunicateSettingMenu_ClassData_C_SetAwardId_Params
	{
	public:
		TArray<int32_t>                                            InAwardId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetBtnEnable
	 */
	struct UCommunicateSettingMenu_ClassData_C_SetBtnEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ExecuteUbergraph_CommunicateSettingMenu_ClassData
	 */
	struct UCommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.OnUnhver__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_OnUnhver__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.OnHover__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.OnClickEvent__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_OnClickEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ClickedBtnAwardIconItemList__DelegateSignature
	 */
	struct UCommunicateSettingMenu_ClassData_C_ClickedBtnAwardIconItemList__DelegateSignature_Params
	{
	public:
		int32_t                                                    AwardId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
