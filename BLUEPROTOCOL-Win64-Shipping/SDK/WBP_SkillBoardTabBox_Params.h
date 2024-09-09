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
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetKeyCheck
	 */
	struct UWBP_SkillBoardTabBox_C_SetKeyCheck_Params
	{
	public:
		bool                                                       KeyCheck;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Select
	 */
	struct UWBP_SkillBoardTabBox_C_Select_Params
	{
	public:
		ESBClassType                                               Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4V92[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CheckPagerBtn
	 */
	struct UWBP_SkillBoardTabBox_C_CheckPagerBtn_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetBannerSelect
	 */
	struct UWBP_SkillBoardTabBox_C_SetBannerSelect_Params
	{
	public:
		class UWBP_SkillBoardTabBox_Banner_C*                      Banner;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H99R[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetBannerEnable
	 */
	struct UWBP_SkillBoardTabBox_C_SetBannerEnable_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.UpdateBannerInfo
	 */
	struct UWBP_SkillBoardTabBox_C_UpdateBannerInfo_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.UpdateTabInfo
	 */
	struct UWBP_SkillBoardTabBox_C_UpdateTabInfo_Params
	{
	public:
		bool                                                       Prev;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Next;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2N1P[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Click;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Create List
	 */
	struct UWBP_SkillBoardTabBox_C_CreateList_Params
	{
	public:
		TArray<ESBClassType>                                       EventList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Initialize
	 */
	struct UWBP_SkillBoardTabBox_C_Initialize_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.PreConstruct
	 */
	struct UWBP_SkillBoardTabBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Construct
	 */
	struct UWBP_SkillBoardTabBox_C_Construct_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_14_OnUnHovered__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_14_OnUnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_17_OnUnHovered__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_17_OnUnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_19_OnHovered__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_19_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_20_OnUnHovered__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_20_OnUnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.LRVisibleUpdeta
	 */
	struct UWBP_SkillBoardTabBox_C_LRVisibleUpdeta_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Bind
	 */
	struct UWBP_SkillBoardTabBox_C_Bind_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_1
	 */
	struct UWBP_SkillBoardTabBox_C_CustomEvent_1_Params
	{
	public:
		ESBPadKeySkinType                                          SkinType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_2
	 */
	struct UWBP_SkillBoardTabBox_C_CustomEvent_2_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Unbind
	 */
	struct UWBP_SkillBoardTabBox_C_Unbind_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Destruct
	 */
	struct UWBP_SkillBoardTabBox_C_Destruct_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_3
	 */
	struct UWBP_SkillBoardTabBox_C_CustomEvent_3_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CustomEvent_4
	 */
	struct UWBP_SkillBoardTabBox_C_CustomEvent_4_Params
	{	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.ExecuteUbergraph_WBP_SkillBoardTabBox
	 */
	struct UWBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.OnClickBanner__DelegateSignature
	 */
	struct UWBP_SkillBoardTabBox_C_OnClickBanner__DelegateSignature_Params
	{
	public:
		ESBClassType                                               Typr;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
