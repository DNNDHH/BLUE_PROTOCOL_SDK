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
	 * Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.SetFontColorSize
	 */
	struct UStackBEnhanceImagineIconTypeName_C_SetFontColorSize_Params
	{
	public:
		struct FLinearColor                                        ImgColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateColor                                         TxtColor;                                                // 0x0010(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        IconColor;                                               // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FontSize;                                                // 0x0048(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.SetMasterData
	 */
	struct UStackBEnhanceImagineIconTypeName_C_SetMasterData_Params
	{
	public:
		struct FSBMasterImagine                                    SBMasterImagine;                                         // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.Construct
	 */
	struct UStackBEnhanceImagineIconTypeName_C_Construct_Params
	{	};

	/**
	 * Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.ExecuteUbergraph_StackBEnhanceImagineIconTypeName
	 */
	struct UStackBEnhanceImagineIconTypeName_C_ExecuteUbergraph_StackBEnhanceImagineIconTypeName_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
