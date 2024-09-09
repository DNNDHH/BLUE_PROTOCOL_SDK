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
	 * 		Name   -> Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_IndoorLightSchedule_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.UserConstructionScript");
		
		ABP_IndoorLightSchedule_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_IndoorLightSchedule_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ReceiveBeginPlay");
		
		ABP_IndoorLightSchedule_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IndoorLightSchedule_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ReceiveTick");
		
		ABP_IndoorLightSchedule_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.PreviewTest
	 * 		Flags  -> ()
	 */
	void ABP_IndoorLightSchedule_C::PreviewTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.PreviewTest");
		
		ABP_IndoorLightSchedule_C_PreviewTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InitEditorPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Sw                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_IndoorLightSchedule_C::InitEditorPreview(bool Sw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InitEditorPreview");
		
		ABP_IndoorLightSchedule_C_InitEditorPreview_Params params {};
		params.Sw = Sw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InDoorTickIntervalSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBDebugMenuType                                   MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IndoorLightSchedule_C::InDoorTickIntervalSet(ESBDebugMenuType MenuType, const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InDoorTickIntervalSet");
		
		ABP_IndoorLightSchedule_C_InDoorTickIntervalSet_Params params {};
		params.MenuType = MenuType;
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InitTickInterval
	 * 		Flags  -> ()
	 */
	void ABP_IndoorLightSchedule_C::InitTickInterval()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InitTickInterval");
		
		ABP_IndoorLightSchedule_C_InitTickInterval_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ExecuteUbergraph_BP_IndoorLightSchedule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IndoorLightSchedule_C::ExecuteUbergraph_BP_IndoorLightSchedule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ExecuteUbergraph_BP_IndoorLightSchedule");
		
		ABP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_IndoorLightSchedule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_IndoorLightSchedule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_IndoorLightSchedule.BP_IndoorLightSchedule_C");
		return ptr;
	}

}


