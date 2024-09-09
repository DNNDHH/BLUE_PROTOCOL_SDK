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
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.CaptureVisible
	 * 		Flags  -> ()
	 */
	void ABP_CharacterSelectCaptureOne_C::CaptureVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.CaptureVisible");
		
		ABP_CharacterSelectCaptureOne_C_CaptureVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Is Load Now
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLoad                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CharacterSelectCaptureOne_C::IsLoadNow(bool* bLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Is Load Now");
		
		ABP_CharacterSelectCaptureOne_C_IsLoadNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLoad != nullptr)
			*bLoad = params.bLoad;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.GetNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MyNumber                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterSelectCaptureOne_C::GetNumber(int32_t* MyNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.GetNumber");
		
		ABP_CharacterSelectCaptureOne_C_GetNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MyNumber != nullptr)
			*MyNumber = params.MyNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharaCreateParameter                     CharaCreateParameter                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            PoseID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CharaIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterSelectCaptureOne_C::Initialize(const struct FSBCharaCreateParameter& CharaCreateParameter, int32_t Number, const class FString& CharacterId, int32_t PoseID, int32_t CharaIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Initialize");
		
		ABP_CharacterSelectCaptureOne_C_Initialize_Params params {};
		params.CharaCreateParameter = CharaCreateParameter;
		params.Number = Number;
		params.CharacterId = CharacterId;
		params.PoseID = PoseID;
		params.CharaIndex = CharaIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CharacterSelectCaptureOne_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.ReceiveBeginPlay");
		
		ABP_CharacterSelectCaptureOne_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CharacterSelectCaptureOne_C::CustomEvent_2(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.CustomEvent_2");
		
		ABP_CharacterSelectCaptureOne_C_CustomEvent_2_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.DebugLocationCheckUpdeta
	 * 		Flags  -> ()
	 */
	void ABP_CharacterSelectCaptureOne_C::DebugLocationCheckUpdeta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.DebugLocationCheckUpdeta");
		
		ABP_CharacterSelectCaptureOne_C_DebugLocationCheckUpdeta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.UpdetaCameraLocation
	 * 		Flags  -> ()
	 */
	void ABP_CharacterSelectCaptureOne_C::UpdetaCameraLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.UpdetaCameraLocation");
		
		ABP_CharacterSelectCaptureOne_C_UpdetaCameraLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SelectICharandex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterSelectCaptureOne_C::Update(float DeltaTime, int32_t SelectICharandex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Update");
		
		ABP_CharacterSelectCaptureOne_C_Update_Params params {};
		params.DeltaTime = DeltaTime;
		params.SelectICharandex = SelectICharandex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.GameStartPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectICharandex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterSelectCaptureOne_C::GameStartPlay(int32_t SelectICharandex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.GameStartPlay");
		
		ABP_CharacterSelectCaptureOne_C_GameStartPlay_Params params {};
		params.SelectICharandex = SelectICharandex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.DefaultPause
	 * 		Flags  -> ()
	 */
	void ABP_CharacterSelectCaptureOne_C::DefaultPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.DefaultPause");
		
		ABP_CharacterSelectCaptureOne_C_DefaultPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.ExecuteUbergraph_BP_CharacterSelectCaptureOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterSelectCaptureOne_C::ExecuteUbergraph_BP_CharacterSelectCaptureOne(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.ExecuteUbergraph_BP_CharacterSelectCaptureOne");
		
		ABP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CharacterSelectCaptureOne_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CharacterSelectCaptureOne_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C");
		return ptr;
	}

}


