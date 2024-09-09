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
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Save Facial Num
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FacialNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterSelectCaptureBustUp_C::SaveFacialNum(int32_t FacialNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Save Facial Num");
		
		ABP_CharacterSelectCaptureBustUp_C_SaveFacialNum_Params params {};
		params.FacialNum = FacialNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Load Facial Num
	 * 		Flags  -> ()
	 */
	void ABP_CharacterSelectCaptureBustUp_C::LoadFacialNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Load Facial Num");
		
		ABP_CharacterSelectCaptureBustUp_C_LoadFacialNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.IsLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLoad                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CharacterSelectCaptureBustUp_C::IsLoad(bool* bLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.IsLoad");
		
		ABP_CharacterSelectCaptureBustUp_C_IsLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLoad != nullptr)
			*bLoad = params.bLoad;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.UpdetaCameraLocation
	 * 		Flags  -> ()
	 */
	void ABP_CharacterSelectCaptureBustUp_C::UpdetaCameraLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.UpdetaCameraLocation");
		
		ABP_CharacterSelectCaptureBustUp_C_UpdetaCameraLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ChangeFacial
	 * 		Flags  -> ()
	 */
	void ABP_CharacterSelectCaptureBustUp_C::ChangeFacial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ChangeFacial");
		
		ABP_CharacterSelectCaptureBustUp_C_ChangeFacial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.SetRender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hidden                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CharacterSelectCaptureBustUp_C::SetRender(bool Hidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.SetRender");
		
		ABP_CharacterSelectCaptureBustUp_C_SetRender_Params params {};
		params.Hidden = Hidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.BustUpInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharaCreateParameter                     CharaCreateParameter                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      CharacterShortId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterSelectCaptureBustUp_C::BustUpInitialize(const struct FSBCharaCreateParameter& CharaCreateParameter, const class FString& CharacterShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.BustUpInitialize");
		
		ABP_CharacterSelectCaptureBustUp_C_BustUpInitialize_Params params {};
		params.CharaCreateParameter = CharaCreateParameter;
		params.CharacterShortId = CharacterShortId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CharacterSelectCaptureBustUp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ReceiveBeginPlay");
		
		ABP_CharacterSelectCaptureBustUp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CharacterSelectCaptureBustUp_C::CustomEvent_2(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.CustomEvent_2");
		
		ABP_CharacterSelectCaptureBustUp_C_CustomEvent_2_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.DebugLocationCheckUpdeta
	 * 		Flags  -> ()
	 */
	void ABP_CharacterSelectCaptureBustUp_C::DebugLocationCheckUpdeta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.DebugLocationCheckUpdeta");
		
		ABP_CharacterSelectCaptureBustUp_C_DebugLocationCheckUpdeta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.SetFacial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FacialNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterSelectCaptureBustUp_C::SetFacial(int32_t FacialNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.SetFacial");
		
		ABP_CharacterSelectCaptureBustUp_C_SetFacial_Params params {};
		params.FacialNum = FacialNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterSelectCaptureBustUp_C::Update(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Update");
		
		ABP_CharacterSelectCaptureBustUp_C_Update_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ExecuteUbergraph_BP_CharacterSelectCaptureBustUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterSelectCaptureBustUp_C::ExecuteUbergraph_BP_CharacterSelectCaptureBustUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ExecuteUbergraph_BP_CharacterSelectCaptureBustUp");
		
		ABP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CharacterSelectCaptureBustUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CharacterSelectCaptureBustUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C");
		return ptr;
	}

}


