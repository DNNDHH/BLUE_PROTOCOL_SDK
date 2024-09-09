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
	 * 		Name   -> Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.OnCreateCloudTraverse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanel*                                CloudCanvas                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Size                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UUserWidget* UMapWidget_TraverseCloud_C::OnCreateCloudTraverse(class UCanvasPanel* CloudCanvas, const class FName& Name, const struct FVector2D& Position, const struct FVector2D& Size, class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.OnCreateCloudTraverse");
		
		UMapWidget_TraverseCloud_C_OnCreateCloudTraverse_Params params {};
		params.CloudCanvas = CloudCanvas;
		params.Name = Name;
		params.Position = Position;
		params.Size = Size;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.OnCreateDungeonTraverse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanel*                                CloudCanvas                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Size                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UUserWidget* UMapWidget_TraverseCloud_C::OnCreateDungeonTraverse(class UCanvasPanel* CloudCanvas, const class FName& Name, const struct FVector2D& Position, const struct FVector2D& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.OnCreateDungeonTraverse");
		
		UMapWidget_TraverseCloud_C_OnCreateDungeonTraverse_Params params {};
		params.CloudCanvas = CloudCanvas;
		params.Name = Name;
		params.Position = Position;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.GetZOrder
	 * 		Flags  -> ()
	 */
	int32_t UMapWidget_TraverseCloud_C::GetZOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.GetZOrder");
		
		UMapWidget_TraverseCloud_C_GetZOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Floor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InMapSizeScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_TraverseCloud_C::Update(const class FString& InMapId, int32_t Floor, const struct FVector2D& InMapSizeScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.Update");
		
		UMapWidget_TraverseCloud_C_Update_Params params {};
		params.InMapId = InMapId;
		params.Floor = Floor;
		params.InMapSizeScale = InMapSizeScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.ExecuteUbergraph_MapWidget_TraverseCloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_TraverseCloud_C::ExecuteUbergraph_MapWidget_TraverseCloud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.ExecuteUbergraph_MapWidget_TraverseCloud");
		
		UMapWidget_TraverseCloud_C_ExecuteUbergraph_MapWidget_TraverseCloud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_TraverseCloud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_TraverseCloud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_TraverseCloud.MapWidget_TraverseCloud_C");
		return ptr;
	}

}


