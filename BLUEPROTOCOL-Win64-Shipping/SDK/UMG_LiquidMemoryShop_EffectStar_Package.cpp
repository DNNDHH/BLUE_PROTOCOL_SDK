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
	 * 		Name   -> Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.StopAnim
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryShop_EffectStar_C::StopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.StopAnim");
		
		UUMG_LiquidMemoryShop_EffectStar_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.PlayAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryShop_EffectStar_C::PlayAnim(int32_t CurNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.PlayAnim");
		
		UUMG_LiquidMemoryShop_EffectStar_C_PlayAnim_Params params {};
		params.CurNum = CurNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryShop_EffectStar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.Construct");
		
		UUMG_LiquidMemoryShop_EffectStar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryShop_EffectStar_C::ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar");
		
		UUMG_LiquidMemoryShop_EffectStar_C_ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemoryShop_EffectStar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemoryShop_EffectStar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C");
		return ptr;
	}

}


