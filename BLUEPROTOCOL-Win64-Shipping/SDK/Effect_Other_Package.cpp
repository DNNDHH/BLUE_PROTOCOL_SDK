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
	 * 		Name   -> Function Effect_Other.Effect_Other_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEffect_Other_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Other.Effect_Other_C.PreConstruct");
		
		UEffect_Other_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Other.Effect_Other_C.ActiveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bValidTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDateTime                                   LimitTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Permanent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEffect_Other_C::ActiveData(const class FText& Category, const class FText& Name, const class FText& Value, bool bValidTime, const struct FDateTime& LimitTime, bool Permanent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Other.Effect_Other_C.ActiveData");
		
		UEffect_Other_C_ActiveData_Params params {};
		params.Category = Category;
		params.Name = Name;
		params.Value = Value;
		params.bValidTime = bValidTime;
		params.LimitTime = LimitTime;
		params.Permanent = Permanent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Other.Effect_Other_C.UpdateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   LimitTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UEffect_Other_C::UpdateTime(const struct FDateTime& LimitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Other.Effect_Other_C.UpdateTime");
		
		UEffect_Other_C_UpdateTime_Params params {};
		params.LimitTime = LimitTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Other.Effect_Other_C.ExecuteUbergraph_Effect_Other
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEffect_Other_C::ExecuteUbergraph_Effect_Other(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Other.Effect_Other_C.ExecuteUbergraph_Effect_Other");
		
		UEffect_Other_C_ExecuteUbergraph_Effect_Other_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEffect_Other_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffect_Other_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Effect_Other.Effect_Other_C");
		return ptr;
	}

}


