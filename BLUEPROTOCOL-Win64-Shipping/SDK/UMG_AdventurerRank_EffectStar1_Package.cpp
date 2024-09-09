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
	 * 		Name   -> Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.PlayRandomAnim
	 * 		Flags  -> ()
	 */
	void UUMG_AdventurerRank_EffectStar1_C::PlayRandomAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.PlayRandomAnim");
		
		UUMG_AdventurerRank_EffectStar1_C_PlayRandomAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_AdventurerRank_EffectStar1_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.Construct");
		
		UUMG_AdventurerRank_EffectStar1_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.WidgetAnimationEvt_AnimIn0_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UUMG_AdventurerRank_EffectStar1_C::WidgetAnimationEvt_AnimIn0_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.WidgetAnimationEvt_AnimIn0_K2Node_WidgetAnimationEvent_1");
		
		UUMG_AdventurerRank_EffectStar1_C_WidgetAnimationEvt_AnimIn0_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.ExecuteUbergraph_UMG_AdventurerRank_EffectStar1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AdventurerRank_EffectStar1_C::ExecuteUbergraph_UMG_AdventurerRank_EffectStar1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C.ExecuteUbergraph_UMG_AdventurerRank_EffectStar1");
		
		UUMG_AdventurerRank_EffectStar1_C_ExecuteUbergraph_UMG_AdventurerRank_EffectStar1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_AdventurerRank_EffectStar1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_AdventurerRank_EffectStar1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AdventurerRank_EffectStar1.UMG_AdventurerRank_EffectStar1_C");
		return ptr;
	}

}


