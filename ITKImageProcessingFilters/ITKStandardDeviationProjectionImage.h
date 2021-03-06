// File automatically generated

/*
 * Your License or Copyright can go here
 */

#pragma once

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winconsistent-missing-override"
#endif

#include "ITKImageProcessingBase.h"

#include "SIMPLib/Common/SIMPLibSetGetMacros.h"
#include "SIMPLib/SIMPLib.h"

// Auto includes
#include <SIMPLib/FilterParameters/DoubleFilterParameter.h>
#include <itkStandardDeviationProjectionImageFilter.h>

#include "ITKImageProcessing/ITKImageProcessingDLLExport.h"

/**
 * @brief The ITKStandardDeviationProjectionImage class. See [Filter documentation](@ref ITKStandardDeviationProjectionImage) for details.
 */
class ITKImageProcessing_EXPORT ITKStandardDeviationProjectionImage : public ITKImageProcessingBase
{
  Q_OBJECT
  PYB11_CREATE_BINDINGS(ITKStandardDeviationProjectionImage SUPERCLASS ITKImageProcessingBase)
  PYB11_PROPERTY(double ProjectionDimension READ getProjectionDimension WRITE setProjectionDimension)

public:
  SIMPL_SHARED_POINTERS(ITKStandardDeviationProjectionImage)
  SIMPL_FILTER_NEW_MACRO(ITKStandardDeviationProjectionImage)
  SIMPL_TYPE_MACRO_SUPER_OVERRIDE(ITKStandardDeviationProjectionImage, AbstractFilter)

  ~ITKStandardDeviationProjectionImage() override;

  SIMPL_FILTER_PARAMETER(double, ProjectionDimension)
  Q_PROPERTY(double ProjectionDimension READ getProjectionDimension WRITE setProjectionDimension)


  /**
   * @brief newFilterInstance Reimplemented from @see AbstractFilter class
   */
  AbstractFilter::Pointer newFilterInstance(bool copyFilterParameters) const override;

  /**
   * @brief getHumanLabel Reimplemented from @see AbstractFilter class
   */
  const QString getHumanLabel() const override;

  /**
   * @brief getSubGroupName Reimplemented from @see AbstractFilter class
   */
  const QString getSubGroupName() const override;

  /**
   * @brief getUuid Return the unique identifier for this filter.
   * @return A QUuid object.
   */
  const QUuid getUuid() override;

  /**
   * @brief setupFilterParameters Reimplemented from @see AbstractFilter class
   */
  void setupFilterParameters() override;

  /**
   * @brief readFilterParameters Reimplemented from @see AbstractFilter class
   */
  void readFilterParameters(AbstractFilterParametersReader* reader, int index) override;

protected:
  ITKStandardDeviationProjectionImage();

  /**
   * @brief dataCheckInternal overloads dataCheckInternal in ITKImageBase and calls templated dataCheck
   */
  void virtual dataCheckInternal() override;

  /**
   * @brief dataCheck Checks for the appropriate parameter values and availability of arrays
   */
  template <typename InputImageType, typename OutputImageType, unsigned int Dimension> void dataCheck();

  /**
  * @brief filterInternal overloads filterInternal in ITKImageBase and calls templated filter
  */
  void virtual filterInternal() override;

  /**
  * @brief Applies the filter
  */
  template <typename InputImageType, typename OutputImageType, unsigned int Dimension> void filter();

private:
  ITKStandardDeviationProjectionImage(const ITKStandardDeviationProjectionImage&) = delete;    // Copy Constructor Not Implemented
  ITKStandardDeviationProjectionImage(ITKStandardDeviationProjectionImage&&) = delete;         // Move Constructor Not Implemented
  ITKStandardDeviationProjectionImage& operator=(const ITKStandardDeviationProjectionImage&) = delete; // Copy Assignment Not Implemented
  ITKStandardDeviationProjectionImage& operator=(ITKStandardDeviationProjectionImage&&) = delete;      // Move Assignment Not Implemented
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

