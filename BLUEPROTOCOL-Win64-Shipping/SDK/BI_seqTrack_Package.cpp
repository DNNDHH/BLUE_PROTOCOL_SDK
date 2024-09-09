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
	 * 		Name   -> Function BI_seqTrack.BI_seqTrack_C.ANon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Test                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_seqTrack_C::ANon(int32_t Test)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_seqTrack.BI_seqTrack_C.ANon");
		
		UBI_seqTrack_C_ANon_Params params {};
		params.Test = Test;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_seqTrack.BI_seqTrack_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      NewParam1                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBI_seqTrack_C::GetText(int32_t NewParam, class FString* NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_seqTrack.BI_seqTrack_C.GetText");
		
		UBI_seqTrack_C_GetText_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam1 != nullptr)
			*NewParam1 = params.NewParam1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_seqTrack.BI_seqTrack_C.getSeqTrackInfoIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewParam1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_seqTrack_C::getSeqTrackInfoIndex(int32_t* NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_seqTrack.BI_seqTrack_C.getSeqTrackInfoIndex");
		
		UBI_seqTrack_C_getSeqTrackInfoIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam1 != nullptr)
			*NewParam1 = params.NewParam1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_seqTrack.BI_seqTrack_C.setSeqTrackInfoString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewParam1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_seqTrack_C::setSeqTrackInfoString(const class FString& NewParam, int32_t NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_seqTrack.BI_seqTrack_C.setSeqTrackInfoString");
		
		UBI_seqTrack_C_setSeqTrackInfoString_Params params {};
		params.NewParam = NewParam;
		params.NewParam1 = NewParam1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_seqTrack.BI_seqTrack_C.NSonEnd
	 * 		Flags  -> ()
	 */
	void UBI_seqTrack_C::NSonEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_seqTrack.BI_seqTrack_C.NSonEnd");
		
		UBI_seqTrack_C_NSonEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_seqTrack.BI_seqTrack_C.NSonBegin
	 * 		Flags  -> ()
	 */
	void UBI_seqTrack_C::NSonBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_seqTrack.BI_seqTrack_C.NSonBegin");
		
		UBI_seqTrack_C_NSonBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_seqTrack.BI_seqTrack_C.NSonTick
	 * 		Flags  -> ()
	 */
	void UBI_seqTrack_C::NSonTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_seqTrack.BI_seqTrack_C.NSonTick");
		
		UBI_seqTrack_C_NSonTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_seqTrack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_seqTrack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_seqTrack.BI_seqTrack_C");
		return ptr;
	}

}


