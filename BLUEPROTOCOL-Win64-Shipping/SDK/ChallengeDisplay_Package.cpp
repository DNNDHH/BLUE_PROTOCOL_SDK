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
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.Play Telop
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::PlayTelop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.Play Telop");
		
		UChallengeDisplay_C_PlayTelop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.GetTelopSubText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UChallengeDisplay_C::GetTelopSubText(class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.GetTelopSubText");
		
		UChallengeDisplay_C_GetTelopSubText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.UpdateTime
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::UpdateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.UpdateTime");
		
		UChallengeDisplay_C_UpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.CheckTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FalseIsNone                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChallengeDisplay_C::CheckTime(bool* FalseIsNone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.CheckTime");
		
		UChallengeDisplay_C_CheckTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FalseIsNone != nullptr)
			*FalseIsNone = params.FalseIsNone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.OnProcecssMessage
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::OnProcecssMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.OnProcecssMessage");
		
		UChallengeDisplay_C_OnProcecssMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.AnimInOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrueIsIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChallengeDisplay_C::AnimInOut(bool TrueIsIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.AnimInOut");
		
		UChallengeDisplay_C_AnimInOut_Params params {};
		params.TrueIsIn = TrueIsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.UpdateMissionInfo
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::UpdateMissionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.UpdateMissionInfo");
		
		UChallengeDisplay_C_UpdateMissionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.StartMission
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::StartMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.StartMission");
		
		UChallengeDisplay_C_StartMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.SetFail
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::SetFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.SetFail");
		
		UChallengeDisplay_C_SetFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.OnTimeOut
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::OnTimeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.OnTimeOut");
		
		UChallengeDisplay_C_OnTimeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.OnUpdateDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InMissionName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallengeDisplay_C::OnUpdateDelegate(const class FName& InMissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.OnUpdateDelegate");
		
		UChallengeDisplay_C_OnUpdateDelegate_Params params {};
		params.InMissionName = InMissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallengeDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.Tick");
		
		UChallengeDisplay_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.OnFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InMissionName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallengeDisplay_C::OnFailed(const class FName& InMissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.OnFailed");
		
		UChallengeDisplay_C_OnFailed_Params params {};
		params.InMissionName = InMissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.OnMissionSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InMissionName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallengeDisplay_C::OnMissionSet(const class FName& InMissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.OnMissionSet");
		
		UChallengeDisplay_C_OnMissionSet_Params params {};
		params.InMissionName = InMissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.Destruct
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.Destruct");
		
		UChallengeDisplay_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.Construct
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.Construct");
		
		UChallengeDisplay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.OnClear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InMissionName                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallengeDisplay_C::OnClear(const class FName& InMissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.OnClear");
		
		UChallengeDisplay_C_OnClear_Params params {};
		params.InMissionName = InMissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.Init
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.Init");
		
		UChallengeDisplay_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.Unbind
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.Unbind");
		
		UChallengeDisplay_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.Bind
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.Bind");
		
		UChallengeDisplay_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.ExecuteUbergraph_ChallengeDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallengeDisplay_C::ExecuteUbergraph_ChallengeDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.ExecuteUbergraph_ChallengeDisplay");
		
		UChallengeDisplay_C_ExecuteUbergraph_ChallengeDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.EventAnimeOutDisplay3__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::EventAnimeOutDisplay3__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.EventAnimeOutDisplay3__DelegateSignature");
		
		UChallengeDisplay_C_EventAnimeOutDisplay3__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChallengeDisplay.ChallengeDisplay_C.EventAnimeInDisplay3__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChallengeDisplay_C::EventAnimeInDisplay3__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeDisplay.ChallengeDisplay_C.EventAnimeInDisplay3__DelegateSignature");
		
		UChallengeDisplay_C_EventAnimeInDisplay3__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallengeDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChallengeDisplay.ChallengeDisplay_C");
		return ptr;
	}

}


