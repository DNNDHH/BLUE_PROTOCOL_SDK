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
	 * 		Name   -> Function CmnCostume.CmnCostume_C.RefreshCharaCreateParameter
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::RefreshCharaCreateParameter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.RefreshCharaCreateParameter");
		
		UCmnCostume_C_RefreshCharaCreateParameter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.SetButtonPosition_Posing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShopType                                          ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnCostume_C::SetButtonPosition_Posing(EShopType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.SetButtonPosition_Posing");
		
		UCmnCostume_C_SetButtonPosition_Posing_Params params {};
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.IsOccupiedTryingLocationByCostumeId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CostumeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsOccupied                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterCostume                            MasterCostume                                              (Parm, OutParm)
	 */
	void UCmnCostume_C::IsOccupiedTryingLocationByCostumeId(int32_t CostumeId, bool* IsValid, bool* IsOccupied, struct FSBMasterCostume* MasterCostume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.IsOccupiedTryingLocationByCostumeId");
		
		UCmnCostume_C_IsOccupiedTryingLocationByCostumeId_Params params {};
		params.CostumeId = CostumeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (IsOccupied != nullptr)
			*IsOccupied = params.IsOccupied;
		if (MasterCostume != nullptr)
			*MasterCostume = params.MasterCostume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.IsOccupiedTryingLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProtectorCategory                                 ProtectorCategory                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOccupied                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterCostume                            MasterCostume                                              (Parm, OutParm)
	 */
	void UCmnCostume_C::IsOccupiedTryingLocation(EProtectorCategory ProtectorCategory, bool* IsOccupied, struct FSBMasterCostume* MasterCostume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.IsOccupiedTryingLocation");
		
		UCmnCostume_C_IsOccupiedTryingLocation_Params params {};
		params.ProtectorCategory = ProtectorCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOccupied != nullptr)
			*IsOccupied = params.IsOccupied;
		if (MasterCostume != nullptr)
			*MasterCostume = params.MasterCostume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.ApplyTryingCostumeData
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::ApplyTryingCostumeData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.ApplyTryingCostumeData");
		
		UCmnCostume_C_ApplyTryingCostumeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.ApplyBaseEquip
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::ApplyBaseEquip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.ApplyBaseEquip");
		
		UCmnCostume_C_ApplyBaseEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.OccupTryingLocationByMasterCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            MasterCostume                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCmnCostume_C::OccupTryingLocationByMasterCostume(const struct FSBMasterCostume& MasterCostume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.OccupTryingLocationByMasterCostume");
		
		UCmnCostume_C_OccupTryingLocationByMasterCostume_Params params {};
		params.MasterCostume = MasterCostume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.OccupTryingLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProtectorCategory                                 ProtectorCategory                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnCostume_C::OccupTryingLocation(EProtectorCategory ProtectorCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.OccupTryingLocation");
		
		UCmnCostume_C_OccupTryingLocation_Params params {};
		params.ProtectorCategory = ProtectorCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.RemoveTryingCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            MasterCostume                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCmnCostume_C::RemoveTryingCostume(const struct FSBMasterCostume& MasterCostume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.RemoveTryingCostume");
		
		UCmnCostume_C_RemoveTryingCostume_Params params {};
		params.MasterCostume = MasterCostume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.AddTryingCosutume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            MasterCostume                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      UniqueId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void UCmnCostume_C::AddTryingCosutume(const struct FSBMasterCostume& MasterCostume, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.AddTryingCosutume");
		
		UCmnCostume_C_AddTryingCosutume_Params params {};
		params.MasterCostume = MasterCostume;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.InitBaseData
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::InitBaseData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.InitBaseData");
		
		UCmnCostume_C_InitBaseData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.IsValidCosutumeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            CostumeData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UCmnCostume_C::IsValidCosutumeData(const struct FSBMasterCostume& CostumeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.IsValidCosutumeData");
		
		UCmnCostume_C_IsValidCosutumeData_Params params {};
		params.CostumeData = CostumeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.SetVisibleIfValidCostumeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            CostumeData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bVisible                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnCostume_C::SetVisibleIfValidCostumeData(const struct FSBMasterCostume& CostumeData, bool* bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.SetVisibleIfValidCostumeData");
		
		UCmnCostume_C_SetVisibleIfValidCostumeData_Params params {};
		params.CostumeData = CostumeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bVisible != nullptr)
			*bVisible = params.bVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.SetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceLightVisible                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnCostume_C::SetVisible(bool bInIsVisible, bool bForceLightVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.SetVisible");
		
		UCmnCostume_C_SetVisible_Params params {};
		params.bInIsVisible = bInIsVisible;
		params.bForceLightVisible = bForceLightVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.ResetTryingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUpdateCapture                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnCostume_C::ResetTryingData(bool bUpdateCapture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.ResetTryingData");
		
		UCmnCostume_C_ResetTryingData_Params params {};
		params.bUpdateCapture = bUpdateCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.UpdateCapture
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::UpdateCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.UpdateCapture");
		
		UCmnCostume_C_UpdateCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.SetTryingCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            CostumeData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      UniqueId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUpdateCapture                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnCostume_C::SetTryingCostume(const struct FSBMasterCostume& CostumeData, const class FString& UniqueId, bool bTrying, bool bUpdateCapture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.SetTryingCostume");
		
		UCmnCostume_C_SetTryingCostume_Params params {};
		params.CostumeData = CostumeData;
		params.UniqueId = UniqueId;
		params.bTrying = bTrying;
		params.bUpdateCapture = bUpdateCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.Construct
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.Construct");
		
		UCmnCostume_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.Zoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bZoomIn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAnimation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnCostume_C::Zoom(bool bZoomIn, bool bAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.Zoom");
		
		UCmnCostume_C_Zoom_Params params {};
		params.bZoomIn = bZoomIn;
		params.bAnimation = bAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCmnCostume_C_BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCmnCostume_C_BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UCmnCostume_C_BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UCmnCostume_C_BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.Destruct");
		
		UCmnCostume_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UCmnCostume_C_BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UCmnCostume_C_BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UCmnCostume_C_BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UCmnCostume_C_BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LayoutType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnCostume_C::Init(const class FName& LayoutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.Init");
		
		UCmnCostume_C_Init_Params params {};
		params.LayoutType = LayoutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");
		
		UCmnCostume_C_BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");
		
		UCmnCostume_C_BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UCmnCostume_C_BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UCmnCostume_C_BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.ExecuteUbergraph_CmnCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnCostume_C::ExecuteUbergraph_CmnCostume(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.ExecuteUbergraph_CmnCostume");
		
		UCmnCostume_C_ExecuteUbergraph_CmnCostume_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.OnTrying__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnCostume_C::OnTrying__DelegateSignature(int32_t ItemIndex, bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.OnTrying__DelegateSignature");
		
		UCmnCostume_C_OnTrying__DelegateSignature_Params params {};
		params.ItemIndex = ItemIndex;
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.OnClickZoomOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::OnClickZoomOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.OnClickZoomOut__DelegateSignature");
		
		UCmnCostume_C_OnClickZoomOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnCostume_C::OnClickZoomIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.OnClickZoomIn__DelegateSignature");
		
		UCmnCostume_C_OnClickZoomIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnCostume.CmnCostume_C.OnCreatePlayerCapture__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PlayerSceneCapture2D_Studio_C*           PlayerCapture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnCostume_C::OnCreatePlayerCapture__DelegateSignature(class ABP_PlayerSceneCapture2D_Studio_C* PlayerCapture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnCostume.CmnCostume_C.OnCreatePlayerCapture__DelegateSignature");
		
		UCmnCostume_C_OnCreatePlayerCapture__DelegateSignature_Params params {};
		params.PlayerCapture = PlayerCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnCostume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnCostume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnCostume.CmnCostume_C");
		return ptr;
	}

}


