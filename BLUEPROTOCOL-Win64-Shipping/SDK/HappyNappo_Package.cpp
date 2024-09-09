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
	 * 		Name   -> Function HappyNappo.HappyNappo_C.GetDiscoverdCurrentMapCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              IDs                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSBHappyNappo>                       CurrenMapMasterData                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            DiscoverdCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHappyNappo_C::GetDiscoverdCurrentMapCount(TArray<class FString>* IDs, TArray<struct FSBHappyNappo>* CurrenMapMasterData, int32_t* DiscoverdCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.GetDiscoverdCurrentMapCount");
		
		UHappyNappo_C_GetDiscoverdCurrentMapCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IDs != nullptr)
			*IDs = params.IDs;
		if (CurrenMapMasterData != nullptr)
			*CurrenMapMasterData = params.CurrenMapMasterData;
		if (DiscoverdCount != nullptr)
			*DiscoverdCount = params.DiscoverdCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DiscoveredNappoId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              nappo_ids                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHappyNappo_C::Init(const class FString& DiscoveredNappoId, int32_t RetCode, TArray<class FString>* nappo_ids, bool IsNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.Init");
		
		UHappyNappo_C_Init_Params params {};
		params.DiscoveredNappoId = DiscoveredNappoId;
		params.RetCode = RetCode;
		params.IsNew = IsNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (nappo_ids != nullptr)
			*nappo_ids = params.nappo_ids;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.GetCurrentMapNappoMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBHappyNappo>                       CurrentMapMasterData                                       (Parm, OutParm)
	 */
	void UHappyNappo_C::GetCurrentMapNappoMaster(TArray<struct FSBHappyNappo>* CurrentMapMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.GetCurrentMapNappoMaster");
		
		UHappyNappo_C_GetCurrentMapNappoMaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentMapMasterData != nullptr)
			*CurrentMapMasterData = params.CurrentMapMasterData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.InteractHappyNappo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              NappoIds                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHappyNappo_C::InteractHappyNappo(int32_t RetCode, TArray<class FString> NappoIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.InteractHappyNappo");
		
		UHappyNappo_C_InteractHappyNappo_Params params {};
		params.RetCode = RetCode;
		params.NappoIds = NappoIds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.CloseAndCheckCompleteEvent
	 * 		Flags  -> ()
	 */
	void UHappyNappo_C::CloseAndCheckCompleteEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.CloseAndCheckCompleteEvent");
		
		UHappyNappo_C_CloseAndCheckCompleteEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.ShowComplete
	 * 		Flags  -> ()
	 */
	void UHappyNappo_C::ShowComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.ShowComplete");
		
		UHappyNappo_C_ShowComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.InOutAnimEnd
	 * 		Flags  -> ()
	 */
	void UHappyNappo_C::InOutAnimEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.InOutAnimEnd");
		
		UHappyNappo_C_InOutAnimEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.InteractAnimStart
	 * 		Flags  -> ()
	 */
	void UHappyNappo_C::InteractAnimStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.InteractAnimStart");
		
		UHappyNappo_C_InteractAnimStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.Construct
	 * 		Flags  -> ()
	 */
	void UHappyNappo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.Construct");
		
		UHappyNappo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.ReRequestSuccess
	 * 		Flags  -> ()
	 */
	void UHappyNappo_C::ReRequestSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.ReRequestSuccess");
		
		UHappyNappo_C_ReRequestSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.ExecuteUbergraph_HappyNappo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHappyNappo_C::ExecuteUbergraph_HappyNappo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.ExecuteUbergraph_HappyNappo");
		
		UHappyNappo_C_ExecuteUbergraph_HappyNappo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HappyNappo.HappyNappo_C.End__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHappyNappo_C::End__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HappyNappo.HappyNappo_C.End__DelegateSignature");
		
		UHappyNappo_C_End__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHappyNappo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHappyNappo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HappyNappo.HappyNappo_C");
		return ptr;
	}

}


