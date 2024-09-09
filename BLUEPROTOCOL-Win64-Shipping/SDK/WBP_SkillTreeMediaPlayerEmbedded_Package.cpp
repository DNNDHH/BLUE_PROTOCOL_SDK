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
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Request Play Media
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::RequestPlayMedia(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Request Play Media");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_RequestPlayMedia_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.OnLoaded_41AC99C64E613999FD6600A6E8657C13
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::OnLoaded_41AC99C64E613999FD6600A6E8657C13(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.OnLoaded_41AC99C64E613999FD6600A6E8657C13");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_OnLoaded_41AC99C64E613999FD6600A6E8657C13_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::CustomEvent_1(const class FString& OpenedUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.CustomEvent_1");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_CustomEvent_1_Params params {};
		params.OpenedUrl = OpenedUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Destruct");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.FinishFunction
	 * 		Flags  -> ()
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::FinishFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.FinishFunction");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_FinishFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.BindMediaEvent
	 * 		Flags  -> ()
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::BindMediaEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.BindMediaEvent");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_BindMediaEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Cancel
	 * 		Flags  -> ()
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Cancel");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.MovieLoadRequest
	 * 		Flags  -> ()
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::MovieLoadRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.MovieLoadRequest");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_MovieLoadRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Construct");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.TriPlay
	 * 		Flags  -> ()
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::TriPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.TriPlay");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_TriPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Unbind
	 * 		Flags  -> ()
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.Unbind");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.OnPlayStart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::OnPlayStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.OnPlayStart__DelegateSignature");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_OnPlayStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.OnFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillTreeMediaPlayerEmbedded_C::OnFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C.OnFinish__DelegateSignature");
		
		UWBP_SkillTreeMediaPlayerEmbedded_C_OnFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SkillTreeMediaPlayerEmbedded_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SkillTreeMediaPlayerEmbedded_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C");
		return ptr;
	}

}


