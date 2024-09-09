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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.UpdateDemoList
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::UpdateDemoList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.UpdateDemoList");
		
		UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_UpdateDemoList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.EnemyLogLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::EnemyLogLoaded(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.EnemyLogLoaded");
		
		UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_EnemyLogLoaded_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.OnLoadAchivementDelegate_event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSBAchievementInfo>                  AchievementList                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::OnLoadAchivementDelegate_event(bool Result, TArray<struct FSBAchievementInfo> AchievementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.OnLoadAchivementDelegate_event");
		
		UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchivementDelegate_event_Params params {};
		params.Result = Result;
		params.AchievementList = AchievementList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                DemoList                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::CustomEvent_1(bool Result, int32_t RetCode, TArray<class FName> DemoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.CustomEvent_1");
		
		UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_CustomEvent_1_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.DemoList = DemoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.OnLoadAchievementDataDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::OnLoadAchievementDataDelegate_Event(bool Result, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.OnLoadAchievementDataDelegate_Event");
		
		UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_OnLoadAchievementDataDelegate_Event_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.GetIdListCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBLibraryPictureBookType                          Type                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::GetIdListCallback(bool WasSuccessful, int32_t RetCode, ESBLibraryPictureBookType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.GetIdListCallback");
		
		UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_GetIdListCallback_Params params {};
		params.WasSuccessful = WasSuccessful;
		params.RetCode = RetCode;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad");
		
		UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C");
		return ptr;
	}

}


