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
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GetMailDatas
	 */
	struct UMailAttachmentsAcceptWindow_C_GetMailDatas_Params
	{
	public:
		TArray<struct FSBMailData>                                 MailDatas;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckLimitOver
	 */
	struct UMailAttachmentsAcceptWindow_C_CheckLimitOver_Params
	{
	public:
		TArray<struct FSBMailData>                                 MailData;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    selectValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S0UA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.AcceptFlagCheck
	 */
	struct UMailAttachmentsAcceptWindow_C_AcceptFlagCheck_Params
	{
	public:
		bool                                                       AcceptFlag;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetWarningText
	 */
	struct UMailAttachmentsAcceptWindow_C_SetWarningText_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetAcceptWindowTitle
	 */
	struct UMailAttachmentsAcceptWindow_C_SetAcceptWindowTitle_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckEquip
	 */
	struct UMailAttachmentsAcceptWindow_C_CheckEquip_Params
	{
	public:
		bool                                                       Equip;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SNIA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.On_Cmb_ViewType_GenerateWidget_1
	 */
	struct UMailAttachmentsAcceptWindow_C_On_Cmb_ViewType_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateCheckBoxVisibility
	 */
	struct UMailAttachmentsAcceptWindow_C_UpdateCheckBoxVisibility_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateViewType
	 */
	struct UMailAttachmentsAcceptWindow_C_UpdateViewType_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateVisibleList
	 */
	struct UMailAttachmentsAcceptWindow_C_GenerateVisibleList_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.CheckStorageCapacities
	 */
	struct UMailAttachmentsAcceptWindow_C_CheckStorageCapacities_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UpdateAcceptButtonEnable
	 */
	struct UMailAttachmentsAcceptWindow_C_UpdateAcceptButtonEnable_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateMailIds
	 */
	struct UMailAttachmentsAcceptWindow_C_GenerateMailIds_Params
	{
	public:
		TArray<class FString>                                      List1;                                                   // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateStorageList
	 */
	struct UMailAttachmentsAcceptWindow_C_GenerateStorageList_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.GenerateAttachmentGrid
	 */
	struct UMailAttachmentsAcceptWindow_C_GenerateAttachmentGrid_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.PreConstruct
	 */
	struct UMailAttachmentsAcceptWindow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.Construct
	 */
	struct UMailAttachmentsAcceptWindow_C_Construct_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.Close
	 */
	struct UMailAttachmentsAcceptWindow_C_Close_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.SetMailData
	 */
	struct UMailAttachmentsAcceptWindow_C_SetMailData_Params
	{
	public:
		TArray<struct FSBMailData>                                 MailDatas;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.UI_Cancel
	 */
	struct UMailAttachmentsAcceptWindow_C_UI_Cancel_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_CmnClose03_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_CmnClose03_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.OnCloseDetail
	 */
	struct UMailAttachmentsAcceptWindow_C_OnCloseDetail_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UMailAttachmentsAcceptWindow_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.ExecuteUbergraph_MailAttachmentsAcceptWindow
	 */
	struct UMailAttachmentsAcceptWindow_C_ExecuteUbergraph_MailAttachmentsAcceptWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.OnRequesting__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_OnRequesting__DelegateSignature_Params
	{	};

	/**
	 * Function MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C.OnClose__DelegateSignature
	 */
	struct UMailAttachmentsAcceptWindow_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
