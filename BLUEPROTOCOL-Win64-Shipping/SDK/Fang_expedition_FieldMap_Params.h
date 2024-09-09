#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.GetBGConfigData
	 */
	struct UFang_expedition_FieldMap_C_GetBGConfigData_Params
	{
	public:
		class FString                                              MapId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Find;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.Update
	 */
	struct UFang_expedition_FieldMap_C_Update_Params
	{
	public:
		class FString                                              MapId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Floor;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           SizeScale;                                               // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnCreateCloudTraverse
	 */
	struct UFang_expedition_FieldMap_C_OnCreateCloudTraverse_Params
	{
	public:
		class UCanvasPanel*                                        CloudCanvas;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Size;                                                    // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Texture;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnLoaded_BCD4E12747AB56897A61B2A7D808B801
	 */
	struct UFang_expedition_FieldMap_C_OnLoaded_BCD4E12747AB56897A61B2A7D808B801_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.SetMapImage
	 */
	struct UFang_expedition_FieldMap_C_SetMapImage_Params
	{
	public:
		class FString                                              MapId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.Destruct
	 */
	struct UFang_expedition_FieldMap_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.ExecuteUbergraph_Fang_expedition_FieldMap
	 */
	struct UFang_expedition_FieldMap_C_ExecuteUbergraph_Fang_expedition_FieldMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PM05[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_FieldMap.Fang_expedition_FieldMap_C.OnTextureLoadComplete__DelegateSignature
	 */
	struct UFang_expedition_FieldMap_C_OnTextureLoadComplete__DelegateSignature_Params
	{
	public:
		bool                                                       IsSuccesed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
