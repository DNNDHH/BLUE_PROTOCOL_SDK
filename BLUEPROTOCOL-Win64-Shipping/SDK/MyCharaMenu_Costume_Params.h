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
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnItemListUpdate
	 */
	struct UMyCharaMenu_Costume_C_OnItemListUpdate_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OpenExpiredMessageWindow
	 */
	struct UMyCharaMenu_Costume_C_OpenExpiredMessageWindow_Params
	{
	public:
		int32_t                                                    CostumeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOpen;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JBO2[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.LocationToEquipType
	 */
	struct UMyCharaMenu_Costume_C_LocationToEquipType_Params
	{
	public:
		ECharaPartsLocation                                        CharaPartsLocation;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          CharaEquipType;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ClearPreviewDatas
	 */
	struct UMyCharaMenu_Costume_C_ClearPreviewDatas_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetDressOnOffButton
	 */
	struct UMyCharaMenu_Costume_C_SetDressOnOffButton_Params
	{
	public:
		bool                                                       InIsDressOn;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.FindConflictingCompositeWearbyEquipInfo
	 */
	struct UMyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo_Params
	{
	public:
		ESBCharaEquipType                                          EquipType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharacterGender                                         Gender;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsConflict;                                              // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBCharaEquipType                                          ConflictEquipType;                                       // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdatePlayerCharacter_Func
	 */
	struct UMyCharaMenu_Costume_C_UpdatePlayerCharacter_Func_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckCostumeRingEquipment
	 */
	struct UMyCharaMenu_Costume_C_CheckCostumeRingEquipment_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Equipment;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Preview;                                                 // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBCharaEquipType                                          EquipType;                                               // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateEquippedCostumeInfo
	 */
	struct UMyCharaMenu_Costume_C_UpdateEquippedCostumeInfo_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OutputEquipmentCostumeLog
	 */
	struct UMyCharaMenu_Costume_C_OutputEquipmentCostumeLog_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCostumePreview
	 */
	struct UMyCharaMenu_Costume_C_UpdateCostumePreview_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.IsPreviewMode
	 */
	struct UMyCharaMenu_Costume_C_IsPreviewMode_Params
	{
	public:
		bool                                                       Preview;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QNRO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetPreviewCostumeUniqueId
	 */
	struct UMyCharaMenu_Costume_C_GetPreviewCostumeUniqueId_Params
	{
	public:
		ESBCharaEquipType                                          EquipmentType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7TT8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckCostumeEquipment
	 */
	struct UMyCharaMenu_Costume_C_CheckCostumeEquipment_Params
	{
	public:
		ESBCharaEquipType                                          EquipType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EquipFlag;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetCharaCreateParameter
	 */
	struct UMyCharaMenu_Costume_C_SetCharaCreateParameter_Params
	{
	public:
		struct FCharaEquipItemCharaCreateInfo                      CreateInfo;                                              // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeDecideButtonVisibility
	 */
	struct UMyCharaMenu_Costume_C_ChangeDecideButtonVisibility_Params
	{
	public:
		bool                                                       Animation;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R660[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckPreviewUnusedItem
	 */
	struct UMyCharaMenu_Costume_C_CheckPreviewUnusedItem_Params
	{
	public:
		bool                                                       Unused;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.MakeSaveRequestItemData
	 */
	struct UMyCharaMenu_Costume_C_MakeSaveRequestItemData_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddPreviewCostumeItem
	 */
	struct UMyCharaMenu_Costume_C_AddPreviewCostumeItem_Params
	{
	public:
		struct FCharaEquipItemInfo                                 NewCostumeEquipItemInfo;                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBCharaEquipType                                          CostumeEquipType;                                        // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NRBC[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCharaEquipItemCharaCreateInfo                      NewCostumeEquipCharaCreateInfo;                          // 0x0030(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddPreviewCostumeItemMulti
	 */
	struct UMyCharaMenu_Costume_C_AddPreviewCostumeItemMulti_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.InitDefaultCostumeData
	 */
	struct UMyCharaMenu_Costume_C_InitDefaultCostumeData_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddNewEquipInfo
	 */
	struct UMyCharaMenu_Costume_C_AddNewEquipInfo_Params
	{
	public:
		struct FCharaEquipItemInfo                                 NewCostumeEquipItemInfo;                                 // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FCharaEquipItemCharaCreateInfo                      NewCostumeEquipCharaCreateInfo;                          // 0x0028(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBCharaEquipType                                          CostumeEquipType;                                        // 0x0050(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E98A[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ClearNewEquipInfo
	 */
	struct UMyCharaMenu_Costume_C_ClearNewEquipInfo_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeFunc
	 */
	struct UMyCharaMenu_Costume_C_ChangeCostumeFunc_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetUIBlockerVisibility
	 */
	struct UMyCharaMenu_Costume_C_SetUIBlockerVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetAvatarCostumePartsLoadingFlag
	 */
	struct UMyCharaMenu_Costume_C_GetAvatarCostumePartsLoadingFlag_Params
	{
	public:
		bool                                                       OutIsAvatarCostumePartsLoading;                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetAvatarCostumePartsLoadingFlag
	 */
	struct UMyCharaMenu_Costume_C_SetAvatarCostumePartsLoadingFlag_Params
	{
	public:
		bool                                                       InIsLoading;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeProcTerm
	 */
	struct UMyCharaMenu_Costume_C_ChangeCostumeProcTerm_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeProcStart
	 */
	struct UMyCharaMenu_Costume_C_ChangeCostumeProcStart_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetEquipItemCharaCreateInfoFromEquipItemInfo
	 */
	struct UMyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo_Params
	{
	public:
		struct FCharaEquipItemInfo                                 InEquipItemInfo;                                         // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    InMaterialId;                                            // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          InEquipType;                                             // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDetachEquip;                                           // 0x002D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x002E(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q5VA[0x1];                                   // 0x002F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCharaEquipItemCharaCreateInfo                      OutEquipItemCharaCreateInfo;                             // 0x0030(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Close
	 */
	struct UMyCharaMenu_Costume_C_Close_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature_Params
	{
	public:
		class FString                                              InRingUniqueId;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature_Params
	{
	public:
		bool                                                       InIsLeftHand;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature_Params
	{
	public:
		class FString                                              InItemUniqueId;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnAnimationFinished
	 */
	struct UMyCharaMenu_Costume_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveCostumeMultipleEquipsDelegate
	 */
	struct UMyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AVB4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0008(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveCostumeEquipDelegate
	 */
	struct UMyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y268[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0008(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCostumeIconTable
	 */
	struct UMyCharaMenu_Costume_C_UpdateCostumeIconTable_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnOtherCostumeCandidateSelected
	 */
	struct UMyCharaMenu_Costume_C_OnOtherCostumeCandidateSelected_Params
	{
	public:
		bool                                                       IsDetach;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.DetachCostume
	 */
	struct UMyCharaMenu_Costume_C_DetachCostume_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnDetach_CostumeCandidateList_イベント
	 */
	struct UMyCharaMenu_Costume_C_OnDetach_CostumeCandidateList__Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnIconSelected_CostumeCandidateList_イベント
	 */
	struct UMyCharaMenu_Costume_C_OnIconSelected_CostumeCandidateList__Params
	{
	public:
		class FString                                              InItemUniqueId;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdatePlayerCharacterCostume
	 */
	struct UMyCharaMenu_Costume_C_UpdatePlayerCharacterCostume_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveEquipInfo_Costume
	 */
	struct UMyCharaMenu_Costume_C_OnSaveEquipInfo_Costume_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KP6O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0008(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostume
	 */
	struct UMyCharaMenu_Costume_C_ChangeCostume_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Destruct
	 */
	struct UMyCharaMenu_Costume_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Init
	 */
	struct UMyCharaMenu_Costume_C_Init_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Construct
	 */
	struct UMyCharaMenu_Costume_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature_Params
	{
	public:
		bool                                                       InIsDressVisibilitySwitchOn;                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnUnexistHigherPriorityCapture
	 */
	struct UMyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnExistHigherPriorityCapture
	 */
	struct UMyCharaMenu_Costume_C_OnExistHigherPriorityCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.DestructCharaImageGraph
	 */
	struct UMyCharaMenu_Costume_C_DestructCharaImageGraph_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ConstructCharaImageGraph
	 */
	struct UMyCharaMenu_Costume_C_ConstructCharaImageGraph_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExpiredItemNoticeSystemMessageTimerEnd
	 */
	struct UMyCharaMenu_Costume_C_ExpiredItemNoticeSystemMessageTimerEnd_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCharaImageVisibility_Internal
	 */
	struct UMyCharaMenu_Costume_C_UpdateCharaImageVisibility_Internal_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExpiredItemNoticeSystemMessageEnd
	 */
	struct UMyCharaMenu_Costume_C_ExpiredItemNoticeSystemMessageEnd_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnTimerEndForSaveCostumeEquipInfoRequestFailureProc
	 */
	struct UMyCharaMenu_Costume_C_OnTimerEndForSaveCostumeEquipInfoRequestFailureProc_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc
	 */
	struct UMyCharaMenu_Costume_C_OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.RequestSaveCharaCostumeMultipleEquips
	 */
	struct UMyCharaMenu_Costume_C_RequestSaveCharaCostumeMultipleEquips_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnCostumeChange
	 */
	struct UMyCharaMenu_Costume_C_OnCostumeChange_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPreviewCostumeChange
	 */
	struct UMyCharaMenu_Costume_C_OnPreviewCostumeChange_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ResetPreviewAvaterCostume
	 */
	struct UMyCharaMenu_Costume_C_ResetPreviewAvaterCostume_Params
	{
	public:
		bool                                                       ForceReset;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnShowExpiredItemMessage
	 */
	struct UMyCharaMenu_Costume_C_OnShowExpiredItemMessage_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPartsTimeEventStart
	 */
	struct UMyCharaMenu_Costume_C_OnPartsTimeEventStart_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnOpenMenu
	 */
	struct UMyCharaMenu_Costume_C_OnOpenMenu_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExecuteUbergraph_MyCharaMenu_Costume
	 */
	struct UMyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7H5W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnRefreshPreviewCostume__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_OnRefreshPreviewCostume__DelegateSignature_Params
	{
	public:
		struct FSBCharaCreateParameter                             Parameter;                                               // 0x0000(0x03C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSetAvatarImageReuploadFlag__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_OnSetAvatarImageReuploadFlag__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSetCostumePreviewParameter__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature_Params
	{
	public:
		struct FSBCharaCreateParameter                             CharaCreateParameter;                                    // 0x0000(0x03C0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Start;                                                   // 0x03C0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature_Params
	{
	public:
		bool                                                       InIsCostumeOn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarSwitchPosing__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature_Params
	{
	public:
		class FName                                                OnPosingCommandName;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSwitchPosingToPrev;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarRotateActive__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_OnPlayerAvatarRotateActive__DelegateSignature_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnChangeCostumeProc__DelegateSignature
	 */
	struct UMyCharaMenu_Costume_C_OnChangeCostumeProc__DelegateSignature_Params
	{
	public:
		bool                                                       ProcStart;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
