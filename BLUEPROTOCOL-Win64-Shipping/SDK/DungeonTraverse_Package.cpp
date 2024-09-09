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
	 * 		Name   -> Function DungeonTraverse.DungeonTraverse_C.SetVisibleDebugText
	 * 		Flags  -> ()
	 */
	void UDungeonTraverse_C::SetVisibleDebugText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonTraverse.DungeonTraverse_C.SetVisibleDebugText");
		
		UDungeonTraverse_C_SetVisibleDebugText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DungeonTraverse.DungeonTraverse_C.GetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDungeonTraverse_C::GetName(class FName* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonTraverse.DungeonTraverse_C.GetName");
		
		UDungeonTraverse_C_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DungeonTraverse.DungeonTraverse_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDungeonTraverse_C::SetName(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonTraverse.DungeonTraverse_C.SetName");
		
		UDungeonTraverse_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DungeonTraverse.DungeonTraverse_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchors                                    InAnchors                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDungeonTraverse_C::Setup(const struct FAnchors& InAnchors, const struct FVector2D& InPosition, const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonTraverse.DungeonTraverse_C.Setup");
		
		UDungeonTraverse_C_Setup_Params params {};
		params.InAnchors = InAnchors;
		params.InPosition = InPosition;
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DungeonTraverse.DungeonTraverse_C.Construct
	 * 		Flags  -> ()
	 */
	void UDungeonTraverse_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonTraverse.DungeonTraverse_C.Construct");
		
		UDungeonTraverse_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DungeonTraverse.DungeonTraverse_C.ExecuteUbergraph_DungeonTraverse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDungeonTraverse_C::ExecuteUbergraph_DungeonTraverse(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonTraverse.DungeonTraverse_C.ExecuteUbergraph_DungeonTraverse");
		
		UDungeonTraverse_C_ExecuteUbergraph_DungeonTraverse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDungeonTraverse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDungeonTraverse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DungeonTraverse.DungeonTraverse_C");
		return ptr;
	}

}


