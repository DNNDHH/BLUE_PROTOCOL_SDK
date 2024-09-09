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
	 * 		Name   -> Function Effect_Ability.Effect_Ability_C.SetLineVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEffect_Ability_C::SetLineVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Ability.Effect_Ability_C.SetLineVisible");
		
		UEffect_Ability_C_SetLineVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Ability.Effect_Ability_C.SetSpecialMainNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEffect_Ability_C::SetSpecialMainNum(bool Visible, int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Ability.Effect_Ability_C.SetSpecialMainNum");
		
		UEffect_Ability_C_SetSpecialMainNum_Params params {};
		params.Visible = Visible;
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Ability.Effect_Ability_C.Get_Txt_EffectName_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UEffect_Ability_C::Get_Txt_EffectName_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Ability.Effect_Ability_C.Get_Txt_EffectName_ToolTipWidget_1");
		
		UEffect_Ability_C_Get_Txt_EffectName_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Ability.Effect_Ability_C.SetToolTipEType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InDesc                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEffect_Ability_C::SetToolTipEType(const class FText& InName, const class FText& InDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Ability.Effect_Ability_C.SetToolTipEType");
		
		UEffect_Ability_C_SetToolTipEType_Params params {};
		params.InName = InName;
		params.InDesc = InDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Ability.Effect_Ability_C.SetToolTipDType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InDesc1                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Desc2Active                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        InDesc2                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEffect_Ability_C::SetToolTipDType(const class FText& InName, const class FText& InDesc1, bool Desc2Active, const class FText& InDesc2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Ability.Effect_Ability_C.SetToolTipDType");
		
		UEffect_Ability_C_SetToolTipDType_Params params {};
		params.InName = InName;
		params.InDesc1 = InDesc1;
		params.Desc2Active = Desc2Active;
		params.InDesc2 = InDesc2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Ability.Effect_Ability_C.SetToolTipCType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InDesc                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEffect_Ability_C::SetToolTipCType(const class FText& InName, const class FText& Type, const class FText& InDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Ability.Effect_Ability_C.SetToolTipCType");
		
		UEffect_Ability_C_SetToolTipCType_Params params {};
		params.InName = InName;
		params.Type = Type;
		params.InDesc = InDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Ability.Effect_Ability_C.SetToolTipBType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InDesc                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEffect_Ability_C::SetToolTipBType(const class FText& InName, const class FText& InDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Ability.Effect_Ability_C.SetToolTipBType");
		
		UEffect_Ability_C_SetToolTipBType_Params params {};
		params.InName = InName;
		params.InDesc = InDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Ability.Effect_Ability_C.Construct
	 * 		Flags  -> ()
	 */
	void UEffect_Ability_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Ability.Effect_Ability_C.Construct");
		
		UEffect_Ability_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Ability.Effect_Ability_C.ExecuteUbergraph_Effect_Ability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEffect_Ability_C::ExecuteUbergraph_Effect_Ability(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Ability.Effect_Ability_C.ExecuteUbergraph_Effect_Ability");
		
		UEffect_Ability_C_ExecuteUbergraph_Effect_Ability_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEffect_Ability_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffect_Ability_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Effect_Ability.Effect_Ability_C");
		return ptr;
	}

}


