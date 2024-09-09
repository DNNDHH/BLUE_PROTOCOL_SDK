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
	 * 		Name   -> Function MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C.Construct
	 * 		Flags  -> ()
	 */
	void UMiniMapIconDxBattleGateBarrier_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C.Construct");
		
		UMiniMapIconDxBattleGateBarrier_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C.カスタムイベント_1
	 * 		Flags  -> ()
	 */
	void UMiniMapIconDxBattleGateBarrier_C::_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C.カスタムイベント_1");
		
		UMiniMapIconDxBattleGateBarrier_C__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C.ExecuteUbergraph_MiniMapIconDxBattleGateBarrier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIconDxBattleGateBarrier_C::ExecuteUbergraph_MiniMapIconDxBattleGateBarrier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C.ExecuteUbergraph_MiniMapIconDxBattleGateBarrier");
		
		UMiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMiniMapIconDxBattleGateBarrier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMiniMapIconDxBattleGateBarrier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C");
		return ptr;
	}

}


