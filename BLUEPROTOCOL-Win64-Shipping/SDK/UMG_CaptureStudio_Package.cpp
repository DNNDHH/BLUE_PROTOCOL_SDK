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
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOrnamentUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_CaptureStudio_C::SetOrnamentUniqueId(const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOrnamentUniqueId");
		
		UUMG_CaptureStudio_C_SetOrnamentUniqueId_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOrnamentId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsExist                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetOrnamentId(int32_t InId, bool* IsExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOrnamentId");
		
		UUMG_CaptureStudio_C_SetOrnamentId_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsExist != nullptr)
			*IsExist = params.IsExist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOwnItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_CaptureStudio_C::SetOwnItem(const struct FOwnItemInfo& InOwnItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOwnItem");
		
		UUMG_CaptureStudio_C_SetOwnItem_Params params {};
		params.InOwnItem = InOwnItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetLightEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetLightEnable(bool bIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetLightEnable");
		
		UUMG_CaptureStudio_C_SetLightEnable_Params params {};
		params.bIsEnable = bIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.ResetMountImagineMeshAndCameraTransform
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::ResetMountImagineMeshAndCameraTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.ResetMountImagineMeshAndCameraTransform");
		
		UUMG_CaptureStudio_C_ResetMountImagineMeshAndCameraTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.ResetWeaponMeshAndCameraTransform
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::ResetWeaponMeshAndCameraTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.ResetWeaponMeshAndCameraTransform");
		
		UUMG_CaptureStudio_C_ResetWeaponMeshAndCameraTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetMountImagineId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ImaginetemId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsExist                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetMountImagineId(int32_t ImaginetemId, bool* IsExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetMountImagineId");
		
		UUMG_CaptureStudio_C_SetMountImagineId_Params params {};
		params.ImaginetemId = ImaginetemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsExist != nullptr)
			*IsExist = params.IsExist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.DebugPrintObjectPath
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::DebugPrintObjectPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.DebugPrintObjectPath");
		
		UUMG_CaptureStudio_C_DebugPrintObjectPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetStudioHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsHidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetStudioHidden(bool InIsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetStudioHidden");
		
		UUMG_CaptureStudio_C_SetStudioHidden_Params params {};
		params.InIsHidden = InIsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetupAndLoadAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              LoadCompleteEvent                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		struct FInventoryItemData                          InInventoryItemData                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUMG_CaptureStudio_C::SetupAndLoadAsset(const class FScriptDelegate& LoadCompleteEvent, const struct FInventoryItemData& InInventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetupAndLoadAsset");
		
		UUMG_CaptureStudio_C_SetupAndLoadAsset_Params params {};
		params.LoadCompleteEvent = LoadCompleteEvent;
		params.InInventoryItemData = InInventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.Load Costume Asset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MannequinForCapture_Studio_C*            MannequiCaptionStudio                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::LoadCostumeAsset(class ABP_MannequinForCapture_Studio_C* MannequiCaptionStudio, const class FScriptDelegate& Event, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.Load Costume Asset");
		
		UUMG_CaptureStudio_C_LoadCostumeAsset_Params params {};
		params.MannequiCaptionStudio = MannequiCaptionStudio;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetStudioVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetStudioVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetStudioVisibility");
		
		UUMG_CaptureStudio_C_SetStudioVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetImagineId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ImaginetemId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsExist                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetImagineId(int32_t ImaginetemId, bool* IsExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetImagineId");
		
		UUMG_CaptureStudio_C_SetImagineId_Params params {};
		params.ImaginetemId = ImaginetemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsExist != nullptr)
			*IsExist = params.IsExist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.IsCostumeValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::IsCostumeValid(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.IsCostumeValid");
		
		UUMG_CaptureStudio_C_IsCostumeValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureZoomActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActiveZoom                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetCaptureZoomActive(bool ActiveZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureZoomActive");
		
		UUMG_CaptureStudio_C_SetCaptureZoomActive_Params params {};
		params.ActiveZoom = ActiveZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCostumeItemID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CostumeItemId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CostumeUniqueID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            CostumeStorageNumber                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_CaptureStudio_C::SetCostumeItemID(int32_t CostumeItemId, const class FString& CostumeUniqueID, int32_t CostumeStorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCostumeItemID");
		
		UUMG_CaptureStudio_C_SetCostumeItemID_Params params {};
		params.CostumeItemId = CostumeItemId;
		params.CostumeUniqueID = CostumeUniqueID;
		params.CostumeStorageNumber = CostumeStorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetWeaponId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WeaponItemId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsExist                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetWeaponId(int32_t WeaponItemId, bool* IsExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetWeaponId");
		
		UUMG_CaptureStudio_C_SetWeaponId_Params params {};
		params.WeaponItemId = WeaponItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsExist != nullptr)
			*IsExist = params.IsExist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetDrawMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_CaptureStudio_C::SetDrawMode(EItemType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetDrawMode");
		
		UUMG_CaptureStudio_C_SetDrawMode_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureRotateActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActiveRotate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetCaptureRotateActive(bool ActiveRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureRotateActive");
		
		UUMG_CaptureStudio_C_SetCaptureRotateActive_Params params {};
		params.ActiveRotate = ActiveRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureMoveActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActiveMove                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetCaptureMoveActive(bool ActiveMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureMoveActive");
		
		UUMG_CaptureStudio_C_SetCaptureMoveActive_Params params {};
		params.ActiveMove = ActiveMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.Construct");
		
		UUMG_CaptureStudio_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.Construct_Capture_Studio
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::Construct_Capture_Studio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.Construct_Capture_Studio");
		
		UUMG_CaptureStudio_C_Construct_Capture_Studio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadAsset
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::LoadAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadAsset");
		
		UUMG_CaptureStudio_C_LoadAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadWeaponAsset
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::LoadWeaponAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadWeaponAsset");
		
		UUMG_CaptureStudio_C_LoadWeaponAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadMannequinAsset
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::LoadMannequinAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadMannequinAsset");
		
		UUMG_CaptureStudio_C_LoadMannequinAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.Destruct Capture Studio
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::DestructCaptureStudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.Destruct Capture Studio");
		
		UUMG_CaptureStudio_C_DestructCaptureStudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.Destruct");
		
		UUMG_CaptureStudio_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadImagineAsset
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::LoadImagineAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadImagineAsset");
		
		UUMG_CaptureStudio_C_LoadImagineAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnWeaponLoaded
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::OnWeaponLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnWeaponLoaded");
		
		UUMG_CaptureStudio_C_OnWeaponLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.DoDisableCaptureStudio
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::DoDisableCaptureStudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.DoDisableCaptureStudio");
		
		UUMG_CaptureStudio_C_DoDisableCaptureStudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetEnableCaptureStudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetEnableCaptureStudio(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetEnableCaptureStudio");
		
		UUMG_CaptureStudio_C_SetEnableCaptureStudio_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.DoEnableCaptureStudio
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::DoEnableCaptureStudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.DoEnableCaptureStudio");
		
		UUMG_CaptureStudio_C_DoEnableCaptureStudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnCostumeLoaded
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::OnCostumeLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnCostumeLoaded");
		
		UUMG_CaptureStudio_C_OnCostumeLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnImagineLoaded
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::OnImagineLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnImagineLoaded");
		
		UUMG_CaptureStudio_C_OnImagineLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadMountImagineAsset
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::LoadMountImagineAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadMountImagineAsset");
		
		UUMG_CaptureStudio_C_LoadMountImagineAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnMountImagineLoaded
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::OnMountImagineLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnMountImagineLoaded");
		
		UUMG_CaptureStudio_C_OnMountImagineLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetExternalDirectionalLightRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_CaptureStudio_C::SetExternalDirectionalLightRotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetExternalDirectionalLightRotation");
		
		UUMG_CaptureStudio_C_SetExternalDirectionalLightRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.ApplyExternalDirectionalLightRotation
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::ApplyExternalDirectionalLightRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.ApplyExternalDirectionalLightRotation");
		
		UUMG_CaptureStudio_C_ApplyExternalDirectionalLightRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnOrnamentLoaded
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::OnOrnamentLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnOrnamentLoaded");
		
		UUMG_CaptureStudio_C_OnOrnamentLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadOrnamentAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InOrnamentId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_CaptureStudio_C::LoadOrnamentAsset(int32_t InOrnamentId, const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadOrnamentAsset");
		
		UUMG_CaptureStudio_C_LoadOrnamentAsset_Params params {};
		params.InOrnamentId = InOrnamentId;
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.ExecuteUbergraph_UMG_CaptureStudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_CaptureStudio_C::ExecuteUbergraph_UMG_CaptureStudio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.ExecuteUbergraph_UMG_CaptureStudio");
		
		UUMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnLoadAssetComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_CaptureStudio_C::OnLoadAssetComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnLoadAssetComplete__DelegateSignature");
		
		UUMG_CaptureStudio_C_OnLoadAssetComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnCaptureStudioConstructed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_CaptureStudioBase_C*                     InConstructedCaptureStudio                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_CaptureStudio_C::OnCaptureStudioConstructed__DelegateSignature(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnCaptureStudioConstructed__DelegateSignature");
		
		UUMG_CaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature_Params params {};
		params.InConstructedCaptureStudio = InConstructedCaptureStudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_CaptureStudio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_CaptureStudio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CaptureStudio.UMG_CaptureStudio_C");
		return ptr;
	}

}


