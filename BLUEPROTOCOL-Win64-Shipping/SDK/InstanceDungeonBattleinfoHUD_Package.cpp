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
	 * 		Name   -> Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.SetRootVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInstanceDungeonBattleinfoHUD_C::SetRootVisibility(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.SetRootVisibility");
		
		UInstanceDungeonBattleinfoHUD_C_SetRootVisibility_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.UpdateDemoHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       InDemoPlay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class UDemoHUD_C*>                          InHUD                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UInstanceDungeonBattleinfoHUD_C::UpdateDemoHUD(TArray<bool>* InDemoPlay, TArray<class UDemoHUD_C*>* InHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.UpdateDemoHUD");
		
		UInstanceDungeonBattleinfoHUD_C_UpdateDemoHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDemoPlay != nullptr)
			*InDemoPlay = params.InDemoPlay;
		if (InHUD != nullptr)
			*InHUD = params.InHUD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.SetPlayerReadyVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHorizontalBox*                              InHorizonalBox                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMax                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReadyNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInstanceDungeonBattleinfoHUD_C::SetPlayerReadyVisibility(class UHorizontalBox* InHorizonalBox, int32_t InMax, int32_t InReadyNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.SetPlayerReadyVisibility");
		
		UInstanceDungeonBattleinfoHUD_C_SetPlayerReadyVisibility_Params params {};
		params.InHorizonalBox = InHorizonalBox;
		params.InMax = InMax;
		params.InReadyNum = InReadyNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UInstanceDungeonBattleinfoHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.Construct");
		
		UInstanceDungeonBattleinfoHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.ExecuteUbergraph_InstanceDungeonBattleinfoHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInstanceDungeonBattleinfoHUD_C::ExecuteUbergraph_InstanceDungeonBattleinfoHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C.ExecuteUbergraph_InstanceDungeonBattleinfoHUD");
		
		UInstanceDungeonBattleinfoHUD_C_ExecuteUbergraph_InstanceDungeonBattleinfoHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstanceDungeonBattleinfoHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstanceDungeonBattleinfoHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InstanceDungeonBattleinfoHUD.InstanceDungeonBattleinfoHUD_C");
		return ptr;
	}

}


