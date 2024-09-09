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
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetCaptureStudioVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ArmamentChange_C::SetCaptureStudioVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetCaptureStudioVisibility");
		
		UMyCharaMenu_ArmamentChange_C_SetCaptureStudioVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetupMountImagineModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMountImagineUniqueId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ArmamentChange_C::SetupMountImagineModel(const class FString& InMountImagineUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetupMountImagineModel");
		
		UMyCharaMenu_ArmamentChange_C_SetupMountImagineModel_Params params {};
		params.InMountImagineUniqueId = InMountImagineUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.CheckIfWeaponDecayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBDecayedWeaponData>                InDecayedWeaponDatas                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutIsDecayed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ArmamentChange_C::CheckIfWeaponDecayed(const class FString& InWeaponUniqueId, TArray<struct FSBDecayedWeaponData>* InDecayedWeaponDatas, bool* OutIsDecayed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.CheckIfWeaponDecayed");
		
		UMyCharaMenu_ArmamentChange_C_CheckIfWeaponDecayed_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDecayedWeaponDatas != nullptr)
			*InDecayedWeaponDatas = params.InDecayedWeaponDatas;
		if (OutIsDecayed != nullptr)
			*OutIsDecayed = params.OutIsDecayed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetupEquipMountImagine
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::SetupEquipMountImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.SetupEquipMountImagine");
		
		UMyCharaMenu_ArmamentChange_C_SetupEquipMountImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.BookmarkUpdateRequest");
		
		UMyCharaMenu_ArmamentChange_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Construct_Imagine
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::Construct_Imagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Construct_Imagine");
		
		UMyCharaMenu_ArmamentChange_C_Construct_Imagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Destruct_Imagine
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::Destruct_Imagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Destruct_Imagine");
		
		UMyCharaMenu_ArmamentChange_C_Destruct_Imagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature");
		
		UMyCharaMenu_ArmamentChange_C_BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.GetEquipped_Mountmagine_UniqueId
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::GetEquipped_Mountmagine_UniqueId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.GetEquipped_Mountmagine_UniqueId");
		
		UMyCharaMenu_ArmamentChange_C_GetEquipped_Mountmagine_UniqueId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineChangeRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ArmamentChange_C::OnMountImagineChangeRequest(const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineChangeRequest");
		
		UMyCharaMenu_ArmamentChange_C_OnMountImagineChangeRequest_Params params {};
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineChangeClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEquip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ArmamentChange_C::OnMountImagineChangeClick(const class FString& InEquip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineChangeClick");
		
		UMyCharaMenu_ArmamentChange_C_OnMountImagineChangeClick_Params params {};
		params.InEquip = InEquip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineHideWindowStart
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::OnMountImagineHideWindowStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineHideWindowStart");
		
		UMyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineHideWindowFin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChangeRequest                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ArmamentChange_C::OnMountImagineHideWindowFin(bool IsChangeRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineHideWindowFin");
		
		UMyCharaMenu_ArmamentChange_C_OnMountImagineHideWindowFin_Params params {};
		params.IsChangeRequest = IsChangeRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSaveImagineEquipDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  EquipType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsEquip                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_ArmamentChange_C::OnSaveImagineEquipDelegate(int32_t RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSaveImagineEquipDelegate");
		
		UMyCharaMenu_ArmamentChange_C_OnSaveImagineEquipDelegate_Params params {};
		params.RetCode = RetCode;
		params.EquipType = EquipType;
		params.UniqueId = UniqueId;
		params.IsEquip = IsEquip;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd");
		
		UMyCharaMenu_ArmamentChange_C_ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineSelectReleased
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::OnMountImagineSelectReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnMountImagineSelectReleased");
		
		UMyCharaMenu_ArmamentChange_C_OnMountImagineSelectReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.LoadMountImagineModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMountImagineUniqueId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ArmamentChange_C::LoadMountImagineModel(const class FString& InMountImagineUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.LoadMountImagineModel");
		
		UMyCharaMenu_ArmamentChange_C_LoadMountImagineModel_Params params {};
		params.InMountImagineUniqueId = InMountImagineUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.AssetLoadComplete
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::AssetLoadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.AssetLoadComplete");
		
		UMyCharaMenu_ArmamentChange_C_AssetLoadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.AssetLoadTimeout
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::AssetLoadTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.AssetLoadTimeout");
		
		UMyCharaMenu_ArmamentChange_C_AssetLoadTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnCaptureStudioConstructed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_CaptureStudioBase_C*                     InConstructedCaptureStudio                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ArmamentChange_C::OnCaptureStudioConstructed(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnCaptureStudioConstructed");
		
		UMyCharaMenu_ArmamentChange_C_OnCaptureStudioConstructed_Params params {};
		params.InConstructedCaptureStudio = InConstructedCaptureStudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Construct");
		
		UMyCharaMenu_ArmamentChange_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Init
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Init");
		
		UMyCharaMenu_ArmamentChange_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.Destruct");
		
		UMyCharaMenu_ArmamentChange_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2");
		
		UMyCharaMenu_ArmamentChange_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnOpenMenu
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::OnOpenMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnOpenMenu");
		
		UMyCharaMenu_ArmamentChange_C_OnOpenMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.ExecuteUbergraph_MyCharaMenu_ArmamentChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ArmamentChange_C::ExecuteUbergraph_MyCharaMenu_ArmamentChange(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.ExecuteUbergraph_MyCharaMenu_ArmamentChange");
		
		UMyCharaMenu_ArmamentChange_C_ExecuteUbergraph_MyCharaMenu_ArmamentChange_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnChangeEquipCostumeProc__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::OnChangeEquipCostumeProc__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnChangeEquipCostumeProc__DelegateSignature");
		
		UMyCharaMenu_ArmamentChange_C_OnChangeEquipCostumeProc__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSelectAchievementSaved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ArmamentChange_C::OnSelectAchievementSaved__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSelectAchievementSaved__DelegateSignature");
		
		UMyCharaMenu_ArmamentChange_C_OnSelectAchievementSaved__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAcquiredAchievementLoaded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ArmamentChange_C::OnAcquiredAchievementLoaded__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAcquiredAchievementLoaded__DelegateSignature");
		
		UMyCharaMenu_ArmamentChange_C_OnAcquiredAchievementLoaded__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAchievementChangeButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_AchievementList_C*              InAchievementList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ArmamentChange_C::OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAchievementChangeButtonClicked__DelegateSignature");
		
		UMyCharaMenu_ArmamentChange_C_OnAchievementChangeButtonClicked__DelegateSignature_Params params {};
		params.InAchievementList = InAchievementList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSubMenuChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ArmamentChange_C::OnSubMenuChanged__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnSubMenuChanged__DelegateSignature");
		
		UMyCharaMenu_ArmamentChange_C_OnSubMenuChanged__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAnimFinishedMyCharaOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ArmamentChange_C::OnAnimFinishedMyCharaOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnAnimFinishedMyCharaOut__DelegateSignature");
		
		UMyCharaMenu_ArmamentChange_C_OnAnimFinishedMyCharaOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnChangeEquipWeaponProc__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ProcStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ArmamentChange_C::OnChangeEquipWeaponProc__DelegateSignature(bool ProcStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C.OnChangeEquipWeaponProc__DelegateSignature");
		
		UMyCharaMenu_ArmamentChange_C_OnChangeEquipWeaponProc__DelegateSignature_Params params {};
		params.ProcStart = ProcStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_ArmamentChange_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_ArmamentChange_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C");
		return ptr;
	}

}


