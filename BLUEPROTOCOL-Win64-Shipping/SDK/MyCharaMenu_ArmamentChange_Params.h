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
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetCaptureStudioVisibility
	 */
	struct UMyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetupMountImagineModel
	 */
	struct UMyCharaMenu_ArmamentChange_C_SetupMountImagineModel_Params
	{
	public:
		class FString                                              InMountImagineUniqueId;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.CheckIfWeaponDecayed
	 */
	struct UMyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed_Params
	{
	public:
		class FString                                              InWeaponUniqueId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<struct FSBDecayedWeaponData>                        InDecayedWeaponDatas;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutIsDecayed;                                            // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W581[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetupEquipMountImagine
	 */
	struct UMyCharaMenu_ArmamentChange_C_SetupEquipMountImagine_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.BookmarkUpdateRequest
	 */
	struct UMyCharaMenu_ArmamentChange_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Construct_Imagine
	 */
	struct UMyCharaMenu_ArmamentChange_C_Construct_Imagine_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Destruct_Imagine
	 */
	struct UMyCharaMenu_ArmamentChange_C_Destruct_Imagine_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature
	 */
	struct UMyCharaMenu_ArmamentChange_C_BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.GetEquipped_Mountmagine_UniqueId
	 */
	struct UMyCharaMenu_ArmamentChange_C_GetEquipped_Mountmagine_UniqueId_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineChangeRequest
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnMountImagineChangeRequest_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineChangeClick
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnMountImagineChangeClick_Params
	{
	public:
		class FString                                              InEquip;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineHideWindowStart
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowStart_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineHideWindowFin
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowFin_Params
	{
	public:
		bool                                                       IsChangeRequest;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSaveImagineEquipDelegate
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          EquipType;                                               // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DCLJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsEquip;                                                 // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0019(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IT8F[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0030(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd
	 */
	struct UMyCharaMenu_ArmamentChange_C_ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineSelectReleased
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnMountImagineSelectReleased_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.LoadMountImagineModel
	 */
	struct UMyCharaMenu_ArmamentChange_C_LoadMountImagineModel_Params
	{
	public:
		class FString                                              InMountImagineUniqueId;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.AssetLoadComplete
	 */
	struct UMyCharaMenu_ArmamentChange_C_AssetLoadComplete_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.AssetLoadTimeout
	 */
	struct UMyCharaMenu_ArmamentChange_C_AssetLoadTimeout_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnCaptureStudioConstructed
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnCaptureStudioConstructed_Params
	{
	public:
		class ABP_CaptureStudioBase_C*                             InConstructedCaptureStudio;                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Construct
	 */
	struct UMyCharaMenu_ArmamentChange_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Init
	 */
	struct UMyCharaMenu_ArmamentChange_C_Init_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Destruct
	 */
	struct UMyCharaMenu_ArmamentChange_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2
	 */
	struct UMyCharaMenu_ArmamentChange_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnOpenMenu
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnOpenMenu_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.ExecuteUbergraph_MyCharaMenu_ArmamentChange
	 */
	struct UMyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnChangeEquipCostumeProc__DelegateSignature
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnChangeEquipCostumeProc__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSelectAchievementSaved__DelegateSignature
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnSelectAchievementSaved__DelegateSignature_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAcquiredAchievementLoaded__DelegateSignature
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnAcquiredAchievementLoaded__DelegateSignature_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAchievementChangeButtonClicked__DelegateSignature
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnAchievementChangeButtonClicked__DelegateSignature_Params
	{
	public:
		class UMyCharaMenu_AchievementList_C*                      InAchievementList;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSubMenuChanged__DelegateSignature
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnSubMenuChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAnimFinishedMyCharaOut__DelegateSignature
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnAnimFinishedMyCharaOut__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnChangeEquipWeaponProc__DelegateSignature
	 */
	struct UMyCharaMenu_ArmamentChange_C_OnChangeEquipWeaponProc__DelegateSignature_Params
	{
	public:
		bool                                                       ProcStart;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
