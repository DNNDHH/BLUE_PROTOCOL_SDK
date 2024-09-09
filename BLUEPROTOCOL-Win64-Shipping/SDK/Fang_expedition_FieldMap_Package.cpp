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
	 * 		Name   -> Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.GetBGConfigData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Find                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_FieldMap_C::GetBGConfigData(const class FString& MapId, bool* Find)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.GetBGConfigData");
		
		UFang_expedition_FieldMap_C_GetBGConfigData_Params params {};
		params.MapId = MapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Find != nullptr)
			*Find = params.Find;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Floor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   SizeScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_FieldMap_C::Update(const class FString& MapId, int32_t Floor, const struct FVector2D& SizeScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.Update");
		
		UFang_expedition_FieldMap_C_Update_Params params {};
		params.MapId = MapId;
		params.Floor = Floor;
		params.SizeScale = SizeScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnCreateCloudTraverse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanel*                                CloudCanvas                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Size                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UUserWidget* UFang_expedition_FieldMap_C::OnCreateCloudTraverse(class UCanvasPanel* CloudCanvas, const class FName& Name, const struct FVector2D& Position, const struct FVector2D& Size, class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnCreateCloudTraverse");
		
		UFang_expedition_FieldMap_C_OnCreateCloudTraverse_Params params {};
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
	 * 		Name   -> Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnLoaded_BCD4E12747AB56897A61B2A7D808B801
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_FieldMap_C::OnLoaded_BCD4E12747AB56897A61B2A7D808B801(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnLoaded_BCD4E12747AB56897A61B2A7D808B801");
		
		UFang_expedition_FieldMap_C_OnLoaded_BCD4E12747AB56897A61B2A7D808B801_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.SetMapImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_FieldMap_C::SetMapImage(const class FString& MapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.SetMapImage");
		
		UFang_expedition_FieldMap_C_SetMapImage_Params params {};
		params.MapId = MapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_FieldMap_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.Destruct");
		
		UFang_expedition_FieldMap_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.ExecuteUbergraph_Fang_expedition_FieldMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_FieldMap_C::ExecuteUbergraph_Fang_expedition_FieldMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.ExecuteUbergraph_Fang_expedition_FieldMap");
		
		UFang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnTextureLoadComplete__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSuccesed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_FieldMap_C::OnTextureLoadComplete__DelegateSignature(bool IsSuccesed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnTextureLoadComplete__DelegateSignature");
		
		UFang_expedition_FieldMap_C_OnTextureLoadComplete__DelegateSignature_Params params {};
		params.IsSuccesed = IsSuccesed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_FieldMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_FieldMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_FieldMap.Fang_expedition_FieldMap_C");
		return ptr;
	}

}


