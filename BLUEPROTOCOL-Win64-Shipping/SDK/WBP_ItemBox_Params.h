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
	 * Function WBP_ItemBox.WBP_ItemBox_C.IsItemBoxGenderCheck
	 */
	struct UWBP_ItemBox_C_IsItemBoxGenderCheck_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWarning;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Get Item Num_Random
	 */
	struct UWBP_ItemBox_C_GetItemNum_Random_Params
	{
	public:
		TArray<class UWBP_ItemBoxIcon_C*>                          NewLocalVar_01;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		int32_t                                                    Cnt;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Result;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.GetAmount_RewardType
	 */
	struct UWBP_ItemBox_C_GetAmount_RewardType_Params
	{
	public:
		ESBRewardItemType                                          Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5BDZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InId;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amoun;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Is Select Item
	 */
	struct UWBP_ItemBox_C_IsSelectItem_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelect;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KNCR[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Get Item Num
	 */
	struct UWBP_ItemBox_C_GetItemNum_Params
	{
	public:
		TArray<class UWBP_ItemBoxIcon_C*>                          TargetArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		int32_t                                                    Nu;                                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Max1;                                                    // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Min1;                                                    // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Is Overlapping
	 */
	struct UWBP_ItemBox_C_IsOverlapping_Params
	{
	public:
		ESBRewardItemType                                          Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HKVE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InId;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOverlapping;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T79A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.IsAddItem
	 */
	struct UWBP_ItemBox_C_IsAddItem_Params
	{
	public:
		struct FSBItemBoxContentParam                              SBItemBoxContentParam;                                   // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       IsAdd;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Get Select List
	 */
	struct UWBP_ItemBox_C_GetSelectList_Params
	{
	public:
		TArray<int32_t>                                            SelectedElement;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Get Stack Over Sale Over Sale Price
	 */
	struct UWBP_ItemBox_C_GetStackOverSaleOverSalePrice_Params
	{
	public:
		bool                                                       bOver;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W0HP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OverPlaceMax;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUseMin;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NDN7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OverPlaceMin;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WarrantyPrice;                                           // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.IsDestinationItem
	 */
	struct UWBP_ItemBox_C_IsDestinationItem_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  ItemType;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ItemBoxDestinationType                                   Destination;                                             // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Add Other Belongings
	 */
	struct UWBP_ItemBox_C_AddOtherBelongings_Params
	{
	public:
		bool                                                       Over;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanNotLostOther;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Overlapping;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Add Item Bag Scroll List
	 */
	struct UWBP_ItemBox_C_AddItemBagScrollList_Params
	{
	public:
		E_ItemBoxDestinationType                                   DestinationType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsOver;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4X7M[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Add Item Storage Scroll List
	 */
	struct UWBP_ItemBox_C_AddItemStorageScrollList_Params
	{
	public:
		bool                                                       bIsOver;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bISCanNotLost;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Get Select Other Type List
	 */
	struct UWBP_ItemBox_C_GetSelectOtherTypeList_Params
	{
	public:
		TArray<class UWBP_ItemBoxIcon_C*>                          ItemList;                                                // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Get Select Item Type List
	 */
	struct UWBP_ItemBox_C_GetSelectItemTypeList_Params
	{
	public:
		E_ItemBoxDestinationType                                   DestinationType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O0Z7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UWBP_ItemBoxIcon_C*>                          ItemList;                                                // 0x0008(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Get Scroll List Item
	 */
	struct UWBP_ItemBox_C_GetScrollListItem_Params
	{
	public:
		class UWBP_ItemBoxScrollText_Wrapper_C*                    AsWBPItemBoxScrollText;                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Construct
	 */
	struct UWBP_ItemBox_C_Construct_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Destruct
	 */
	struct UWBP_ItemBox_C_Destruct_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.HideDialog
	 */
	struct UWBP_ItemBox_C_HideDialog_Params
	{
	public:
		bool                                                       bPlayCloseSe;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.OnPress_Cancel
	 */
	struct UWBP_ItemBox_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.OnAnimationFinished
	 */
	struct UWBP_ItemBox_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.OnDestructMainWidget
	 */
	struct UWBP_ItemBox_C_OnDestructMainWidget_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ItemBox_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ItemBox_C_BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.ItemIconSetting
	 */
	struct UWBP_ItemBox_C_ItemIconSetting_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.CustomEvent_1
	 */
	struct UWBP_ItemBox_C_CustomEvent_1_Params
	{
	public:
		class UWBP_ItemBoxIcon_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.DataInitialize
	 */
	struct UWBP_ItemBox_C_DataInitialize_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.ItemSetting
	 */
	struct UWBP_ItemBox_C_ItemSetting_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.SetSelectButtonNumAndGray
	 */
	struct UWBP_ItemBox_C_SetSelectButtonNumAndGray_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.UpdateList
	 */
	struct UWBP_ItemBox_C_UpdateList_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.CreateAllGetList
	 */
	struct UWBP_ItemBox_C_CreateAllGetList_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.CreateRandomGetList
	 */
	struct UWBP_ItemBox_C_CreateRandomGetList_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.ScrollListReset
	 */
	struct UWBP_ItemBox_C_ScrollListReset_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.UpdateStackOverCheck
	 */
	struct UWBP_ItemBox_C_UpdateStackOverCheck_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.UpdateOKButton
	 */
	struct UWBP_ItemBox_C_UpdateOKButton_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_ItemBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.UpdateEquipmentWarning
	 */
	struct UWBP_ItemBox_C_UpdateEquipmentWarning_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.CreateSelectGetList
	 */
	struct UWBP_ItemBox_C_CreateSelectGetList_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.IconAllSelect
	 */
	struct UWBP_ItemBox_C_IconAllSelect_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.CreateSelectItemScrollList
	 */
	struct UWBP_ItemBox_C_CreateSelectItemScrollList_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.UpdateSelectNum
	 */
	struct UWBP_ItemBox_C_UpdateSelectNum_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_ItemBox_C_BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.InitData
	 */
	struct UWBP_ItemBox_C_InitData_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.RequestAchievement
	 */
	struct UWBP_ItemBox_C_RequestAchievement_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.CustomEvent_2
	 */
	struct UWBP_ItemBox_C_CustomEvent_2_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KHAA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBAchievementInfo>                          AchievementList;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.OnGetCryptocurrency_Event
	 */
	struct UWBP_ItemBox_C_OnGetCryptocurrency_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RWYD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBCryptoCurrency                                   Cryptocurrency;                                          // 0x0008(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.RequestGetCryptocurrency
	 */
	struct UWBP_ItemBox_C_RequestGetCryptocurrency_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.LoadRequestAdd
	 */
	struct UWBP_ItemBox_C_LoadRequestAdd_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.LoadRequestRemove
	 */
	struct UWBP_ItemBox_C_LoadRequestRemove_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.Start
	 */
	struct UWBP_ItemBox_C_Start_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_OK_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ItemBox_C_BndEvt__Button1_OK_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__Button1_OK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ItemBox_C_BndEvt__Button1_OK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.BndEvt__WBP_ItemBox_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature
	 */
	struct UWBP_ItemBox_C_BndEvt__WBP_ItemBox_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.ExecuteUbergraph_WBP_ItemBox
	 */
	struct UWBP_ItemBox_C_ExecuteUbergraph_WBP_ItemBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBox.WBP_ItemBox_C.OnEnd__DelegateSignature
	 */
	struct UWBP_ItemBox_C_OnEnd__DelegateSignature_Params
	{
	public:
		ENumberInputDialogResult                                   NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BR4Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_ItemBox_C*                                      ItemBox;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
