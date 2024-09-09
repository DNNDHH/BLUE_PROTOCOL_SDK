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
	 * 		Name   -> Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ApplyImagineData
	 * 		Flags  -> ()
	 */
	void ABP_MountImagineForCapture_C::ApplyImagineData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ApplyImagineData");
		
		ABP_MountImagineForCapture_C_ApplyImagineData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.FindCaptureImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCaptureStudioImagineData                 ImagineData                                                (Parm, OutParm)
	 * 		bool                                               bExist                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MountImagineForCapture_C::FindCaptureImagineData(int32_t InImagineId, struct FSBCaptureStudioImagineData* ImagineData, bool* bExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.FindCaptureImagineData");
		
		ABP_MountImagineForCapture_C_FindCaptureImagineData_Params params {};
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
	 * 		Name   -> Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.Set Weapons
	 * 		Flags  -> ()
	 */
	void ABP_MountImagineForCapture_C::SetWeapons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.Set Weapons");
		
		ABP_MountImagineForCapture_C_SetWeapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MountImagineForCapture_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.UserConstructionScript");
		
		ABP_MountImagineForCapture_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MountImagineForCapture_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ReceiveBeginPlay");
		
		ABP_MountImagineForCapture_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.SetImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MountImagineForCapture_C::SetImagineData(int32_t InImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.SetImagineData");
		
		ABP_MountImagineForCapture_C_SetImagineData_Params params {};
		params.InImagineId = InImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.OnAssetLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MountImagineForCapture_C::OnAssetLoaded(bool bInResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.OnAssetLoaded");
		
		ABP_MountImagineForCapture_C_OnAssetLoaded_Params params {};
		params.bInResult = bInResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MountImagineForCapture_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ReceiveTick");
		
		ABP_MountImagineForCapture_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ExecuteUbergraph_BP_MountImagineForCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MountImagineForCapture_C::ExecuteUbergraph_BP_MountImagineForCapture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ExecuteUbergraph_BP_MountImagineForCapture");
		
		ABP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.OnSetImagineData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MountImagineForCapture_C::OnSetImagineData__DelegateSignature(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.OnSetImagineData__DelegateSignature");
		
		ABP_MountImagineForCapture_C_OnSetImagineData__DelegateSignature_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MountImagineForCapture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MountImagineForCapture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MountImagineForCapture.BP_MountImagineForCapture_C");
		return ptr;
	}

}


