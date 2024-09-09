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
	 * 		Name   -> Function DebugList.DebugList_C.GetQuestStatusString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestStatus                                       InStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UDebugList_C::GetQuestStatusString(EQuestStatus InStatus, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.GetQuestStatusString");
		
		UDebugList_C_GetQuestStatusString_Params params {};
		params.InStatus = InStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugList.DebugList_C.MakePlayerLocationtList
	 * 		Flags  -> ()
	 */
	void UDebugList_C::MakePlayerLocationtList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.MakePlayerLocationtList");
		
		UDebugList_C_MakePlayerLocationtList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugList.DebugList_C.MakeAcceptedQuestList
	 * 		Flags  -> ()
	 */
	void UDebugList_C::MakeAcceptedQuestList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.MakeAcceptedQuestList");
		
		UDebugList_C_MakeAcceptedQuestList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugList.DebugList_C.SetInitialValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InitialValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDebugList_C::SetInitialValue(TArray<class FString>* InitialValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.SetInitialValue");
		
		UDebugList_C_SetInitialValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialValue != nullptr)
			*InitialValue = params.InitialValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugList.DebugList_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.Construct");
		
		UDebugList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugList.DebugList_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.Tick");
		
		UDebugList_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugList.DebugList_C.HandleOnExecutedConsoleCommand
	 * 		Flags  -> ()
	 */
	void UDebugList_C::HandleOnExecutedConsoleCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.HandleOnExecutedConsoleCommand");
		
		UDebugList_C_HandleOnExecutedConsoleCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugList.DebugList_C.BindDebugButtonOnClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDebugButton_C*                              DebugButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugList_C::BindDebugButtonOnClicked(class UDebugButton_C* DebugButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.BindDebugButtonOnClicked");
		
		UDebugList_C_BindDebugButtonOnClicked_Params params {};
		params.DebugButton = DebugButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugList.DebugList_C.EventDispatcher_OnClicked_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDebugButton_C*                              DebugButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugList_C::EventDispatcher_OnClicked__1(class UDebugButton_C* DebugButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.EventDispatcher_OnClicked_イベント_1");
		
		UDebugList_C_EventDispatcher_OnClicked__1_Params params {};
		params.DebugButton = DebugButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugList.DebugList_C.OnClicked_イベント_1
	 * 		Flags  -> ()
	 */
	void UDebugList_C::OnClicked__1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.OnClicked_イベント_1");
		
		UDebugList_C_OnClicked__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugList.DebugList_C.ExecuteUbergraph_DebugList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugList_C::ExecuteUbergraph_DebugList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugList.DebugList_C.ExecuteUbergraph_DebugList");
		
		UDebugList_C_ExecuteUbergraph_DebugList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugList.DebugList_C");
		return ptr;
	}

}


