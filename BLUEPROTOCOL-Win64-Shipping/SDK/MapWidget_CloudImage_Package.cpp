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
	 * 		Name   -> Function MapWidget_CloudImage.MapWidget_CloudImage_C.SetVisibleDebugText
	 * 		Flags  -> ()
	 */
	void UMapWidget_CloudImage_C::SetVisibleDebugText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CloudImage.MapWidget_CloudImage_C.SetVisibleDebugText");
		
		UMapWidget_CloudImage_C_SetVisibleDebugText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CloudImage.MapWidget_CloudImage_C.GetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CloudImage_C::GetName(class FName* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CloudImage.MapWidget_CloudImage_C.GetName");
		
		UMapWidget_CloudImage_C_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CloudImage.MapWidget_CloudImage_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CloudImage_C::SetName(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CloudImage.MapWidget_CloudImage_C.SetName");
		
		UMapWidget_CloudImage_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CloudImage.MapWidget_CloudImage_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchors                                    InAnchors                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CloudImage_C::Setup(const struct FAnchors& InAnchors, const struct FVector2D& InPosition, const struct FVector2D& InSize, class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CloudImage.MapWidget_CloudImage_C.Setup");
		
		UMapWidget_CloudImage_C_Setup_Params params {};
		params.InAnchors = InAnchors;
		params.InPosition = InPosition;
		params.InSize = InSize;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CloudImage.MapWidget_CloudImage_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_CloudImage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CloudImage.MapWidget_CloudImage_C.Construct");
		
		UMapWidget_CloudImage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CloudImage.MapWidget_CloudImage_C.ExecuteUbergraph_MapWidget_CloudImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CloudImage_C::ExecuteUbergraph_MapWidget_CloudImage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CloudImage.MapWidget_CloudImage_C.ExecuteUbergraph_MapWidget_CloudImage");
		
		UMapWidget_CloudImage_C_ExecuteUbergraph_MapWidget_CloudImage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_CloudImage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_CloudImage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_CloudImage.MapWidget_CloudImage_C");
		return ptr;
	}

}


