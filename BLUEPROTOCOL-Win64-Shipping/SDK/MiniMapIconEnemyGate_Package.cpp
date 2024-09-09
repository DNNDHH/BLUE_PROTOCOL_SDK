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
	 * 		Name   -> Function MiniMapIconEnemyGate.MiniMapIconEnemyGate_C.Construct
	 * 		Flags  -> ()
	 */
	void UMiniMapIconEnemyGate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconEnemyGate.MiniMapIconEnemyGate_C.Construct");
		
		UMiniMapIconEnemyGate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconEnemyGate.MiniMapIconEnemyGate_C.カスタムイベント_1
	 * 		Flags  -> ()
	 */
	void UMiniMapIconEnemyGate_C::_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconEnemyGate.MiniMapIconEnemyGate_C.カスタムイベント_1");
		
		UMiniMapIconEnemyGate_C__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconEnemyGate.MiniMapIconEnemyGate_C.ExecuteUbergraph_MiniMapIconEnemyGate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIconEnemyGate_C::ExecuteUbergraph_MiniMapIconEnemyGate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconEnemyGate.MiniMapIconEnemyGate_C.ExecuteUbergraph_MiniMapIconEnemyGate");
		
		UMiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMiniMapIconEnemyGate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMiniMapIconEnemyGate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniMapIconEnemyGate.MiniMapIconEnemyGate_C");
		return ptr;
	}

}


