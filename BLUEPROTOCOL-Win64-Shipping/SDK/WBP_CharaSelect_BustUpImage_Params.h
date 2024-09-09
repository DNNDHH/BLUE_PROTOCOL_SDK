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
	 * Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.SetTarget
	 */
	struct UWBP_CharaSelect_BustUpImage_C_SetTarget_Params
	{
	public:
		class ABP_CharacterSelectCaptureBustUp_C*                  CharacterSelectCaptureBustUp;                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.Update
	 */
	struct UWBP_CharaSelect_BustUpImage_C_Update_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.SetImage
	 */
	struct UWBP_CharaSelect_BustUpImage_C_SetImage_Params
	{	};

	/**
	 * Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.PlayFxAnim
	 */
	struct UWBP_CharaSelect_BustUpImage_C_PlayFxAnim_Params
	{	};

	/**
	 * Function WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C.ExecuteUbergraph_WBP_CharaSelect_BustUpImage
	 */
	struct UWBP_CharaSelect_BustUpImage_C_ExecuteUbergraph_WBP_CharaSelect_BustUpImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
