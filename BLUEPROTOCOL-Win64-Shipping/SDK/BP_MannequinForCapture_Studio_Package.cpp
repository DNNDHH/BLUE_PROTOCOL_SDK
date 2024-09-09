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
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetActiveMannequin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCharaCreateCharacter*                     AsSBCharaCreateCharacter                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MannequinForCapture_Studio_C::GetActiveMannequin(class ASBCharaCreateCharacter** AsSBCharaCreateCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetActiveMannequin");
		
		ABP_MannequinForCapture_Studio_C_GetActiveMannequin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsSBCharaCreateCharacter != nullptr)
			*AsSBCharaCreateCharacter = params.AsSBCharaCreateCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetMannequinArrangementCameraSettingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCostumeId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsMale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FST_MannequinForCapture_CameraSettingInfo   OutArrangementCameraSettingInfo                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MannequinForCapture_Studio_C::GetMannequinArrangementCameraSettingInfo(int32_t InCostumeId, bool InIsMale, bool* IsValid, struct FST_MannequinForCapture_CameraSettingInfo* OutArrangementCameraSettingInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetMannequinArrangementCameraSettingInfo");
		
		ABP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo_Params params {};
		params.InCostumeId = InCostumeId;
		params.InIsMale = InIsMale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutArrangementCameraSettingInfo != nullptr)
			*OutArrangementCameraSettingInfo = params.OutArrangementCameraSettingInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.IsPartsLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChildActorComponent*                        Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MannequinForCapture_Studio_C::IsPartsLoaded(class UChildActorComponent* Target, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.IsPartsLoaded");
		
		ABP_MannequinForCapture_Studio_C_IsPartsLoaded_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinGradationEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MannequinForCapture_Studio_C::SetMannequinGradationEnable(bool InIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinGradationEnable");
		
		ABP_MannequinForCapture_Studio_C_SetMannequinGradationEnable_Params params {};
		params.InIsEnable = InIsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinAndCameraByCostumeType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProtectorCategory                                 InCostumeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCostumeId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MannequinForCapture_Studio_C::SetMannequinAndCameraByCostumeType(EProtectorCategory InCostumeType, int32_t InCostumeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinAndCameraByCostumeType");
		
		ABP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType_Params params {};
		params.InCostumeType = InCostumeType;
		params.InCostumeId = InCostumeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetMannequinCameraSettingInfoFromType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EProtectorCategory                                 InCostumType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsMale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FST_MannequinForCapture_Info                OutCostumeMannequinInfo                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MannequinForCapture_Studio_C::GetMannequinCameraSettingInfoFromType(EProtectorCategory InCostumType, bool InIsMale, struct FST_MannequinForCapture_Info* OutCostumeMannequinInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetMannequinCameraSettingInfoFromType");
		
		ABP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType_Params params {};
		params.InCostumType = InCostumType;
		params.InIsMale = InIsMale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCostumeMannequinInfo != nullptr)
			*OutCostumeMannequinInfo = params.OutCostumeMannequinInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.DestroyAllChildComponents
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_Studio_C::DestroyAllChildComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.DestroyAllChildComponents");
		
		ABP_MannequinForCapture_Studio_C_DestroyAllChildComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetMannequinAndCameraToDefaultTrans
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_Studio_C::ResetMannequinAndCameraToDefaultTrans()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetMannequinAndCameraToDefaultTrans");
		
		ABP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_Studio_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.UserConstructionScript");
		
		ABP_MannequinForCapture_Studio_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_Studio_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ReceiveBeginPlay");
		
		ABP_MannequinForCapture_Studio_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MannequinForCapture_Studio_C::SetMannequinVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinVisibility");
		
		ABP_MannequinForCapture_Studio_C_SetMannequinVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MannequinForCapture_Studio_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ReceiveEndPlay");
		
		ABP_MannequinForCapture_Studio_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SwitchActiveMannequin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMaleActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EProtectorCategory                                 InProtectorCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCostumeItemId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsNoResetLocAndRot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MannequinForCapture_Studio_C::SwitchActiveMannequin(bool IsMaleActive, EProtectorCategory InProtectorCategory, int32_t InCostumeItemId, bool InIsNoResetLocAndRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SwitchActiveMannequin");
		
		ABP_MannequinForCapture_Studio_C_SwitchActiveMannequin_Params params {};
		params.IsMaleActive = IsMaleActive;
		params.InProtectorCategory = InProtectorCategory;
		params.InCostumeItemId = InCostumeItemId;
		params.InIsNoResetLocAndRot = InIsNoResetLocAndRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetCostumeToMannequin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCostumeItemIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOwnItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InOwnCostumeColorId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOwnCostumeColorS                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOwnCostumeColorV                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOwnCostumeMaterialId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MannequinForCapture_Studio_C::SetCostumeToMannequin(int32_t InCostumeItemIndex, bool IsOwnItem, int32_t InOwnCostumeColorId, int32_t InOwnCostumeColorS, int32_t InOwnCostumeColorV, int32_t InOwnCostumeMaterialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetCostumeToMannequin");
		
		ABP_MannequinForCapture_Studio_C_SetCostumeToMannequin_Params params {};
		params.InCostumeItemIndex = InCostumeItemIndex;
		params.IsOwnItem = IsOwnItem;
		params.InOwnCostumeColorId = InOwnCostumeColorId;
		params.InOwnCostumeColorS = InOwnCostumeColorS;
		params.InOwnCostumeColorV = InOwnCostumeColorV;
		params.InOwnCostumeMaterialId = InOwnCostumeMaterialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetMannequin
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_Studio_C::ResetMannequin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetMannequin");
		
		ABP_MannequinForCapture_Studio_C_ResetMannequin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetModelAndCameraTransform
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_Studio_C::ResetModelAndCameraTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetModelAndCameraTransform");
		
		ABP_MannequinForCapture_Studio_C_ResetModelAndCameraTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeMaleLoadEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MannequinForCapture_Studio_C::CostumeMaleLoadEnd(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeMaleLoadEnd");
		
		ABP_MannequinForCapture_Studio_C_CostumeMaleLoadEnd_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeFemaleLoadEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MannequinForCapture_Studio_C::CostumeFemaleLoadEnd(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeFemaleLoadEnd");
		
		ABP_MannequinForCapture_Studio_C_CostumeFemaleLoadEnd_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SwitchActiveMannequin_LoadAssetAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMaleActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EProtectorCategory                                 InProtectorCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCostumeItemId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsNoResetLocAndRot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MannequinForCapture_Studio_C::SwitchActiveMannequin_LoadAssetAfter(bool IsMaleActive, EProtectorCategory InProtectorCategory, int32_t InCostumeItemId, bool InIsNoResetLocAndRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SwitchActiveMannequin_LoadAssetAfter");
		
		ABP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter_Params params {};
		params.IsMaleActive = IsMaleActive;
		params.InProtectorCategory = InProtectorCategory;
		params.InCostumeItemId = InCostumeItemId;
		params.InIsNoResetLocAndRot = InIsNoResetLocAndRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeLoaded
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_Studio_C::CostumeLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeLoaded");
		
		ABP_MannequinForCapture_Studio_C_CostumeLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ExecuteUbergraph_BP_MannequinForCapture_Studio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MannequinForCapture_Studio_C::ExecuteUbergraph_BP_MannequinForCapture_Studio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ExecuteUbergraph_BP_MannequinForCapture_Studio");
		
		ABP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.OnCostumeLoadedDelegete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_MannequinForCapture_Studio_C::OnCostumeLoadedDelegete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.OnCostumeLoadedDelegete__DelegateSignature");
		
		ABP_MannequinForCapture_Studio_C_OnCostumeLoadedDelegete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MannequinForCapture_Studio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MannequinForCapture_Studio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C");
		return ptr;
	}

}


