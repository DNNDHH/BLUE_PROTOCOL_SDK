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
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_OpenClose
	 * 		Flags  -> ()
	 */
	void USchedulerDateTimeHud_C::update_OpenClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_OpenClose");
		
		USchedulerDateTimeHud_C_update_OpenClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.IsShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USchedulerDateTimeHud_C::IsShow(bool* IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.IsShow");
		
		USchedulerDateTimeHud_C_IsShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsShow != nullptr)
			*IsShow = params.IsShow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_DateTime
	 * 		Flags  -> ()
	 */
	void USchedulerDateTimeHud_C::update_DateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_DateTime");
		
		USchedulerDateTimeHud_C_update_DateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_VirtualDateStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerVirtualDateTimeComponent*           InDateTimeComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USchedulerDateTimeHud_C::update_VirtualDateStart(class USBPlayerVirtualDateTimeComponent* InDateTimeComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_VirtualDateStart");
		
		USchedulerDateTimeHud_C_update_VirtualDateStart_Params params {};
		params.InDateTimeComp = InDateTimeComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_VirtualDate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerVirtualDateTimeComponent*           InDateTimeComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USchedulerDateTimeHud_C::update_VirtualDate(class USBPlayerVirtualDateTimeComponent* InDateTimeComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_VirtualDate");
		
		USchedulerDateTimeHud_C_update_VirtualDate_Params params {};
		params.InDateTimeComp = InDateTimeComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_NowDate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerVirtualDateTimeComponent*           InDateTimeComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USchedulerDateTimeHud_C::update_NowDate(class USBPlayerVirtualDateTimeComponent* InDateTimeComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_NowDate");
		
		USchedulerDateTimeHud_C_update_NowDate_Params params {};
		params.InDateTimeComp = InDateTimeComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Update
	 * 		Flags  -> ()
	 */
	void USchedulerDateTimeHud_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Update");
		
		USchedulerDateTimeHud_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Close
	 * 		Flags  -> ()
	 */
	void USchedulerDateTimeHud_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Close");
		
		USchedulerDateTimeHud_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Show
	 * 		Flags  -> ()
	 */
	void USchedulerDateTimeHud_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Show");
		
		USchedulerDateTimeHud_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Construct
	 * 		Flags  -> ()
	 */
	void USchedulerDateTimeHud_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Construct");
		
		USchedulerDateTimeHud_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.BindDebugValueChanged
	 * 		Flags  -> ()
	 */
	void USchedulerDateTimeHud_C::BindDebugValueChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.BindDebugValueChanged");
		
		USchedulerDateTimeHud_C_BindDebugValueChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.OnDebugValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBDebugMenuType                                   MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USchedulerDateTimeHud_C::OnDebugValueChanged(ESBDebugMenuType MenuType, const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.OnDebugValueChanged");
		
		USchedulerDateTimeHud_C_OnDebugValueChanged_Params params {};
		params.MenuType = MenuType;
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.TimerUpaateEvent
	 * 		Flags  -> ()
	 */
	void USchedulerDateTimeHud_C::TimerUpaateEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.TimerUpaateEvent");
		
		USchedulerDateTimeHud_C_TimerUpaateEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.UnbindDebugValueChanged
	 * 		Flags  -> ()
	 */
	void USchedulerDateTimeHud_C::UnbindDebugValueChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.UnbindDebugValueChanged");
		
		USchedulerDateTimeHud_C_UnbindDebugValueChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Destruct
	 * 		Flags  -> ()
	 */
	void USchedulerDateTimeHud_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Destruct");
		
		USchedulerDateTimeHud_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.ExecuteUbergraph_SchedulerDateTimeHud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USchedulerDateTimeHud_C::ExecuteUbergraph_SchedulerDateTimeHud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.ExecuteUbergraph_SchedulerDateTimeHud");
		
		USchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USchedulerDateTimeHud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USchedulerDateTimeHud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SchedulerDateTimeHud.SchedulerDateTimeHud_C");
		return ptr;
	}

}


