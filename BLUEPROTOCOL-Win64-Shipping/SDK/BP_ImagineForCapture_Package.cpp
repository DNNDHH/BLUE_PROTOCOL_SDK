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
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.Update Chara Create Component
	 * 		Flags  -> ()
	 */
	bool ABP_ImagineForCapture_C::UpdateCharaCreateComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.Update Chara Create Component");
		
		ABP_ImagineForCapture_C_UpdateCharaCreateComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.GetTargetBodyMesh
	 * 		Flags  -> ()
	 */
	class USBSkeletalMeshComponent* ABP_ImagineForCapture_C::GetTargetBodyMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.GetTargetBodyMesh");
		
		ABP_ImagineForCapture_C_GetTargetBodyMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.ApplyImagineData
	 * 		Flags  -> ()
	 */
	void ABP_ImagineForCapture_C::ApplyImagineData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.ApplyImagineData");
		
		ABP_ImagineForCapture_C_ApplyImagineData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.FindCaptureImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCaptureStudioImagineData                 ImagineData                                                (Parm, OutParm)
	 * 		bool                                               bExist                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ImagineForCapture_C::FindCaptureImagineData(int32_t InImagineId, struct FSBCaptureStudioImagineData* ImagineData, bool* bExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.FindCaptureImagineData");
		
		ABP_ImagineForCapture_C_FindCaptureImagineData_Params params {};
		params.InImagineId = InImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImagineData != nullptr)
			*ImagineData = params.ImagineData;
		if (bExist != nullptr)
			*bExist = params.bExist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.SetWeapons
	 * 		Flags  -> ()
	 */
	void ABP_ImagineForCapture_C::SetWeapons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.SetWeapons");
		
		ABP_ImagineForCapture_C_SetWeapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ImagineForCapture_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.UserConstructionScript");
		
		ABP_ImagineForCapture_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ImagineForCapture_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.ReceiveBeginPlay");
		
		ABP_ImagineForCapture_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.SetImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ImagineForCapture_C::SetImagineData(int32_t InImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.SetImagineData");
		
		ABP_ImagineForCapture_C_SetImagineData_Params params {};
		params.InImagineId = InImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnAssetLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ImagineForCapture_C::OnAssetLoaded(bool bInResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnAssetLoaded");
		
		ABP_ImagineForCapture_C_OnAssetLoaded_Params params {};
		params.bInResult = bInResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ImagineForCapture_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.ReceiveTick");
		
		ABP_ImagineForCapture_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnCreateLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ImagineForCapture_C::OnCreateLoaded(bool bInResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnCreateLoaded");
		
		ABP_ImagineForCapture_C_OnCreateLoaded_Params params {};
		params.bInResult = bInResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.ExecuteUbergraph_BP_ImagineForCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ImagineForCapture_C::ExecuteUbergraph_BP_ImagineForCapture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.ExecuteUbergraph_BP_ImagineForCapture");
		
		ABP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnSetImagineData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ImagineForCapture_C::OnSetImagineData__DelegateSignature(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnSetImagineData__DelegateSignature");
		
		ABP_ImagineForCapture_C_OnSetImagineData__DelegateSignature_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ImagineForCapture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ImagineForCapture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ImagineForCapture.BP_ImagineForCapture_C");
		return ptr;
	}

}


