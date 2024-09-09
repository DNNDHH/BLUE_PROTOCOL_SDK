/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.TermRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubMenuTermReason                                 InReason                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESubMenuTermRequestReply UMyCharaMenu_C::TermRequest(ESubMenuTermReason InReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.TermRequest");
		
		UMyCharaMenu_C_TermRequest_Params params {};
		params.InReason = InReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.UpdatePlayerAvatarWeapon
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::UpdatePlayerAvatarWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.UpdatePlayerAvatarWeapon");
		
		UMyCharaMenu_C_UpdatePlayerAvatarWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.Set Player Avater Current Mode Motion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMyCharaMenu_ItemType                              InMyCharaMenuItemType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForceEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::SetPlayerAvaterCurrentModeMotion(EMyCharaMenu_ItemType InMyCharaMenuItemType, bool ForceEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.Set Player Avater Current Mode Motion");
		
		UMyCharaMenu_C_SetPlayerAvaterCurrentModeMotion_Params params {};
		params.InMyCharaMenuItemType = InMyCharaMenuItemType;
		params.ForceEnable = ForceEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.Set Player Avater Motion Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMyCharaMenu_ItemType                              InMyCharaMenuItemType                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsIdleMotionPlaying                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::SetPlayerAvaterMotionMode(EMyCharaMenu_ItemType* InMyCharaMenuItemType, bool* IsIdleMotionPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.Set Player Avater Motion Mode");
		
		UMyCharaMenu_C_SetPlayerAvaterMotionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InMyCharaMenuItemType != nullptr)
			*InMyCharaMenuItemType = params.InMyCharaMenuItemType;
		if (IsIdleMotionPlaying != nullptr)
			*IsIdleMotionPlaying = params.IsIdleMotionPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.UpdateArmamentChangeButtonEnable
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::UpdateArmamentChangeButtonEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.UpdateArmamentChangeButtonEnable");
		
		UMyCharaMenu_C_UpdateArmamentChangeButtonEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.Initialize Open Menu Type
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::InitializeOpenMenuType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.Initialize Open Menu Type");
		
		UMyCharaMenu_C_InitializeOpenMenuType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.SetPlayerAvatarStudioHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsHidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::SetPlayerAvatarStudioHidden(bool InIsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.SetPlayerAvatarStudioHidden");
		
		UMyCharaMenu_C_SetPlayerAvatarStudioHidden_Params params {};
		params.InIsHidden = InIsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.FindCurrMapPlayerAvatarTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCurrMapName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::FindCurrMapPlayerAvatarTransform(const class FString& InCurrMapName, struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.FindCurrMapPlayerAvatarTransform");
		
		UMyCharaMenu_C_FindCurrMapPlayerAvatarTransform_Params params {};
		params.InCurrMapName = InCurrMapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.Setup Selected Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMyCharaMenu_ItemType                              InSelectedItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::SetupSelectedMenu(EMyCharaMenu_ItemType InSelectedItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.Setup Selected Menu");
		
		UMyCharaMenu_C_SetupSelectedMenu_Params params {};
		params.InSelectedItemType = InSelectedItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnParentTerm
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::OnParentTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnParentTerm");
		
		UMyCharaMenu_C_OnParentTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnRMShopClosed
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::OnRMShopClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnRMShopClosed");
		
		UMyCharaMenu_C_OnRMShopClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnSubMenuUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MainPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::OnSubMenuUpdate(int32_t MainPage, int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnSubMenuUpdate");
		
		UMyCharaMenu_C_OnSubMenuUpdate_Params params {};
		params.MainPage = MainPage;
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.ResetMouseCursorTypeToDefaultRequest
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::ResetMouseCursorTypeToDefaultRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.ResetMouseCursorTypeToDefaultRequest");
		
		UMyCharaMenu_C_ResetMouseCursorTypeToDefaultRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.StartUploadImage
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::StartUploadImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.StartUploadImage");
		
		UMyCharaMenu_C_StartUploadImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnSaveCommandMenuPlayerAvatarPoseId_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAvatarPoseId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::OnSaveCommandMenuPlayerAvatarPoseId_(int32_t InRetCode, int32_t InAvatarPoseId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnSaveCommandMenuPlayerAvatarPoseId_イベント");
		
		UMyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId__Params params {};
		params.InRetCode = InRetCode;
		params.InAvatarPoseId = InAvatarPoseId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnUploadImageCompleted_イベント
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::OnUploadImageCompleted_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnUploadImageCompleted_イベント");
		
		UMyCharaMenu_C_OnUploadImageCompleted__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.StartPlayerAvatarUploadImage
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::StartPlayerAvatarUploadImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.StartPlayerAvatarUploadImage");
		
		UMyCharaMenu_C_StartPlayerAvatarUploadImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnUploadImageEnded
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::OnUploadImageEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnUploadImageEnded");
		
		UMyCharaMenu_C_OnUploadImageEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.AchievementChangeButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_AchievementList_C*              InAchievementList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::AchievementChangeButtonClicked(class UMyCharaMenu_AchievementList_C* InAchievementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.AchievementChangeButtonClicked");
		
		UMyCharaMenu_C_AchievementChangeButtonClicked_Params params {};
		params.InAchievementList = InAchievementList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.AcquiredAchievementLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::AcquiredAchievementLoaded(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.AcquiredAchievementLoaded");
		
		UMyCharaMenu_C_AcquiredAchievementLoaded_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.SelectAchievementSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::SelectAchievementSaved(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.SelectAchievementSaved");
		
		UMyCharaMenu_C_SelectAchievementSaved_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.Construct");
		
		UMyCharaMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.Destruct");
		
		UMyCharaMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.Init
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.Init");
		
		UMyCharaMenu_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature");
		
		UMyCharaMenu_C_BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.SetUIBlockerVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::SetUIBlockerVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.SetUIBlockerVisibility");
		
		UMyCharaMenu_C_SetUIBlockerVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarRotateActive_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::OnPlayerAvatarRotateActive_(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarRotateActive_イベント");
		
		UMyCharaMenu_C_OnPlayerAvatarRotateActive__Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.ChangeCostumeProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InProcStart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::ChangeCostumeProc(bool InProcStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.ChangeCostumeProc");
		
		UMyCharaMenu_C_ChangeCostumeProc_Params params {};
		params.InProcStart = InProcStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnAnimationFinished");
		
		UMyCharaMenu_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnRequestDirectChat_Event
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::OnRequestDirectChat_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnRequestDirectChat_Event");
		
		UMyCharaMenu_C_OnRequestDirectChat_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.CustomEvent_1");
		
		UMyCharaMenu_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.BattleSetSubMenuChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::BattleSetSubMenuChanged(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.BattleSetSubMenuChanged");
		
		UMyCharaMenu_C_BattleSetSubMenuChanged_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.EffectListSubMenuChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::EffectListSubMenuChanged(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.EffectListSubMenuChanged");
		
		UMyCharaMenu_C_EffectListSubMenuChanged_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarSwitchPosing_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OnPosingCommandName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InSwitchPosingToPrev                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::OnPlayerAvatarSwitchPosing_(const class FName& OnPosingCommandName, bool InSwitchPosingToPrev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarSwitchPosing_イベント");
		
		UMyCharaMenu_C_OnPlayerAvatarSwitchPosing__Params params {};
		params.OnPosingCommandName = OnPosingCommandName;
		params.InSwitchPosingToPrev = InSwitchPosingToPrev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarStudio_CharaPartsLoaded_イベント
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::OnPlayerAvatarStudio_CharaPartsLoaded_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarStudio_CharaPartsLoaded_イベント");
		
		UMyCharaMenu_C_OnPlayerAvatarStudio_CharaPartsLoaded__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnAvatarPoseChangeState_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPrevStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNextStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::OnAvatarPoseChangeState_(const class FString& InPrevStateName, const class FString& InNextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnAvatarPoseChangeState_イベント");
		
		UMyCharaMenu_C_OnAvatarPoseChangeState__Params params {};
		params.InPrevStateName = InPrevStateName;
		params.InNextStateName = InNextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.StartOpenMenuAnimation
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::StartOpenMenuAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.StartOpenMenuAnimation");
		
		UMyCharaMenu_C_StartOpenMenuAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnChangeStateByCostumeChange_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPrevStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNextStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::OnChangeStateByCostumeChange_(const class FString& InPrevStateName, const class FString& InNextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnChangeStateByCostumeChange_イベント");
		
		UMyCharaMenu_C_OnChangeStateByCostumeChange__Params params {};
		params.InPrevStateName = InPrevStateName;
		params.InNextStateName = InNextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnCharaPartsLoadedDelegate_ByChangeCostume_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::OnCharaPartsLoadedDelegate_ByChangeCostume_(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnCharaPartsLoadedDelegate_ByChangeCostume_イベント");
		
		UMyCharaMenu_C_OnCharaPartsLoadedDelegate_ByChangeCostume__Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.DoMenuClose
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::DoMenuClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.DoMenuClose");
		
		UMyCharaMenu_C_DoMenuClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnSetPlayerCaptureStudioHidden_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHidden                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::OnSetPlayerCaptureStudioHidden_(bool IsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnSetPlayerCaptureStudioHidden_イベント");
		
		UMyCharaMenu_C_OnSetPlayerCaptureStudioHidden__Params params {};
		params.IsHidden = IsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.BookmarkUpdateRequest");
		
		UMyCharaMenu_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.UpdateBookmarkStatusButton
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::UpdateBookmarkStatusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.UpdateBookmarkStatusButton");
		
		UMyCharaMenu_C_UpdateBookmarkStatusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnCostumeSwitchOnOffEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCostumeOn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::OnCostumeSwitchOnOffEvent(bool InIsCostumeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnCostumeSwitchOnOffEvent");
		
		UMyCharaMenu_C_OnCostumeSwitchOnOffEvent_Params params {};
		params.InIsCostumeOn = InIsCostumeOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnChangeEquipCostumeOccuredAtOtherEquipChange
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::OnChangeEquipCostumeOccuredAtOtherEquipChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnChangeEquipCostumeOccuredAtOtherEquipChange");
		
		UMyCharaMenu_C_OnChangeEquipCostumeOccuredAtOtherEquipChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnSameMenuBookmarkAccessNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBookMarkType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnSameMenuBookmarkAccessNew");
		
		UMyCharaMenu_C_OnSameMenuBookmarkAccessNew_Params params {};
		params.InBookMarkType = InBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnIsCmnBackBtnVisibleEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::OnIsCmnBackBtnVisibleEvent(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnIsCmnBackBtnVisibleEvent");
		
		UMyCharaMenu_C_OnIsCmnBackBtnVisibleEvent_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnEquippedWeaponSpawned
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::OnEquippedWeaponSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnEquippedWeaponSpawned");
		
		UMyCharaMenu_C_OnEquippedWeaponSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnResetPlayerAvatarRotate_イベント
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::OnResetPlayerAvatarRotate_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnResetPlayerAvatarRotate_イベント");
		
		UMyCharaMenu_C_OnResetPlayerAvatarRotate__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.SetCostumePreviewParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharaCreateParameter                     CharaCreateParameter                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::SetCostumePreviewParameter(const struct FSBCharaCreateParameter& CharaCreateParameter, bool Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.SetCostumePreviewParameter");
		
		UMyCharaMenu_C_SetCostumePreviewParameter_Params params {};
		params.CharaCreateParameter = CharaCreateParameter;
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.SetAvatarImageReuploadFlag
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::SetAvatarImageReuploadFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.SetAvatarImageReuploadFlag");
		
		UMyCharaMenu_C_SetAvatarImageReuploadFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.RefreshPreviewCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharaCreateParameter                     CharaCreateParameter                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_C::RefreshPreviewCostume(const struct FSBCharaCreateParameter& CharaCreateParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.RefreshPreviewCostume");
		
		UMyCharaMenu_C_RefreshPreviewCostume_Params params {};
		params.CharaCreateParameter = CharaCreateParameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnCharaPartsLoaded_CostumePreviewRefresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::OnCharaPartsLoaded_CostumePreviewRefresh(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnCharaPartsLoaded_CostumePreviewRefresh");
		
		UMyCharaMenu_C_OnCharaPartsLoaded_CostumePreviewRefresh_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnIsCostumeOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCostumeOn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::OnIsCostumeOn(bool InIsCostumeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnIsCostumeOn");
		
		UMyCharaMenu_C_OnIsCostumeOn_Params params {};
		params.InIsCostumeOn = InIsCostumeOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnCostumeAndMountsSubMenuChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSubMenuId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::OnCostumeAndMountsSubMenuChanged(int32_t InSubMenuId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnCostumeAndMountsSubMenuChanged");
		
		UMyCharaMenu_C_OnCostumeAndMountsSubMenuChanged_Params params {};
		params.InSubMenuId = InSubMenuId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.OnResetAvatarCostumeOnOffToDefault
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_C::OnResetAvatarCostumeOnOffToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.OnResetAvatarCostumeOnOffToDefault");
		
		UMyCharaMenu_C_OnResetAvatarCostumeOnOffToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.CostumeAndMountsSubMenuChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::CostumeAndMountsSubMenuChanged(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.CostumeAndMountsSubMenuChanged");
		
		UMyCharaMenu_C_CostumeAndMountsSubMenuChanged_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.SkillBoardSetSubMenuChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::SkillBoardSetSubMenuChanged(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.SkillBoardSetSubMenuChanged");
		
		UMyCharaMenu_C_SkillBoardSetSubMenuChanged_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.AdventurerRankSubMenuChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::AdventurerRankSubMenuChanged(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.AdventurerRankSubMenuChanged");
		
		UMyCharaMenu_C_AdventurerRankSubMenuChanged_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.ExecuteUbergraph_MyCharaMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_C::ExecuteUbergraph_MyCharaMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.ExecuteUbergraph_MyCharaMenu");
		
		UMyCharaMenu_C_ExecuteUbergraph_MyCharaMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu.MyCharaMenu_C.SetBackBtnVisibility__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_C::SetBackBtnVisibility__DelegateSignature(bool bInIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu.MyCharaMenu_C.SetBackBtnVisibility__DelegateSignature");
		
		UMyCharaMenu_C_SetBackBtnVisibility__DelegateSignature_Params params {};
		params.bInIsVisible = bInIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu.MyCharaMenu_C");
		return ptr;
	}

}


